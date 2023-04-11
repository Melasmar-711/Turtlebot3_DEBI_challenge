/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QLineEdit *txt_j1;
    QPushButton *btn_timer_start;
    QLineEdit *txt_j2;
    QLineEdit *txt_j3;
    QLineEdit *txt_j4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txt_z;
    QLabel *label_8;
    QLineEdit *txt_y;
    QLabel *label_9;
    QLineEdit *txt_x;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *btn_init_pose;
    QPushButton *btn_home_pose;
    QLabel *label_18;
    QPlainTextEdit *plainTextEdit_log;
    QPushButton *btn_gripper_close;
    QPushButton *btn_gripper_open;
    QTabWidget *tabWidget;
    QWidget *tab_js;
    QPushButton *btn_read_joint_angle;
    QPushButton *btn_send_joint_angle;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QDoubleSpinBox *doubleSpinBox_j1;
    QDoubleSpinBox *doubleSpinBox_j2;
    QDoubleSpinBox *doubleSpinBox_j3;
    QDoubleSpinBox *doubleSpinBox_j4;
    QLabel *label_33;
    QDoubleSpinBox *doubleSpinBox_time_js;
    QLabel *label_34;
    QWidget *tab_cs;
    QDoubleSpinBox *doubleSpinBox_x;
    QPushButton *btn_send_kinematic_pose;
    QLabel *label_27;
    QDoubleSpinBox *doubleSpinBox_z;
    QLabel *label_28;
    QDoubleSpinBox *doubleSpinBox_y;
    QPushButton *btn_read_kinematic_pose;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QDoubleSpinBox *doubleSpinBox_time_cs;
    QLabel *label_35;
    QLabel *label_36;
    QDoubleSpinBox *doubleSpinBox_gripper;
    QLabel *label_37;
    QPushButton *btn_set_gripper;
    QLabel *label_38;
    QLineEdit *txt_grip;
    QLabel *label_39;
    QLabel *label_40;
    QMenuBar *menubar;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->setEnabled(true);
        MainWindowDesign->resize(793, 550);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMinimumSize(QSize(793, 550));
        MainWindowDesign->setMaximumSize(QSize(793, 550));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_j1 = new QLineEdit(centralwidget);
        txt_j1->setObjectName(QString::fromUtf8("txt_j1"));
        txt_j1->setEnabled(true);
        txt_j1->setGeometry(QRect(510, 52, 81, 22));
        txt_j1->setLayoutDirection(Qt::LeftToRight);
        txt_j1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j1->setReadOnly(true);
        btn_timer_start = new QPushButton(centralwidget);
        btn_timer_start->setObjectName(QString::fromUtf8("btn_timer_start"));
        btn_timer_start->setGeometry(QRect(460, 10, 321, 31));
        txt_j2 = new QLineEdit(centralwidget);
        txt_j2->setObjectName(QString::fromUtf8("txt_j2"));
        txt_j2->setEnabled(true);
        txt_j2->setGeometry(QRect(510, 82, 81, 22));
        txt_j2->setLayoutDirection(Qt::LeftToRight);
        txt_j2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j2->setReadOnly(true);
        txt_j3 = new QLineEdit(centralwidget);
        txt_j3->setObjectName(QString::fromUtf8("txt_j3"));
        txt_j3->setEnabled(true);
        txt_j3->setGeometry(QRect(510, 112, 81, 22));
        txt_j3->setLayoutDirection(Qt::LeftToRight);
        txt_j3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j3->setReadOnly(true);
        txt_j4 = new QLineEdit(centralwidget);
        txt_j4->setObjectName(QString::fromUtf8("txt_j4"));
        txt_j4->setEnabled(true);
        txt_j4->setGeometry(QRect(510, 142, 81, 22));
        txt_j4->setLayoutDirection(Qt::LeftToRight);
        txt_j4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j4->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 56, 59, 14));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 86, 59, 14));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(460, 116, 59, 14));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(460, 146, 59, 14));
        txt_z = new QLineEdit(centralwidget);
        txt_z->setObjectName(QString::fromUtf8("txt_z"));
        txt_z->setEnabled(true);
        txt_z->setGeometry(QRect(670, 108, 81, 22));
        txt_z->setLayoutDirection(Qt::LeftToRight);
        txt_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_z->setReadOnly(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(650, 112, 59, 14));
        txt_y = new QLineEdit(centralwidget);
        txt_y->setObjectName(QString::fromUtf8("txt_y"));
        txt_y->setEnabled(true);
        txt_y->setGeometry(QRect(670, 78, 81, 22));
        txt_y->setLayoutDirection(Qt::LeftToRight);
        txt_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_y->setReadOnly(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(650, 82, 59, 14));
        txt_x = new QLineEdit(centralwidget);
        txt_x->setObjectName(QString::fromUtf8("txt_x"));
        txt_x->setEnabled(true);
        txt_x->setGeometry(QRect(670, 48, 81, 22));
        txt_x->setLayoutDirection(Qt::LeftToRight);
        txt_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_x->setReadOnly(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(650, 52, 59, 14));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(595, 56, 59, 14));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(595, 86, 59, 14));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(595, 116, 59, 14));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(595, 146, 59, 14));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(755, 112, 59, 14));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(755, 82, 59, 14));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(755, 52, 59, 14));
        btn_init_pose = new QPushButton(centralwidget);
        btn_init_pose->setObjectName(QString::fromUtf8("btn_init_pose"));
        btn_init_pose->setEnabled(false);
        btn_init_pose->setGeometry(QRect(460, 176, 151, 31));
        btn_home_pose = new QPushButton(centralwidget);
        btn_home_pose->setObjectName(QString::fromUtf8("btn_home_pose"));
        btn_home_pose->setEnabled(false);
        btn_home_pose->setGeometry(QRect(630, 176, 151, 31));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 10, 59, 21));
        plainTextEdit_log = new QPlainTextEdit(centralwidget);
        plainTextEdit_log->setObjectName(QString::fromUtf8("plainTextEdit_log"));
        plainTextEdit_log->setGeometry(QRect(10, 40, 421, 461));
        plainTextEdit_log->setReadOnly(true);
        btn_gripper_close = new QPushButton(centralwidget);
        btn_gripper_close->setObjectName(QString::fromUtf8("btn_gripper_close"));
        btn_gripper_close->setEnabled(false);
        btn_gripper_close->setGeometry(QRect(630, 216, 151, 31));
        btn_gripper_open = new QPushButton(centralwidget);
        btn_gripper_open->setObjectName(QString::fromUtf8("btn_gripper_open"));
        btn_gripper_open->setEnabled(false);
        btn_gripper_open->setGeometry(QRect(460, 216, 151, 31));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(460, 256, 321, 211));
        tab_js = new QWidget();
        tab_js->setObjectName(QString::fromUtf8("tab_js"));
        btn_read_joint_angle = new QPushButton(tab_js);
        btn_read_joint_angle->setObjectName(QString::fromUtf8("btn_read_joint_angle"));
        btn_read_joint_angle->setEnabled(false);
        btn_read_joint_angle->setGeometry(QRect(9, 140, 141, 31));
        btn_send_joint_angle = new QPushButton(tab_js);
        btn_send_joint_angle->setObjectName(QString::fromUtf8("btn_send_joint_angle"));
        btn_send_joint_angle->setEnabled(false);
        btn_send_joint_angle->setGeometry(QRect(169, 140, 141, 31));
        label_19 = new QLabel(tab_js);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 80, 59, 14));
        label_20 = new QLabel(tab_js);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 110, 59, 14));
        label_21 = new QLabel(tab_js);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(180, 80, 59, 14));
        label_22 = new QLabel(tab_js);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(180, 110, 59, 14));
        label_23 = new QLabel(tab_js);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(180, 50, 59, 14));
        label_24 = new QLabel(tab_js);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 50, 59, 14));
        label_25 = new QLabel(tab_js);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(180, 20, 59, 14));
        label_26 = new QLabel(tab_js);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 20, 59, 14));
        doubleSpinBox_j1 = new QDoubleSpinBox(tab_js);
        doubleSpinBox_j1->setObjectName(QString::fromUtf8("doubleSpinBox_j1"));
        doubleSpinBox_j1->setGeometry(QRect(70, 16, 101, 23));
        doubleSpinBox_j1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j1->setDecimals(3);
        doubleSpinBox_j1->setMinimum(-3.140000000000000);
        doubleSpinBox_j1->setMaximum(3.140000000000000);
        doubleSpinBox_j1->setSingleStep(0.050000000000000);
        doubleSpinBox_j2 = new QDoubleSpinBox(tab_js);
        doubleSpinBox_j2->setObjectName(QString::fromUtf8("doubleSpinBox_j2"));
        doubleSpinBox_j2->setGeometry(QRect(70, 46, 101, 23));
        doubleSpinBox_j2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j2->setDecimals(3);
        doubleSpinBox_j2->setMinimum(-3.140000000000000);
        doubleSpinBox_j2->setMaximum(3.140000000000000);
        doubleSpinBox_j2->setSingleStep(0.050000000000000);
        doubleSpinBox_j3 = new QDoubleSpinBox(tab_js);
        doubleSpinBox_j3->setObjectName(QString::fromUtf8("doubleSpinBox_j3"));
        doubleSpinBox_j3->setGeometry(QRect(70, 76, 101, 23));
        doubleSpinBox_j3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j3->setDecimals(3);
        doubleSpinBox_j3->setMinimum(-3.140000000000000);
        doubleSpinBox_j3->setMaximum(3.140000000000000);
        doubleSpinBox_j3->setSingleStep(0.050000000000000);
        doubleSpinBox_j4 = new QDoubleSpinBox(tab_js);
        doubleSpinBox_j4->setObjectName(QString::fromUtf8("doubleSpinBox_j4"));
        doubleSpinBox_j4->setGeometry(QRect(70, 106, 101, 23));
        doubleSpinBox_j4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j4->setDecimals(3);
        doubleSpinBox_j4->setMinimum(-3.140000000000000);
        doubleSpinBox_j4->setMaximum(3.140000000000000);
        doubleSpinBox_j4->setSingleStep(0.050000000000000);
        label_33 = new QLabel(tab_js);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(221, 81, 59, 14));
        doubleSpinBox_time_js = new QDoubleSpinBox(tab_js);
        doubleSpinBox_time_js->setObjectName(QString::fromUtf8("doubleSpinBox_time_js"));
        doubleSpinBox_time_js->setGeometry(QRect(216, 107, 71, 23));
        doubleSpinBox_time_js->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_time_js->setMinimum(-3.140000000000000);
        doubleSpinBox_time_js->setMaximum(10.000000000000000);
        doubleSpinBox_time_js->setSingleStep(0.500000000000000);
        doubleSpinBox_time_js->setValue(2.000000000000000);
        label_34 = new QLabel(tab_js);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(291, 110, 59, 14));
        tabWidget->addTab(tab_js, QString());
        tab_cs = new QWidget();
        tab_cs->setObjectName(QString::fromUtf8("tab_cs"));
        doubleSpinBox_x = new QDoubleSpinBox(tab_cs);
        doubleSpinBox_x->setObjectName(QString::fromUtf8("doubleSpinBox_x"));
        doubleSpinBox_x->setGeometry(QRect(60, 19, 101, 23));
        doubleSpinBox_x->setDecimals(3);
        doubleSpinBox_x->setMinimum(-1.000000000000000);
        doubleSpinBox_x->setMaximum(1.000000000000000);
        doubleSpinBox_x->setSingleStep(0.010000000000000);
        btn_send_kinematic_pose = new QPushButton(tab_cs);
        btn_send_kinematic_pose->setObjectName(QString::fromUtf8("btn_send_kinematic_pose"));
        btn_send_kinematic_pose->setEnabled(false);
        btn_send_kinematic_pose->setGeometry(QRect(169, 110, 141, 31));
        label_27 = new QLabel(tab_cs);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(170, 83, 59, 14));
        doubleSpinBox_z = new QDoubleSpinBox(tab_cs);
        doubleSpinBox_z->setObjectName(QString::fromUtf8("doubleSpinBox_z"));
        doubleSpinBox_z->setGeometry(QRect(60, 79, 101, 23));
        doubleSpinBox_z->setDecimals(3);
        doubleSpinBox_z->setMinimum(-1.000000000000000);
        doubleSpinBox_z->setMaximum(1.000000000000000);
        doubleSpinBox_z->setSingleStep(0.010000000000000);
        label_28 = new QLabel(tab_cs);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(170, 53, 59, 14));
        doubleSpinBox_y = new QDoubleSpinBox(tab_cs);
        doubleSpinBox_y->setObjectName(QString::fromUtf8("doubleSpinBox_y"));
        doubleSpinBox_y->setGeometry(QRect(60, 49, 101, 23));
        doubleSpinBox_y->setDecimals(3);
        doubleSpinBox_y->setMinimum(-1.000000000000000);
        doubleSpinBox_y->setMaximum(1.000000000000000);
        doubleSpinBox_y->setSingleStep(0.010000000000000);
        btn_read_kinematic_pose = new QPushButton(tab_cs);
        btn_read_kinematic_pose->setObjectName(QString::fromUtf8("btn_read_kinematic_pose"));
        btn_read_kinematic_pose->setEnabled(false);
        btn_read_kinematic_pose->setGeometry(QRect(7, 110, 151, 31));
        label_29 = new QLabel(tab_cs);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(33, 23, 50, 14));
        label_30 = new QLabel(tab_cs);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(33, 83, 50, 14));
        label_31 = new QLabel(tab_cs);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(170, 23, 59, 14));
        label_32 = new QLabel(tab_cs);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(33, 50, 50, 20));
        doubleSpinBox_time_cs = new QDoubleSpinBox(tab_cs);
        doubleSpinBox_time_cs->setObjectName(QString::fromUtf8("doubleSpinBox_time_cs"));
        doubleSpinBox_time_cs->setGeometry(QRect(213, 78, 71, 23));
        doubleSpinBox_time_cs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_time_cs->setMinimum(-3.140000000000000);
        doubleSpinBox_time_cs->setMaximum(10.000000000000000);
        doubleSpinBox_time_cs->setSingleStep(0.500000000000000);
        doubleSpinBox_time_cs->setValue(2.000000000000000);
        label_35 = new QLabel(tab_cs);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(287, 83, 59, 14));
        label_36 = new QLabel(tab_cs);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(217, 53, 59, 14));
        tabWidget->addTab(tab_cs, QString());
        doubleSpinBox_gripper = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_gripper->setObjectName(QString::fromUtf8("doubleSpinBox_gripper"));
        doubleSpinBox_gripper->setGeometry(QRect(517, 480, 81, 23));
        doubleSpinBox_gripper->setMinimumSize(QSize(0, 4));
        doubleSpinBox_gripper->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_gripper->setDecimals(3);
        doubleSpinBox_gripper->setMinimum(-1.135000000000000);
        doubleSpinBox_gripper->setMaximum(1.135000000000000);
        doubleSpinBox_gripper->setSingleStep(0.002000000000000);
        doubleSpinBox_gripper->setValue(0.000000000000000);
        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(463, 480, 59, 20));
        btn_set_gripper = new QPushButton(centralwidget);
        btn_set_gripper->setObjectName(QString::fromUtf8("btn_set_gripper"));
        btn_set_gripper->setEnabled(false);
        btn_set_gripper->setGeometry(QRect(630, 477, 141, 31));
        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(629, 143, 61, 20));
        txt_grip = new QLineEdit(centralwidget);
        txt_grip->setObjectName(QString::fromUtf8("txt_grip"));
        txt_grip->setEnabled(true);
        txt_grip->setGeometry(QRect(686, 143, 60, 22));
        txt_grip->setLayoutDirection(Qt::LeftToRight);
        txt_grip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_grip->setReadOnly(true);
        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(750, 146, 59, 14));
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(603, 484, 21, 16));
        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "OpenManipulator control GUI", nullptr));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", nullptr));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", nullptr));
        txt_j1->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        btn_timer_start->setText(QApplication::translate("MainWindowDesign", "Timer Start", nullptr));
        txt_j2->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_j3->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_j4->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_4->setText(QApplication::translate("MainWindowDesign", "Joint 1", nullptr));
        label_5->setText(QApplication::translate("MainWindowDesign", "Joint 2", nullptr));
        label_6->setText(QApplication::translate("MainWindowDesign", "Joint 3", nullptr));
        label_7->setText(QApplication::translate("MainWindowDesign", "Joint 4", nullptr));
        txt_z->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_8->setText(QApplication::translate("MainWindowDesign", "Z", nullptr));
        txt_y->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_9->setText(QApplication::translate("MainWindowDesign", "Y", nullptr));
        txt_x->setText(QApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_10->setText(QApplication::translate("MainWindowDesign", "X", nullptr));
        label_11->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_12->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_13->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_14->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_15->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        label_16->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        label_17->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        btn_init_pose->setText(QApplication::translate("MainWindowDesign", "Init pose", nullptr));
        btn_home_pose->setText(QApplication::translate("MainWindowDesign", "Home pose", nullptr));
        label_18->setText(QApplication::translate("MainWindowDesign", "Logging", nullptr));
        btn_gripper_close->setText(QApplication::translate("MainWindowDesign", "Gripper close", nullptr));
        btn_gripper_open->setText(QApplication::translate("MainWindowDesign", "Gripper open", nullptr));
        btn_read_joint_angle->setText(QApplication::translate("MainWindowDesign", "Read joint angle", nullptr));
        btn_send_joint_angle->setText(QApplication::translate("MainWindowDesign", "Send", nullptr));
        label_19->setText(QApplication::translate("MainWindowDesign", "Joint 3", nullptr));
        label_20->setText(QApplication::translate("MainWindowDesign", "Joint 4", nullptr));
        label_21->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_22->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_23->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_24->setText(QApplication::translate("MainWindowDesign", "Joint 2", nullptr));
        label_25->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_26->setText(QApplication::translate("MainWindowDesign", "Joint 1", nullptr));
        label_33->setText(QApplication::translate("MainWindowDesign", "time", nullptr));
        label_34->setText(QApplication::translate("MainWindowDesign", "s", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_js), QApplication::translate("MainWindowDesign", "Joint space", nullptr));
        btn_send_kinematic_pose->setText(QApplication::translate("MainWindowDesign", "Send", nullptr));
        label_27->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        label_28->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        btn_read_kinematic_pose->setText(QApplication::translate("MainWindowDesign", "Read kinematic pose", nullptr));
        label_29->setText(QApplication::translate("MainWindowDesign", "X ", nullptr));
        label_30->setText(QApplication::translate("MainWindowDesign", "Z", nullptr));
        label_31->setText(QApplication::translate("MainWindowDesign", "m", nullptr));
        label_32->setText(QApplication::translate("MainWindowDesign", "Y", nullptr));
        label_35->setText(QApplication::translate("MainWindowDesign", "s", nullptr));
        label_36->setText(QApplication::translate("MainWindowDesign", "time", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cs), QApplication::translate("MainWindowDesign", "Task space", nullptr));
        label_37->setText(QApplication::translate("MainWindowDesign", "Gripper", nullptr));
        btn_set_gripper->setText(QApplication::translate("MainWindowDesign", "Set gripper", nullptr));
        label_38->setText(QApplication::translate("MainWindowDesign", "Gripper", nullptr));
        txt_grip->setText(QApplication::translate("MainWindowDesign", "0.00", nullptr));
        label_39->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        label_40->setText(QApplication::translate("MainWindowDesign", "rad", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
