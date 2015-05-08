#include "options.h"
#include "ui_options.h"
#include "guidefines.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <poll.h>
#include <fstream>
#include "mainwindow.h"
#include <QCheckBox>
#include "guidefines.h"

Options::Options(bool ssEnabled, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Options)
{
    ssEnabler = ssEnabled;
    QString temp = "";
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:white");                                            // Ablak hátttérszíneú
    Options::getBrightness();
    temp.sprintf("%d%", brightnessValue);
    ui->brightnessLine->setText(temp);
    ui->ssBox->addItem("On");
    ui->ssBox->addItem("Off");
    if( ssEnabled == true )
    {
        ui->ssBox->setCurrentIndex(0);
    }
    else
    {
        ui->ssBox->setCurrentIndex(1);
    }
}

Options::~Options()
{
    delete ui;
}


int Options::on_increaseButton_clicked()
{
    QString temp = "";
    char path[50];
    snprintf(path, sizeof(path), BRIGHTNESS_DIR "/brightness");

    std::ofstream stream(path);
    if (stream < 0) {
      fprintf(stderr, "OPERATION FAILED: Unable to set backlight brightness.");
      return -1;
    }
    if(( brightnessValue >= 0 ) && ( brightnessValue < 100))
    {
        brightnessValue += 10;          // 10-es kvantumokban lehet változtatni
        stream << brightnessValue;      // Az új érték kiírása a fájlba
        temp.sprintf("%d%", brightnessValue);   // Az új érték betöltése egy stringbe, ami később kiírásra kerül
        ui->brightnessLine->setText(temp);      // Az új string kiírása a kijelzőre
    }
    else
    {
        fprintf(stderr, "Invalid brightness value.");
        return -1;
    }
    stream.close();

    return 0;
}

int Options::on_decreaseButton_clicked()
{
    QString temp = "";
    char path[50];
    snprintf(path, sizeof(path), BRIGHTNESS_DIR "/brightness");

    std::ofstream stream(path);
    if (stream < 0)
    {
      fprintf(stderr, "OPERATION FAILED: Unable to set backlight brightness.");
      return -1;
    }
    if(( brightnessValue > 10 ) && ( brightnessValue <= 100))
    {
        // Érték ellenőrzés, ezeken túl nem változhat a fényerő értéke
        brightnessValue -= 10;          // 10-es kvantumokban lehet változtatni
        stream << brightnessValue;      // Az új érték kiírása a fájlba
        temp.sprintf("%d%", brightnessValue);   // Az új érték betöltése egy stringbe, ami később kiírásra kerül
        ui->brightnessLine->setText(temp);      // Az új string kiírása a kijelzőre
    }
    else
    {
        fprintf(stderr, "Invalid brightness value.");
        return -1;
    }
    stream.close();

    return 0;
}

void Options::on_backButton_clicked()
{
    if( ui->ssBox->currentText() == "On" )
    {
        ssEnabler = true;
    }
    else
    {
        ssEnabler = false;
    }
    MainWindow *w = new MainWindow(ssEnabler);
    this->close();
    w->show();
}

int Options::getBrightness()
{
    char path[50];
    snprintf(path, sizeof(path), BRIGHTNESS_DIR "/brightness");

    std::ifstream stream(path);
    if (stream < 0)
    {
      fprintf(stderr, "OPERATION FAILED: Unable to get backlight brightness.");
      return -1;
    }

    stream >> this->brightnessValue;

    stream.close();
    return 0;
}


