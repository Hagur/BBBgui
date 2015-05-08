/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *speedEdit;
    QLineEdit *revEdit;
    QLineEdit *temperatureEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(480, 272);
        Information->setCursor(QCursor(Qt::BlankCursor));
        label = new QLabel(Information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 40));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(Information);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 181, 40));
        label_2->setFont(font);
        label_3 = new QLabel(Information);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 171, 40));
        label_3->setFont(font);
        speedEdit = new QLineEdit(Information);
        speedEdit->setObjectName(QString::fromUtf8("speedEdit"));
        speedEdit->setGeometry(QRect(270, 10, 113, 40));
        speedEdit->setFont(font);
        speedEdit->setReadOnly(true);
        revEdit = new QLineEdit(Information);
        revEdit->setObjectName(QString::fromUtf8("revEdit"));
        revEdit->setGeometry(QRect(270, 70, 113, 40));
        revEdit->setReadOnly(true);
        temperatureEdit = new QLineEdit(Information);
        temperatureEdit->setObjectName(QString::fromUtf8("temperatureEdit"));
        temperatureEdit->setGeometry(QRect(270, 130, 113, 40));
        temperatureEdit->setReadOnly(true);
        pushButton = new QPushButton(Information);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1, 202, 478, 68));
        pushButton->setFont(font);

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Information", "Sebess\303\251g:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Information", "Fordulatsz\303\241m:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Information", "H\305\221m\303\251rs\303\251klet:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Information", "VISSZA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
