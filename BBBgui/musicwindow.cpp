﻿#include "musicwindow.h"
#include "ui_musicwindow.h"
#include "clockscreensaver.h"
#include <QTimer>
#include "mainwindow.h"
#include "radiowindow.h"
#include <QProcess>
#include <QString>

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
    mwTimer = new QTimer(this);
    mwTimer->setSingleShot(true);                                                        // Egyszeri lefutású timer
    connect(mwTimer, SIGNAL(timeout()), this, SLOT(mwTimerOver()));                      // Az ssTimer timeout-jánál a timerOver() függvény lesz meghívva
    mwTimer->start(8000);                                                                // Timer elindítása
}

MusicWindow::~MusicWindow()
{
    delete ui;
}

void MusicWindow::on_backButton_clicked()
{
    mwTimer->stop();
    delete mwTimer;
    MainWindow *w = new (MainWindow);
    w->show();
    this->close();
}

void MusicWindow::mwTimerOver()
{
    // Lejárt az időzítő, bejön a képernyővédő
    mwTimer->stop();
    delete mwTimer;
    ClockScreenSaver *ssw = new( ClockScreenSaver );
    ssw->callingWindow = callingMusic;                   // Eltárolásra kerül, hogy melyik ablakból lett meghívva a képernyővédő
    ssw->show();
    this->close();
}

void MusicWindow::on_radioButton_clicked()
{
    RadioWindow *radioWindow = new( RadioWindow );              // Az új ablak létrehozása

    QProcess process;                                           // Process létrehozása
    QString scriptfile = "/root/python_test/RadioDriver.py";    // Elindítandó script helyének megadása a program helyéhez relatívan
    QString pythonCommand = "python " + scriptfile;
    QString turnOnRadio = "/root/python_test/turnon.sh";

    process.start( turnOnRadio );                               // Rádió bekapcsolása
    process.waitForFinished();                                  // Várakozás, amíg lefut a process
    process.close();                                            // Process bezárása
    process.start( pythonCommand );                             // Rádió konfigurálása
    process.waitForFinished();                                  // Várakozás, amíg lefut a process
    process.close();                                            // Process bezárása

    radioWindow->show();                                        // Az új ablak aktiválása
    this->close();                                              // A MusicWindow bezárása
}
