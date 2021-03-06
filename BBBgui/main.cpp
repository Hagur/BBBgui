﻿#include "mainwindow.h"
#include "radarwindow.h"
#include "musicwindow.h"
#include <QApplication>
#include "guidefines.h"
#include "Blacklib/BlackI2C.h"
#include <QProcess>
#include <QString>
/*#include "glib.h"
#include <iostream>
#include "fcntl.h"*/

/* USING GLIB.H
using namespace std;
static gboolean
onButtonEvent( GIOChannel *channel,
               GIOCondition condition,
               gpointer user_data )
{
    cerr << "onButtonEvent" << endl;
    GError *error = 0;
    gsize bytes_read = 0;
    const int buf_sz = 1024;
    gchar buf[buf_sz] = {};
    g_io_channel_seek_position( channel, 0, G_SEEK_SET, 0 );
    GIOStatus rc = g_io_channel_read_chars( channel,
    buf, buf_sz - 1,
    &bytes_read,
    &error );
    cerr << "rc:" << rc << " data:" << buf << endl;

    // thank you, call again!
    return 1;
}

int main( int argc, char** argv )
{
    GMainLoop* loop = g_main_loop_new( 0, 0 );

    int fd = open( "/sys/class/gpio/gpio7/value", O_RDONLY | O_NONBLOCK );
    GIOChannel* channel = g_io_channel_unix_new( fd );
    GIOCondition cond = GIOCondition( G_IO_PRI );
    guint id = g_io_add_watch( channel, cond, onButtonEvent, 0 );

    g_main_loop_run( loop );
}*/

/* ORIGINAL MAIN FUNCTION*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
/*
    QProcess process;       // Process létrehozása
    QString scriptfile = "/root/python_test/RadioDriver.py";  // Elindítandó script helyének megadása a program helyéhez relatívan

    QString pythonCommand = "python " + scriptfile;
    QString turnOnRadio = "/root/python_test/reset.sh";
    process.start( turnOnRadio );
    process.waitForFinished();
    process.close();
    process.start( pythonCommand );
    process.waitForFinished();
    process.close();*/
}
