/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QLabel *label;
    QPushButton *increaseButton;
    QPushButton *decreaseButton;
    QLineEdit *brightnessLine;
    QPushButton *backButton;
    QLabel *label_2;
    QComboBox *ssBox;

    void setupUi(QWidget *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->resize(480, 272);
        Options->setCursor(QCursor(Qt::BlankCursor));
        label = new QLabel(Options);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 131, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        increaseButton = new QPushButton(Options);
        increaseButton->setObjectName(QString::fromUtf8("increaseButton"));
        increaseButton->setGeometry(QRect(390, 30, 40, 40));
        decreaseButton = new QPushButton(Options);
        decreaseButton->setObjectName(QString::fromUtf8("decreaseButton"));
        decreaseButton->setGeometry(QRect(250, 30, 40, 40));
        decreaseButton->setFont(font);
        brightnessLine = new QLineEdit(Options);
        brightnessLine->setObjectName(QString::fromUtf8("brightnessLine"));
        brightnessLine->setGeometry(QRect(290, 30, 101, 41));
        brightnessLine->setFont(font);
        brightnessLine->setReadOnly(true);
        backButton = new QPushButton(Options);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(1, 202, 478, 68));
        backButton->setFont(font);
        label_2 = new QLabel(Options);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 211, 41));
        label_2->setFont(font);
        ssBox = new QComboBox(Options);
        ssBox->setObjectName(QString::fromUtf8("ssBox"));
        ssBox->setGeometry(QRect(290, 110, 101, 41));
        ssBox->setFont(font);

        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QWidget *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Options", "F\303\251nyer\305\221", 0, QApplication::UnicodeUTF8));
        increaseButton->setText(QApplication::translate("Options", "+", 0, QApplication::UnicodeUTF8));
        decreaseButton->setText(QApplication::translate("Options", "-", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Options", "VISSZA", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Options", "K\303\251perny\305\221k\303\255m\303\251l\305\221", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
