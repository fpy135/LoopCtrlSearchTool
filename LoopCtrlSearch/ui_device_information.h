/********************************************************************************
** Form generated from reading UI file 'device_information.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_INFORMATION_H
#define UI_DEVICE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_device_information
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_28;
    QFormLayout *formLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_26;
    QLabel *label_14;
    QLineEdit *dev_id;
    QLabel *label_15;
    QLineEdit *net_type;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_25;
    QLabel *label_2;
    QLineEdit *eth_ip;
    QLabel *label_3;
    QLineEdit *eth_netmask;
    QLabel *label_4;
    QLineEdit *eth_gw;
    QLabel *label_5;
    QLineEdit *eth_dhcp;
    QLabel *label_6;
    QLineEdit *eth_mac;
    QLabel *label_16;
    QLineEdit *eth_dns;
    QPushButton *set_btn_eth;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_24;
    QLabel *label_8;
    QLineEdit *cat1_ip;
    QLabel *label_9;
    QLineEdit *cat1_imei;
    QLabel *label_10;
    QLineEdit *cat1_imsi;
    QLabel *label_11;
    QLineEdit *cat1_iccid;
    QLabel *label_13;
    QLineEdit *cat1_rssi;
    QLabel *label_94;
    QLineEdit *cat1_apn;
    QPushButton *set_btn_4g;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_19;
    QLabel *label_12;
    QLineEdit *server_ip;
    QLabel *label_17;
    QLineEdit *server_port;
    QLabel *label_90;
    QLineEdit *username;
    QLabel *label_91;
    QLineEdit *password;
    QLabel *label_18;
    QLineEdit *ntp;
    QPushButton *set_btn_server;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_18;
    QLabel *label_89;
    QLineEdit *rel_num;
    QLabel *label_92;
    QLineEdit *RT;
    QPushButton *set_btn_rel_num;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_27;
    QLabel *label_93;
    QLineEdit *timeZone;
    QPushButton *set_btn_other_para;
    QTabWidget *environment;
    QWidget *env;
    QGridLayout *gridLayout_23;
    QTextBrowser *textBrowser_env;
    QWidget *angle;
    QTextBrowser *textBrowser_angle;
    QWidget *well_lid;
    QTextBrowser *textBrowser_well_lid;
    QWidget *switch_in;
    QTextBrowser *textBrowser_switch;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_22;
    QCheckBox *sb_windspeed;
    QCheckBox *yn_temp;
    QCheckBox *sb_winddir;
    QCheckBox *yn_all_UV;
    QCheckBox *sb_temp;
    QCheckBox *yn_all_1a;
    QCheckBox *ml_angle;
    QCheckBox *yn_all_ff;
    QCheckBox *ml_well_lid;
    QCheckBox *yn_xf900_all_ff;
    QCheckBox *jf_door;
    QCheckBox *th_sun;
    QCheckBox *th_temp;
    QCheckBox *lk_sun;
    QCheckBox *th_aqi;
    QPushButton *set_btn_sensor_use;
    QCheckBox *th_wind;
    QPushButton *btn_plan_refresh;
    QPushButton *btn_env_refresh;
    QPushButton *btn_ele_refresh;
    QPushButton *btn_loopsta_refresh;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_20;
    QLabel *label_122;
    QLabel *current_c;
    QLabel *current_Ia_1;
    QLabel *label_132;
    QLabel *voltage_b;
    QLabel *label_120;
    QLabel *label_124;
    QLabel *current_Ib_4;
    QLabel *current_Ib_8;
    QLabel *label_144;
    QLabel *label_117;
    QLabel *current_Ib_7;
    QLabel *label_146;
    QLabel *label_141;
    QLabel *voltage_a;
    QLabel *label_125;
    QLabel *current_Ia_8;
    QLabel *energy_a;
    QLabel *label_126;
    QLabel *label_139;
    QLabel *label_127;
    QLabel *current_Ib_3;
    QLabel *label_140;
    QLabel *current_Ia_4;
    QLabel *label_133;
    QLabel *current_Ib_5;
    QLabel *label_130;
    QLabel *current_Ic_3;
    QLabel *current_Ib_6;
    QLabel *current_Ic_4;
    QLabel *voltage_c;
    QLabel *label_134;
    QLabel *current_Ic_8;
    QLabel *label_128;
    QLabel *label_119;
    QLabel *label_136;
    QLabel *current_Ia_7;
    QLabel *label_116;
    QLabel *current_b;
    QLabel *energy_b;
    QLabel *label_114;
    QLabel *label_121;
    QLabel *label_129;
    QLabel *label_131;
    QLabel *current_Ia_5;
    QLabel *label_135;
    QLabel *label_143;
    QLabel *current_Ib_1;
    QLabel *current_Ia_2;
    QLabel *label_115;
    QLabel *label_138;
    QLabel *current_Ic_1;
    QLabel *label_137;
    QLabel *current_Ic_2;
    QLabel *current_Ic_5;
    QLabel *current_Ic_7;
    QLabel *label_123;
    QLabel *current_Ib_2;
    QLabel *current_Ic_6;
    QLabel *current_Ia_6;
    QLabel *energy_c;
    QLabel *label_118;
    QLabel *current_a;
    QLabel *label_145;
    QLabel *label_142;
    QLabel *current_Ia_3;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_21;
    QRadioButton *radioButton_loop_1;
    QRadioButton *radioButton_loop_5;
    QRadioButton *radioButton_loop_2;
    QRadioButton *radioButton_loop_6;
    QRadioButton *radioButton_loop_3;
    QRadioButton *radioButton_loop_7;
    QRadioButton *radioButton_loop_4;
    QRadioButton *radioButton_loop_8;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox_plan_7;
    QGridLayout *gridLayout_13;
    QTabWidget *tabWidget_plan_7;
    QWidget *time_plan_7;
    QGridLayout *gridLayout_14;
    QCheckBox *en_t_plan_7;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QTimeEdit *s_time_1_t_plan_7;
    QTimeEdit *e_time_1_t_plan_7;
    QLabel *label_74;
    QTimeEdit *s_time_2_t_plan_7;
    QTimeEdit *e_time_2_t_plan_7;
    QLabel *label_75;
    QTimeEdit *s_time_3_t_plan_7;
    QTimeEdit *e_time_3_t_plan_7;
    QLabel *label_76;
    QTimeEdit *s_time_4_t_plan_7;
    QTimeEdit *e_time_4_t_plan_7;
    QWidget *sun_plan_7;
    QCheckBox *en_s_plan_7;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLineEdit *s_lux_s_plan_7;
    QLineEdit *e_lux_s_plan_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *set_btn_plan_7;
    QGroupBox *groupBox_plan_3;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget_plan_3;
    QWidget *time_plan_3;
    QGridLayout *gridLayout_6;
    QCheckBox *en_t_plan_3;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QTimeEdit *s_time_1_t_plan_3;
    QTimeEdit *e_time_1_t_plan_3;
    QLabel *label_38;
    QTimeEdit *s_time_2_t_plan_3;
    QTimeEdit *e_time_2_t_plan_3;
    QLabel *label_39;
    QTimeEdit *s_time_3_t_plan_3;
    QTimeEdit *e_time_3_t_plan_3;
    QLabel *label_40;
    QTimeEdit *s_time_4_t_plan_3;
    QTimeEdit *e_time_4_t_plan_3;
    QWidget *sun_plan_3;
    QCheckBox *en_s_plan_3;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLineEdit *s_lux_s_plan_3;
    QLineEdit *e_lux_s_plan_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *set_btn_plan_3;
    QGroupBox *groupBox_plan_6;
    QGridLayout *gridLayout_11;
    QTabWidget *tabWidget_plan_6;
    QWidget *time_plan_6;
    QGridLayout *gridLayout_12;
    QCheckBox *en_t_plan_6;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QTimeEdit *s_time_1_t_plan_6;
    QTimeEdit *e_time_1_t_plan_6;
    QLabel *label_65;
    QTimeEdit *s_time_2_t_plan_6;
    QTimeEdit *e_time_2_t_plan_6;
    QLabel *label_66;
    QTimeEdit *s_time_3_t_plan_6;
    QTimeEdit *e_time_3_t_plan_6;
    QLabel *label_67;
    QTimeEdit *s_time_4_t_plan_6;
    QTimeEdit *e_time_4_t_plan_6;
    QWidget *sun_plan_6;
    QCheckBox *en_s_plan_6;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QLineEdit *s_lux_s_plan_6;
    QLineEdit *e_lux_s_plan_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *set_btn_plan_6;
    QGroupBox *groupBox_plan_8;
    QGridLayout *gridLayout_15;
    QTabWidget *tabWidget_plan_8;
    QWidget *time_plan_8;
    QGridLayout *gridLayout_16;
    QCheckBox *en_t_plan_8;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_82;
    QTimeEdit *s_time_1_t_plan_8;
    QTimeEdit *e_time_1_t_plan_8;
    QLabel *label_83;
    QTimeEdit *s_time_2_t_plan_8;
    QTimeEdit *e_time_2_t_plan_8;
    QLabel *label_84;
    QTimeEdit *s_time_3_t_plan_8;
    QTimeEdit *e_time_3_t_plan_8;
    QLabel *label_85;
    QTimeEdit *s_time_4_t_plan_8;
    QTimeEdit *e_time_4_t_plan_8;
    QWidget *sun_plan_8;
    QCheckBox *en_s_plan_8;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *label_88;
    QLineEdit *s_lux_s_plan_8;
    QLineEdit *e_lux_s_plan_8;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *set_btn_plan_8;
    QGroupBox *groupBox_plan_2;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_plan_2;
    QWidget *time_plan_2;
    QGridLayout *gridLayout_4;
    QCheckBox *en_t_plan_2;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QTimeEdit *s_time_1_t_plan_2;
    QTimeEdit *e_time_1_t_plan_2;
    QLabel *label_29;
    QTimeEdit *s_time_2_t_plan_2;
    QTimeEdit *e_time_2_t_plan_2;
    QLabel *label_30;
    QTimeEdit *s_time_3_t_plan_2;
    QTimeEdit *e_time_3_t_plan_2;
    QLabel *label_31;
    QTimeEdit *s_time_4_t_plan_2;
    QTimeEdit *e_time_4_t_plan_2;
    QWidget *sun_plan_2;
    QCheckBox *en_s_plan_2;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLineEdit *s_lux_s_plan_2;
    QLineEdit *e_lux_s_plan_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *set_btn_plan_2;
    QGroupBox *groupBox_plan_4;
    QGridLayout *gridLayout_7;
    QTabWidget *tabWidget_plan_4;
    QWidget *time_plan_4;
    QGridLayout *gridLayout_8;
    QCheckBox *en_t_plan_4;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QTimeEdit *s_time_1_t_plan_4;
    QTimeEdit *e_time_1_t_plan_4;
    QLabel *label_47;
    QTimeEdit *s_time_2_t_plan_4;
    QTimeEdit *e_time_2_t_plan_4;
    QLabel *label_48;
    QTimeEdit *s_time_3_t_plan_4;
    QTimeEdit *e_time_3_t_plan_4;
    QLabel *label_49;
    QTimeEdit *s_time_4_t_plan_4;
    QTimeEdit *e_time_4_t_plan_4;
    QWidget *sun_plan_4;
    QCheckBox *en_s_plan_4;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLineEdit *s_lux_s_plan_4;
    QLineEdit *e_lux_s_plan_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *set_btn_plan_4;
    QGroupBox *groupBox_plan_5;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget_plan_5;
    QWidget *time_plan_5;
    QGridLayout *gridLayout_10;
    QTimeEdit *s_time_2_t_plan_5;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_56;
    QTimeEdit *s_time_1_t_plan_5;
    QTimeEdit *e_time_4_t_plan_5;
    QTimeEdit *e_time_1_t_plan_5;
    QTimeEdit *e_time_2_t_plan_5;
    QTimeEdit *e_time_3_t_plan_5;
    QCheckBox *en_t_plan_5;
    QTimeEdit *s_time_4_t_plan_5;
    QLabel *label_53;
    QLabel *label_54;
    QTimeEdit *s_time_3_t_plan_5;
    QLabel *label_55;
    QWidget *sun_plan_5;
    QCheckBox *en_s_plan_5;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QLineEdit *s_lux_s_plan_5;
    QLineEdit *e_lux_s_plan_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *set_btn_plan_5;
    QGroupBox *groupBox_plan_1;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget_plan_1;
    QWidget *time_plan_1;
    QGridLayout *gridLayout;
    QCheckBox *en_t_plan_1;
    QLabel *label_7;
    QLabel *label_19;
    QLabel *label;
    QTimeEdit *s_time_1_t_plan_1;
    QTimeEdit *e_time_1_t_plan_1;
    QLabel *label_20;
    QTimeEdit *s_time_2_t_plan_1;
    QTimeEdit *e_time_2_t_plan_1;
    QLabel *label_21;
    QTimeEdit *s_time_3_t_plan_1;
    QTimeEdit *e_time_3_t_plan_1;
    QLabel *label_22;
    QTimeEdit *s_time_4_t_plan_1;
    QTimeEdit *e_time_4_t_plan_1;
    QWidget *sun_plan_1;
    QCheckBox *en_s_plan_1;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *s_lux_s_plan_1;
    QLineEdit *e_lux_s_plan_1;
    QSpacerItem *horizontalSpacer;
    QPushButton *set_btn_plan_1;
    QMenuBar *menubar;
    QMenu *menudevice_information;

    void setupUi(QMainWindow *device_information)
    {
        if (device_information->objectName().isEmpty())
            device_information->setObjectName(QString::fromUtf8("device_information"));
        device_information->resize(1354, 792);
        centralwidget = new QWidget(device_information);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_28 = new QGridLayout(centralwidget);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(191, 71));
        groupBox_3->setMaximumSize(QSize(191, 71));
        gridLayout_26 = new QGridLayout(groupBox_3);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(21, 16));
        label_14->setMaximumSize(QSize(21, 16));

        gridLayout_26->addWidget(label_14, 0, 0, 1, 1);

        dev_id = new QLineEdit(groupBox_3);
        dev_id->setObjectName(QString::fromUtf8("dev_id"));
        dev_id->setMinimumSize(QSize(150, 20));
        dev_id->setMaximumSize(QSize(6666, 6666));
        dev_id->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dev_id->setReadOnly(true);

        gridLayout_26->addWidget(dev_id, 0, 1, 1, 2);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(41, 16));
        label_15->setMaximumSize(QSize(51, 21));
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_15, 1, 0, 1, 2);

        net_type = new QLineEdit(groupBox_3);
        net_type->setObjectName(QString::fromUtf8("net_type"));
        net_type->setMinimumSize(QSize(131, 20));
        net_type->setMaximumSize(QSize(131, 20));
        net_type->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        net_type->setReadOnly(true);

        gridLayout_26->addWidget(net_type, 1, 2, 1, 1);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(191, 171));
        groupBox->setMaximumSize(QSize(191, 181));
        gridLayout_25 = new QGridLayout(groupBox);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(41, 16));
        label_2->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_2, 0, 0, 1, 1);

        eth_ip = new QLineEdit(groupBox);
        eth_ip->setObjectName(QString::fromUtf8("eth_ip"));
        eth_ip->setMinimumSize(QSize(131, 20));
        eth_ip->setMaximumSize(QSize(131, 20));
        eth_ip->setEchoMode(QLineEdit::Normal);
        eth_ip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        eth_ip->setDragEnabled(false);
        eth_ip->setCursorMoveStyle(Qt::LogicalMoveStyle);
        eth_ip->setClearButtonEnabled(false);

        gridLayout_25->addWidget(eth_ip, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(41, 16));
        label_3->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_3, 1, 0, 1, 1);

        eth_netmask = new QLineEdit(groupBox);
        eth_netmask->setObjectName(QString::fromUtf8("eth_netmask"));
        eth_netmask->setMinimumSize(QSize(131, 20));
        eth_netmask->setMaximumSize(QSize(131, 20));
        eth_netmask->setFrame(true);
        eth_netmask->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(eth_netmask, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(41, 16));
        label_4->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_4, 2, 0, 1, 1);

        eth_gw = new QLineEdit(groupBox);
        eth_gw->setObjectName(QString::fromUtf8("eth_gw"));
        eth_gw->setMinimumSize(QSize(131, 20));
        eth_gw->setMaximumSize(QSize(131, 20));
        eth_gw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(eth_gw, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(41, 16));
        label_5->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_5, 3, 0, 1, 1);

        eth_dhcp = new QLineEdit(groupBox);
        eth_dhcp->setObjectName(QString::fromUtf8("eth_dhcp"));
        eth_dhcp->setMinimumSize(QSize(131, 20));
        eth_dhcp->setMaximumSize(QSize(131, 20));
        eth_dhcp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(eth_dhcp, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(41, 16));
        label_6->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_6, 4, 0, 1, 1);

        eth_mac = new QLineEdit(groupBox);
        eth_mac->setObjectName(QString::fromUtf8("eth_mac"));
        eth_mac->setMinimumSize(QSize(131, 20));
        eth_mac->setMaximumSize(QSize(131, 20));
        eth_mac->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(eth_mac, 4, 1, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(41, 16));
        label_16->setMaximumSize(QSize(41, 16));

        gridLayout_25->addWidget(label_16, 5, 0, 1, 1);

        eth_dns = new QLineEdit(groupBox);
        eth_dns->setObjectName(QString::fromUtf8("eth_dns"));
        eth_dns->setMinimumSize(QSize(131, 20));
        eth_dns->setMaximumSize(QSize(131, 20));
        eth_dns->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(eth_dns, 5, 1, 1, 1);

        set_btn_eth = new QPushButton(groupBox);
        set_btn_eth->setObjectName(QString::fromUtf8("set_btn_eth"));
        set_btn_eth->setMinimumSize(QSize(71, 23));
        set_btn_eth->setMaximumSize(QSize(71, 23));

        gridLayout_25->addWidget(set_btn_eth, 6, 1, 1, 1);


        formLayout->setWidget(1, QFormLayout::LabelRole, groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(191, 181));
        groupBox_2->setMaximumSize(QSize(191, 181));
        gridLayout_24 = new QGridLayout(groupBox_2);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(31, 16));
        label_8->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_8, 0, 0, 1, 1);

        cat1_ip = new QLineEdit(groupBox_2);
        cat1_ip->setObjectName(QString::fromUtf8("cat1_ip"));
        cat1_ip->setMinimumSize(QSize(131, 20));
        cat1_ip->setMaximumSize(QSize(131, 20));
        cat1_ip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_ip->setReadOnly(true);

        gridLayout_24->addWidget(cat1_ip, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(31, 16));
        label_9->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_9, 1, 0, 1, 1);

        cat1_imei = new QLineEdit(groupBox_2);
        cat1_imei->setObjectName(QString::fromUtf8("cat1_imei"));
        cat1_imei->setMinimumSize(QSize(131, 20));
        cat1_imei->setMaximumSize(QSize(131, 20));
        cat1_imei->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_imei->setReadOnly(true);

        gridLayout_24->addWidget(cat1_imei, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(31, 16));
        label_10->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_10, 2, 0, 1, 1);

        cat1_imsi = new QLineEdit(groupBox_2);
        cat1_imsi->setObjectName(QString::fromUtf8("cat1_imsi"));
        cat1_imsi->setMinimumSize(QSize(131, 20));
        cat1_imsi->setMaximumSize(QSize(131, 20));
        cat1_imsi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_imsi->setReadOnly(true);
        cat1_imsi->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_24->addWidget(cat1_imsi, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(31, 16));
        label_11->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_11, 3, 0, 1, 1);

        cat1_iccid = new QLineEdit(groupBox_2);
        cat1_iccid->setObjectName(QString::fromUtf8("cat1_iccid"));
        cat1_iccid->setMinimumSize(QSize(131, 20));
        cat1_iccid->setMaximumSize(QSize(131, 20));
        cat1_iccid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_iccid->setReadOnly(true);

        gridLayout_24->addWidget(cat1_iccid, 3, 1, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(31, 16));
        label_13->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_13, 4, 0, 1, 1);

        cat1_rssi = new QLineEdit(groupBox_2);
        cat1_rssi->setObjectName(QString::fromUtf8("cat1_rssi"));
        cat1_rssi->setMinimumSize(QSize(131, 20));
        cat1_rssi->setMaximumSize(QSize(131, 20));
        cat1_rssi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_rssi->setReadOnly(true);

        gridLayout_24->addWidget(cat1_rssi, 4, 1, 1, 1);

        label_94 = new QLabel(groupBox_2);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setMinimumSize(QSize(31, 16));
        label_94->setMaximumSize(QSize(31, 16));

        gridLayout_24->addWidget(label_94, 5, 0, 1, 1);

        cat1_apn = new QLineEdit(groupBox_2);
        cat1_apn->setObjectName(QString::fromUtf8("cat1_apn"));
        cat1_apn->setMinimumSize(QSize(131, 20));
        cat1_apn->setMaximumSize(QSize(131, 20));
        cat1_apn->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cat1_apn->setReadOnly(true);

        gridLayout_24->addWidget(cat1_apn, 5, 1, 1, 1);

        set_btn_4g = new QPushButton(groupBox_2);
        set_btn_4g->setObjectName(QString::fromUtf8("set_btn_4g"));
        set_btn_4g->setMinimumSize(QSize(71, 23));
        set_btn_4g->setMaximumSize(QSize(71, 23));

        gridLayout_24->addWidget(set_btn_4g, 6, 1, 1, 1);


        formLayout->setWidget(2, QFormLayout::LabelRole, groupBox_2);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(191, 161));
        groupBox_4->setMaximumSize(QSize(191, 161));
        gridLayout_19 = new QGridLayout(groupBox_4);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(31, 16));
        label_12->setMaximumSize(QSize(31, 16));

        gridLayout_19->addWidget(label_12, 0, 0, 1, 1);

        server_ip = new QLineEdit(groupBox_4);
        server_ip->setObjectName(QString::fromUtf8("server_ip"));
        server_ip->setMinimumSize(QSize(131, 20));
        server_ip->setMaximumSize(QSize(131, 20));
        server_ip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(server_ip, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(31, 16));
        label_17->setMaximumSize(QSize(31, 16));

        gridLayout_19->addWidget(label_17, 1, 0, 1, 1);

        server_port = new QLineEdit(groupBox_4);
        server_port->setObjectName(QString::fromUtf8("server_port"));
        server_port->setMinimumSize(QSize(131, 20));
        server_port->setMaximumSize(QSize(131, 20));
        server_port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(server_port, 1, 1, 1, 1);

        label_90 = new QLabel(groupBox_4);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setMinimumSize(QSize(31, 16));
        label_90->setMaximumSize(QSize(31, 16));

        gridLayout_19->addWidget(label_90, 2, 0, 1, 1);

        username = new QLineEdit(groupBox_4);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(131, 20));
        username->setMaximumSize(QSize(131, 20));
        username->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(username, 2, 1, 1, 1);

        label_91 = new QLabel(groupBox_4);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setMinimumSize(QSize(31, 16));
        label_91->setMaximumSize(QSize(31, 16));

        gridLayout_19->addWidget(label_91, 3, 0, 1, 1);

        password = new QLineEdit(groupBox_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(131, 20));
        password->setMaximumSize(QSize(131, 20));
        password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(password, 3, 1, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(31, 16));
        label_18->setMaximumSize(QSize(31, 16));

        gridLayout_19->addWidget(label_18, 4, 0, 1, 1);

        ntp = new QLineEdit(groupBox_4);
        ntp->setObjectName(QString::fromUtf8("ntp"));
        ntp->setMinimumSize(QSize(131, 20));
        ntp->setMaximumSize(QSize(131, 20));
        ntp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_19->addWidget(ntp, 4, 1, 1, 1);

        set_btn_server = new QPushButton(groupBox_4);
        set_btn_server->setObjectName(QString::fromUtf8("set_btn_server"));
        set_btn_server->setMinimumSize(QSize(75, 23));
        set_btn_server->setMaximumSize(QSize(75, 23));

        gridLayout_19->addWidget(set_btn_server, 5, 1, 1, 1);


        formLayout->setWidget(3, QFormLayout::LabelRole, groupBox_4);

        groupBox_14 = new QGroupBox(centralwidget);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setMinimumSize(QSize(191, 51));
        groupBox_14->setMaximumSize(QSize(191, 71));
        gridLayout_18 = new QGridLayout(groupBox_14);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        label_89 = new QLabel(groupBox_14);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setMinimumSize(QSize(42, 19));
        label_89->setMaximumSize(QSize(42, 19));

        gridLayout_18->addWidget(label_89, 0, 0, 1, 1);

        rel_num = new QLineEdit(groupBox_14);
        rel_num->setObjectName(QString::fromUtf8("rel_num"));
        rel_num->setMinimumSize(QSize(43, 19));
        rel_num->setMaximumSize(QSize(43, 19));
        rel_num->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(rel_num, 0, 1, 1, 1);

        label_92 = new QLabel(groupBox_14);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setMinimumSize(QSize(42, 19));
        label_92->setMaximumSize(QSize(42, 19));

        gridLayout_18->addWidget(label_92, 1, 0, 1, 1);

        RT = new QLineEdit(groupBox_14);
        RT->setObjectName(QString::fromUtf8("RT"));
        RT->setMinimumSize(QSize(43, 19));
        RT->setMaximumSize(QSize(43, 19));
        RT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_18->addWidget(RT, 1, 1, 1, 1);

        set_btn_rel_num = new QPushButton(groupBox_14);
        set_btn_rel_num->setObjectName(QString::fromUtf8("set_btn_rel_num"));
        set_btn_rel_num->setMinimumSize(QSize(74, 19));
        set_btn_rel_num->setMaximumSize(QSize(74, 19));

        gridLayout_18->addWidget(set_btn_rel_num, 1, 2, 1, 1);


        formLayout->setWidget(4, QFormLayout::LabelRole, groupBox_14);

        groupBox_15 = new QGroupBox(centralwidget);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setMinimumSize(QSize(191, 51));
        groupBox_15->setMaximumSize(QSize(191, 71));
        gridLayout_27 = new QGridLayout(groupBox_15);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        label_93 = new QLabel(groupBox_15);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setMinimumSize(QSize(42, 19));
        label_93->setMaximumSize(QSize(52, 19));

        gridLayout_27->addWidget(label_93, 0, 0, 1, 1);

        timeZone = new QLineEdit(groupBox_15);
        timeZone->setObjectName(QString::fromUtf8("timeZone"));
        timeZone->setMinimumSize(QSize(43, 19));
        timeZone->setMaximumSize(QSize(43, 19));
        timeZone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_27->addWidget(timeZone, 0, 1, 1, 1);

        set_btn_other_para = new QPushButton(groupBox_15);
        set_btn_other_para->setObjectName(QString::fromUtf8("set_btn_other_para"));
        set_btn_other_para->setMinimumSize(QSize(54, 19));
        set_btn_other_para->setMaximumSize(QSize(54, 19));

        gridLayout_27->addWidget(set_btn_other_para, 0, 2, 1, 1);


        formLayout->setWidget(5, QFormLayout::LabelRole, groupBox_15);


        gridLayout_28->addLayout(formLayout, 0, 0, 5, 1);

        environment = new QTabWidget(centralwidget);
        environment->setObjectName(QString::fromUtf8("environment"));
        env = new QWidget();
        env->setObjectName(QString::fromUtf8("env"));
        gridLayout_23 = new QGridLayout(env);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        textBrowser_env = new QTextBrowser(env);
        textBrowser_env->setObjectName(QString::fromUtf8("textBrowser_env"));
        textBrowser_env->setMinimumSize(QSize(181, 141));
        textBrowser_env->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_23->addWidget(textBrowser_env, 0, 0, 1, 1);

        environment->addTab(env, QString());
        angle = new QWidget();
        angle->setObjectName(QString::fromUtf8("angle"));
        textBrowser_angle = new QTextBrowser(angle);
        textBrowser_angle->setObjectName(QString::fromUtf8("textBrowser_angle"));
        textBrowser_angle->setGeometry(QRect(10, 10, 191, 161));
        textBrowser_angle->setMinimumSize(QSize(181, 141));
        textBrowser_angle->setMaximumSize(QSize(16777215, 16777215));
        environment->addTab(angle, QString());
        well_lid = new QWidget();
        well_lid->setObjectName(QString::fromUtf8("well_lid"));
        textBrowser_well_lid = new QTextBrowser(well_lid);
        textBrowser_well_lid->setObjectName(QString::fromUtf8("textBrowser_well_lid"));
        textBrowser_well_lid->setGeometry(QRect(10, 10, 191, 161));
        textBrowser_well_lid->setMinimumSize(QSize(181, 141));
        textBrowser_well_lid->setMaximumSize(QSize(16777215, 16777215));
        environment->addTab(well_lid, QString());
        switch_in = new QWidget();
        switch_in->setObjectName(QString::fromUtf8("switch_in"));
        textBrowser_switch = new QTextBrowser(switch_in);
        textBrowser_switch->setObjectName(QString::fromUtf8("textBrowser_switch"));
        textBrowser_switch->setGeometry(QRect(10, 11, 191, 161));
        textBrowser_switch->setMinimumSize(QSize(181, 141));
        textBrowser_switch->setMaximumSize(QSize(16777215, 16777215));
        environment->addTab(switch_in, QString());

        gridLayout_28->addWidget(environment, 0, 2, 1, 2);

        groupBox_11 = new QGroupBox(centralwidget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_22 = new QGridLayout(groupBox_11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        sb_windspeed = new QCheckBox(groupBox_11);
        sb_windspeed->setObjectName(QString::fromUtf8("sb_windspeed"));
        sb_windspeed->setMinimumSize(QSize(91, 16));
        sb_windspeed->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(sb_windspeed, 0, 0, 1, 1);

        yn_temp = new QCheckBox(groupBox_11);
        yn_temp->setObjectName(QString::fromUtf8("yn_temp"));
        yn_temp->setMinimumSize(QSize(91, 16));
        yn_temp->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(yn_temp, 0, 1, 1, 1);

        sb_winddir = new QCheckBox(groupBox_11);
        sb_winddir->setObjectName(QString::fromUtf8("sb_winddir"));
        sb_winddir->setMinimumSize(QSize(91, 16));
        sb_winddir->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(sb_winddir, 1, 0, 1, 1);

        yn_all_UV = new QCheckBox(groupBox_11);
        yn_all_UV->setObjectName(QString::fromUtf8("yn_all_UV"));
        yn_all_UV->setMinimumSize(QSize(91, 16));
        yn_all_UV->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(yn_all_UV, 1, 1, 1, 1);

        sb_temp = new QCheckBox(groupBox_11);
        sb_temp->setObjectName(QString::fromUtf8("sb_temp"));
        sb_temp->setMinimumSize(QSize(91, 16));
        sb_temp->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(sb_temp, 2, 0, 1, 1);

        yn_all_1a = new QCheckBox(groupBox_11);
        yn_all_1a->setObjectName(QString::fromUtf8("yn_all_1a"));
        yn_all_1a->setMinimumSize(QSize(91, 16));
        yn_all_1a->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(yn_all_1a, 2, 1, 1, 1);

        ml_angle = new QCheckBox(groupBox_11);
        ml_angle->setObjectName(QString::fromUtf8("ml_angle"));
        ml_angle->setMinimumSize(QSize(91, 16));
        ml_angle->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(ml_angle, 3, 0, 1, 1);

        yn_all_ff = new QCheckBox(groupBox_11);
        yn_all_ff->setObjectName(QString::fromUtf8("yn_all_ff"));
        yn_all_ff->setMinimumSize(QSize(91, 16));
        yn_all_ff->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(yn_all_ff, 3, 1, 1, 1);

        ml_well_lid = new QCheckBox(groupBox_11);
        ml_well_lid->setObjectName(QString::fromUtf8("ml_well_lid"));
        ml_well_lid->setMinimumSize(QSize(91, 16));
        ml_well_lid->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(ml_well_lid, 4, 0, 1, 1);

        yn_xf900_all_ff = new QCheckBox(groupBox_11);
        yn_xf900_all_ff->setObjectName(QString::fromUtf8("yn_xf900_all_ff"));
        yn_xf900_all_ff->setMinimumSize(QSize(91, 16));
        yn_xf900_all_ff->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(yn_xf900_all_ff, 4, 1, 1, 1);

        jf_door = new QCheckBox(groupBox_11);
        jf_door->setObjectName(QString::fromUtf8("jf_door"));
        jf_door->setMinimumSize(QSize(91, 16));
        jf_door->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(jf_door, 5, 0, 1, 1);

        th_sun = new QCheckBox(groupBox_11);
        th_sun->setObjectName(QString::fromUtf8("th_sun"));
        th_sun->setMinimumSize(QSize(91, 16));
        th_sun->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(th_sun, 5, 1, 1, 1);

        th_temp = new QCheckBox(groupBox_11);
        th_temp->setObjectName(QString::fromUtf8("th_temp"));
        th_temp->setMinimumSize(QSize(91, 16));
        th_temp->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(th_temp, 6, 0, 1, 1);

        lk_sun = new QCheckBox(groupBox_11);
        lk_sun->setObjectName(QString::fromUtf8("lk_sun"));
        lk_sun->setMinimumSize(QSize(91, 16));
        lk_sun->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(lk_sun, 6, 1, 1, 1);

        th_aqi = new QCheckBox(groupBox_11);
        th_aqi->setObjectName(QString::fromUtf8("th_aqi"));
        th_aqi->setMinimumSize(QSize(91, 16));
        th_aqi->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(th_aqi, 7, 0, 1, 1);

        set_btn_sensor_use = new QPushButton(groupBox_11);
        set_btn_sensor_use->setObjectName(QString::fromUtf8("set_btn_sensor_use"));

        gridLayout_22->addWidget(set_btn_sensor_use, 7, 1, 2, 1);

        th_wind = new QCheckBox(groupBox_11);
        th_wind->setObjectName(QString::fromUtf8("th_wind"));
        th_wind->setMinimumSize(QSize(91, 16));
        th_wind->setMaximumSize(QSize(91, 16));

        gridLayout_22->addWidget(th_wind, 8, 0, 1, 1);


        gridLayout_28->addWidget(groupBox_11, 1, 2, 1, 2);

        btn_plan_refresh = new QPushButton(centralwidget);
        btn_plan_refresh->setObjectName(QString::fromUtf8("btn_plan_refresh"));

        gridLayout_28->addWidget(btn_plan_refresh, 2, 2, 1, 1);

        btn_env_refresh = new QPushButton(centralwidget);
        btn_env_refresh->setObjectName(QString::fromUtf8("btn_env_refresh"));
        btn_env_refresh->setMinimumSize(QSize(80, 0));

        gridLayout_28->addWidget(btn_env_refresh, 2, 3, 1, 1);

        btn_ele_refresh = new QPushButton(centralwidget);
        btn_ele_refresh->setObjectName(QString::fromUtf8("btn_ele_refresh"));
        btn_ele_refresh->setMinimumSize(QSize(80, 0));

        gridLayout_28->addWidget(btn_ele_refresh, 3, 2, 1, 1);

        btn_loopsta_refresh = new QPushButton(centralwidget);
        btn_loopsta_refresh->setObjectName(QString::fromUtf8("btn_loopsta_refresh"));

        gridLayout_28->addWidget(btn_loopsta_refresh, 3, 3, 1, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_20 = new QGridLayout(groupBox_6);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_122 = new QLabel(groupBox_6);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setMinimumSize(QSize(16, 21));
        label_122->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_122, 2, 4, 1, 1);

        current_c = new QLabel(groupBox_6);
        current_c->setObjectName(QString::fromUtf8("current_c"));
        current_c->setMinimumSize(QSize(54, 21));
        current_c->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_c, 1, 5, 1, 1);

        current_Ia_1 = new QLabel(groupBox_6);
        current_Ia_1->setObjectName(QString::fromUtf8("current_Ia_1"));
        current_Ia_1->setMinimumSize(QSize(54, 21));
        current_Ia_1->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_1, 0, 7, 1, 1);

        label_132 = new QLabel(groupBox_6);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setMinimumSize(QSize(24, 21));
        label_132->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_132, 1, 12, 1, 1);

        voltage_b = new QLabel(groupBox_6);
        voltage_b->setObjectName(QString::fromUtf8("voltage_b"));
        voltage_b->setMinimumSize(QSize(54, 21));
        voltage_b->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(voltage_b, 0, 3, 1, 1);

        label_120 = new QLabel(groupBox_6);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setMinimumSize(QSize(16, 21));
        label_120->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_120, 0, 4, 1, 1);

        label_124 = new QLabel(groupBox_6);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setMinimumSize(QSize(24, 21));
        label_124->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_124, 1, 6, 1, 1);

        current_Ib_4 = new QLabel(groupBox_6);
        current_Ib_4->setObjectName(QString::fromUtf8("current_Ib_4"));
        current_Ib_4->setMinimumSize(QSize(54, 21));
        current_Ib_4->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_4, 1, 13, 1, 1);

        current_Ib_8 = new QLabel(groupBox_6);
        current_Ib_8->setObjectName(QString::fromUtf8("current_Ib_8"));
        current_Ib_8->setMinimumSize(QSize(54, 21));
        current_Ib_8->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_8, 1, 21, 1, 1);

        label_144 = new QLabel(groupBox_6);
        label_144->setObjectName(QString::fromUtf8("label_144"));
        label_144->setMinimumSize(QSize(24, 21));
        label_144->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_144, 1, 20, 1, 1);

        label_117 = new QLabel(groupBox_6);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setMinimumSize(QSize(16, 21));
        label_117->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_117, 0, 2, 1, 1);

        current_Ib_7 = new QLabel(groupBox_6);
        current_Ib_7->setObjectName(QString::fromUtf8("current_Ib_7"));
        current_Ib_7->setMinimumSize(QSize(54, 21));
        current_Ib_7->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_7, 1, 19, 1, 1);

        label_146 = new QLabel(groupBox_6);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setMinimumSize(QSize(24, 21));
        label_146->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_146, 0, 20, 1, 1);

        label_141 = new QLabel(groupBox_6);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setMinimumSize(QSize(24, 21));
        label_141->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_141, 1, 18, 1, 1);

        voltage_a = new QLabel(groupBox_6);
        voltage_a->setObjectName(QString::fromUtf8("voltage_a"));
        voltage_a->setMinimumSize(QSize(54, 21));
        voltage_a->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(voltage_a, 0, 1, 1, 1);

        label_125 = new QLabel(groupBox_6);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setMinimumSize(QSize(24, 21));
        label_125->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_125, 2, 6, 1, 1);

        current_Ia_8 = new QLabel(groupBox_6);
        current_Ia_8->setObjectName(QString::fromUtf8("current_Ia_8"));
        current_Ia_8->setMinimumSize(QSize(54, 21));
        current_Ia_8->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_8, 0, 21, 1, 1);

        energy_a = new QLabel(groupBox_6);
        energy_a->setObjectName(QString::fromUtf8("energy_a"));
        energy_a->setMinimumSize(QSize(54, 21));
        energy_a->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(energy_a, 2, 1, 1, 1);

        label_126 = new QLabel(groupBox_6);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        label_126->setMinimumSize(QSize(24, 21));
        label_126->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_126, 1, 8, 1, 1);

        label_139 = new QLabel(groupBox_6);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setMinimumSize(QSize(24, 21));
        label_139->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_139, 2, 16, 1, 1);

        label_127 = new QLabel(groupBox_6);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setMinimumSize(QSize(24, 21));
        label_127->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_127, 2, 8, 1, 1);

        current_Ib_3 = new QLabel(groupBox_6);
        current_Ib_3->setObjectName(QString::fromUtf8("current_Ib_3"));
        current_Ib_3->setMinimumSize(QSize(54, 21));
        current_Ib_3->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_3, 1, 11, 1, 1);

        label_140 = new QLabel(groupBox_6);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        label_140->setMinimumSize(QSize(24, 21));
        label_140->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_140, 0, 16, 1, 1);

        current_Ia_4 = new QLabel(groupBox_6);
        current_Ia_4->setObjectName(QString::fromUtf8("current_Ia_4"));
        current_Ia_4->setMinimumSize(QSize(54, 21));
        current_Ia_4->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_4, 0, 13, 1, 1);

        label_133 = new QLabel(groupBox_6);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setMinimumSize(QSize(24, 21));
        label_133->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_133, 2, 12, 1, 1);

        current_Ib_5 = new QLabel(groupBox_6);
        current_Ib_5->setObjectName(QString::fromUtf8("current_Ib_5"));
        current_Ib_5->setMinimumSize(QSize(54, 21));
        current_Ib_5->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_5, 1, 15, 1, 1);

        label_130 = new QLabel(groupBox_6);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setMinimumSize(QSize(24, 21));
        label_130->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_130, 2, 10, 1, 1);

        current_Ic_3 = new QLabel(groupBox_6);
        current_Ic_3->setObjectName(QString::fromUtf8("current_Ic_3"));
        current_Ic_3->setMinimumSize(QSize(54, 21));
        current_Ic_3->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_3, 2, 11, 1, 1);

        current_Ib_6 = new QLabel(groupBox_6);
        current_Ib_6->setObjectName(QString::fromUtf8("current_Ib_6"));
        current_Ib_6->setMinimumSize(QSize(54, 21));
        current_Ib_6->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_6, 1, 17, 1, 1);

        current_Ic_4 = new QLabel(groupBox_6);
        current_Ic_4->setObjectName(QString::fromUtf8("current_Ic_4"));
        current_Ic_4->setMinimumSize(QSize(54, 21));
        current_Ic_4->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_4, 2, 13, 1, 1);

        voltage_c = new QLabel(groupBox_6);
        voltage_c->setObjectName(QString::fromUtf8("voltage_c"));
        voltage_c->setMinimumSize(QSize(54, 21));
        voltage_c->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(voltage_c, 0, 5, 1, 1);

        label_134 = new QLabel(groupBox_6);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        label_134->setMinimumSize(QSize(24, 21));
        label_134->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_134, 0, 12, 1, 1);

        current_Ic_8 = new QLabel(groupBox_6);
        current_Ic_8->setObjectName(QString::fromUtf8("current_Ic_8"));
        current_Ic_8->setMinimumSize(QSize(54, 21));
        current_Ic_8->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_8, 2, 21, 1, 1);

        label_128 = new QLabel(groupBox_6);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setMinimumSize(QSize(24, 21));
        label_128->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_128, 0, 8, 1, 1);

        label_119 = new QLabel(groupBox_6);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setMinimumSize(QSize(16, 21));
        label_119->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_119, 2, 2, 1, 1);

        label_136 = new QLabel(groupBox_6);
        label_136->setObjectName(QString::fromUtf8("label_136"));
        label_136->setMinimumSize(QSize(24, 21));
        label_136->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_136, 2, 14, 1, 1);

        current_Ia_7 = new QLabel(groupBox_6);
        current_Ia_7->setObjectName(QString::fromUtf8("current_Ia_7"));
        current_Ia_7->setMinimumSize(QSize(54, 21));
        current_Ia_7->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_7, 0, 19, 1, 1);

        label_116 = new QLabel(groupBox_6);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setMinimumSize(QSize(16, 21));
        label_116->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_116, 1, 0, 1, 1);

        current_b = new QLabel(groupBox_6);
        current_b->setObjectName(QString::fromUtf8("current_b"));
        current_b->setMinimumSize(QSize(54, 21));
        current_b->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_b, 1, 3, 1, 1);

        energy_b = new QLabel(groupBox_6);
        energy_b->setObjectName(QString::fromUtf8("energy_b"));
        energy_b->setMinimumSize(QSize(54, 21));
        energy_b->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(energy_b, 2, 3, 1, 1);

        label_114 = new QLabel(groupBox_6);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setMinimumSize(QSize(16, 21));
        label_114->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_114, 0, 0, 1, 1);

        label_121 = new QLabel(groupBox_6);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setMinimumSize(QSize(16, 21));
        label_121->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_121, 1, 4, 1, 1);

        label_129 = new QLabel(groupBox_6);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setMinimumSize(QSize(24, 21));
        label_129->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_129, 1, 10, 1, 1);

        label_131 = new QLabel(groupBox_6);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setMinimumSize(QSize(24, 21));
        label_131->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_131, 0, 10, 1, 1);

        current_Ia_5 = new QLabel(groupBox_6);
        current_Ia_5->setObjectName(QString::fromUtf8("current_Ia_5"));
        current_Ia_5->setMinimumSize(QSize(54, 21));
        current_Ia_5->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_5, 0, 15, 1, 1);

        label_135 = new QLabel(groupBox_6);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        label_135->setMinimumSize(QSize(24, 21));
        label_135->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_135, 1, 14, 1, 1);

        label_143 = new QLabel(groupBox_6);
        label_143->setObjectName(QString::fromUtf8("label_143"));
        label_143->setMinimumSize(QSize(24, 21));
        label_143->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_143, 0, 18, 1, 1);

        current_Ib_1 = new QLabel(groupBox_6);
        current_Ib_1->setObjectName(QString::fromUtf8("current_Ib_1"));
        current_Ib_1->setMinimumSize(QSize(54, 21));
        current_Ib_1->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_1, 1, 7, 1, 1);

        current_Ia_2 = new QLabel(groupBox_6);
        current_Ia_2->setObjectName(QString::fromUtf8("current_Ia_2"));
        current_Ia_2->setMinimumSize(QSize(54, 21));
        current_Ia_2->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_2, 0, 9, 1, 1);

        label_115 = new QLabel(groupBox_6);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setMinimumSize(QSize(16, 21));
        label_115->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_115, 2, 0, 1, 1);

        label_138 = new QLabel(groupBox_6);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        label_138->setMinimumSize(QSize(24, 21));
        label_138->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_138, 1, 16, 1, 1);

        current_Ic_1 = new QLabel(groupBox_6);
        current_Ic_1->setObjectName(QString::fromUtf8("current_Ic_1"));
        current_Ic_1->setMinimumSize(QSize(54, 21));
        current_Ic_1->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_1, 2, 7, 1, 1);

        label_137 = new QLabel(groupBox_6);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setMinimumSize(QSize(24, 21));
        label_137->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_137, 0, 14, 1, 1);

        current_Ic_2 = new QLabel(groupBox_6);
        current_Ic_2->setObjectName(QString::fromUtf8("current_Ic_2"));
        current_Ic_2->setMinimumSize(QSize(54, 21));
        current_Ic_2->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_2, 2, 9, 1, 1);

        current_Ic_5 = new QLabel(groupBox_6);
        current_Ic_5->setObjectName(QString::fromUtf8("current_Ic_5"));
        current_Ic_5->setMinimumSize(QSize(54, 21));
        current_Ic_5->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_5, 2, 15, 1, 1);

        current_Ic_7 = new QLabel(groupBox_6);
        current_Ic_7->setObjectName(QString::fromUtf8("current_Ic_7"));
        current_Ic_7->setMinimumSize(QSize(54, 21));
        current_Ic_7->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_7, 2, 19, 1, 1);

        label_123 = new QLabel(groupBox_6);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setMinimumSize(QSize(24, 21));
        label_123->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_123, 0, 6, 1, 1);

        current_Ib_2 = new QLabel(groupBox_6);
        current_Ib_2->setObjectName(QString::fromUtf8("current_Ib_2"));
        current_Ib_2->setMinimumSize(QSize(54, 21));
        current_Ib_2->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ib_2, 1, 9, 1, 1);

        current_Ic_6 = new QLabel(groupBox_6);
        current_Ic_6->setObjectName(QString::fromUtf8("current_Ic_6"));
        current_Ic_6->setMinimumSize(QSize(54, 21));
        current_Ic_6->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ic_6, 2, 17, 1, 1);

        current_Ia_6 = new QLabel(groupBox_6);
        current_Ia_6->setObjectName(QString::fromUtf8("current_Ia_6"));
        current_Ia_6->setMinimumSize(QSize(54, 21));
        current_Ia_6->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_6, 0, 17, 1, 1);

        energy_c = new QLabel(groupBox_6);
        energy_c->setObjectName(QString::fromUtf8("energy_c"));
        energy_c->setMinimumSize(QSize(54, 21));
        energy_c->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(energy_c, 2, 5, 1, 1);

        label_118 = new QLabel(groupBox_6);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setMinimumSize(QSize(16, 21));
        label_118->setMaximumSize(QSize(16, 21));

        gridLayout_20->addWidget(label_118, 1, 2, 1, 1);

        current_a = new QLabel(groupBox_6);
        current_a->setObjectName(QString::fromUtf8("current_a"));
        current_a->setMinimumSize(QSize(54, 21));
        current_a->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_a, 1, 1, 1, 1);

        label_145 = new QLabel(groupBox_6);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        label_145->setMinimumSize(QSize(24, 21));
        label_145->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_145, 2, 20, 1, 1);

        label_142 = new QLabel(groupBox_6);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setMinimumSize(QSize(24, 21));
        label_142->setMaximumSize(QSize(24, 21));

        gridLayout_20->addWidget(label_142, 2, 18, 1, 1);

        current_Ia_3 = new QLabel(groupBox_6);
        current_Ia_3->setObjectName(QString::fromUtf8("current_Ia_3"));
        current_Ia_3->setMinimumSize(QSize(54, 21));
        current_Ia_3->setMaximumSize(QSize(54, 21));

        gridLayout_20->addWidget(current_Ia_3, 0, 11, 1, 1);


        gridLayout_28->addWidget(groupBox_6, 4, 1, 1, 2);

        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_21 = new QGridLayout(groupBox_8);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        radioButton_loop_1 = new QRadioButton(groupBox_8);
        radioButton_loop_1->setObjectName(QString::fromUtf8("radioButton_loop_1"));
        radioButton_loop_1->setCheckable(true);
        radioButton_loop_1->setChecked(false);
        radioButton_loop_1->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_1, 0, 0, 1, 1);

        radioButton_loop_5 = new QRadioButton(groupBox_8);
        radioButton_loop_5->setObjectName(QString::fromUtf8("radioButton_loop_5"));
        radioButton_loop_5->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_5, 0, 1, 1, 1);

        radioButton_loop_2 = new QRadioButton(groupBox_8);
        radioButton_loop_2->setObjectName(QString::fromUtf8("radioButton_loop_2"));
        radioButton_loop_2->setChecked(false);
        radioButton_loop_2->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_2, 1, 0, 1, 1);

        radioButton_loop_6 = new QRadioButton(groupBox_8);
        radioButton_loop_6->setObjectName(QString::fromUtf8("radioButton_loop_6"));
        radioButton_loop_6->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_6, 1, 1, 1, 1);

        radioButton_loop_3 = new QRadioButton(groupBox_8);
        radioButton_loop_3->setObjectName(QString::fromUtf8("radioButton_loop_3"));
        radioButton_loop_3->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_3, 2, 0, 1, 1);

        radioButton_loop_7 = new QRadioButton(groupBox_8);
        radioButton_loop_7->setObjectName(QString::fromUtf8("radioButton_loop_7"));
        radioButton_loop_7->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_7, 2, 1, 1, 1);

        radioButton_loop_4 = new QRadioButton(groupBox_8);
        radioButton_loop_4->setObjectName(QString::fromUtf8("radioButton_loop_4"));
        radioButton_loop_4->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_4, 3, 0, 1, 1);

        radioButton_loop_8 = new QRadioButton(groupBox_8);
        radioButton_loop_8->setObjectName(QString::fromUtf8("radioButton_loop_8"));
        radioButton_loop_8->setCheckable(true);
        radioButton_loop_8->setChecked(false);
        radioButton_loop_8->setAutoExclusive(false);

        gridLayout_21->addWidget(radioButton_loop_8, 3, 1, 1, 1);


        gridLayout_28->addWidget(groupBox_8, 4, 3, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_17 = new QGridLayout(groupBox_5);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        groupBox_plan_7 = new QGroupBox(groupBox_5);
        groupBox_plan_7->setObjectName(QString::fromUtf8("groupBox_plan_7"));
        gridLayout_13 = new QGridLayout(groupBox_plan_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        tabWidget_plan_7 = new QTabWidget(groupBox_plan_7);
        tabWidget_plan_7->setObjectName(QString::fromUtf8("tabWidget_plan_7"));
        time_plan_7 = new QWidget();
        time_plan_7->setObjectName(QString::fromUtf8("time_plan_7"));
        gridLayout_14 = new QGridLayout(time_plan_7);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        en_t_plan_7 = new QCheckBox(time_plan_7);
        en_t_plan_7->setObjectName(QString::fromUtf8("en_t_plan_7"));

        gridLayout_14->addWidget(en_t_plan_7, 0, 0, 1, 1);

        label_71 = new QLabel(time_plan_7);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        gridLayout_14->addWidget(label_71, 0, 1, 1, 1);

        label_72 = new QLabel(time_plan_7);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        gridLayout_14->addWidget(label_72, 0, 2, 1, 1);

        label_73 = new QLabel(time_plan_7);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        gridLayout_14->addWidget(label_73, 1, 0, 1, 1);

        s_time_1_t_plan_7 = new QTimeEdit(time_plan_7);
        s_time_1_t_plan_7->setObjectName(QString::fromUtf8("s_time_1_t_plan_7"));

        gridLayout_14->addWidget(s_time_1_t_plan_7, 1, 1, 1, 1);

        e_time_1_t_plan_7 = new QTimeEdit(time_plan_7);
        e_time_1_t_plan_7->setObjectName(QString::fromUtf8("e_time_1_t_plan_7"));

        gridLayout_14->addWidget(e_time_1_t_plan_7, 1, 2, 1, 1);

        label_74 = new QLabel(time_plan_7);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        gridLayout_14->addWidget(label_74, 2, 0, 1, 1);

        s_time_2_t_plan_7 = new QTimeEdit(time_plan_7);
        s_time_2_t_plan_7->setObjectName(QString::fromUtf8("s_time_2_t_plan_7"));

        gridLayout_14->addWidget(s_time_2_t_plan_7, 2, 1, 1, 1);

        e_time_2_t_plan_7 = new QTimeEdit(time_plan_7);
        e_time_2_t_plan_7->setObjectName(QString::fromUtf8("e_time_2_t_plan_7"));

        gridLayout_14->addWidget(e_time_2_t_plan_7, 2, 2, 1, 1);

        label_75 = new QLabel(time_plan_7);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        gridLayout_14->addWidget(label_75, 3, 0, 1, 1);

        s_time_3_t_plan_7 = new QTimeEdit(time_plan_7);
        s_time_3_t_plan_7->setObjectName(QString::fromUtf8("s_time_3_t_plan_7"));

        gridLayout_14->addWidget(s_time_3_t_plan_7, 3, 1, 1, 1);

        e_time_3_t_plan_7 = new QTimeEdit(time_plan_7);
        e_time_3_t_plan_7->setObjectName(QString::fromUtf8("e_time_3_t_plan_7"));

        gridLayout_14->addWidget(e_time_3_t_plan_7, 3, 2, 1, 1);

        label_76 = new QLabel(time_plan_7);
        label_76->setObjectName(QString::fromUtf8("label_76"));

        gridLayout_14->addWidget(label_76, 4, 0, 1, 1);

        s_time_4_t_plan_7 = new QTimeEdit(time_plan_7);
        s_time_4_t_plan_7->setObjectName(QString::fromUtf8("s_time_4_t_plan_7"));

        gridLayout_14->addWidget(s_time_4_t_plan_7, 4, 1, 1, 1);

        e_time_4_t_plan_7 = new QTimeEdit(time_plan_7);
        e_time_4_t_plan_7->setObjectName(QString::fromUtf8("e_time_4_t_plan_7"));

        gridLayout_14->addWidget(e_time_4_t_plan_7, 4, 2, 1, 1);

        tabWidget_plan_7->addTab(time_plan_7, QString());
        sun_plan_7 = new QWidget();
        sun_plan_7->setObjectName(QString::fromUtf8("sun_plan_7"));
        en_s_plan_7 = new QCheckBox(sun_plan_7);
        en_s_plan_7->setObjectName(QString::fromUtf8("en_s_plan_7"));
        en_s_plan_7->setGeometry(QRect(10, 10, 48, 16));
        label_77 = new QLabel(sun_plan_7);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(64, 10, 54, 16));
        label_78 = new QLabel(sun_plan_7);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(124, 10, 54, 16));
        label_79 = new QLabel(sun_plan_7);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_7 = new QLineEdit(sun_plan_7);
        s_lux_s_plan_7->setObjectName(QString::fromUtf8("s_lux_s_plan_7"));
        s_lux_s_plan_7->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_7 = new QLineEdit(sun_plan_7);
        e_lux_s_plan_7->setObjectName(QString::fromUtf8("e_lux_s_plan_7"));
        e_lux_s_plan_7->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_7->addTab(sun_plan_7, QString());

        gridLayout_13->addWidget(tabWidget_plan_7, 0, 0, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        set_btn_plan_7 = new QPushButton(groupBox_plan_7);
        set_btn_plan_7->setObjectName(QString::fromUtf8("set_btn_plan_7"));

        gridLayout_13->addWidget(set_btn_plan_7, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_7, 1, 3, 1, 1);

        groupBox_plan_3 = new QGroupBox(groupBox_5);
        groupBox_plan_3->setObjectName(QString::fromUtf8("groupBox_plan_3"));
        gridLayout_5 = new QGridLayout(groupBox_plan_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidget_plan_3 = new QTabWidget(groupBox_plan_3);
        tabWidget_plan_3->setObjectName(QString::fromUtf8("tabWidget_plan_3"));
        time_plan_3 = new QWidget();
        time_plan_3->setObjectName(QString::fromUtf8("time_plan_3"));
        gridLayout_6 = new QGridLayout(time_plan_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        en_t_plan_3 = new QCheckBox(time_plan_3);
        en_t_plan_3->setObjectName(QString::fromUtf8("en_t_plan_3"));

        gridLayout_6->addWidget(en_t_plan_3, 0, 0, 1, 1);

        label_35 = new QLabel(time_plan_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_6->addWidget(label_35, 0, 1, 1, 1);

        label_36 = new QLabel(time_plan_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_6->addWidget(label_36, 0, 2, 1, 1);

        label_37 = new QLabel(time_plan_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_6->addWidget(label_37, 1, 0, 1, 1);

        s_time_1_t_plan_3 = new QTimeEdit(time_plan_3);
        s_time_1_t_plan_3->setObjectName(QString::fromUtf8("s_time_1_t_plan_3"));

        gridLayout_6->addWidget(s_time_1_t_plan_3, 1, 1, 1, 1);

        e_time_1_t_plan_3 = new QTimeEdit(time_plan_3);
        e_time_1_t_plan_3->setObjectName(QString::fromUtf8("e_time_1_t_plan_3"));

        gridLayout_6->addWidget(e_time_1_t_plan_3, 1, 2, 1, 1);

        label_38 = new QLabel(time_plan_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_6->addWidget(label_38, 2, 0, 1, 1);

        s_time_2_t_plan_3 = new QTimeEdit(time_plan_3);
        s_time_2_t_plan_3->setObjectName(QString::fromUtf8("s_time_2_t_plan_3"));

        gridLayout_6->addWidget(s_time_2_t_plan_3, 2, 1, 1, 1);

        e_time_2_t_plan_3 = new QTimeEdit(time_plan_3);
        e_time_2_t_plan_3->setObjectName(QString::fromUtf8("e_time_2_t_plan_3"));

        gridLayout_6->addWidget(e_time_2_t_plan_3, 2, 2, 1, 1);

        label_39 = new QLabel(time_plan_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_6->addWidget(label_39, 3, 0, 1, 1);

        s_time_3_t_plan_3 = new QTimeEdit(time_plan_3);
        s_time_3_t_plan_3->setObjectName(QString::fromUtf8("s_time_3_t_plan_3"));

        gridLayout_6->addWidget(s_time_3_t_plan_3, 3, 1, 1, 1);

        e_time_3_t_plan_3 = new QTimeEdit(time_plan_3);
        e_time_3_t_plan_3->setObjectName(QString::fromUtf8("e_time_3_t_plan_3"));

        gridLayout_6->addWidget(e_time_3_t_plan_3, 3, 2, 1, 1);

        label_40 = new QLabel(time_plan_3);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_6->addWidget(label_40, 4, 0, 1, 1);

        s_time_4_t_plan_3 = new QTimeEdit(time_plan_3);
        s_time_4_t_plan_3->setObjectName(QString::fromUtf8("s_time_4_t_plan_3"));

        gridLayout_6->addWidget(s_time_4_t_plan_3, 4, 1, 1, 1);

        e_time_4_t_plan_3 = new QTimeEdit(time_plan_3);
        e_time_4_t_plan_3->setObjectName(QString::fromUtf8("e_time_4_t_plan_3"));

        gridLayout_6->addWidget(e_time_4_t_plan_3, 4, 2, 1, 1);

        tabWidget_plan_3->addTab(time_plan_3, QString());
        sun_plan_3 = new QWidget();
        sun_plan_3->setObjectName(QString::fromUtf8("sun_plan_3"));
        en_s_plan_3 = new QCheckBox(sun_plan_3);
        en_s_plan_3->setObjectName(QString::fromUtf8("en_s_plan_3"));
        en_s_plan_3->setGeometry(QRect(10, 10, 48, 16));
        label_41 = new QLabel(sun_plan_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(64, 10, 54, 16));
        label_42 = new QLabel(sun_plan_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(124, 10, 54, 16));
        label_43 = new QLabel(sun_plan_3);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_3 = new QLineEdit(sun_plan_3);
        s_lux_s_plan_3->setObjectName(QString::fromUtf8("s_lux_s_plan_3"));
        s_lux_s_plan_3->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_3 = new QLineEdit(sun_plan_3);
        e_lux_s_plan_3->setObjectName(QString::fromUtf8("e_lux_s_plan_3"));
        e_lux_s_plan_3->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_3->addTab(sun_plan_3, QString());

        gridLayout_5->addWidget(tabWidget_plan_3, 0, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        set_btn_plan_3 = new QPushButton(groupBox_plan_3);
        set_btn_plan_3->setObjectName(QString::fromUtf8("set_btn_plan_3"));

        gridLayout_5->addWidget(set_btn_plan_3, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_3, 0, 3, 1, 1);

        groupBox_plan_6 = new QGroupBox(groupBox_5);
        groupBox_plan_6->setObjectName(QString::fromUtf8("groupBox_plan_6"));
        gridLayout_11 = new QGridLayout(groupBox_plan_6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        tabWidget_plan_6 = new QTabWidget(groupBox_plan_6);
        tabWidget_plan_6->setObjectName(QString::fromUtf8("tabWidget_plan_6"));
        time_plan_6 = new QWidget();
        time_plan_6->setObjectName(QString::fromUtf8("time_plan_6"));
        gridLayout_12 = new QGridLayout(time_plan_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        en_t_plan_6 = new QCheckBox(time_plan_6);
        en_t_plan_6->setObjectName(QString::fromUtf8("en_t_plan_6"));

        gridLayout_12->addWidget(en_t_plan_6, 0, 0, 1, 1);

        label_62 = new QLabel(time_plan_6);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        gridLayout_12->addWidget(label_62, 0, 1, 1, 1);

        label_63 = new QLabel(time_plan_6);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        gridLayout_12->addWidget(label_63, 0, 2, 1, 1);

        label_64 = new QLabel(time_plan_6);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        gridLayout_12->addWidget(label_64, 1, 0, 1, 1);

        s_time_1_t_plan_6 = new QTimeEdit(time_plan_6);
        s_time_1_t_plan_6->setObjectName(QString::fromUtf8("s_time_1_t_plan_6"));

        gridLayout_12->addWidget(s_time_1_t_plan_6, 1, 1, 1, 1);

        e_time_1_t_plan_6 = new QTimeEdit(time_plan_6);
        e_time_1_t_plan_6->setObjectName(QString::fromUtf8("e_time_1_t_plan_6"));

        gridLayout_12->addWidget(e_time_1_t_plan_6, 1, 2, 1, 1);

        label_65 = new QLabel(time_plan_6);
        label_65->setObjectName(QString::fromUtf8("label_65"));

        gridLayout_12->addWidget(label_65, 2, 0, 1, 1);

        s_time_2_t_plan_6 = new QTimeEdit(time_plan_6);
        s_time_2_t_plan_6->setObjectName(QString::fromUtf8("s_time_2_t_plan_6"));

        gridLayout_12->addWidget(s_time_2_t_plan_6, 2, 1, 1, 1);

        e_time_2_t_plan_6 = new QTimeEdit(time_plan_6);
        e_time_2_t_plan_6->setObjectName(QString::fromUtf8("e_time_2_t_plan_6"));

        gridLayout_12->addWidget(e_time_2_t_plan_6, 2, 2, 1, 1);

        label_66 = new QLabel(time_plan_6);
        label_66->setObjectName(QString::fromUtf8("label_66"));

        gridLayout_12->addWidget(label_66, 3, 0, 1, 1);

        s_time_3_t_plan_6 = new QTimeEdit(time_plan_6);
        s_time_3_t_plan_6->setObjectName(QString::fromUtf8("s_time_3_t_plan_6"));

        gridLayout_12->addWidget(s_time_3_t_plan_6, 3, 1, 1, 1);

        e_time_3_t_plan_6 = new QTimeEdit(time_plan_6);
        e_time_3_t_plan_6->setObjectName(QString::fromUtf8("e_time_3_t_plan_6"));

        gridLayout_12->addWidget(e_time_3_t_plan_6, 3, 2, 1, 1);

        label_67 = new QLabel(time_plan_6);
        label_67->setObjectName(QString::fromUtf8("label_67"));

        gridLayout_12->addWidget(label_67, 4, 0, 1, 1);

        s_time_4_t_plan_6 = new QTimeEdit(time_plan_6);
        s_time_4_t_plan_6->setObjectName(QString::fromUtf8("s_time_4_t_plan_6"));

        gridLayout_12->addWidget(s_time_4_t_plan_6, 4, 1, 1, 1);

        e_time_4_t_plan_6 = new QTimeEdit(time_plan_6);
        e_time_4_t_plan_6->setObjectName(QString::fromUtf8("e_time_4_t_plan_6"));

        gridLayout_12->addWidget(e_time_4_t_plan_6, 4, 2, 1, 1);

        tabWidget_plan_6->addTab(time_plan_6, QString());
        sun_plan_6 = new QWidget();
        sun_plan_6->setObjectName(QString::fromUtf8("sun_plan_6"));
        en_s_plan_6 = new QCheckBox(sun_plan_6);
        en_s_plan_6->setObjectName(QString::fromUtf8("en_s_plan_6"));
        en_s_plan_6->setGeometry(QRect(10, 10, 48, 16));
        label_68 = new QLabel(sun_plan_6);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(64, 10, 54, 16));
        label_69 = new QLabel(sun_plan_6);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(124, 10, 54, 16));
        label_70 = new QLabel(sun_plan_6);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_6 = new QLineEdit(sun_plan_6);
        s_lux_s_plan_6->setObjectName(QString::fromUtf8("s_lux_s_plan_6"));
        s_lux_s_plan_6->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_6 = new QLineEdit(sun_plan_6);
        e_lux_s_plan_6->setObjectName(QString::fromUtf8("e_lux_s_plan_6"));
        e_lux_s_plan_6->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_6->addTab(sun_plan_6, QString());

        gridLayout_11->addWidget(tabWidget_plan_6, 0, 0, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        set_btn_plan_6 = new QPushButton(groupBox_plan_6);
        set_btn_plan_6->setObjectName(QString::fromUtf8("set_btn_plan_6"));

        gridLayout_11->addWidget(set_btn_plan_6, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_6, 1, 2, 1, 1);

        groupBox_plan_8 = new QGroupBox(groupBox_5);
        groupBox_plan_8->setObjectName(QString::fromUtf8("groupBox_plan_8"));
        gridLayout_15 = new QGridLayout(groupBox_plan_8);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        tabWidget_plan_8 = new QTabWidget(groupBox_plan_8);
        tabWidget_plan_8->setObjectName(QString::fromUtf8("tabWidget_plan_8"));
        time_plan_8 = new QWidget();
        time_plan_8->setObjectName(QString::fromUtf8("time_plan_8"));
        gridLayout_16 = new QGridLayout(time_plan_8);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        en_t_plan_8 = new QCheckBox(time_plan_8);
        en_t_plan_8->setObjectName(QString::fromUtf8("en_t_plan_8"));

        gridLayout_16->addWidget(en_t_plan_8, 0, 0, 1, 1);

        label_80 = new QLabel(time_plan_8);
        label_80->setObjectName(QString::fromUtf8("label_80"));

        gridLayout_16->addWidget(label_80, 0, 1, 1, 1);

        label_81 = new QLabel(time_plan_8);
        label_81->setObjectName(QString::fromUtf8("label_81"));

        gridLayout_16->addWidget(label_81, 0, 2, 1, 1);

        label_82 = new QLabel(time_plan_8);
        label_82->setObjectName(QString::fromUtf8("label_82"));

        gridLayout_16->addWidget(label_82, 1, 0, 1, 1);

        s_time_1_t_plan_8 = new QTimeEdit(time_plan_8);
        s_time_1_t_plan_8->setObjectName(QString::fromUtf8("s_time_1_t_plan_8"));

        gridLayout_16->addWidget(s_time_1_t_plan_8, 1, 1, 1, 1);

        e_time_1_t_plan_8 = new QTimeEdit(time_plan_8);
        e_time_1_t_plan_8->setObjectName(QString::fromUtf8("e_time_1_t_plan_8"));

        gridLayout_16->addWidget(e_time_1_t_plan_8, 1, 2, 1, 1);

        label_83 = new QLabel(time_plan_8);
        label_83->setObjectName(QString::fromUtf8("label_83"));

        gridLayout_16->addWidget(label_83, 2, 0, 1, 1);

        s_time_2_t_plan_8 = new QTimeEdit(time_plan_8);
        s_time_2_t_plan_8->setObjectName(QString::fromUtf8("s_time_2_t_plan_8"));

        gridLayout_16->addWidget(s_time_2_t_plan_8, 2, 1, 1, 1);

        e_time_2_t_plan_8 = new QTimeEdit(time_plan_8);
        e_time_2_t_plan_8->setObjectName(QString::fromUtf8("e_time_2_t_plan_8"));

        gridLayout_16->addWidget(e_time_2_t_plan_8, 2, 2, 1, 1);

        label_84 = new QLabel(time_plan_8);
        label_84->setObjectName(QString::fromUtf8("label_84"));

        gridLayout_16->addWidget(label_84, 3, 0, 1, 1);

        s_time_3_t_plan_8 = new QTimeEdit(time_plan_8);
        s_time_3_t_plan_8->setObjectName(QString::fromUtf8("s_time_3_t_plan_8"));

        gridLayout_16->addWidget(s_time_3_t_plan_8, 3, 1, 1, 1);

        e_time_3_t_plan_8 = new QTimeEdit(time_plan_8);
        e_time_3_t_plan_8->setObjectName(QString::fromUtf8("e_time_3_t_plan_8"));

        gridLayout_16->addWidget(e_time_3_t_plan_8, 3, 2, 1, 1);

        label_85 = new QLabel(time_plan_8);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        gridLayout_16->addWidget(label_85, 4, 0, 1, 1);

        s_time_4_t_plan_8 = new QTimeEdit(time_plan_8);
        s_time_4_t_plan_8->setObjectName(QString::fromUtf8("s_time_4_t_plan_8"));

        gridLayout_16->addWidget(s_time_4_t_plan_8, 4, 1, 1, 1);

        e_time_4_t_plan_8 = new QTimeEdit(time_plan_8);
        e_time_4_t_plan_8->setObjectName(QString::fromUtf8("e_time_4_t_plan_8"));

        gridLayout_16->addWidget(e_time_4_t_plan_8, 4, 2, 1, 1);

        tabWidget_plan_8->addTab(time_plan_8, QString());
        sun_plan_8 = new QWidget();
        sun_plan_8->setObjectName(QString::fromUtf8("sun_plan_8"));
        en_s_plan_8 = new QCheckBox(sun_plan_8);
        en_s_plan_8->setObjectName(QString::fromUtf8("en_s_plan_8"));
        en_s_plan_8->setGeometry(QRect(10, 10, 48, 16));
        label_86 = new QLabel(sun_plan_8);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(64, 10, 54, 16));
        label_87 = new QLabel(sun_plan_8);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(124, 10, 54, 16));
        label_88 = new QLabel(sun_plan_8);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_8 = new QLineEdit(sun_plan_8);
        s_lux_s_plan_8->setObjectName(QString::fromUtf8("s_lux_s_plan_8"));
        s_lux_s_plan_8->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_8 = new QLineEdit(sun_plan_8);
        e_lux_s_plan_8->setObjectName(QString::fromUtf8("e_lux_s_plan_8"));
        e_lux_s_plan_8->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_8->addTab(sun_plan_8, QString());

        gridLayout_15->addWidget(tabWidget_plan_8, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        set_btn_plan_8 = new QPushButton(groupBox_plan_8);
        set_btn_plan_8->setObjectName(QString::fromUtf8("set_btn_plan_8"));

        gridLayout_15->addWidget(set_btn_plan_8, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_8, 1, 4, 1, 1);

        groupBox_plan_2 = new QGroupBox(groupBox_5);
        groupBox_plan_2->setObjectName(QString::fromUtf8("groupBox_plan_2"));
        gridLayout_3 = new QGridLayout(groupBox_plan_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget_plan_2 = new QTabWidget(groupBox_plan_2);
        tabWidget_plan_2->setObjectName(QString::fromUtf8("tabWidget_plan_2"));
        time_plan_2 = new QWidget();
        time_plan_2->setObjectName(QString::fromUtf8("time_plan_2"));
        gridLayout_4 = new QGridLayout(time_plan_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        en_t_plan_2 = new QCheckBox(time_plan_2);
        en_t_plan_2->setObjectName(QString::fromUtf8("en_t_plan_2"));

        gridLayout_4->addWidget(en_t_plan_2, 0, 0, 1, 1);

        label_26 = new QLabel(time_plan_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_4->addWidget(label_26, 0, 1, 1, 1);

        label_27 = new QLabel(time_plan_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_4->addWidget(label_27, 0, 2, 1, 1);

        label_28 = new QLabel(time_plan_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 1, 0, 1, 1);

        s_time_1_t_plan_2 = new QTimeEdit(time_plan_2);
        s_time_1_t_plan_2->setObjectName(QString::fromUtf8("s_time_1_t_plan_2"));

        gridLayout_4->addWidget(s_time_1_t_plan_2, 1, 1, 1, 1);

        e_time_1_t_plan_2 = new QTimeEdit(time_plan_2);
        e_time_1_t_plan_2->setObjectName(QString::fromUtf8("e_time_1_t_plan_2"));

        gridLayout_4->addWidget(e_time_1_t_plan_2, 1, 2, 1, 1);

        label_29 = new QLabel(time_plan_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 2, 0, 1, 1);

        s_time_2_t_plan_2 = new QTimeEdit(time_plan_2);
        s_time_2_t_plan_2->setObjectName(QString::fromUtf8("s_time_2_t_plan_2"));

        gridLayout_4->addWidget(s_time_2_t_plan_2, 2, 1, 1, 1);

        e_time_2_t_plan_2 = new QTimeEdit(time_plan_2);
        e_time_2_t_plan_2->setObjectName(QString::fromUtf8("e_time_2_t_plan_2"));

        gridLayout_4->addWidget(e_time_2_t_plan_2, 2, 2, 1, 1);

        label_30 = new QLabel(time_plan_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_4->addWidget(label_30, 3, 0, 1, 1);

        s_time_3_t_plan_2 = new QTimeEdit(time_plan_2);
        s_time_3_t_plan_2->setObjectName(QString::fromUtf8("s_time_3_t_plan_2"));

        gridLayout_4->addWidget(s_time_3_t_plan_2, 3, 1, 1, 1);

        e_time_3_t_plan_2 = new QTimeEdit(time_plan_2);
        e_time_3_t_plan_2->setObjectName(QString::fromUtf8("e_time_3_t_plan_2"));

        gridLayout_4->addWidget(e_time_3_t_plan_2, 3, 2, 1, 1);

        label_31 = new QLabel(time_plan_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_4->addWidget(label_31, 4, 0, 1, 1);

        s_time_4_t_plan_2 = new QTimeEdit(time_plan_2);
        s_time_4_t_plan_2->setObjectName(QString::fromUtf8("s_time_4_t_plan_2"));

        gridLayout_4->addWidget(s_time_4_t_plan_2, 4, 1, 1, 1);

        e_time_4_t_plan_2 = new QTimeEdit(time_plan_2);
        e_time_4_t_plan_2->setObjectName(QString::fromUtf8("e_time_4_t_plan_2"));

        gridLayout_4->addWidget(e_time_4_t_plan_2, 4, 2, 1, 1);

        tabWidget_plan_2->addTab(time_plan_2, QString());
        sun_plan_2 = new QWidget();
        sun_plan_2->setObjectName(QString::fromUtf8("sun_plan_2"));
        en_s_plan_2 = new QCheckBox(sun_plan_2);
        en_s_plan_2->setObjectName(QString::fromUtf8("en_s_plan_2"));
        en_s_plan_2->setGeometry(QRect(10, 10, 48, 16));
        label_32 = new QLabel(sun_plan_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(64, 10, 54, 16));
        label_33 = new QLabel(sun_plan_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(124, 10, 54, 16));
        label_34 = new QLabel(sun_plan_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_2 = new QLineEdit(sun_plan_2);
        s_lux_s_plan_2->setObjectName(QString::fromUtf8("s_lux_s_plan_2"));
        s_lux_s_plan_2->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_2 = new QLineEdit(sun_plan_2);
        e_lux_s_plan_2->setObjectName(QString::fromUtf8("e_lux_s_plan_2"));
        e_lux_s_plan_2->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_2->addTab(sun_plan_2, QString());

        gridLayout_3->addWidget(tabWidget_plan_2, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        set_btn_plan_2 = new QPushButton(groupBox_plan_2);
        set_btn_plan_2->setObjectName(QString::fromUtf8("set_btn_plan_2"));

        gridLayout_3->addWidget(set_btn_plan_2, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_2, 0, 2, 1, 1);

        groupBox_plan_4 = new QGroupBox(groupBox_5);
        groupBox_plan_4->setObjectName(QString::fromUtf8("groupBox_plan_4"));
        gridLayout_7 = new QGridLayout(groupBox_plan_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tabWidget_plan_4 = new QTabWidget(groupBox_plan_4);
        tabWidget_plan_4->setObjectName(QString::fromUtf8("tabWidget_plan_4"));
        time_plan_4 = new QWidget();
        time_plan_4->setObjectName(QString::fromUtf8("time_plan_4"));
        gridLayout_8 = new QGridLayout(time_plan_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        en_t_plan_4 = new QCheckBox(time_plan_4);
        en_t_plan_4->setObjectName(QString::fromUtf8("en_t_plan_4"));

        gridLayout_8->addWidget(en_t_plan_4, 0, 0, 1, 1);

        label_44 = new QLabel(time_plan_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_8->addWidget(label_44, 0, 1, 1, 1);

        label_45 = new QLabel(time_plan_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_8->addWidget(label_45, 0, 2, 1, 1);

        label_46 = new QLabel(time_plan_4);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_8->addWidget(label_46, 1, 0, 1, 1);

        s_time_1_t_plan_4 = new QTimeEdit(time_plan_4);
        s_time_1_t_plan_4->setObjectName(QString::fromUtf8("s_time_1_t_plan_4"));

        gridLayout_8->addWidget(s_time_1_t_plan_4, 1, 1, 1, 1);

        e_time_1_t_plan_4 = new QTimeEdit(time_plan_4);
        e_time_1_t_plan_4->setObjectName(QString::fromUtf8("e_time_1_t_plan_4"));

        gridLayout_8->addWidget(e_time_1_t_plan_4, 1, 2, 1, 1);

        label_47 = new QLabel(time_plan_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_8->addWidget(label_47, 2, 0, 1, 1);

        s_time_2_t_plan_4 = new QTimeEdit(time_plan_4);
        s_time_2_t_plan_4->setObjectName(QString::fromUtf8("s_time_2_t_plan_4"));

        gridLayout_8->addWidget(s_time_2_t_plan_4, 2, 1, 1, 1);

        e_time_2_t_plan_4 = new QTimeEdit(time_plan_4);
        e_time_2_t_plan_4->setObjectName(QString::fromUtf8("e_time_2_t_plan_4"));

        gridLayout_8->addWidget(e_time_2_t_plan_4, 2, 2, 1, 1);

        label_48 = new QLabel(time_plan_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_8->addWidget(label_48, 3, 0, 1, 1);

        s_time_3_t_plan_4 = new QTimeEdit(time_plan_4);
        s_time_3_t_plan_4->setObjectName(QString::fromUtf8("s_time_3_t_plan_4"));

        gridLayout_8->addWidget(s_time_3_t_plan_4, 3, 1, 1, 1);

        e_time_3_t_plan_4 = new QTimeEdit(time_plan_4);
        e_time_3_t_plan_4->setObjectName(QString::fromUtf8("e_time_3_t_plan_4"));

        gridLayout_8->addWidget(e_time_3_t_plan_4, 3, 2, 1, 1);

        label_49 = new QLabel(time_plan_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_8->addWidget(label_49, 4, 0, 1, 1);

        s_time_4_t_plan_4 = new QTimeEdit(time_plan_4);
        s_time_4_t_plan_4->setObjectName(QString::fromUtf8("s_time_4_t_plan_4"));

        gridLayout_8->addWidget(s_time_4_t_plan_4, 4, 1, 1, 1);

        e_time_4_t_plan_4 = new QTimeEdit(time_plan_4);
        e_time_4_t_plan_4->setObjectName(QString::fromUtf8("e_time_4_t_plan_4"));

        gridLayout_8->addWidget(e_time_4_t_plan_4, 4, 2, 1, 1);

        tabWidget_plan_4->addTab(time_plan_4, QString());
        sun_plan_4 = new QWidget();
        sun_plan_4->setObjectName(QString::fromUtf8("sun_plan_4"));
        en_s_plan_4 = new QCheckBox(sun_plan_4);
        en_s_plan_4->setObjectName(QString::fromUtf8("en_s_plan_4"));
        en_s_plan_4->setGeometry(QRect(10, 10, 48, 16));
        label_50 = new QLabel(sun_plan_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(64, 10, 54, 16));
        label_51 = new QLabel(sun_plan_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(124, 10, 54, 16));
        label_52 = new QLabel(sun_plan_4);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_4 = new QLineEdit(sun_plan_4);
        s_lux_s_plan_4->setObjectName(QString::fromUtf8("s_lux_s_plan_4"));
        s_lux_s_plan_4->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_4 = new QLineEdit(sun_plan_4);
        e_lux_s_plan_4->setObjectName(QString::fromUtf8("e_lux_s_plan_4"));
        e_lux_s_plan_4->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_4->addTab(sun_plan_4, QString());

        gridLayout_7->addWidget(tabWidget_plan_4, 0, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        set_btn_plan_4 = new QPushButton(groupBox_plan_4);
        set_btn_plan_4->setObjectName(QString::fromUtf8("set_btn_plan_4"));

        gridLayout_7->addWidget(set_btn_plan_4, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_4, 0, 4, 1, 1);

        groupBox_plan_5 = new QGroupBox(groupBox_5);
        groupBox_plan_5->setObjectName(QString::fromUtf8("groupBox_plan_5"));
        gridLayout_9 = new QGridLayout(groupBox_plan_5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        tabWidget_plan_5 = new QTabWidget(groupBox_plan_5);
        tabWidget_plan_5->setObjectName(QString::fromUtf8("tabWidget_plan_5"));
        time_plan_5 = new QWidget();
        time_plan_5->setObjectName(QString::fromUtf8("time_plan_5"));
        gridLayout_10 = new QGridLayout(time_plan_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        s_time_2_t_plan_5 = new QTimeEdit(time_plan_5);
        s_time_2_t_plan_5->setObjectName(QString::fromUtf8("s_time_2_t_plan_5"));

        gridLayout_10->addWidget(s_time_2_t_plan_5, 2, 1, 1, 1);

        label_57 = new QLabel(time_plan_5);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_10->addWidget(label_57, 3, 0, 1, 1);

        label_58 = new QLabel(time_plan_5);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_10->addWidget(label_58, 4, 0, 1, 1);

        label_56 = new QLabel(time_plan_5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_10->addWidget(label_56, 2, 0, 1, 1);

        s_time_1_t_plan_5 = new QTimeEdit(time_plan_5);
        s_time_1_t_plan_5->setObjectName(QString::fromUtf8("s_time_1_t_plan_5"));

        gridLayout_10->addWidget(s_time_1_t_plan_5, 1, 1, 1, 1);

        e_time_4_t_plan_5 = new QTimeEdit(time_plan_5);
        e_time_4_t_plan_5->setObjectName(QString::fromUtf8("e_time_4_t_plan_5"));

        gridLayout_10->addWidget(e_time_4_t_plan_5, 4, 2, 1, 1);

        e_time_1_t_plan_5 = new QTimeEdit(time_plan_5);
        e_time_1_t_plan_5->setObjectName(QString::fromUtf8("e_time_1_t_plan_5"));

        gridLayout_10->addWidget(e_time_1_t_plan_5, 1, 2, 1, 1);

        e_time_2_t_plan_5 = new QTimeEdit(time_plan_5);
        e_time_2_t_plan_5->setObjectName(QString::fromUtf8("e_time_2_t_plan_5"));

        gridLayout_10->addWidget(e_time_2_t_plan_5, 2, 2, 1, 1);

        e_time_3_t_plan_5 = new QTimeEdit(time_plan_5);
        e_time_3_t_plan_5->setObjectName(QString::fromUtf8("e_time_3_t_plan_5"));

        gridLayout_10->addWidget(e_time_3_t_plan_5, 3, 2, 1, 1);

        en_t_plan_5 = new QCheckBox(time_plan_5);
        en_t_plan_5->setObjectName(QString::fromUtf8("en_t_plan_5"));

        gridLayout_10->addWidget(en_t_plan_5, 0, 0, 1, 1);

        s_time_4_t_plan_5 = new QTimeEdit(time_plan_5);
        s_time_4_t_plan_5->setObjectName(QString::fromUtf8("s_time_4_t_plan_5"));

        gridLayout_10->addWidget(s_time_4_t_plan_5, 4, 1, 1, 1);

        label_53 = new QLabel(time_plan_5);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_10->addWidget(label_53, 0, 1, 1, 1);

        label_54 = new QLabel(time_plan_5);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_10->addWidget(label_54, 0, 2, 1, 1);

        s_time_3_t_plan_5 = new QTimeEdit(time_plan_5);
        s_time_3_t_plan_5->setObjectName(QString::fromUtf8("s_time_3_t_plan_5"));

        gridLayout_10->addWidget(s_time_3_t_plan_5, 3, 1, 1, 1);

        label_55 = new QLabel(time_plan_5);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_10->addWidget(label_55, 1, 0, 1, 1);

        tabWidget_plan_5->addTab(time_plan_5, QString());
        sun_plan_5 = new QWidget();
        sun_plan_5->setObjectName(QString::fromUtf8("sun_plan_5"));
        en_s_plan_5 = new QCheckBox(sun_plan_5);
        en_s_plan_5->setObjectName(QString::fromUtf8("en_s_plan_5"));
        en_s_plan_5->setGeometry(QRect(10, 10, 31, 16));
        label_59 = new QLabel(sun_plan_5);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(54, 10, 54, 16));
        label_60 = new QLabel(sun_plan_5);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(114, 10, 54, 16));
        label_61 = new QLabel(sun_plan_5);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(10, 30, 31, 20));
        s_lux_s_plan_5 = new QLineEdit(sun_plan_5);
        s_lux_s_plan_5->setObjectName(QString::fromUtf8("s_lux_s_plan_5"));
        s_lux_s_plan_5->setGeometry(QRect(50, 30, 51, 20));
        e_lux_s_plan_5 = new QLineEdit(sun_plan_5);
        e_lux_s_plan_5->setObjectName(QString::fromUtf8("e_lux_s_plan_5"));
        e_lux_s_plan_5->setGeometry(QRect(110, 30, 51, 20));
        tabWidget_plan_5->addTab(sun_plan_5, QString());

        gridLayout_9->addWidget(tabWidget_plan_5, 0, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        set_btn_plan_5 = new QPushButton(groupBox_plan_5);
        set_btn_plan_5->setObjectName(QString::fromUtf8("set_btn_plan_5"));

        gridLayout_9->addWidget(set_btn_plan_5, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_5, 1, 0, 1, 1);

        groupBox_plan_1 = new QGroupBox(groupBox_5);
        groupBox_plan_1->setObjectName(QString::fromUtf8("groupBox_plan_1"));
        gridLayout_2 = new QGridLayout(groupBox_plan_1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget_plan_1 = new QTabWidget(groupBox_plan_1);
        tabWidget_plan_1->setObjectName(QString::fromUtf8("tabWidget_plan_1"));
        time_plan_1 = new QWidget();
        time_plan_1->setObjectName(QString::fromUtf8("time_plan_1"));
        gridLayout = new QGridLayout(time_plan_1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        en_t_plan_1 = new QCheckBox(time_plan_1);
        en_t_plan_1->setObjectName(QString::fromUtf8("en_t_plan_1"));

        gridLayout->addWidget(en_t_plan_1, 0, 0, 1, 1);

        label_7 = new QLabel(time_plan_1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        label_19 = new QLabel(time_plan_1);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 0, 2, 1, 1);

        label = new QLabel(time_plan_1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        s_time_1_t_plan_1 = new QTimeEdit(time_plan_1);
        s_time_1_t_plan_1->setObjectName(QString::fromUtf8("s_time_1_t_plan_1"));

        gridLayout->addWidget(s_time_1_t_plan_1, 1, 1, 1, 1);

        e_time_1_t_plan_1 = new QTimeEdit(time_plan_1);
        e_time_1_t_plan_1->setObjectName(QString::fromUtf8("e_time_1_t_plan_1"));

        gridLayout->addWidget(e_time_1_t_plan_1, 1, 2, 1, 1);

        label_20 = new QLabel(time_plan_1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 2, 0, 1, 1);

        s_time_2_t_plan_1 = new QTimeEdit(time_plan_1);
        s_time_2_t_plan_1->setObjectName(QString::fromUtf8("s_time_2_t_plan_1"));

        gridLayout->addWidget(s_time_2_t_plan_1, 2, 1, 1, 1);

        e_time_2_t_plan_1 = new QTimeEdit(time_plan_1);
        e_time_2_t_plan_1->setObjectName(QString::fromUtf8("e_time_2_t_plan_1"));

        gridLayout->addWidget(e_time_2_t_plan_1, 2, 2, 1, 1);

        label_21 = new QLabel(time_plan_1);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 3, 0, 1, 1);

        s_time_3_t_plan_1 = new QTimeEdit(time_plan_1);
        s_time_3_t_plan_1->setObjectName(QString::fromUtf8("s_time_3_t_plan_1"));

        gridLayout->addWidget(s_time_3_t_plan_1, 3, 1, 1, 1);

        e_time_3_t_plan_1 = new QTimeEdit(time_plan_1);
        e_time_3_t_plan_1->setObjectName(QString::fromUtf8("e_time_3_t_plan_1"));

        gridLayout->addWidget(e_time_3_t_plan_1, 3, 2, 1, 1);

        label_22 = new QLabel(time_plan_1);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 4, 0, 1, 1);

        s_time_4_t_plan_1 = new QTimeEdit(time_plan_1);
        s_time_4_t_plan_1->setObjectName(QString::fromUtf8("s_time_4_t_plan_1"));

        gridLayout->addWidget(s_time_4_t_plan_1, 4, 1, 1, 1);

        e_time_4_t_plan_1 = new QTimeEdit(time_plan_1);
        e_time_4_t_plan_1->setObjectName(QString::fromUtf8("e_time_4_t_plan_1"));

        gridLayout->addWidget(e_time_4_t_plan_1, 4, 2, 1, 1);

        tabWidget_plan_1->addTab(time_plan_1, QString());
        sun_plan_1 = new QWidget();
        sun_plan_1->setObjectName(QString::fromUtf8("sun_plan_1"));
        en_s_plan_1 = new QCheckBox(sun_plan_1);
        en_s_plan_1->setObjectName(QString::fromUtf8("en_s_plan_1"));
        en_s_plan_1->setGeometry(QRect(10, 10, 48, 16));
        label_23 = new QLabel(sun_plan_1);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(64, 10, 54, 16));
        label_24 = new QLabel(sun_plan_1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(124, 10, 54, 16));
        label_25 = new QLabel(sun_plan_1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 30, 48, 20));
        s_lux_s_plan_1 = new QLineEdit(sun_plan_1);
        s_lux_s_plan_1->setObjectName(QString::fromUtf8("s_lux_s_plan_1"));
        s_lux_s_plan_1->setGeometry(QRect(60, 30, 51, 20));
        e_lux_s_plan_1 = new QLineEdit(sun_plan_1);
        e_lux_s_plan_1->setObjectName(QString::fromUtf8("e_lux_s_plan_1"));
        e_lux_s_plan_1->setGeometry(QRect(120, 30, 51, 20));
        tabWidget_plan_1->addTab(sun_plan_1, QString());

        gridLayout_2->addWidget(tabWidget_plan_1, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        set_btn_plan_1 = new QPushButton(groupBox_plan_1);
        set_btn_plan_1->setObjectName(QString::fromUtf8("set_btn_plan_1"));

        gridLayout_2->addWidget(set_btn_plan_1, 1, 1, 1, 1);


        gridLayout_17->addWidget(groupBox_plan_1, 0, 0, 1, 1);


        gridLayout_28->addWidget(groupBox_5, 0, 1, 4, 1);

        device_information->setCentralWidget(centralwidget);
        menubar = new QMenuBar(device_information);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1354, 23));
        menubar->setNativeMenuBar(true);
        menudevice_information = new QMenu(menubar);
        menudevice_information->setObjectName(QString::fromUtf8("menudevice_information"));
        device_information->setMenuBar(menubar);

        menubar->addAction(menudevice_information->menuAction());

        retranslateUi(device_information);

        environment->setCurrentIndex(3);
        tabWidget_plan_7->setCurrentIndex(0);
        tabWidget_plan_3->setCurrentIndex(0);
        tabWidget_plan_6->setCurrentIndex(0);
        tabWidget_plan_8->setCurrentIndex(0);
        tabWidget_plan_2->setCurrentIndex(0);
        tabWidget_plan_4->setCurrentIndex(0);
        tabWidget_plan_5->setCurrentIndex(0);
        tabWidget_plan_1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(device_information);
    } // setupUi

    void retranslateUi(QMainWindow *device_information)
    {
        device_information->setWindowTitle(QCoreApplication::translate("device_information", "MainWindow", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("device_information", "dev id", nullptr));
        label_14->setText(QCoreApplication::translate("device_information", "id", nullptr));
        dev_id->setText(QString());
        label_15->setText(QCoreApplication::translate("device_information", "nettype", nullptr));
        net_type->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("device_information", "ETH", nullptr));
        label_2->setText(QCoreApplication::translate("device_information", "ip", nullptr));
        label_3->setText(QCoreApplication::translate("device_information", "nettype", nullptr));
        eth_netmask->setText(QString());
        label_4->setText(QCoreApplication::translate("device_information", "gateway", nullptr));
        eth_gw->setText(QString());
        label_5->setText(QCoreApplication::translate("device_information", "dhcp", nullptr));
        eth_dhcp->setText(QString());
        label_6->setText(QCoreApplication::translate("device_information", "mac", nullptr));
        eth_mac->setText(QString());
        label_16->setText(QCoreApplication::translate("device_information", "dns", nullptr));
        eth_dns->setText(QString());
        set_btn_eth->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("device_information", "4G", nullptr));
        label_8->setText(QCoreApplication::translate("device_information", "ip", nullptr));
        label_9->setText(QCoreApplication::translate("device_information", "imei", nullptr));
        cat1_imei->setText(QString());
        label_10->setText(QCoreApplication::translate("device_information", "imsi", nullptr));
        cat1_imsi->setText(QString());
        label_11->setText(QCoreApplication::translate("device_information", "iccid", nullptr));
        cat1_iccid->setText(QString());
        label_13->setText(QCoreApplication::translate("device_information", "rssi", nullptr));
        cat1_rssi->setText(QString());
        label_94->setText(QCoreApplication::translate("device_information", "APN", nullptr));
        cat1_apn->setText(QString());
        set_btn_4g->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("device_information", "server", nullptr));
        label_12->setText(QCoreApplication::translate("device_information", "ip", nullptr));
        label_17->setText(QCoreApplication::translate("device_information", "port", nullptr));
        label_90->setText(QCoreApplication::translate("device_information", "name", nullptr));
        username->setText(QString());
        label_91->setText(QCoreApplication::translate("device_information", "pass", nullptr));
        password->setText(QString());
        label_18->setText(QCoreApplication::translate("device_information", "ntp", nullptr));
        set_btn_server->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("device_information", "eletric para", nullptr));
        label_89->setText(QCoreApplication::translate("device_information", "rel_num", nullptr));
        rel_num->setText(QString());
        label_92->setText(QCoreApplication::translate("device_information", "RT", nullptr));
        RT->setText(QString());
        set_btn_rel_num->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("device_information", "other para", nullptr));
        label_93->setText(QCoreApplication::translate("device_information", "timeZone", nullptr));
        timeZone->setText(QString());
        set_btn_other_para->setText(QCoreApplication::translate("device_information", "set", nullptr));
        environment->setTabText(environment->indexOf(env), QCoreApplication::translate("device_information", "env", nullptr));
        environment->setTabText(environment->indexOf(angle), QCoreApplication::translate("device_information", "angle", nullptr));
        environment->setTabText(environment->indexOf(well_lid), QCoreApplication::translate("device_information", "well lid", nullptr));
        environment->setTabText(environment->indexOf(switch_in), QCoreApplication::translate("device_information", "switch", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("device_information", "sensor user", nullptr));
        sb_windspeed->setText(QCoreApplication::translate("device_information", "\346\220\234\345\215\232\351\243\216\351\200\23701", nullptr));
        yn_temp->setText(QCoreApplication::translate("device_information", "\350\200\230\345\206\234\346\270\251\346\271\277\345\272\24615", nullptr));
        sb_winddir->setText(QCoreApplication::translate("device_information", "\346\220\234\345\215\232\351\243\216\345\220\22102", nullptr));
        yn_all_UV->setText(QCoreApplication::translate("device_information", "\350\200\230\345\206\234\350\276\220\345\260\20416", nullptr));
        sb_temp->setText(QCoreApplication::translate("device_information", "\346\220\234\345\215\232\346\270\251\346\271\277\345\272\24603", nullptr));
        yn_all_1a->setText(QCoreApplication::translate("device_information", "\350\200\230\345\206\234\345\244\232\345\220\210\344\270\2001A", nullptr));
        ml_angle->setText(QCoreApplication::translate("device_information", "\351\273\230\345\276\213\345\200\276\350\247\2220A", nullptr));
        yn_all_ff->setText(QCoreApplication::translate("device_information", "\350\200\230\345\206\234\345\244\232\345\220\210\344\270\200FF", nullptr));
        ml_well_lid->setText(QCoreApplication::translate("device_information", "\351\273\230\345\276\213\344\272\225\347\233\2260C", nullptr));
        yn_xf900_all_ff->setText(QCoreApplication::translate("device_information", "\350\200\230\345\206\234XF900 1BF", nullptr));
        jf_door->setText(QCoreApplication::translate("device_information", "\351\207\221\345\274\227\351\227\250\351\224\20120", nullptr));
        th_sun->setText(QCoreApplication::translate("device_information", "\345\244\251\345\220\210\345\205\211\347\205\247CC", nullptr));
        th_temp->setText(QCoreApplication::translate("device_information", "\345\244\251\345\220\210\346\270\251\346\271\277\345\272\24666", nullptr));
        lk_sun->setText(QCoreApplication::translate("device_information", "\350\223\235\346\216\247\345\205\211\347\205\24704", nullptr));
        th_aqi->setText(QCoreApplication::translate("device_information", "\345\244\251\345\220\210\347\251\272\346\260\2248A", nullptr));
        set_btn_sensor_use->setText(QCoreApplication::translate("device_information", "set", nullptr));
        th_wind->setText(QCoreApplication::translate("device_information", "\345\244\251\345\220\210\351\243\216\351\200\237\345\220\221C8", nullptr));
        btn_plan_refresh->setText(QCoreApplication::translate("device_information", "plan refresh", nullptr));
        btn_env_refresh->setText(QCoreApplication::translate("device_information", "env refresh", nullptr));
        btn_ele_refresh->setText(QCoreApplication::translate("device_information", "ele refresh", nullptr));
        btn_loopsta_refresh->setText(QCoreApplication::translate("device_information", "loop refresh", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("device_information", "electric param", nullptr));
        label_122->setText(QCoreApplication::translate("device_information", "Ec\357\274\232", nullptr));
        current_c->setText(QString());
        current_Ia_1->setText(QString());
        label_132->setText(QCoreApplication::translate("device_information", "Ib4\357\274\232", nullptr));
        voltage_b->setText(QString());
        label_120->setText(QCoreApplication::translate("device_information", "Vc\357\274\232", nullptr));
        label_124->setText(QCoreApplication::translate("device_information", "Ib1\357\274\232", nullptr));
        current_Ib_4->setText(QString());
        current_Ib_8->setText(QString());
        label_144->setText(QCoreApplication::translate("device_information", "Ib8\357\274\232", nullptr));
        label_117->setText(QCoreApplication::translate("device_information", "Vb\357\274\232", nullptr));
        current_Ib_7->setText(QString());
        label_146->setText(QCoreApplication::translate("device_information", "Ia8\357\274\232", nullptr));
        label_141->setText(QCoreApplication::translate("device_information", "Ib7\357\274\232", nullptr));
        voltage_a->setText(QString());
        label_125->setText(QCoreApplication::translate("device_information", "Ic1\357\274\232", nullptr));
        current_Ia_8->setText(QString());
        energy_a->setText(QString());
        label_126->setText(QCoreApplication::translate("device_information", "Ib2\357\274\232", nullptr));
        label_139->setText(QCoreApplication::translate("device_information", "Ic6\357\274\232", nullptr));
        label_127->setText(QCoreApplication::translate("device_information", "Ic2\357\274\232", nullptr));
        current_Ib_3->setText(QString());
        label_140->setText(QCoreApplication::translate("device_information", "Ia6\357\274\232", nullptr));
        current_Ia_4->setText(QString());
        label_133->setText(QCoreApplication::translate("device_information", "Ic4\357\274\232", nullptr));
        current_Ib_5->setText(QString());
        label_130->setText(QCoreApplication::translate("device_information", "Ic3\357\274\232", nullptr));
        current_Ic_3->setText(QString());
        current_Ib_6->setText(QString());
        current_Ic_4->setText(QString());
        voltage_c->setText(QString());
        label_134->setText(QCoreApplication::translate("device_information", "Ia4\357\274\232", nullptr));
        current_Ic_8->setText(QString());
        label_128->setText(QCoreApplication::translate("device_information", "Ia2\357\274\232", nullptr));
        label_119->setText(QCoreApplication::translate("device_information", "Eb\357\274\232", nullptr));
        label_136->setText(QCoreApplication::translate("device_information", "Ic5\357\274\232", nullptr));
        current_Ia_7->setText(QString());
        label_116->setText(QCoreApplication::translate("device_information", "Ia\357\274\232", nullptr));
        current_b->setText(QString());
        energy_b->setText(QString());
        label_114->setText(QCoreApplication::translate("device_information", "Va\357\274\232", nullptr));
        label_121->setText(QCoreApplication::translate("device_information", "Ic\357\274\232", nullptr));
        label_129->setText(QCoreApplication::translate("device_information", "Ib3\357\274\232", nullptr));
        label_131->setText(QCoreApplication::translate("device_information", "Ia3\357\274\232", nullptr));
        current_Ia_5->setText(QString());
        label_135->setText(QCoreApplication::translate("device_information", "Ib5\357\274\232", nullptr));
        label_143->setText(QCoreApplication::translate("device_information", "Ia7\357\274\232", nullptr));
        current_Ib_1->setText(QString());
        current_Ia_2->setText(QString());
        label_115->setText(QCoreApplication::translate("device_information", "Ea\357\274\232", nullptr));
        label_138->setText(QCoreApplication::translate("device_information", "Ib6\357\274\232", nullptr));
        current_Ic_1->setText(QString());
        label_137->setText(QCoreApplication::translate("device_information", "Ia5\357\274\232", nullptr));
        current_Ic_2->setText(QString());
        current_Ic_5->setText(QString());
        current_Ic_7->setText(QString());
        label_123->setText(QCoreApplication::translate("device_information", "Ia1\357\274\232", nullptr));
        current_Ib_2->setText(QString());
        current_Ic_6->setText(QString());
        current_Ia_6->setText(QString());
        energy_c->setText(QString());
        label_118->setText(QCoreApplication::translate("device_information", "Ib\357\274\232", nullptr));
        current_a->setText(QString());
        label_145->setText(QCoreApplication::translate("device_information", "Ic8\357\274\232", nullptr));
        label_142->setText(QCoreApplication::translate("device_information", "Ic7\357\274\232", nullptr));
        current_Ia_3->setText(QString());
        groupBox_8->setTitle(QCoreApplication::translate("device_information", "loop control", nullptr));
        radioButton_loop_1->setText(QCoreApplication::translate("device_information", "loop 1", nullptr));
        radioButton_loop_5->setText(QCoreApplication::translate("device_information", "loop 5", nullptr));
        radioButton_loop_2->setText(QCoreApplication::translate("device_information", "loop 2", nullptr));
        radioButton_loop_6->setText(QCoreApplication::translate("device_information", "loop 6", nullptr));
        radioButton_loop_3->setText(QCoreApplication::translate("device_information", "loop 3", nullptr));
        radioButton_loop_7->setText(QCoreApplication::translate("device_information", "loop 7", nullptr));
        radioButton_loop_4->setText(QCoreApplication::translate("device_information", "loop 4", nullptr));
        radioButton_loop_8->setText(QCoreApplication::translate("device_information", "loop 8", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("device_information", "plan", nullptr));
        groupBox_plan_7->setTitle(QCoreApplication::translate("device_information", "plan 7", nullptr));
        en_t_plan_7->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_71->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_72->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_73->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_74->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_75->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_76->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_7->setTabText(tabWidget_plan_7->indexOf(time_plan_7), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_7->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_77->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_78->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_79->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_7->setTabText(tabWidget_plan_7->indexOf(sun_plan_7), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_7->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_3->setTitle(QCoreApplication::translate("device_information", "plan 3", nullptr));
        en_t_plan_3->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_35->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_36->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_37->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_38->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_39->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_40->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_3->setTabText(tabWidget_plan_3->indexOf(time_plan_3), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_3->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_41->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_42->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_43->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_3->setTabText(tabWidget_plan_3->indexOf(sun_plan_3), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_3->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_6->setTitle(QCoreApplication::translate("device_information", "plan 6", nullptr));
        en_t_plan_6->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_62->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_63->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_64->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_65->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_66->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_67->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_6->setTabText(tabWidget_plan_6->indexOf(time_plan_6), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_6->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_68->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_69->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_70->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_6->setTabText(tabWidget_plan_6->indexOf(sun_plan_6), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_6->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_8->setTitle(QCoreApplication::translate("device_information", "plan 8", nullptr));
        en_t_plan_8->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_80->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_81->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_82->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_83->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_84->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_85->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_8->setTabText(tabWidget_plan_8->indexOf(time_plan_8), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_8->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_86->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_87->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_88->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_8->setTabText(tabWidget_plan_8->indexOf(sun_plan_8), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_8->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_2->setTitle(QCoreApplication::translate("device_information", "plan 2", nullptr));
        en_t_plan_2->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_26->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_27->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_28->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_29->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_30->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_31->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_2->setTabText(tabWidget_plan_2->indexOf(time_plan_2), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_2->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_32->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_33->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_34->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_2->setTabText(tabWidget_plan_2->indexOf(sun_plan_2), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_2->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_4->setTitle(QCoreApplication::translate("device_information", "plan 4", nullptr));
        en_t_plan_4->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_44->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_45->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_46->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_47->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_48->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_49->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_4->setTabText(tabWidget_plan_4->indexOf(time_plan_4), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_4->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_50->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_51->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_52->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_4->setTabText(tabWidget_plan_4->indexOf(sun_plan_4), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_4->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_5->setTitle(QCoreApplication::translate("device_information", "plan 5", nullptr));
        label_57->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_58->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        label_56->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        en_t_plan_5->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_53->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_54->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_55->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        tabWidget_plan_5->setTabText(tabWidget_plan_5->indexOf(time_plan_5), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_5->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_59->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_60->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_61->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_5->setTabText(tabWidget_plan_5->indexOf(sun_plan_5), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_5->setText(QCoreApplication::translate("device_information", "set", nullptr));
        groupBox_plan_1->setTitle(QCoreApplication::translate("device_information", "plan 1", nullptr));
        en_t_plan_1->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_7->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_19->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label->setText(QCoreApplication::translate("device_information", "phase 1:", nullptr));
        label_20->setText(QCoreApplication::translate("device_information", "phase 2:", nullptr));
        label_21->setText(QCoreApplication::translate("device_information", "phase 3:", nullptr));
        label_22->setText(QCoreApplication::translate("device_information", "phase 4:", nullptr));
        tabWidget_plan_1->setTabText(tabWidget_plan_1->indexOf(time_plan_1), QCoreApplication::translate("device_information", "time_plan", nullptr));
        en_s_plan_1->setText(QCoreApplication::translate("device_information", "EN", nullptr));
        label_23->setText(QCoreApplication::translate("device_information", "start", nullptr));
        label_24->setText(QCoreApplication::translate("device_information", "end", nullptr));
        label_25->setText(QCoreApplication::translate("device_information", "lux:", nullptr));
        tabWidget_plan_1->setTabText(tabWidget_plan_1->indexOf(sun_plan_1), QCoreApplication::translate("device_information", "sun_plan", nullptr));
        set_btn_plan_1->setText(QCoreApplication::translate("device_information", "set", nullptr));
        menudevice_information->setTitle(QCoreApplication::translate("device_information", "device information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class device_information: public Ui_device_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_INFORMATION_H
