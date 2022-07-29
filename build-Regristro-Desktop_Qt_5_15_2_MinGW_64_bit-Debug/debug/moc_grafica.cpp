/****************************************************************************
** Meta object code from reading C++ file 'grafica.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Regristro/grafica.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grafica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Grafica_t {
    QByteArrayData data[20];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Grafica_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Grafica_t qt_meta_stringdata_Grafica = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Grafica"
QT_MOC_LITERAL(1, 8, 7), // "iniciar"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "ancho"
QT_MOC_LITERAL(4, 23, 4), // "alto"
QT_MOC_LITERAL(5, 28, 5), // "texto"
QT_MOC_LITERAL(6, 34, 1), // "x"
QT_MOC_LITERAL(7, 36, 1), // "y"
QT_MOC_LITERAL(8, 38, 7), // "tamanio"
QT_MOC_LITERAL(9, 46, 4), // "ejes"
QT_MOC_LITERAL(10, 51, 7), // "iniciox"
QT_MOC_LITERAL(11, 59, 7), // "inicioy"
QT_MOC_LITERAL(12, 67, 6), // "grosor"
QT_MOC_LITERAL(13, 74, 5), // "color"
QT_MOC_LITERAL(14, 80, 5), // "barra"
QT_MOC_LITERAL(15, 86, 14), // "desplazamiento"
QT_MOC_LITERAL(16, 101, 4), // "nota"
QT_MOC_LITERAL(17, 106, 6), // "nombre"
QT_MOC_LITERAL(18, 113, 13), // "lineaPromedio"
QT_MOC_LITERAL(19, 127, 12) // "notaPromedio"

    },
    "Grafica\0iniciar\0\0ancho\0alto\0texto\0x\0"
    "y\0tamanio\0ejes\0iniciox\0inicioy\0grosor\0"
    "color\0barra\0desplazamiento\0nota\0nombre\0"
    "lineaPromedio\0notaPromedio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Grafica[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    4,   44,    2, 0x0a /* Public */,
       9,    6,   53,    2, 0x0a /* Public */,
      14,    6,   66,    2, 0x0a /* Public */,
      18,    3,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int,    6,    7,    5,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QColor,   10,   11,   12,    3,    4,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   15,   10,   11,    4,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,    4,   19,

       0        // eod
};

void Grafica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Grafica *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iniciar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->texto((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->ejes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QColor(*)>(_a[6]))); break;
        case 3: _t->barra((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 4: _t->lineaPromedio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Grafica::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Grafica.data,
    qt_meta_data_Grafica,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Grafica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Grafica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Grafica.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Grafica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
