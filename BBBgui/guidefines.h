#ifndef GUIDEFINES_H
#define GUIDEFINES_H

#define VOL_TIMER   1500        // Megmondja, hogy mennyi ideig legyen mutatva a hangerő annak állítása után (ms)

typedef enum
{
    callingMusic = 0x15,
    callingMain  = 0x37
} E_CALLING_WINDOW;         // Megmondja, hogy melyik ablakból lett meghívva a képernyővédő

static int RadioVolume = 6;
static int RadioChannel = 1000;
static bool screenSaverEnabled;

#endif // GUIDEFINES_H
