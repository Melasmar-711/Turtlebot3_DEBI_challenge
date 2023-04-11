/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/turtlebot3_manipulation/turtlebot3_manipulation_gui/include/turtlebot3_manipulation_gui/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow_t qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 39), // "turtlebot3_manipulation_gui::..."
QT_MOC_LITERAL(1, 40, 13), // "timerCallback"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 26), // "on_btn_timer_start_clicked"
QT_MOC_LITERAL(4, 82, 24), // "on_btn_init_pose_clicked"
QT_MOC_LITERAL(5, 107, 24), // "on_btn_home_pose_clicked"
QT_MOC_LITERAL(6, 132, 27), // "on_btn_gripper_open_clicked"
QT_MOC_LITERAL(7, 160, 28), // "on_btn_gripper_close_clicked"
QT_MOC_LITERAL(8, 189, 31), // "on_btn_read_joint_angle_clicked"
QT_MOC_LITERAL(9, 221, 31), // "on_btn_send_joint_angle_clicked"
QT_MOC_LITERAL(10, 253, 34), // "on_btn_read_kinematic_pose_cl..."
QT_MOC_LITERAL(11, 288, 34), // "on_btn_send_kinematic_pose_cl..."
QT_MOC_LITERAL(12, 323, 26), // "on_btn_set_gripper_clicked"
QT_MOC_LITERAL(13, 350, 11) // "tabSelected"

    },
    "turtlebot3_manipulation_gui::MainWindow\0"
    "timerCallback\0\0on_btn_timer_start_clicked\0"
    "on_btn_init_pose_clicked\0"
    "on_btn_home_pose_clicked\0"
    "on_btn_gripper_open_clicked\0"
    "on_btn_gripper_close_clicked\0"
    "on_btn_read_joint_angle_clicked\0"
    "on_btn_send_joint_angle_clicked\0"
    "on_btn_read_kinematic_pose_clicked\0"
    "on_btn_send_kinematic_pose_clicked\0"
    "on_btn_set_gripper_clicked\0tabSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_turtlebot3_manipulation_gui__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void turtlebot3_manipulation_gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timerCallback(); break;
        case 1: _t->on_btn_timer_start_clicked(); break;
        case 2: _t->on_btn_init_pose_clicked(); break;
        case 3: _t->on_btn_home_pose_clicked(); break;
        case 4: _t->on_btn_gripper_open_clicked(); break;
        case 5: _t->on_btn_gripper_close_clicked(); break;
        case 6: _t->on_btn_read_joint_angle_clicked(); break;
        case 7: _t->on_btn_send_joint_angle_clicked(); break;
        case 8: _t->on_btn_read_kinematic_pose_clicked(); break;
        case 9: _t->on_btn_send_kinematic_pose_clicked(); break;
        case 10: _t->on_btn_set_gripper_clicked(); break;
        case 11: _t->tabSelected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject turtlebot3_manipulation_gui::MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow.data,
    qt_meta_data_turtlebot3_manipulation_gui__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *turtlebot3_manipulation_gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *turtlebot3_manipulation_gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_turtlebot3_manipulation_gui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int turtlebot3_manipulation_gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
