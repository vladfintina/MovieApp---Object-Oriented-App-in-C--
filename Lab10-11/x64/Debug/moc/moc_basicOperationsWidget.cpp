/****************************************************************************
** Meta object code from reading C++ file 'basicOperationsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../basicOperationsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basicOperationsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModificaWidget_t {
    const uint offsetsAndSize[6];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ModificaWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ModificaWidget_t qt_meta_stringdata_ModificaWidget = {
    {
QT_MOC_LITERAL(0, 14), // "ModificaWidget"
QT_MOC_LITERAL(15, 18), // "modificareCuSucces"
QT_MOC_LITERAL(34, 0) // ""

    },
    "ModificaWidget\0modificareCuSucces\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModificaWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ModificaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModificaWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modificareCuSucces(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModificaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModificaWidget::modificareCuSucces)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject ModificaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ModificaWidget.offsetsAndSize,
    qt_meta_data_ModificaWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ModificaWidget_t
, QtPrivate::TypeAndForceComplete<ModificaWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *ModificaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModificaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModificaWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ModificaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ModificaWidget::modificareCuSucces()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BasicOperationsWidget_t {
    const uint offsetsAndSize[6];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BasicOperationsWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BasicOperationsWidget_t qt_meta_stringdata_BasicOperationsWidget = {
    {
QT_MOC_LITERAL(0, 21), // "BasicOperationsWidget"
QT_MOC_LITERAL(22, 15), // "actiuneCuSucces"
QT_MOC_LITERAL(38, 0) // ""

    },
    "BasicOperationsWidget\0actiuneCuSucces\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicOperationsWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void BasicOperationsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BasicOperationsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actiuneCuSucces(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BasicOperationsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasicOperationsWidget::actiuneCuSucces)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject BasicOperationsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BasicOperationsWidget.offsetsAndSize,
    qt_meta_data_BasicOperationsWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BasicOperationsWidget_t
, QtPrivate::TypeAndForceComplete<BasicOperationsWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *BasicOperationsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicOperationsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicOperationsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BasicOperationsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void BasicOperationsWidget::actiuneCuSucces()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
