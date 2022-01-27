/****************************************************************************
** Meta object code from reading C++ file 'export.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ds_pmk/export.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'export.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Export_t {
    QByteArrayData data[21];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Export_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Export_t qt_meta_stringdata_Export = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Export"
QT_MOC_LITERAL(1, 7, 10), // "updateTime"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "updateDate"
QT_MOC_LITERAL(4, 30, 14), // "on_add_clicked"
QT_MOC_LITERAL(5, 45, 14), // "on_del_clicked"
QT_MOC_LITERAL(6, 60, 16), // "on_print_clicked"
QT_MOC_LITERAL(7, 77, 18), // "on_invoice_clicked"
QT_MOC_LITERAL(8, 96, 16), // "on_clean_clicked"
QT_MOC_LITERAL(9, 113, 26), // "on_cars_currentTextChanged"
QT_MOC_LITERAL(10, 140, 4), // "arg1"
QT_MOC_LITERAL(11, 145, 25), // "on_brutto_editingFinished"
QT_MOC_LITERAL(12, 171, 10), // "summDeemed"
QT_MOC_LITERAL(13, 182, 11), // "minusDeemed"
QT_MOC_LITERAL(14, 194, 12), // "updateTables"
QT_MOC_LITERAL(15, 207, 23), // "slotCustomMenuRequested"
QT_MOC_LITERAL(16, 231, 3), // "pos"
QT_MOC_LITERAL(17, 235, 9), // "on_search"
QT_MOC_LITERAL(18, 245, 18), // "on_clients_clicked"
QT_MOC_LITERAL(19, 264, 11), // "QModelIndex"
QT_MOC_LITERAL(20, 276, 5) // "index"

    },
    "Export\0updateTime\0\0updateDate\0"
    "on_add_clicked\0on_del_clicked\0"
    "on_print_clicked\0on_invoice_clicked\0"
    "on_clean_clicked\0on_cars_currentTextChanged\0"
    "arg1\0on_brutto_editingFinished\0"
    "summDeemed\0minusDeemed\0updateTables\0"
    "slotCustomMenuRequested\0pos\0on_search\0"
    "on_clients_clicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Export[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void Export::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Export *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTime(); break;
        case 1: _t->updateDate(); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->on_del_clicked(); break;
        case 4: _t->on_print_clicked(); break;
        case 5: _t->on_invoice_clicked(); break;
        case 6: _t->on_clean_clicked(); break;
        case 7: _t->on_cars_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_brutto_editingFinished(); break;
        case 9: _t->summDeemed(); break;
        case 10: _t->minusDeemed(); break;
        case 11: _t->updateTables(); break;
        case 12: _t->slotCustomMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 13: _t->on_search(); break;
        case 14: _t->on_clients_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Export::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Export.data,
    qt_meta_data_Export,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Export::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Export::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Export.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Export::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
