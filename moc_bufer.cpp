/****************************************************************************
** Meta object code from reading C++ file 'bufer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ds_pmk/bufer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bufer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Bufer_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Bufer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Bufer_t qt_meta_stringdata_Bufer = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Bufer"
QT_MOC_LITERAL(1, 6, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "on_del_clicked"
QT_MOC_LITERAL(4, 37, 23), // "slotCustomMenuRequested"
QT_MOC_LITERAL(5, 61, 3), // "pos"
QT_MOC_LITERAL(6, 65, 11) // "updateTable"

    },
    "Bufer\0on_add_clicked\0\0on_del_clicked\0"
    "slotCustomMenuRequested\0pos\0updateTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Bufer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,

       0        // eod
};

void Bufer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bufer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_del_clicked(); break;
        case 2: _t->slotCustomMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->updateTable(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Bufer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Bufer.data,
    qt_meta_data_Bufer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Bufer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bufer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Bufer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Bufer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
