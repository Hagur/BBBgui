#include "musicwindow.h"
#include "ui_musicwindow.h"

MusicWindow::MusicWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->backButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Vissza gomb háttérszíne
    ui->mp3Button->setStyleSheet("background-color:rgb(0,194,251);");                   // MP3 gomb háttérszíne
    ui->radioButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Rádió gomb háttérszíne
}

MusicWindow::~MusicWindow()
{
    delete ui;
}

void MusicWindow::on_backButton_clicked()
{
    this->close();
}
