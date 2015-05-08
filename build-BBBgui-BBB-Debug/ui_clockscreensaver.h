/********************************************************************************
** Form generated from reading UI file 'clockscreensaver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKSCREENSAVER_H
#define UI_CLOCKSCREENSAVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockScreenSaver
{
public:
    QLCDNumber *timeNumber;
    QPushButton *backButton;

    void setupUi(QWidget *ClockScreenSaver)
    {
        if (ClockScreenSaver->objectName().isEmpty())
            ClockScreenSaver->setObjectName(QString::fromUtf8("ClockScreenSaver"));
        ClockScreenSaver->resize(480, 272);
        ClockScreenSaver->setCursor(QCursor(Qt::BlankCursor));
        timeNumber = new QLCDNumber(ClockScreenSaver);
        timeNumber->setObjectName(QString::fromUtf8("timeNumber"));
        timeNumber->setGeometry(QRect(1, 1, 478, 270));
        timeNumber->setCursor(QCursor(Qt::BlankCursor));
        backButton = new QPushButton(ClockScreenSaver);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(-6, -6, 492, 284));
        backButton->setCursor(QCursor(Qt::BlankCursor));
        backButton->setFocusPolicy(Qt::StrongFocus);

        retranslateUi(ClockScreenSaver);

        QMetaObject::connectSlotsByName(ClockScreenSaver);
    } // setupUi

    void retranslateUi(QWidget *ClockScreenSaver)
    {
        ClockScreenSaver->setWindowTitle(QApplication::translate("ClockScreenSaver", "Form", 0, QApplication::UnicodeUTF8));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClockScreenSaver: public Ui_ClockScreenSaver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKSCREENSAVER_H
