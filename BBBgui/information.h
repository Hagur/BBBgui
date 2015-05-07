#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(bool ssEnabled, QWidget *parent = 0);
    bool ssEnabler;
    ~Information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
