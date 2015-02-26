#include "clockscreensaver.h"
#include "ui_clockscreensaver.h"
#include <ctime>
#include <QBrush>
#include "mainwindow.h"
#include <QTimer>
#include "musicwindow.h"
#include "guidefines.h"

ClockScreenSaver::ClockScreenSaver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClockScreenSaver)
{
    QString temp="";
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->setupUi(this);
    ui->timeNumber->setStyleSheet("color:rgb(255,0,0)");
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    int hour = now->tm_hour;
    int minute = now->tm_min;
    temp.sprintf( "%d:%d%d", hour, (minute/10), (minute%10) ); // A percnél mindig 2 digiten jelzem az időt
    ui->timeNumber->display(temp);
    ui->backButton->setStyleSheet("background:transparent");
}

ClockScreenSaver::~ClockScreenSaver()
{
    delete ui;
}

void ClockScreenSaver::on_backButton_clicked()
{
    if( this->callingWindow == callingMusic )
    {
        MusicWindow *mw = new (MusicWindow);
        mw->show();
    }
    else
    {
        MainWindow *w = new (MainWindow);
        w->show();
    }
    this->close();
}
