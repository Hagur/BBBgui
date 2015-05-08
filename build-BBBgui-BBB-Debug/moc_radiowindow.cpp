/****************************************************************************
** Meta object code from reading C++ file 'radiowindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BBBgui/radiowindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RadioWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   13,   12, 0x08,
      30,   12,   12,   12, 0x08,
      44,   12,   12,   12, 0x08,
      60,   12,   12,   12, 0x08,
      88,   12,   12,   12, 0x08,
     118,   12,   12,   12, 0x08,
     142,   12,   12,   12, 0x08,
     168,   12,   12,   12, 0x08,
     183,   12,   12,   12, 0x08,
     211,   12,   12,   12, 0x08,
     240,   12,   12,   12, 0x08,
     268,   12,   12,   12, 0x08,
     297,   12,   12,   12, 0x08,
     325,   12,   12,   12, 0x08,
     354,   12,   12,   12, 0x08,
     382,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RadioWindow[] = {
    "RadioWindow\0\0int\0GetChannel()\0"
    "SeekChannel()\0ControlVolume()\0"
    "on_volumeUpButton_clicked()\0"
    "on_volumeDownButton_clicked()\0"
    "on_backButton_clicked()\0"
    "on_changeButton_clicked()\0volTimerOver()\0"
    "on_channel1Button_clicked()\0"
    "on_channel1Button_released()\0"
    "on_channel2Button_clicked()\0"
    "on_channel2Button_released()\0"
    "on_channel3Button_clicked()\0"
    "on_channel3Button_released()\0"
    "on_channel4Button_clicked()\0"
    "on_channel4Button_released()\0"
};

void RadioWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioWindow *_t = static_cast<RadioWindow *>(_o);
        switch (_id) {
        case 0: { int _r = _t->GetChannel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->SeekChannel(); break;
        case 2: _t->ControlVolume(); break;
        case 3: _t->on_volumeUpButton_clicked(); break;
        case 4: _t->on_volumeDownButton_clicked(); break;
        case 5: _t->on_backButton_clicked(); break;
        case 6: _t->on_changeButton_clicked(); break;
        case 7: _t->volTimerOver(); break;
        case 8: _t->on_channel1Button_clicked(); break;
        case 9: _t->on_channel1Button_released(); break;
        case 10: _t->on_channel2Button_clicked(); break;
        case 11: _t->on_channel2Button_released(); break;
        case 12: _t->on_channel3Button_clicked(); break;
        case 13: _t->on_channel3Button_released(); break;
        case 14: _t->on_channel4Button_clicked(); break;
        case 15: _t->on_channel4Button_released(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RadioWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RadioWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RadioWindow,
      qt_meta_data_RadioWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RadioWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RadioWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RadioWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RadioWindow))
        return static_cast<void*>(const_cast< RadioWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int RadioWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
