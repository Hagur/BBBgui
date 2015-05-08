/********************************************************************************
** Form generated from reading UI file 'radiowindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOWINDOW_H
#define UI_RADIOWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadioWindow
{
public:
    QPushButton *backButton;
    QPushButton *volumeUpButton;
    QPushButton *volumeDownButton;
    QPushButton *changeButton;
    QLineEdit *radioEdit;
    QPushButton *channel1Button;
    QPushButton *channel2Button;
    QPushButton *channel3Button;
    QPushButton *channel4Button;

    void setupUi(QWidget *RadioWindow)
    {
        if (RadioWindow->objectName().isEmpty())
            RadioWindow->setObjectName(QString::fromUtf8("RadioWindow"));
        RadioWindow->resize(480, 272);
        RadioWindow->setCursor(QCursor(Qt::BlankCursor));
        backButton = new QPushButton(RadioWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1, 202, 478, 68));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(30);
        backButton->setFont(font);
        volumeUpButton = new QPushButton(RadioWindow);
        volumeUpButton->setObjectName(QString::fromUtf8("volumeUpButton"));
        volumeUpButton->setGeometry(QRect(1, 1, 138, 98));
        volumeUpButton->setFont(font);
        volumeDownButton = new QPushButton(RadioWindow);
        volumeDownButton->setObjectName(QString::fromUtf8("volumeDownButton"));
        volumeDownButton->setGeometry(QRect(1, 101, 138, 99));
        volumeDownButton->setFont(font);
        changeButton = new QPushButton(RadioWindow);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(342, 1, 138, 98));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Umpush"));
        font1.setPointSize(20);
        changeButton->setFont(font1);
        radioEdit = new QLineEdit(RadioWindow);
        radioEdit->setObjectName(QString::fromUtf8("radioEdit"));
        radioEdit->setGeometry(QRect(140, 1, 199, 98));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Umpush"));
        font2.setPointSize(25);
        radioEdit->setFont(font2);
        channel1Button = new QPushButton(RadioWindow);
        channel1Button->setObjectName(QString::fromUtf8("channel1Button"));
        channel1Button->setGeometry(QRect(140, 101, 168, 49));
        channel2Button = new QPushButton(RadioWindow);
        channel2Button->setObjectName(QString::fromUtf8("channel2Button"));
        channel2Button->setGeometry(QRect(310, 101, 169, 49));
        channel3Button = new QPushButton(RadioWindow);
        channel3Button->setObjectName(QString::fromUtf8("channel3Button"));
        channel3Button->setGeometry(QRect(140, 151, 168, 49));
        channel4Button = new QPushButton(RadioWindow);
        channel4Button->setObjectName(QString::fromUtf8("channel4Button"));
        channel4Button->setGeometry(QRect(310, 151, 169, 49));

        retranslateUi(RadioWindow);

        QMetaObject::connectSlotsByName(RadioWindow);
    } // setupUi

    void retranslateUi(QWidget *RadioWindow)
    {
        RadioWindow->setWindowTitle(QApplication::translate("RadioWindow", "Form", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("RadioWindow", "KIL\303\211P\303\211S", 0, QApplication::UnicodeUTF8));
        volumeUpButton->setText(QApplication::translate("RadioWindow", "VOL+", 0, QApplication::UnicodeUTF8));
        volumeDownButton->setText(QApplication::translate("RadioWindow", "VOL-", 0, QApplication::UnicodeUTF8));
        changeButton->setText(QApplication::translate("RadioWindow", "Csatorna\n"
"v\303\241lt\303\241s", 0, QApplication::UnicodeUTF8));
        channel1Button->setText(QApplication::translate("RadioWindow", "1", 0, QApplication::UnicodeUTF8));
        channel2Button->setText(QApplication::translate("RadioWindow", "2", 0, QApplication::UnicodeUTF8));
        channel3Button->setText(QApplication::translate("RadioWindow", "3", 0, QApplication::UnicodeUTF8));
        channel4Button->setText(QApplication::translate("RadioWindow", "4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RadioWindow: public Ui_RadioWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOWINDOW_H
