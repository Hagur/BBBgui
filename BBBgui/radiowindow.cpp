#include "radiowindow.h"
#include "ui_radiowindow.h"
#include "musicwindow.h"
#include "guidefines.h"
#include <QProcess>
#include <QString>
#include <QFile>
#include <QTextStream>

RadioWindow::RadioWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->backButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Kilépés gomb háttérszíne
    ui->changeButton->setStyleSheet("background-color:rgb(0,194,251);");                // Csatorna váltás gomb háttérszíne
    ui->volumeUpButton->setStyleSheet("background-color:rgb(0,194,251);");              // Hangerő+ gomb háttérszíne
    ui->volumeDownButton->setStyleSheet("background-color:rgb(0,194,251);");            // Hangerő- gomb háttérszíne
#warning Kell egy timer, hogy mennyi ideig mutassa a hangerőt állítás után
}

RadioWindow::~RadioWindow()
{
    delete ui;
}

void RadioWindow::ControlVolume()
{
    QProcess process;                                       // Process létrehozása
    QString scriptfile = "/root/python_test/VolumeCtrl.py";   // Elindítandó script helyének megadása
    QString pythonCommand = "python "
            + scriptfile
            + " "
            + RadioVolume;                                  // Parancs előállítása
    process.start( pythonCommand );                         // Process futtatása
    process.waitForFinished();                              // Várakozás a process befejezésére
    process.close();                                        // Process bezárása
}

int RadioWindow::SeekChannel()
{
    int RadioChannel = 1000;
    QProcess process;                                           // Process létrehozása
    QString scriptfile = "/root/python_test/SeekChannel.py";    // Elindítandó script helyének megadása
    QString pythonCommand = "python " + scriptfile;             // Parancs előállítása
    process.start( pythonCommand );                             // Process futtatása
    process.waitForFinished();                                  // Várakozás a process befejezésére
    process.close();                                            // Process bezárása
    QFile file("/root/python_test/setting");                    // Csatorna beolvasása a setting-ből
    QTextStream in(&file);
    QString line = in.readLine();
    RadioChannel = line.split(" ")[0].toInt();                  // Csatorna átkonvertálása int-re
    return RadioChannel;                                                  // Visszatérés az új csatornával
}

void RadioWindow::on_volumeUpButton_clicked()
{
    if(( RadioVolume < 16 ) && ( RadioVolume >= 0 ))        // Ha nem max a hangerő, akkor annak növelése
    {
        RadioVolume++;                                      // Hangerő növelése 1-gyel
        RadioWindow::ControlVolume();                       // A beállítást elvégző függvény
    }
    this->ui->channelNumber->display( RadioVolume );        // Az új hangerő kiíratása
}

void RadioWindow::on_volumeDownButton_clicked()
{
    if(( RadioVolume <= 16 ) && ( RadioVolume > 0 ))        // Ha nem min a hangerő, akkor annak csökkentése
    {
        RadioVolume--;                                      // Hangerő csökkentése 1-gyel
        RadioWindow::ControlVolume();                       // A beállítást elvégző függvény
    }
    this->ui->channelNumber->display( RadioVolume );        // Az új hangerő kiíratása
}

void RadioWindow::on_backButton_clicked()
{
    MusicWindow *w = new (MusicWindow);                     // Ablak példányosítása
    w->show();                                              // Ablak megjelenítése
    this->close();                                          // Rádióablak bezárása
}

void RadioWindow::on_changeButton_clicked()
{
    int NewChannel = 0;
    NewChannel = RadioWindow::SeekChannel();
    if(( NewChannel > 860) && ( NewChannel < 1090 ))
    {
#warning Kiiratásnál .-ot kell majd belerakni
        this->ui->channelNumber->display( NewChannel );        // Az új csatorna kiíratása
    }
}
