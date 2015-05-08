/********************************************************************************
** Form generated from reading UI file 'mp3window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MP3WINDOW_H
#define UI_MP3WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mp3window
{
public:
    QPushButton *volumeUpButton;
    QPushButton *volumeDownButton;
    QLineEdit *infoEdit;
    QPushButton *prevButton;
    QPushButton *playButton;
    QPushButton *nextButton;
    QPushButton *exitButton;

    void setupUi(QWidget *mp3window)
    {
        if (mp3window->objectName().isEmpty())
            mp3window->setObjectName(QString::fromUtf8("mp3window"));
        mp3window->resize(480, 272);
        volumeUpButton = new QPushButton(mp3window);
        volumeUpButton->setObjectName(QString::fromUtf8("volumeUpButton"));
        volumeUpButton->setGeometry(QRect(1, 1, 138, 98));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(30);
        volumeUpButton->setFont(font);
        volumeDownButton = new QPushButton(mp3window);
        volumeDownButton->setObjectName(QString::fromUtf8("volumeDownButton"));
        volumeDownButton->setGeometry(QRect(1, 101, 138, 98));
        volumeDownButton->setFont(font);
        infoEdit = new QLineEdit(mp3window);
        infoEdit->setObjectName(QString::fromUtf8("infoEdit"));
        infoEdit->setGeometry(QRect(140, 1, 338, 98));
        prevButton = new QPushButton(mp3window);
        prevButton->setObjectName(QString::fromUtf8("prevButton"));
        prevButton->setGeometry(QRect(140, 101, 113, 98));
        playButton = new QPushButton(mp3window);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(253, 101, 113, 98));
        nextButton = new QPushButton(mp3window);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(366, 101, 113, 98));
        exitButton = new QPushButton(mp3window);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(1, 200, 478, 68));
        exitButton->setFont(font);

        retranslateUi(mp3window);

        QMetaObject::connectSlotsByName(mp3window);
    } // setupUi

    void retranslateUi(QWidget *mp3window)
    {
        mp3window->setWindowTitle(QApplication::translate("mp3window", "Form", 0, QApplication::UnicodeUTF8));
        volumeUpButton->setText(QApplication::translate("mp3window", "VOL+", 0, QApplication::UnicodeUTF8));
        volumeDownButton->setText(QApplication::translate("mp3window", "VOL-", 0, QApplication::UnicodeUTF8));
        prevButton->setText(QApplication::translate("mp3window", "Previous \n"
" track", 0, QApplication::UnicodeUTF8));
        playButton->setText(QApplication::translate("mp3window", "Play\n"
"/\n"
"Stop", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("mp3window", "Next \n"
" track", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("mp3window", "KIL\303\211P\303\211S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mp3window: public Ui_mp3window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MP3WINDOW_H
