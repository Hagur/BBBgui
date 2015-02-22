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


SOURCES += main.cpp\
        mainwindow.cpp \
    musicwindow.cpp \
    radarwindow.cpp \
    information.cpp \
    options.cpp \
    GPIOConst.cpp \
    GPIOManager.cpp \
    clockscreensaver.cpp

HEADERS  += mainwindow.h \
    musicwindow.h \
    radarwindow.h \
    information.h \
    options.h \
    GPIOConst.h \
    GPIOManager.h \
    clockscreensaver.h

FORMS    += mainwindow.ui \
    musicwindow.ui \
    radarwindow.ui \
    information.ui \
    options.ui \
    clockscreensaver.ui
