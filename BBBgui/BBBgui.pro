#-------------------------------------------------
#
# Project created by QtCreator 2015-02-16T10:11:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BBBgui
target.files = BBBgui
target.path = /home/debian
INSTALLS = target
TEMPLATE = app
INCLUDEPATH += $$system(pkg-config --cflags glib-2.0 | sed -e "s/-I//g")
LIBS += -L/usr/include/glib-2.0

SOURCES += main.cpp\
        mainwindow.cpp \
    musicwindow.cpp \
    radarwindow.cpp \
    information.cpp \
    options.cpp \
    clockscreensaver.cpp \
    Blacklib/BlackADC.cpp \
    Blacklib/BlackCore.cpp \
    Blacklib/BlackGPIO.cpp \
    Blacklib/BlackI2C.cpp \
    Blacklib/BlackPWM.cpp \
    Blacklib/BlackSPI.cpp \
    Blacklib/BlackUART.cpp \
    GPIOConst.cpp \
    GPIOManager.cpp \
    radiowindow.cpp

HEADERS  += mainwindow.h \
    musicwindow.h \
    radarwindow.h \
    information.h \
    options.h \
    clockscreensaver.h \
    guidefines.h \
    Blacklib/BlackADC.h \
    Blacklib/BlackCore.h \
    Blacklib/BlackDef.h \
    Blacklib/BlackErr.h \
    Blacklib/BlackGPIO.h \
    Blacklib/BlackI2C.h \
    Blacklib/BlackLib.h \
    Blacklib/BlackPWM.h \
    Blacklib/BlackSPI.h \
    Blacklib/BlackUART.h \
    GPIOConst.h \
    GPIOManager.h \
    radiowindow.h

FORMS    += mainwindow.ui \
    musicwindow.ui \
    radarwindow.ui \
    information.ui \
    options.ui \
    clockscreensaver.ui \
    radiowindow.ui
