/****************************************************************************
** Meta object code from reading C++ file 'jsonoperate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/jsonoperate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jsonoperate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonOperate_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonOperate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonOperate_t qt_meta_stringdata_JsonOperate = {
    {
QT_MOC_LITERAL(0, 0, 11), // "JsonOperate"
QT_MOC_LITERAL(1, 12, 15), // "RegisgetSucceed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "RegisgetError"
QT_MOC_LITERAL(4, 43, 13), // "ShowMessagBox"
QT_MOC_LITERAL(5, 57, 15), // "CheckInfoSignal"
QT_MOC_LITERAL(6, 73, 18), // "RegisterNewAccount"
QT_MOC_LITERAL(7, 92, 9) // "CheckInfo"

    },
    "JsonOperate\0RegisgetSucceed\0\0RegisgetError\0"
    "ShowMessagBox\0CheckInfoSignal\0"
    "RegisterNewAccount\0CheckInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonOperate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       5,    5,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    6,   60,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void JsonOperate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonOperate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RegisgetSucceed(); break;
        case 1: _t->RegisgetError(); break;
        case 2: _t->ShowMessagBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->CheckInfoSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 4: _t->RegisterNewAccount((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 5: _t->CheckInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonOperate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonOperate::RegisgetSucceed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JsonOperate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonOperate::RegisgetError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JsonOperate::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonOperate::ShowMessagBox)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JsonOperate::*)(QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonOperate::CheckInfoSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JsonOperate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JsonOperate.data,
    qt_meta_data_JsonOperate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JsonOperate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonOperate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonOperate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonOperate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void JsonOperate::RegisgetSucceed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JsonOperate::RegisgetError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void JsonOperate::ShowMessagBox(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JsonOperate::CheckInfoSignal(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
