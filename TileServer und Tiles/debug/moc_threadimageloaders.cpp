/****************************************************************************
** Meta object code from reading C++ file 'threadimageloaders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../threadimageloaders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadimageloaders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadImageLoader_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadImageLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadImageLoader_t qt_meta_stringdata_ThreadImageLoader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ThreadImageLoader"
QT_MOC_LITERAL(1, 18, 5), // "start"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "cleared"
QT_MOC_LITERAL(4, 33, 11), // "sendingText"
QT_MOC_LITERAL(5, 45, 8), // "QString&"
QT_MOC_LITERAL(6, 54, 4), // "tile"
QT_MOC_LITERAL(7, 59, 5), // "layer"
QT_MOC_LITERAL(8, 65, 3), // "azm"
QT_MOC_LITERAL(9, 69, 20), // "seekAvailableThreads"
QT_MOC_LITERAL(10, 90, 16) // "addThreadToQueue"

    },
    "ThreadImageLoader\0start\0\0cleared\0"
    "sendingText\0QString&\0tile\0layer\0azm\0"
    "seekAvailableThreads\0addThreadToQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadImageLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   41,    2, 0x0a /* Public */,
       9,    0,   48,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ThreadImageLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadImageLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->cleared(); break;
        case 2: _t->sendingText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->seekAvailableThreads(); break;
        case 4: _t->addThreadToQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadImageLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadImageLoader::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadImageLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadImageLoader::cleared)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadImageLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThreadImageLoader.data,
    qt_meta_data_ThreadImageLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadImageLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadImageLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadImageLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadImageLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ThreadImageLoader::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ThreadImageLoader::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
