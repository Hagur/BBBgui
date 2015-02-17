/********************************************************************************
** Form generated from reading UI file 'radarwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADARWINDOW_H
#define UI_RADARWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadarWindow
{
public:
    QPushButton *backButton;
    QLabel *picLabel;

    void setupUi(QWidget *RadarWindow)
    {
        if (RadarWindow->objectName().isEmpty())
            RadarWindow->setObjectName(QString::fromUtf8("RadarWindow"));
        RadarWindow->resize(480, 272);
        backButton = new QPushButton(RadarWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(379, 1, 100, 270));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        backButton->setFont(font);
        picLabel = new QLabel(RadarWindow);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setGeometry(QRect(90, 45, 281, 181));

        retranslateUi(RadarWindow);

        QMetaObject::connectSlotsByName(RadarWindow);
    } // setupUi

    void retranslateUi(QWidget *RadarWindow)
    {
        RadarWindow->setWindowTitle(QApplication::translate("RadarWindow", "Form", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("RadarWindow", "VISSZA", 0, QApplication::UnicodeUTF8));
        picLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RadarWindow: public Ui_RadarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARWINDOW_H
