#include "mainwindow.h"
#include "radarwindow.h"
#include "musicwindow.h"
#include "ui_mainwindow.h"
#include "information.h"
#include "options.h"
#include "clockscreensaver.h"
#include "guidefines.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->musicButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Zene gomb háttérszíne
    ui->optionsButton->setStyleSheet("background-color:rgb(251,0,0)");                  // Beállítások gomb háttérszíne
    ui->dataButton->setText( QString::fromUtf8("JÁRMŰ \n INFORMÁCIÓK"));                // Adat gomb szövege
    ui->dataButton->setStyleSheet("background-color:rgb(238,251,0)");                   // Adat gomb háttérszíne
    ui->radarButton->setStyleSheet("background-color:rgb(0,251,56)");                   // Radar gomb háttérszíne
    wTimer = new QTimer(this);
}

MainWindow::MainWindow(bool ssEnabled, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ssEnabler = ssEnabled;
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);     // A címsor kikapcsolása
    setStyleSheet("background-color:black");                                            // Ablak hátttérszíne
    ui->musicButton->setStyleSheet("background-color:rgb(0,194,251);");                 // Zene gomb háttérszíne
    ui->optionsButton->setStyleSheet("background-color:rgb(251,0,0)");                  // Beállítások gomb háttérszíne
    ui->dataButton->setText( QString::fromUtf8("JÁRMŰ \n INFORMÁCIÓK"));                // Adat gomb szövege
    ui->dataButton->setStyleSheet("background-color:rgb(238,251,0)");                   // Adat gomb háttérszíne
    ui->radarButton->setStyleSheet("background-color:rgb(0,251,56)");                   // Radar gomb háttérszíne
    wTimer = new QTimer(this);
    if( ssEnabler == true )
    {
        // Engedélyezve van a képernyővédő
        wTimer->setSingleShot(true);                                                        // Egyszeri lefutású timer
        connect(wTimer, SIGNAL(timeout()), this, SLOT(wTimerOver()));                       // A wTimer timeout-jánál a timerOver() függvény lesz meghívva
        wTimer->start(4000);                                                                // Timer elindítása
    }
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
    MusicWindow *mw = new MusicWindow((ssEnabler));             // Új ablak példányosítása
    this->close();                                  // mainwindow bezárása
    mw->show();                                     // Új ablak megnyitása
}

void MainWindow::on_optionsButton_clicked()
{
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    Options *ow = new Options(ssEnabler);
    this->close();                                  // mainwindow bezárása
    ow->show();                                     // Options ablak elindítása
}

void MainWindow::on_radarButton_clicked()
{
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    RadarWindow *rw = new RadarWindow(ssEnabler);
    this->close();                                  // mainwindow bezárása
    rw->show();
}

void MainWindow::on_dataButton_clicked()
{
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    Information *iw = new Information(ssEnabler);
    this->close();                                  // mainwindow bezárása
    iw->show();
}

void MainWindow::wTimerOver()
{
    // Lejárt az időzítő, bejön a képernyővédő
    MainWindow::wTimer->stop();
    delete MainWindow::wTimer;
    ClockScreenSaver *ssw = new ClockScreenSaver(ssEnabler);
    ssw->callingWindow = callingMain;                   // Eltárolásra kerül, hogy melyik ablakból lett meghívva a képernyővédő
    this->close();
    ssw->show();
}
