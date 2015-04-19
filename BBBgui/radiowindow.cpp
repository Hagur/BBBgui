#include "radiowindow.h"
#include "ui_radiowindow.h"
#include "musicwindow.h"
#include "guidefines.h"
#include <QProcess>
#include <QString>

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

}

RadioWindow::~RadioWindow()
{
    delete ui;
}

void RadioWindow::IncreaseVolume()
{
    QProcess process;                                       // Process létrehozása
    QString scriptfile = "/root/python_test/VolumeUp.py";   // Elindítandó script helyének megadása
    QString pythonCommand = "python " + scriptfile;         // Parancs előállítása
    process.start( pythonCommand );                         // Process futtatása
    process.close();                                        // Process bezárása
    RadioVolume++;
}

void RadioWindow::DecreaseVolume()
{
    QProcess process;                                       // Process létrehozása
    QString scriptfile = "/root/python_test/VolumeDown.py"; // Elindítandó script helyének megadása
    QString pythonCommand = "python " + scriptfile;         // Parancs előállítása
    process.start( pythonCommand );                         // Process futtatása
    process.close();                                        // Process bezárása
    RadioVolume--;
}

int RadioWindow::SeekChannel()
{
    QProcess process;                                           // Process létrehozása
    QString scriptfile = "/root/python_test/SeekChannel.py";    // Elindítandó script helyének megadása
    QString pythonCommand = "python " + scriptfile;             // Parancs előállítása
    process.start( pythonCommand );                             // Process futtatása
    process.close();                                            // Process bezárása
#warning VISSZATÉRÉSI ÉRTÉK KITALÁLÁSA
    return -1;                                                      // Visszatérés az új csatornával
}

void RadioWindow::on_volumeUpButton_clicked()
{
    if(( RadioVolume < 16 ) && ( RadioVolume >= 0 ))        // Ha nem max a hangerő, akkor annak növelése
    {
        RadioWindow::IncreaseVolume();                       // A növelést elvégző függvény
    }
    this->ui->channelNumber->display( RadioVolume );        // Az új hangerő kiíratása
}

void RadioWindow::on_volumeDownButton_clicked()
{
    if(( RadioVolume <= 16 ) && ( RadioVolume > 0 ))        // Ha nem min a hangerő, akkor annak csökkentése
    {
        RadioWindow::DecreaseVolume();                      // A csökkentést elvégző függvény
    }
    this->ui->channelNumber->display( RadioVolume );        // Az új hangerő kiíratása
}

void RadioWindow::on_backButton_clicked()
{
    MusicWindow *w = new (MusicWindow);
    w->show();
    this->close();
}

void RadioWindow::on_changeButton_clicked()
{
    int NewChannel = 0;
    NewChannel = RadioWindow::SeekChannel();
    this->ui->channelNumber->display( NewChannel );        // Az új csatorna kiíratása
}
