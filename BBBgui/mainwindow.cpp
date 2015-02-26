#include "mainwindow.h"
#include "radarwindow.h"
#include "musicwindow.h"
#include "ui_mainwindow.h"
#include "information.h"
#include "options.h"
#include "clockscreensaver.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Konstruktor
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->musicButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Zene gomb háttérszíne
    ui->optionsButton->setStyleSheet("background-color:rgb(251,0,0)");                  // Beállítások gomb háttérszíne
    ui->dataButton->setText( QString::fromUtf8("JÁRMŰ \n INFORMÁCIÓK"));                // Adat gomb szövege
    ui->dataButton->setStyleSheet("background-color:rgb(238,251,0)");                   // Adat gomb háttérszíne
    ui->radarButton->setStyleSheet("background-color:rgb(0,251,56)");                   // Radar gomb háttérszíne
    wTimer = new QTimer(this);
    wTimer->setSingleShot(true);                                                        // Egyszeri lefutású timer
    connect(wTimer, SIGNAL(timeout()), this, SLOT(wTimerOver()));                       // A wTimer timeout-jánál a timerOver() függvény lesz meghívva
    wTimer->start(4000);                                                                // Timer elindítása
}

MainWindow::~MainWindow()
{
    gp->GPIOManager::~GPIOManager();
    delete ui;
}

void MainWindow::on_musicButton_clicked()
{
    MainWindow::wTimer->stop();                     // Timer leállítása
    delete MainWindow::wTimer;
    MusicWindow *mw = new(MusicWindow);             // Új ablak példányosítása
    mw->show();                                     // Új ablak megnyitása
    this->close();                                  // mainwindow bezárása
}

void MainWindow::on_optionsButton_clicked()
{
    //gp->setValue(pin, GPIO::HIGH);                // A kijelölt pin-t 1-esbe állítja
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    Options *ow = new( Options );
    ow->show();                                     // Options ablak elindítása
    this->close();                                  // mainwindow bezárása
}

void MainWindow::on_radarButton_clicked()
{
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    RadarWindow *rw = new( RadarWindow );
    rw->show();
    this->close();                                  // mainwindow bezárása
}

void MainWindow::on_dataButton_clicked()
{
    //gp->setValue(pin, GPIO::LOW);                   // A kijelölt pin-t 0-ba állítja
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    Information *iw = new( Information );
    iw->show();
    this->close();                                  // mainwindow bezárása
}

void MainWindow::wTimerOver()
{
    // Lejárt az időzítő, bejön a képernyővédő
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    ClockScreenSaver *ssw = new( ClockScreenSaver );
    ssw->callingWindow = callingMain;                   // Eltárolásra kerül, hogy melyik ablakból lett meghívva a képernyővédő
    ssw->show();
    this->close();
}
