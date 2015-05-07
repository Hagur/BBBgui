#ifndef MUSICWINDOW_H
#define MUSICWINDOW_H

#include <QWidget>

namespace Ui {
class MusicWindow;
}

class MusicWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MusicWindow(bool ssEnabled, QWidget *parent = 0);
    bool ssEnabler;
    QTimer *mwTimer;
    ~MusicWindow();

private slots:
    void on_backButton_clicked();

    void mwTimerOver();

    void on_radioButton_clicked();

private:
    Ui::MusicWindow *ui;
};

#endif // MUSICWINDOW_H
