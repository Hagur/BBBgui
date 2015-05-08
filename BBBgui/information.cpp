#include "information.h"
#include "ui_information.h"
#include "time.h"
#include <ctime>
#include "mainwindow.h"

Information::Information(bool ssEnabled, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ssEnabler = ssEnabled;
    QString temp="";
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:rgb(255,255,60)");                                  // Ablak hátttérszíne
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    int year = now->tm_year + 1900;
    int month = now->tm_mon + 1;
    int day = now->tm_mday;
    int hour = now->tm_hour;
    int minute = now->tm_min;
    temp.sprintf("%d.%d.%d %d:%d",year,month,day,hour,minute);
}

Information::~Information()
{
    delete ui;
}

void Information::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow(ssEnabler);
    this->close();
    w->show();
}
