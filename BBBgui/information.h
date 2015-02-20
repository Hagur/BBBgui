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
    explicit Information(QWidget *parent = 0);
    ~Information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
