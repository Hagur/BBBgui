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
    ~RadioWindow();

private slots:
    int SeekChannel();                      // Új csatorna keresése

    void DecreaseVolume();                  // Hangerő csökkentése

    void IncreaseVolume();                  // Hangerő növelése

    void on_volumeUpButton_clicked();       // Hangerő növelés megnyomása

    void on_volumeDownButton_clicked();     // Hangerő csökkentése megnyomása

    void on_backButton_clicked();           // Kilépés gomb megnyomása

    void on_changeButton_clicked();         // Csatorna keresés megnyomása

private:
    Ui::RadioWindow *ui;
};

#endif // RADIOWINDOW_H
