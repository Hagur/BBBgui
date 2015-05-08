/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BBBgui/options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Options[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,    8,    9,    8, 0x08,
      41,    8,    9,    8, 0x08,
      69,    8,    8,    8, 0x08,
      93,    8,    9,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Options[] = {
    "Options\0\0int\0on_increaseButton_clicked()\0"
    "on_decreaseButton_clicked()\0"
    "on_backButton_clicked()\0getBrightness()\0"
};

void Options::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Options *_t = static_cast<Options *>(_o);
        switch (_id) {
        case 0: { int _r = _t->on_increaseButton_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->on_decreaseButton_clicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->on_backButton_clicked(); break;
        case 3: { int _r = _t->getBrightness();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Options::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Options::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Options,
      qt_meta_data_Options, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Options::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Options::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Options))
        return static_cast<void*>(const_cast< Options*>(this));
    return QWidget::qt_metacast(_clname);
}

int Options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
