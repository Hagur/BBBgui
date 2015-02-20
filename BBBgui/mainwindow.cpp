#include "mainwindow.h"
#include "radarwindow.h"
#include "musicwindow.h"
#include "ui_mainwindow.h"
#include "information.h"
#include "options.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->musicButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Zene gomb háttérszíne
    ui->optionsButton->setStyleSheet("background-color:rgb(251,0,0)");                  // Beállítások gomb háttérszíne
    ui->dataButton->setText( QString::fromUtf8("JÁRMŰ \n INFORMÁCIÓK"));                // Adat gomb szövege
    ui->dataButton->setStyleSheet("background-color:rgb(238,251,0)");                   // Adat gomb háttérszíne
    ui->radarButton->setStyleSheet("background-color:rgb(0,251,56)");                   // Radar gomb háttérszíne
    /*gp->exportPin(pin);
    gp->setDirection(pin, GPIO::OUTPUT);*/
}

MainWindow::~MainWindow()
{
    gp->GPIOManager::~GPIOManager();
    delete ui;
}

void MainWindow::on_musicButton_clicked()
{
    MusicWindow *mw = new(MusicWindow);
    mw->show();
}

void MainWindow::on_optionsButton_clicked()
{
    //gp->setValue(pin, GPIO::HIGH);                // A kijelölt pin-t 1-esbe állítja
    Options *ow = new( Options );
    ow->show();                                     // Options ablak elindítása
}

void MainWindow::on_radarButton_clicked()
{
    RadarWindow *rw = new( RadarWindow );
    rw->show();
}

void MainWindow::on_dataButton_clicked()
{
    //gp->setValue(pin, GPIO::LOW);                   // A kijelölt pin-t 0-ba állítja
    Information *iw = new( Information );
    iw->show();
}
