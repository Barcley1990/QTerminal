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
    QByteArrayData data[14];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConnector_t qt_meta_stringdata_SerialConnector = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SerialConnector"
QT_MOC_LITERAL(1, 16, 8), // "finished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "error"
QT_MOC_LITERAL(4, 32, 3), // "err"
QT_MOC_LITERAL(5, 36, 14), // "openSerialPort"
QT_MOC_LITERAL(6, 51, 15), // "closeSerialPort"
QT_MOC_LITERAL(7, 67, 11), // "CR_Checkbox"
QT_MOC_LITERAL(8, 79, 11), // "LF_Checkbox"
QT_MOC_LITERAL(9, 91, 13), // "CRLF_Checkbox"
QT_MOC_LITERAL(10, 105, 12), // "DTR_Checkbox"
QT_MOC_LITERAL(11, 118, 18), // "autoScrollCheckbox"
QT_MOC_LITERAL(12, 137, 19), // "getDataFromInputBox"
QT_MOC_LITERAL(13, 157, 14) // "ReadFromSerial"

    },
    "SerialConnector\0finished\0\0error\0err\0"
    "openSerialPort\0closeSerialPort\0"
    "CR_Checkbox\0LF_Checkbox\0CRLF_Checkbox\0"
    "DTR_Checkbox\0autoScrollCheckbox\0"
    "getDataFromInputBox\0ReadFromSerial"
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
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    1,   75,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->openSerialPort(); break;
        case 3: _t->closeSerialPort(); break;
        case 4: _t->CR_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->LF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->CRLF_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->DTR_Checkbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->autoScrollCheckbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getDataFromInputBox(); break;
        case 10: _t->ReadFromSerial(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialConnector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnector::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialConnector::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnector::error)) {
                *result = 1;
            }
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

// SIGNAL 0
void SerialConnector::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SerialConnector::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
