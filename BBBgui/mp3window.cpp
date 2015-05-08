#include "mp3window.h"
#include "musicwindow.h"
#include "ui_mp3window.h"
#include <QDir>

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
    QStringList typeFilter("*.mp3");
    QDir directory("/root/mp3player");
    mp3Files = directory.entryList(typeFilter);
    musicIndex = 0;
    musicElements = mp3Files.count();
    ui->infoEdit->setText( mp3Files[musicIndex] );
}

mp3window::~mp3window()
{
    delete ui;
}

///////////////////////////////////////////////////////////////////
/// Hangerő növelése
///////////////////////////////////////////////////////////////////
void mp3window::on_volumeUpButton_clicked()
{

}

///////////////////////////////////////////////////////////////////
/// Hangerő csökkentése
///////////////////////////////////////////////////////////////////
void mp3window::on_volumeDownButton_clicked()
{

}

///////////////////////////////////////////////////////////////////
/// Ablak bezárása
///////////////////////////////////////////////////////////////////
void mp3window::on_exitButton_clicked()
{
    // Itt kell majd egy q betűt kell küldeni a programnak a leálláshoz
    // delete volTimer;                                        // Az időzítő törlése
    MusicWindow *w = new MusicWindow(ssEnabler);            // Ablak példányosítása
    this->close();                                          // MP3 ablak bezárása
    w->show();                                              // Ablak megjelenítése
}

///////////////////////////////////////////////////////////////////
/// Következő szám kiválasztása
///////////////////////////////////////////////////////////////////
void mp3window::on_prevButton_clicked()
{
    if( musicIndex > 0 )
    {
        // Nagyobb az index, mint nulla, csökkentjük eggyel
        musicIndex--;
    }
    else
    {
        // 0 volt az index, beállítás a legutolsó elemre
        musicIndex = musicElements - 1;
    }
    ui->infoEdit->setText( mp3Files[musicIndex] );
}

///////////////////////////////////////////////////////////////////
/// Lejátszás elindítása, megállítása
///////////////////////////////////////////////////////////////////
void mp3window::on_playButton_clicked()
{

}

///////////////////////////////////////////////////////////////////
/// Előző szám kiválasztása
///////////////////////////////////////////////////////////////////
void mp3window::on_nextButton_clicked()
{
    musicIndex++;
    if( musicIndex >= musicElements )
    {
        // A lista végére értünk, az index a 0-s elemre kerül
        musicIndex = 0;
    }
    ui->infoEdit->setText( mp3Files[musicIndex] );
}
