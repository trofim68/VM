/****************************************************************************
** Meta object code from reading C++ file 'expmaterials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ds_pmk/expmaterials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expmaterials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExpMaterials_t {
    QByteArrayData data[15];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpMaterials_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpMaterials_t qt_meta_stringdata_ExpMaterials = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ExpMaterials"
QT_MOC_LITERAL(1, 13, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "on_del_clicked"
QT_MOC_LITERAL(4, 44, 16), // "on_print_clicked"
QT_MOC_LITERAL(5, 61, 23), // "slotCustomMenuRequested"
QT_MOC_LITERAL(6, 85, 3), // "pos"
QT_MOC_LITERAL(7, 89, 25), // "on_car_currentTextChanged"
QT_MOC_LITERAL(8, 115, 4), // "arg1"
QT_MOC_LITERAL(9, 120, 25), // "on_brutto_editingFinished"
QT_MOC_LITERAL(10, 146, 16), // "on_clean_clicked"
QT_MOC_LITERAL(11, 163, 10), // "updateTime"
QT_MOC_LITERAL(12, 174, 10), // "updateDate"
QT_MOC_LITERAL(13, 185, 12), // "updateTables"
QT_MOC_LITERAL(14, 198, 18) // "on_invoice_clicked"

    },
    "ExpMaterials\0on_add_clicked\0\0"
    "on_del_clicked\0on_print_clicked\0"
    "slotCustomMenuRequested\0pos\0"
    "on_car_currentTextChanged\0arg1\0"
    "on_brutto_editingFinished\0on_clean_clicked\0"
    "updateTime\0updateDate\0updateTables\0"
    "on_invoice_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpMaterials[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExpMaterials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExpMaterials *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_del_clicked(); break;
        case 2: _t->on_print_clicked(); break;
        case 3: _t->slotCustomMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->on_car_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_brutto_editingFinished(); break;
        case 6: _t->on_clean_clicked(); break;
        case 7: _t->updateTime(); break;
        case 8: _t->updateDate(); break;
        case 9: _t->updateTables(); break;
        case 10: _t->on_invoice_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExpMaterials::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ExpMaterials.data,
    qt_meta_data_ExpMaterials,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExpMaterials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpMaterials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpMaterials.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExpMaterials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
