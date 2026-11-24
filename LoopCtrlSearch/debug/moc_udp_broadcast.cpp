/****************************************************************************
** Meta object code from reading C++ file 'udp_broadcast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../udp_broadcast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udp_broadcast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_udp_broadcast_t {
    QByteArrayData data[48];
    char stringdata0[637];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_udp_broadcast_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_udp_broadcast_t qt_meta_stringdata_udp_broadcast = {
    {
QT_MOC_LITERAL(0, 0, 13), // "udp_broadcast"
QT_MOC_LITERAL(1, 14, 15), // "udp_send_single"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "uint8_t*"
QT_MOC_LITERAL(4, 40, 9), // "send_data"
QT_MOC_LITERAL(5, 50, 7), // "uint8_t"
QT_MOC_LITERAL(6, 58, 8), // "data_len"
QT_MOC_LITERAL(7, 67, 12), // "QHostAddress"
QT_MOC_LITERAL(8, 80, 7), // "address"
QT_MOC_LITERAL(9, 88, 8), // "uint16_t"
QT_MOC_LITERAL(10, 97, 4), // "port"
QT_MOC_LITERAL(11, 102, 23), // "broadcast_sendValidData"
QT_MOC_LITERAL(12, 126, 23), // "broadcast_recvValidData"
QT_MOC_LITERAL(13, 150, 8), // "devInfo*"
QT_MOC_LITERAL(14, 159, 8), // "dev_info"
QT_MOC_LITERAL(15, 168, 16), // "udp_recvPlanData"
QT_MOC_LITERAL(16, 185, 12), // "devPlanInfo*"
QT_MOC_LITERAL(17, 198, 13), // "dev_plan_info"
QT_MOC_LITERAL(18, 212, 15), // "udp_recvEnvData"
QT_MOC_LITERAL(19, 228, 8), // "env_info"
QT_MOC_LITERAL(20, 237, 18), // "udp_recvSwitchData"
QT_MOC_LITERAL(21, 256, 10), // "switch_str"
QT_MOC_LITERAL(22, 267, 17), // "udp_recvAngleData"
QT_MOC_LITERAL(23, 285, 9), // "angle_str"
QT_MOC_LITERAL(24, 295, 19), // "udp_recvWellLidData"
QT_MOC_LITERAL(25, 315, 12), // "well_lid_str"
QT_MOC_LITERAL(26, 328, 19), // "udp_recvLoopstaData"
QT_MOC_LITERAL(27, 348, 8), // "loop_sta"
QT_MOC_LITERAL(28, 357, 15), // "udp_recvEleData"
QT_MOC_LITERAL(29, 373, 12), // "dev_EleInfo*"
QT_MOC_LITERAL(30, 386, 7), // "dev_ele"
QT_MOC_LITERAL(31, 394, 14), // "udp_recvRelNum"
QT_MOC_LITERAL(32, 409, 6), // "relnum"
QT_MOC_LITERAL(33, 416, 18), // "udp_recvEnergyPara"
QT_MOC_LITERAL(34, 435, 14), // "dev_EnergyPara"
QT_MOC_LITERAL(35, 450, 11), // "energy_para"
QT_MOC_LITERAL(36, 462, 18), // "udp_recvServerInfo"
QT_MOC_LITERAL(37, 481, 13), // "devServerInfo"
QT_MOC_LITERAL(38, 495, 10), // "dev_server"
QT_MOC_LITERAL(39, 506, 17), // "udp_recvSensorUse"
QT_MOC_LITERAL(40, 524, 19), // "SENSOR_485_USE_TYPE"
QT_MOC_LITERAL(41, 544, 10), // "sensor_use"
QT_MOC_LITERAL(42, 555, 16), // "udp_recvTimeZone"
QT_MOC_LITERAL(43, 572, 8), // "timezone"
QT_MOC_LITERAL(44, 581, 18), // "broadcast_sendData"
QT_MOC_LITERAL(45, 600, 15), // "recvDataPorcess"
QT_MOC_LITERAL(46, 616, 11), // "QUdpSocket*"
QT_MOC_LITERAL(47, 628, 8) // "curr_udp"

    },
    "udp_broadcast\0udp_send_single\0\0uint8_t*\0"
    "send_data\0uint8_t\0data_len\0QHostAddress\0"
    "address\0uint16_t\0port\0broadcast_sendValidData\0"
    "broadcast_recvValidData\0devInfo*\0"
    "dev_info\0udp_recvPlanData\0devPlanInfo*\0"
    "dev_plan_info\0udp_recvEnvData\0env_info\0"
    "udp_recvSwitchData\0switch_str\0"
    "udp_recvAngleData\0angle_str\0"
    "udp_recvWellLidData\0well_lid_str\0"
    "udp_recvLoopstaData\0loop_sta\0"
    "udp_recvEleData\0dev_EleInfo*\0dev_ele\0"
    "udp_recvRelNum\0relnum\0udp_recvEnergyPara\0"
    "dev_EnergyPara\0energy_para\0"
    "udp_recvServerInfo\0devServerInfo\0"
    "dev_server\0udp_recvSensorUse\0"
    "SENSOR_485_USE_TYPE\0sensor_use\0"
    "udp_recvTimeZone\0timezone\0broadcast_sendData\0"
    "recvDataPorcess\0QUdpSocket*\0curr_udp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_udp_broadcast[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   99,    2, 0x06 /* Public */,
      11,    2,  108,    2, 0x06 /* Public */,
      12,    1,  113,    2, 0x06 /* Public */,
      15,    1,  116,    2, 0x06 /* Public */,
      18,    1,  119,    2, 0x06 /* Public */,
      20,    1,  122,    2, 0x06 /* Public */,
      22,    1,  125,    2, 0x06 /* Public */,
      24,    1,  128,    2, 0x06 /* Public */,
      26,    1,  131,    2, 0x06 /* Public */,
      28,    1,  134,    2, 0x06 /* Public */,
      31,    1,  137,    2, 0x06 /* Public */,
      33,    1,  140,    2, 0x06 /* Public */,
      36,    1,  143,    2, 0x06 /* Public */,
      39,    1,  146,    2, 0x06 /* Public */,
      42,    1,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    2,  152,    2, 0x0a /* Public */,
      45,    1,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, 0x80000000 | 3,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 5,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Int,   43,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,    6,
    QMetaType::Void, 0x80000000 | 46,   47,

       0        // eod
};

void udp_broadcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<udp_broadcast *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->udp_send_single((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< QHostAddress(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4]))); break;
        case 1: _t->broadcast_sendValidData((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 2: _t->broadcast_recvValidData((*reinterpret_cast< devInfo*(*)>(_a[1]))); break;
        case 3: _t->udp_recvPlanData((*reinterpret_cast< devPlanInfo*(*)>(_a[1]))); break;
        case 4: _t->udp_recvEnvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->udp_recvSwitchData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->udp_recvAngleData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->udp_recvWellLidData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->udp_recvLoopstaData((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 9: _t->udp_recvEleData((*reinterpret_cast< dev_EleInfo*(*)>(_a[1]))); break;
        case 10: _t->udp_recvRelNum((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 11: _t->udp_recvEnergyPara((*reinterpret_cast< dev_EnergyPara(*)>(_a[1]))); break;
        case 12: _t->udp_recvServerInfo((*reinterpret_cast< devServerInfo(*)>(_a[1]))); break;
        case 13: _t->udp_recvSensorUse((*reinterpret_cast< SENSOR_485_USE_TYPE(*)>(_a[1]))); break;
        case 14: _t->udp_recvTimeZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->broadcast_sendData((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 16: _t->recvDataPorcess((*reinterpret_cast< QUdpSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QUdpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (udp_broadcast::*)(uint8_t * , uint8_t , QHostAddress , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_send_single)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(uint8_t * , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::broadcast_sendValidData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(devInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::broadcast_recvValidData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(devPlanInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvPlanData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvEnvData)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvSwitchData)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvAngleData)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvWellLidData)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvLoopstaData)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(dev_EleInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvEleData)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvRelNum)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(dev_EnergyPara );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvEnergyPara)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(devServerInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvServerInfo)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(SENSOR_485_USE_TYPE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvSensorUse)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (udp_broadcast::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_broadcast::udp_recvTimeZone)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject udp_broadcast::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_udp_broadcast.data,
    qt_meta_data_udp_broadcast,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *udp_broadcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *udp_broadcast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_udp_broadcast.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int udp_broadcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void udp_broadcast::udp_send_single(uint8_t * _t1, uint8_t _t2, QHostAddress _t3, uint16_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void udp_broadcast::broadcast_sendValidData(uint8_t * _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void udp_broadcast::broadcast_recvValidData(devInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void udp_broadcast::udp_recvPlanData(devPlanInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void udp_broadcast::udp_recvEnvData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void udp_broadcast::udp_recvSwitchData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void udp_broadcast::udp_recvAngleData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void udp_broadcast::udp_recvWellLidData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void udp_broadcast::udp_recvLoopstaData(uint8_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void udp_broadcast::udp_recvEleData(dev_EleInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void udp_broadcast::udp_recvRelNum(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void udp_broadcast::udp_recvEnergyPara(dev_EnergyPara _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void udp_broadcast::udp_recvServerInfo(devServerInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void udp_broadcast::udp_recvSensorUse(SENSOR_485_USE_TYPE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void udp_broadcast::udp_recvTimeZone(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
