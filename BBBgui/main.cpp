#include "mainwindow.h"
#include <QApplication>
#include "guidefines.h"
#include "Blacklib/BlackI2C.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
