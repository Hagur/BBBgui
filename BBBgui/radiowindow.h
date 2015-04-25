#ifndef RADIOWINDOW_H
#define RADIOWINDOW_H

#include <QWidget>

namespace Ui {
class RadioWindow;
}

class RadioWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RadioWindow(QWidget *parent = 0);
    QTimer *volTimer;
    ~RadioWindow();

private slots:
    int GetChannel();                       // Aktuális csatorna frekvenciájának lekérdezése

    void SeekChannel();                     // Új csatorna keresése

    void ControlVolume();                   // Hangerő beállítása

    void on_volumeUpButton_clicked();       // Hangerő növelés megnyomása

    void on_volumeDownButton_clicked();     // Hangerő csökkentése megnyomása

    void on_backButton_clicked();           // Kilépés gomb megnyomása

    void on_changeButton_clicked();         // Csatorna keresés megnyomása

    void volTimerOver();

private:
    Ui::RadioWindow *ui;
};

#endif // RADIOWINDOW_H
