/********************************************************************************
** Form generated from reading UI file 'musicwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWINDOW_H
#define UI_MUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicWindow
{
public:
    QPushButton *radioButton;
    QPushButton *mp3Button;
    QPushButton *backButton;

    void setupUi(QWidget *MusicWindow)
    {
        if (MusicWindow->objectName().isEmpty())
            MusicWindow->setObjectName(QString::fromUtf8("MusicWindow"));
        MusicWindow->resize(480, 272);
        radioButton = new QPushButton(MusicWindow);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(1, 1, 238, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(30);
        radioButton->setFont(font);
        mp3Button = new QPushButton(MusicWindow);
        mp3Button->setObjectName(QString::fromUtf8("mp3Button"));
        mp3Button->setGeometry(QRect(241, 1, 238, 200));
        mp3Button->setFont(font);
        backButton = new QPushButton(MusicWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1, 202, 478, 68));
        backButton->setFont(font);

        retranslateUi(MusicWindow);

        QMetaObject::connectSlotsByName(MusicWindow);
    } // setupUi

    void retranslateUi(QWidget *MusicWindow)
    {
        MusicWindow->setWindowTitle(QApplication::translate("MusicWindow", "Form", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MusicWindow", "R\303\201DI\303\223", 0, QApplication::UnicodeUTF8));
        mp3Button->setText(QApplication::translate("MusicWindow", "MP3", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("MusicWindow", "VISSZA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MusicWindow: public Ui_MusicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWINDOW_H
