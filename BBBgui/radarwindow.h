#ifndef RADARWINDOW_H
#define RADARWINDOW_H

#include <QWidget>

namespace Ui {
class RadarWindow;
}

class RadarWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RadarWindow(QWidget *parent = 0);
    ~RadarWindow();

private slots:
    void on_backButton_clicked();

private:
    Ui::RadarWindow *ui;
};

#endif // RADARWINDOW_H
