#include "mainwindow.h"
#include "radarwindow.h"
#include "musicwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->musicButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Zene gomb háttérszíne
    ui->exitButton->setStyleSheet("background-color:rgb(251,0,0)");                     // Kilépés gomb háttérszíne
    ui->dataButton->setText( QString::fromUtf8("JÁRMŰ \n INFORMÁCIÓK"));                // Adat gomb szövege
    ui->dataButton->setStyleSheet("background-color:rgb(238,251,0)");                   // Adat gomb háttérszíne
    ui->radarButton->setStyleSheet("background-color:rgb(0,251,56)");                   // Radar gomb háttérszíne
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_musicButton_clicked()
{
    MusicWindow *mw = new(MusicWindow);
    mw->show();
}

void MainWindow::on_exitButton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_radarButton_clicked()
{
    RadarWindow *rw = new( RadarWindow );
    rw->show();
}
