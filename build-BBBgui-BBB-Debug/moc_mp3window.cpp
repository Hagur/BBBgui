/****************************************************************************
** Meta object code from reading C++ file 'mp3window.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BBBgui/mp3window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mp3window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mp3window[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,
      93,   10,   10,   10, 0x08,
     117,   10,   10,   10, 0x08,
     141,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mp3window[] = {
    "mp3window\0\0on_volumeUpButton_clicked()\0"
    "on_volumeDownButton_clicked()\0"
    "on_exitButton_clicked()\0on_prevButton_clicked()\0"
    "on_playButton_clicked()\0on_nextButton_clicked()\0"
};

void mp3window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mp3window *_t = static_cast<mp3window *>(_o);
        switch (_id) {
        case 0: _t->on_volumeUpButton_clicked(); break;
        case 1: _t->on_volumeDownButton_clicked(); break;
        case 2: _t->on_exitButton_clicked(); break;
        case 3: _t->on_prevButton_clicked(); break;
        case 4: _t->on_playButton_clicked(); break;
        case 5: _t->on_nextButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mp3window::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mp3window::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mp3window,
      qt_meta_data_mp3window, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mp3window::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mp3window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mp3window::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mp3window))
        return static_cast<void*>(const_cast< mp3window*>(this));
    return QWidget::qt_metacast(_clname);
}

int mp3window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
