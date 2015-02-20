#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "GPIOConst.h"
#include "GPIOManager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    GPIO::GPIOManager* gp = GPIO::GPIOManager::getInstance();
    ~MainWindow();

private slots:
    void on_musicButton_clicked();

    void on_optionsButton_clicked();

    void on_radarButton_clicked();

    void on_dataButton_clicked();

private:
    Ui::MainWindow *ui;
    unsigned int YELLOW_LED_PIN;
    int pin = GPIO::GPIOConst::getInstance()->getGpioByName("GPIO0_7");
};

#endif // MAINWINDOW_H
