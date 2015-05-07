#include "mp3window.h"
#include "ui_mp3window.h"

mp3window::mp3window(bool ssEnabled, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mp3window)
{
    ssEnabler = ssEnabled;
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:white");                                            // Ablak hátttérszíne
    ui->exitButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Kilépés gomb háttérszíne
    ui->prevButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Előző szám gomb háttérszíne
    ui->nextButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Következő szám gomb háttérszíne
    ui->playButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Lejátszás gomb háttérszíne
    ui->volumeUpButton->setStyleSheet("background-color:rgb(0,194,251);");              // Hangerő+ gomb háttérszíne
    ui->volumeDownButton->setStyleSheet("background-color:rgb(0,194,251);");            // Hangerő- gomb háttérszíne
}

mp3window::~mp3window()
{
    delete ui;
}

void mp3window::on_volumeUpButton_clicked()
{

}

void mp3window::on_volumeDownButton_clicked()
{

}

void mp3window::on_exitButton_clicked()
{

}

void mp3window::on_prevButton_clicked()
{

}

void mp3window::on_playButton_clicked()
{

}

void mp3window::on_nextButton_clicked()
{

}
