#ifndef OPTIONS_H
#define OPTIONS_H

#include <QWidget>

#define BRIGHTNESS_DIR "/sys/class/backlight/backlight.11"
#define MAX_BUF 64

namespace Ui {
class Options;
}

class Options : public QWidget
{
    Q_OBJECT

public:
    explicit Options(bool ssEnabled, QWidget *parent = 0);
    bool ssEnabler;
    ~Options();

private slots:
    int on_increaseButton_clicked();

    int on_decreaseButton_clicked();

    void on_backButton_clicked();

    int getBrightness();

private:
    Ui::Options *ui;
    int brightnessValue;
};

#endif // OPTIONS_H
