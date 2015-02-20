/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *musicButton;
    QPushButton *optionsButton;
    QPushButton *radarButton;
    QPushButton *dataButton;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 272);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        musicButton = new QPushButton(centralWidget);
        musicButton->setObjectName(QString::fromUtf8("musicButton"));
        musicButton->setGeometry(QRect(0, 0, 238, 118));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(20);
        musicButton->setFont(font);
        optionsButton = new QPushButton(centralWidget);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        optionsButton->setGeometry(QRect(242, 122, 238, 118));
        optionsButton->setFont(font);
        radarButton = new QPushButton(centralWidget);
        radarButton->setObjectName(QString::fromUtf8("radarButton"));
        radarButton->setGeometry(QRect(0, 122, 238, 118));
        radarButton->setFont(font);
        dataButton = new QPushButton(centralWidget);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));
        dataButton->setGeometry(QRect(242, 0, 238, 118));
        QFont font1;
        font1.setPointSize(20);
        dataButton->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        musicButton->setText(QApplication::translate("MainWindow", "ZENE", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("MainWindow", "BE\303\201LL\303\215T\303\201SOK", 0, QApplication::UnicodeUTF8));
        radarButton->setText(QApplication::translate("MainWindow", "TOLAT\303\223RADAR", 0, QApplication::UnicodeUTF8));
        dataButton->setText(QApplication::translate("MainWindow", "J\303\201RM\305\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
