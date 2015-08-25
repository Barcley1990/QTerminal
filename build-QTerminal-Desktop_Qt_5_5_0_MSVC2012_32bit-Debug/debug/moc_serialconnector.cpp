/****************************************************************************
** Meta object code from reading C++ file 'serialconnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTerminal/serialconnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialConnector_t {
    QByteArrayData data[13];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConnector_t qt_meta_stringdata_SerialConnector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SerialConnector"
QT_MOC_LITERAL(1, 16, 9), // "configure"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "disconnect"
QT_MOC_LITERAL(4, 38, 13), // "scanPortNames"
QT_MOC_LITERAL(5, 52, 10), // "choosePort"
QT_MOC_LITERAL(6, 63, 10), // "chooseBaud"
QT_MOC_LITERAL(7, 74, 11), // "CR_Checkbox"
QT_MOC_LITERAL(8, 86, 11), // "LF_Checkbox"
QT_MOC_LITERAL(9, 98, 13), // "CRLF_Checkbox"
QT_MOC_LITERAL(10, 112, 12), // "DTR_Checkbox"
QT_MOC_LITERAL(11, 125, 19), // "getDataFromInputBox"
QT_MOC_LITERAL(12, 145, 14) // "ReadFromSerial"

    },
    "SerialConnector\0configure\0\0disconnect\0"
    "scanPortNames\0choosePort\0chooseBaud\0"
    "CR_Checkbox\0LF_Checkbox\0CRLF_Checkbox\0"
    "DTR_Checkbox\0getDataFromInputBox\0"
    "ReadFromSerial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConnector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConnector *_t = static_cast<SerialConnector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configure(); break;
        case 1: _t->disconnect(); break;
        case 2: _t->scanPortNames(); break;
        case 3: _t->choosePort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->chooseBaud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->CR_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->LF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->CRLF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->DTR_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getDataFromInputBox(); break;
        case 10: _t->ReadFromSerial(); break;
        default: ;
        }
    }
}

const QMetaObject SerialConnector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialConnector.data,
      qt_meta_data_SerialConnector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConnector.stringdata0))
        return static_cast<void*>(const_cast< SerialConnector*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
