#include "information.h"
#include "ui_information.h"

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:rgb(255,255,60)");                                            // Ablak hátttérszíne

}

Information::~Information()
{
    delete ui;
}

void Information::on_pushButton_clicked()
{
    this->close();
}
