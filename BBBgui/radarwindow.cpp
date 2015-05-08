#include "radarwindow.h"
#include "ui_radarwindow.h"
#include <QPainter>
#include <QRectF>
#include "mainwindow.h"

RadarWindow::RadarWindow(bool ssEnabled, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadarWindow)
{
    ssEnabler = ssEnabled;
    ui->setupUi(this);
    QPixmap radar("/home/debian/car.png");
    ui->picLabel->setPixmap(radar);

    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color: white");                                           // Ablak hátttérszíne
    ui->backButton->setStyleSheet("background-color:rgb(0,251,56)");                    // Vissza gomb háttérszíne
}

RadarWindow::~RadarWindow()
{
    delete ui;
}

void RadarWindow::on_backButton_clicked()
{
    MainWindow *w = new MainWindow(ssEnabler);
    this->close();
    w->show();
}
