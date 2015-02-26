#ifndef CLOCKSCREENSAVER_H
#define CLOCKSCREENSAVER_H

#include <QWidget>
#include "guidefines.h"

namespace Ui {
class ClockScreenSaver;
}

class ClockScreenSaver : public QWidget
{
    Q_OBJECT

public:
    explicit ClockScreenSaver(QWidget *parent = 0);
    E_CALLING_WINDOW callingWindow;
    ~ClockScreenSaver();

private slots:
    void on_backButton_clicked();

private:
    Ui::ClockScreenSaver *ui;
};

#endif // CLOCKSCREENSAVER_H
