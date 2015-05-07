#include "radiowindow.h"
#include "ui_radiowindow.h"
#include "musicwindow.h"
#include "guidefines.h"
#include <QProcess>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QTimer>

RadioWindow::RadioWindow(bool ssEnabled, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioWindow)
{
    ssEnabler = ssEnabled;
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:white");                                            // Ablak hátttérszíne
    ui->backButton->setStyleSheet("background-color:rgb(0,194,251);");                  // Kilépés gomb háttérszíne
    ui->changeButton->setStyleSheet("background-color:rgb(0,194,251);");                // Csatorna váltás gomb háttérszíne
    ui->volumeUpButton->setStyleSheet("background-color:rgb(0,194,251);");              // Hangerő+ gomb háttérszíne
    ui->volumeDownButton->setStyleSheet("background-color:rgb(0,194,251);");            // Hangerő- gomb háttérszíne
    volTimer = new QTimer(this);
    volTimer->setSingleShot(true);                                                      // Egyszeri lefutású timer
    connect(volTimer, SIGNAL(timeout()), this, SLOT(volTimerOver()));                   // A volTimer timeout-jánál a timerOver() függvény lesz meghívva
    // Indulási frekvencia kiírása
    QString temp = "";
    int NewChannel = 0;
    int Remain = 0;
    NewChannel = RadioWindow::GetChannel();
    this->ui->radioEdit->setAlignment(Qt::AlignCenter);
    if(( NewChannel > 860) && ( NewChannel < 1090 ))
    {
        Remain = NewChannel % 10;
        NewChannel /= 10;
        temp.sprintf("%d.%d MHz", NewChannel, Remain);      // Kiírandó szöveg betöltése a temp változóba
        this->ui->radioEdit->setText(temp);                 // Szöveg kiírása a kijelzőre
    }
}

RadioWindow::~RadioWindow()
{
    delete ui;
}

// Hangerő szabályozása
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

// Új csatorna keresése
void RadioWindow::SeekChannel()
{
    QProcess process;                                           // Process létrehozása
    QString scriptfile = "/root/python_test/SeekChannel.py";    // Elindítandó script helyének megadása
    QString pythonCommand = "python " + scriptfile;             // Parancs előállítása
    process.start( pythonCommand );                             // Process futtatása
    process.waitForFinished();                                  // Várakozás a process befejezésére
    process.close();                                            // Process bezárása
}

// Aktuális csatorna lekérdezése
int RadioWindow::GetChannel()
{
    QFile file("/root/python_test/settings.txt");               // Csatorna beolvasása a setting-ből
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    QString line = in.readLine();
    RadioChannel = line.split(" ")[0].toInt();                  // Csatorna átkonvertálása int-re
    return RadioChannel;                                        // Visszatérés az új csatornával
}

void RadioWindow::on_volumeUpButton_clicked()
{
    QString temp = "";
    if(( RadioVolume < 16 ) && ( RadioVolume >= 0 ))        // Ha nem max a hangerő, akkor annak növelése
    {
        RadioVolume++;                                      // Hangerő növelése 1-gyel
        RadioWindow::ControlVolume();                       // A beállítást elvégző függvény
    }
    temp.sprintf("VOL: %d", RadioVolume);                  // Kiírandó szöveg betöltése a temp változóba
    this->ui->radioEdit->setText(temp);                     // Szöveg kiírása a kijelzőre
    volTimer->start( VOL_TIMER );                           // Timer elindítása, 1500ms
}

void RadioWindow::on_volumeDownButton_clicked()
{
    QString temp = "";
    if(( RadioVolume <= 16 ) && ( RadioVolume > 0 ))        // Ha nem min a hangerő, akkor annak csökkentése
    {
        RadioVolume--;                                      // Hangerő csökkentése 1-gyel
        RadioWindow::ControlVolume();                       // A beállítást elvégző függvény
    }
    temp.sprintf("VOL: %d", RadioVolume);                  // Kiírandó szöveg betöltése a temp változóba
    this->ui->radioEdit->setText(temp);                     // Szöveg kiírása a kijelzőre
    volTimer->start( VOL_TIMER );                           // Timer elindítása, 1500ms
}

void RadioWindow::on_backButton_clicked()
{
    QProcess process;                                       // Process létrehozása
    QString turnOffRadio = "/root/python_test/turnoff.sh";
    process.start( turnOffRadio );                          // Rádió kikapcsolása
    process.waitForFinished();                              // Várakozás, amíg lefut a process
    process.close();                                        // Process bezárása
    delete volTimer;                                        // Az időzítő törlése
    MusicWindow *w = new MusicWindow(ssEnabler);                     // Ablak példányosítása
    w->show();                                              // Ablak megjelenítése
    this->close();                                          // Rádióablak bezárása
}

void RadioWindow::on_changeButton_clicked()
{
    QString temp = "";
    int NewChannel = 0;
    int Remain = 0;
    RadioWindow::SeekChannel();
    NewChannel = RadioWindow::GetChannel();
    if(( NewChannel > 860) && ( NewChannel < 1090 ))
    {
        Remain = NewChannel % 10;
        NewChannel /= 10;
        temp.sprintf("%d.%d MHz", NewChannel, Remain);      // Kiírandó szöveg betöltése a temp változóba
        this->ui->radioEdit->setText(temp);                 // Szöveg kiírása a kijelzőre
    }
}

// Időzítő lejártának kezelőfüggvénye
void RadioWindow::volTimerOver()
{
    QString temp = "";
    int ActChannel = 900;
    int Remain = 0;
    // Lejárt az időzítő, bejön a képernyővédő
    RadioWindow::volTimer->stop();
    ActChannel = RadioWindow::GetChannel();
    if(( ActChannel > 860) && ( ActChannel < 1090 ))
    {
        Remain = ActChannel % 10;
        ActChannel /= 10;
        temp.sprintf("%d.%d MHz", ActChannel, Remain);      // Kiírandó szöveg betöltése a temp változóba
        this->ui->radioEdit->setText(temp);                 // Szöveg kiírása a kijelzőre
    }
}

void RadioWindow::on_channel1Button_clicked()
{

}

void RadioWindow::on_channel1Button_released()
{

}

void RadioWindow::on_channel2Button_clicked()
{

}

void RadioWindow::on_channel2Button_released()
{

}

void RadioWindow::on_channel3Button_clicked()
{

}

void RadioWindow::on_channel3Button_released()
{

}

void RadioWindow::on_channel4Button_clicked()
{

}

void RadioWindow::on_channel4Button_released()
{

}
