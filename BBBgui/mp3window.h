#ifndef MP3WINDOW_H
#define MP3WINDOW_H

#include <QWidget>

namespace Ui {
class mp3window;
}

class mp3window : public QWidget
{
    Q_OBJECT

public:
    explicit mp3window(QWidget *parent = 0);
    ~mp3window();

private slots:
    void on_volumeUpButton_clicked();

    void on_volumeDownButton_clicked();

    void on_exitButton_clicked();

    void on_prevButton_clicked();

    void on_playButton_clicked();

    void on_nextButton_clicked();

private:
    Ui::mp3window *ui;
};

#endif // MP3WINDOW_H
