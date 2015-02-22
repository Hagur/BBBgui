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
    explicit MusicWindow(QWidget *parent = 0);
    QTimer *mwTimer;
    ~MusicWindow();

private slots:
    void on_backButton_clicked();

    void mwTimerOver();

private:
    Ui::MusicWindow *ui;
};

#endif // MUSICWINDOW_H
