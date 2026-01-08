#include <QTime>
#include <QMetaType>
#include <QButtonGroup>
#include <QDebug>

#include "device_information.h"
#include "ui_device_information.h"

QTimeEdit *plan_time_edit[REL_NUM_MAX*8];
QCheckBox *plan_en_checkbox[REL_NUM_MAX*2];
QLineEdit *plan_lux_edit[REL_NUM_MAX*2];
QGroupBox *plan_groupbox[REL_NUM_MAX];
QTabWidget *plan_tabwidget[REL_NUM_MAX];
QPushButton *plan_setbtn[REL_NUM_MAX];
QRadioButton *loop_sta_ctrlbtn[REL_NUM_MAX];
QButtonGroup *loop_sta_group[REL_NUM_MAX];
QLabel *ele_label[ELE_MAIN_CIRCUIT_NUM*3+ELE_LOOP_CIRCUIT_NUM];

device_information::device_information(devInfo devinfo,
                                       udp_broadcast *udp_dev,
                                       QWidget *parent) :
//    QMainWindow(parent),
    ui(new Ui::device_information)
{
    ui->setupUi(this);
    /*************配置设备场景***************/
    //设置窗口大小
    this->resize(1400,800);

    //设置图标和标题
    this->setWindowTitle("device information");
    //设置软件图标
    this->setWindowIcon(QIcon(":/resource/loopctrl_search.ico"));

    this->currdevinfo = devinfo;
    this->curr_udp_dev = udp_dev;

//    get_net_para();
    sensor_use.byte_use = 0x00000000;
    net_eth_show(currdevinfo.dev_eth_info);
    net_4g_show(currdevinfo.dev_4G_info);
    server_show(currdevinfo.dev_server);

    ui_element_unit_process();
    ui_button_unit_process();
}

device_information::~device_information()
{
    delete ui;
}

void device_information::closeEvent ( QCloseEvent * e )
{
    emit this->senceBack();
}

void setGroupBoxEditable(QGroupBox* groupBox, bool editable) {
    QList<QWidget*> children = groupBox->findChildren<QWidget*>();
    for (QWidget* child : children) {
        child->setEnabled(editable);
    }
}

void device_information::ui_element_unit_process(void)
{
    //将ui中的元素打包方便后续处理

    ele_label[0] = this->ui->voltage_a;
    ele_label[1] = this->ui->current_a;
    ele_label[2] = this->ui->energy_a;
    ele_label[3] = this->ui->voltage_b;
    ele_label[4] = this->ui->current_b;
    ele_label[5] = this->ui->energy_b;
    ele_label[6] = this->ui->voltage_c;
    ele_label[7] = this->ui->current_c;
    ele_label[8] = this->ui->energy_c;
    ele_label[9] = this->ui->current_Ia_1;
    ele_label[10] = this->ui->current_Ib_1;
    ele_label[11] = this->ui->current_Ic_1;
    ele_label[12] = this->ui->current_Ia_2;
    ele_label[13] = this->ui->current_Ib_2;
    ele_label[14] = this->ui->current_Ic_2;
    ele_label[15] = this->ui->current_Ia_3;
    ele_label[16] = this->ui->current_Ib_3;
    ele_label[17] = this->ui->current_Ic_3;
    ele_label[18] = this->ui->current_Ia_4;
    ele_label[19] = this->ui->current_Ib_4;
    ele_label[20] = this->ui->current_Ic_4;
    ele_label[21] = this->ui->current_Ia_5;
    ele_label[22] = this->ui->current_Ib_5;
    ele_label[23] = this->ui->current_Ic_5;
    ele_label[24] = this->ui->current_Ia_6;
    ele_label[25] = this->ui->current_Ib_6;
    ele_label[26] = this->ui->current_Ic_6;
    ele_label[27] = this->ui->current_Ia_7;
    ele_label[28] = this->ui->current_Ib_7;
    ele_label[29] = this->ui->current_Ic_7;
    ele_label[30] = this->ui->current_Ia_8;
    ele_label[31] = this->ui->current_Ib_8;
    ele_label[32] = this->ui->current_Ic_8;

    loop_sta_ctrlbtn[0] = this->ui->radioButton_loop_1;
    loop_sta_ctrlbtn[1] = this->ui->radioButton_loop_2;
    loop_sta_ctrlbtn[2] = this->ui->radioButton_loop_3;
    loop_sta_ctrlbtn[3] = this->ui->radioButton_loop_4;
    loop_sta_ctrlbtn[4] = this->ui->radioButton_loop_5;
    loop_sta_ctrlbtn[5] = this->ui->radioButton_loop_6;
    loop_sta_ctrlbtn[6] = this->ui->radioButton_loop_7;
    loop_sta_ctrlbtn[7] = this->ui->radioButton_loop_8;
//    for (uint8_t i=0; i<REL_NUM_MAX; i++) {
//        loop_sta_group[i] = new QButtonGroup(this);
//        loop_sta_group[i]->addButton(loop_sta_ctrlbtn[i]);
//    }

    plan_setbtn[0] = this->ui->set_btn_plan_1;
    plan_setbtn[1] = this->ui->set_btn_plan_2;
    plan_setbtn[2] = this->ui->set_btn_plan_3;
    plan_setbtn[3] = this->ui->set_btn_plan_4;
    plan_setbtn[4] = this->ui->set_btn_plan_5;
    plan_setbtn[5] = this->ui->set_btn_plan_6;
    plan_setbtn[6] = this->ui->set_btn_plan_7;
    plan_setbtn[7] = this->ui->set_btn_plan_8;

    plan_tabwidget[0] = this->ui->tabWidget_plan_1;
    plan_tabwidget[1] = this->ui->tabWidget_plan_2;
    plan_tabwidget[2] = this->ui->tabWidget_plan_3;
    plan_tabwidget[3] = this->ui->tabWidget_plan_4;
    plan_tabwidget[4] = this->ui->tabWidget_plan_5;
    plan_tabwidget[5] = this->ui->tabWidget_plan_6;
    plan_tabwidget[6] = this->ui->tabWidget_plan_7;
    plan_tabwidget[7] = this->ui->tabWidget_plan_8;

    plan_groupbox[0] = this->ui->groupBox_plan_1;
    plan_groupbox[1] = this->ui->groupBox_plan_2;
    plan_groupbox[2] = this->ui->groupBox_plan_3;
    plan_groupbox[3] = this->ui->groupBox_plan_4;
    plan_groupbox[4] = this->ui->groupBox_plan_5;
    plan_groupbox[5] = this->ui->groupBox_plan_6;
    plan_groupbox[6] = this->ui->groupBox_plan_7;
    plan_groupbox[7] = this->ui->groupBox_plan_8;

    plan_time_edit[0] = this->ui->s_time_1_t_plan_1;
    plan_time_edit[1] = this->ui->e_time_1_t_plan_1;
    plan_time_edit[2] = this->ui->s_time_2_t_plan_1;
    plan_time_edit[3] = this->ui->e_time_2_t_plan_1;
    plan_time_edit[4] = this->ui->s_time_3_t_plan_1;
    plan_time_edit[5] = this->ui->e_time_3_t_plan_1;
    plan_time_edit[6] = this->ui->s_time_4_t_plan_1;
    plan_time_edit[7] = this->ui->e_time_4_t_plan_1;

    plan_time_edit[8] = this->ui->s_time_1_t_plan_2;
    plan_time_edit[9] = this->ui->e_time_1_t_plan_2;
    plan_time_edit[10] = this->ui->s_time_2_t_plan_2;
    plan_time_edit[11] = this->ui->e_time_2_t_plan_2;
    plan_time_edit[12] = this->ui->s_time_3_t_plan_2;
    plan_time_edit[13] = this->ui->e_time_3_t_plan_2;
    plan_time_edit[14] = this->ui->s_time_4_t_plan_2;
    plan_time_edit[15] = this->ui->e_time_4_t_plan_2;

    plan_time_edit[16] = this->ui->s_time_1_t_plan_3;
    plan_time_edit[17] = this->ui->e_time_1_t_plan_3;
    plan_time_edit[18] = this->ui->s_time_2_t_plan_3;
    plan_time_edit[19] = this->ui->e_time_2_t_plan_3;
    plan_time_edit[20] = this->ui->s_time_3_t_plan_3;
    plan_time_edit[21] = this->ui->e_time_3_t_plan_3;
    plan_time_edit[22] = this->ui->s_time_4_t_plan_3;
    plan_time_edit[23] = this->ui->e_time_4_t_plan_3;

    plan_time_edit[24] = this->ui->s_time_1_t_plan_4;
    plan_time_edit[25] = this->ui->e_time_1_t_plan_4;
    plan_time_edit[26] = this->ui->s_time_2_t_plan_4;
    plan_time_edit[27] = this->ui->e_time_2_t_plan_4;
    plan_time_edit[28] = this->ui->s_time_3_t_plan_4;
    plan_time_edit[29] = this->ui->e_time_3_t_plan_4;
    plan_time_edit[30] = this->ui->s_time_4_t_plan_4;
    plan_time_edit[31] = this->ui->e_time_4_t_plan_4;

    plan_time_edit[32] = this->ui->s_time_1_t_plan_5;
    plan_time_edit[33] = this->ui->e_time_1_t_plan_5;
    plan_time_edit[34] = this->ui->s_time_2_t_plan_5;
    plan_time_edit[35] = this->ui->e_time_2_t_plan_5;
    plan_time_edit[36] = this->ui->s_time_3_t_plan_5;
    plan_time_edit[37] = this->ui->e_time_3_t_plan_5;
    plan_time_edit[38] = this->ui->s_time_4_t_plan_5;
    plan_time_edit[39] = this->ui->e_time_4_t_plan_5;

    plan_time_edit[40] = this->ui->s_time_1_t_plan_6;
    plan_time_edit[41] = this->ui->e_time_1_t_plan_6;
    plan_time_edit[42] = this->ui->s_time_2_t_plan_6;
    plan_time_edit[43] = this->ui->e_time_2_t_plan_6;
    plan_time_edit[44] = this->ui->s_time_3_t_plan_6;
    plan_time_edit[45] = this->ui->e_time_3_t_plan_6;
    plan_time_edit[46] = this->ui->s_time_4_t_plan_6;
    plan_time_edit[47] = this->ui->e_time_4_t_plan_6;

    plan_time_edit[48] = this->ui->s_time_1_t_plan_7;
    plan_time_edit[49] = this->ui->e_time_1_t_plan_7;
    plan_time_edit[50] = this->ui->s_time_2_t_plan_7;
    plan_time_edit[51] = this->ui->e_time_2_t_plan_7;
    plan_time_edit[52] = this->ui->s_time_3_t_plan_7;
    plan_time_edit[53] = this->ui->e_time_3_t_plan_7;
    plan_time_edit[54] = this->ui->s_time_4_t_plan_7;
    plan_time_edit[55] = this->ui->e_time_4_t_plan_7;

    plan_time_edit[56] = this->ui->s_time_1_t_plan_8;
    plan_time_edit[57] = this->ui->e_time_1_t_plan_8;
    plan_time_edit[58] = this->ui->s_time_2_t_plan_8;
    plan_time_edit[59] = this->ui->e_time_2_t_plan_8;
    plan_time_edit[60] = this->ui->s_time_3_t_plan_8;
    plan_time_edit[61] = this->ui->e_time_3_t_plan_8;
    plan_time_edit[62] = this->ui->s_time_4_t_plan_8;
    plan_time_edit[63] = this->ui->e_time_4_t_plan_8;

    plan_en_checkbox[0] = this->ui->en_t_plan_1;
    plan_en_checkbox[1] = this->ui->en_s_plan_1;
    plan_en_checkbox[2] = this->ui->en_t_plan_2;
    plan_en_checkbox[3] = this->ui->en_s_plan_2;
    plan_en_checkbox[4] = this->ui->en_t_plan_3;
    plan_en_checkbox[5] = this->ui->en_s_plan_3;
    plan_en_checkbox[6] = this->ui->en_t_plan_4;
    plan_en_checkbox[7] = this->ui->en_s_plan_4;
    plan_en_checkbox[8] = this->ui->en_t_plan_5;
    plan_en_checkbox[9] = this->ui->en_s_plan_5;
    plan_en_checkbox[10] = this->ui->en_t_plan_6;
    plan_en_checkbox[11] = this->ui->en_s_plan_6;
    plan_en_checkbox[12] = this->ui->en_t_plan_7;
    plan_en_checkbox[13] = this->ui->en_s_plan_7;
    plan_en_checkbox[14] = this->ui->en_t_plan_8;
    plan_en_checkbox[15] = this->ui->en_s_plan_8;

    plan_lux_edit[0] = this->ui->s_lux_s_plan_1;
    plan_lux_edit[1] = this->ui->e_lux_s_plan_1;
    plan_lux_edit[2] = this->ui->s_lux_s_plan_2;
    plan_lux_edit[3] = this->ui->e_lux_s_plan_2;
    plan_lux_edit[4] = this->ui->s_lux_s_plan_3;
    plan_lux_edit[5] = this->ui->e_lux_s_plan_3;
    plan_lux_edit[6] = this->ui->s_lux_s_plan_4;
    plan_lux_edit[7] = this->ui->e_lux_s_plan_4;
    plan_lux_edit[8] = this->ui->s_lux_s_plan_5;
    plan_lux_edit[9] = this->ui->e_lux_s_plan_5;
    plan_lux_edit[10] = this->ui->s_lux_s_plan_6;
    plan_lux_edit[11] = this->ui->e_lux_s_plan_6;
    plan_lux_edit[12] = this->ui->s_lux_s_plan_7;
    plan_lux_edit[13] = this->ui->e_lux_s_plan_7;
    plan_lux_edit[14] = this->ui->s_lux_s_plan_8;
    plan_lux_edit[15] = this->ui->e_lux_s_plan_8;

}

void device_information::ui_button_unit_process(void)
{
    this->ui->eth_mac->setEnabled(false);
    //将udp接收到的数据发给处理函数
    connect(curr_udp_dev, &udp_broadcast::udp_recvPlanData, this,  &device_information::plan_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvEnvData, this,  &device_information::env_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvAngleData, this,  &device_information::angle_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvWellLidData, this,  &device_information::well_lid_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvSwitchData, this,  &device_information::switch_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvLoopstaData, this,  &device_information::loop_sta_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvEleData, this,  &device_information::ele_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvRelNum, this,  &device_information::rel_num_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvEnergyPara, this,  &device_information::energy_para_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvServerInfo, this,  &device_information::server_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvSensorUse, this,  &device_information::sensor_use_show);
    connect(curr_udp_dev, &udp_broadcast::udp_recvTimeZone, this,  &device_information::other_para_show);

    //Editable
    for (uint8_t i=0; i<REL_NUM_MAX; i++) {
        if(i<currdevinfo.dev_rel_num)
        {
            loop_sta_ctrlbtn[i]->setEnabled(true);
            setGroupBoxEditable(plan_groupbox[i], true);
        }
        else
        {
            loop_sta_ctrlbtn[i]->setEnabled(false);
            setGroupBoxEditable(plan_groupbox[i], false);
        }
        //loop control
        connect(loop_sta_ctrlbtn[i], &QPushButton::toggled, this, &device_information::ctrl_loop_sta);
        //plan set
        connect(plan_setbtn[i], &QPushButton::clicked, this, &device_information::set_plan);
    }

    //refresh
    connect(this->ui->btn_plan_refresh, &QPushButton::clicked, this, &device_information::get_plan);
    connect(this->ui->btn_env_refresh, &QPushButton::clicked, this, &device_information::get_env);
    connect(this->ui->btn_ele_refresh, &QPushButton::clicked, this, &device_information::get_ele);
    connect(this->ui->btn_loopsta_refresh, &QPushButton::clicked, this, &device_information::get_loop_sta);

    //set button
    connect(this->ui->set_btn_rel_num, &QPushButton::clicked, this, &device_information::set_rel_num);
    connect(this->ui->set_btn_eth, &QPushButton::clicked, this, &device_information::set_net_para);
    connect(this->ui->set_btn_server, &QPushButton::clicked, this, &device_information::set_server);
    connect(this->ui->set_btn_sensor_use, &QPushButton::clicked, this, &device_information::set_sensor_use);
    connect(this->ui->set_btn_other_para, &QPushButton::clicked, this, &device_information::set_other_para);
    connect(this->ui->set_btn_4g, &QPushButton::clicked, this, &device_information::set_4g_para);
}

void device_information::sensor_use_show(SENSOR_485_USE_TYPE sensor_use_curr)
{
    sensor_use = sensor_use_curr;
    set_ui_sensor_use();
}

void device_information::other_para_show(int timezone)
{
    currdevinfo.dev_other_para.timeZome = timezone;
    this->ui->timeZone->setText(QString::number(timezone));
}

void device_information::rel_num_show(uint8_t rel_num)
{
    currdevinfo.dev_rel_num = rel_num;
    this->ui->rel_num->setText(QString::number(currdevinfo.dev_rel_num));
    //Editable
    for (uint8_t i=0; i<REL_NUM_MAX; i++) {
        if(i<currdevinfo.dev_rel_num)
        {
            loop_sta_ctrlbtn[i]->setEnabled(true);
            setGroupBoxEditable(plan_groupbox[i], true);
        }
        else
        {
            loop_sta_ctrlbtn[i]->setEnabled(false);
            setGroupBoxEditable(plan_groupbox[i], false);
        }
    }
}

void device_information::energy_para_show(dev_EnergyPara energy_para)
{
    currdevinfo.dev_energy_para = energy_para;
    this->ui->RT->setText(QString::number(currdevinfo.dev_energy_para.RT));
}

void device_information::ele_show(dev_EleInfo *dev_ele)
{
    for (uint8_t i=0; i<ELE_MAIN_CIRCUIT_NUM; i++) {
        ele_label[i*3]->setText(QString::number(dev_ele->main_voltage[i]/1000.0, 'f', 3));
        ele_label[i*3+1]->setText(QString::number(dev_ele->main_current[i]/1000.0, 'f', 3));
        ele_label[i*3+2]->setText(QString::number(dev_ele->main_energy[i]/1000.0, 'f', 3));
    }
    for (uint8_t i=0; i<ELE_LOOP_CIRCUIT_NUM; i++) {
        ele_label[ELE_MAIN_CIRCUIT_NUM*3+i]->setText(
                    QString::number(dev_ele->loop_current[i]/1000.0, 'f', 3));
    }
}

void device_information::loop_sta_show(uint8_t *loop_sta)
{
    for (uint8_t i = 0; i<REL_NUM_MAX; ++i) {
//        loop_sta_ctrlbtn[i]->setChecked(loop_sta[i]);
        if(loop_sta[i] == 0)
            loop_sta_ctrlbtn[i]->setChecked(false);
        else if(loop_sta[i] == 1)
            loop_sta_ctrlbtn[i]->setChecked(true);
    }
}

void device_information::env_show(QString env_info)
{
    this->ui->textBrowser_env->setText(env_info);
}
void device_information::angle_show(QString env_info)
{
    this->ui->textBrowser_angle->setText(env_info);
}
void device_information::well_lid_show(QString env_info)
{
    this->ui->textBrowser_well_lid->setText(env_info);
}
void device_information::switch_show(QString env_info)
{
    this->ui->textBrowser_switch->setText(env_info);
}

void device_information::plan_show(devPlanInfo *dev_plan_info)
{
    for (uint8_t i=0; i<currdevinfo.dev_rel_num; i++)
    {
        if(dev_plan_info[i].plan_type == 0)
        {
            QString plan_type_widget_name;
            plan_type_widget_name.sprintf("time_plan_%d", i+1);  // 使用 sprintf 格式化
            plan_en_checkbox[i*2]->setChecked(dev_plan_info[i].plan_valid);
            plan_en_checkbox[i*2+1]->setChecked(false);
            plan_tabwidget[i]->setCurrentWidget(
                        plan_tabwidget[i]->findChild<QWidget *>(plan_type_widget_name));

            plan_time_edit[i*8]->setTime(QTime::fromString(dev_plan_info[i].start_time[0]));
            plan_time_edit[i*8+1]->setTime(QTime::fromString(dev_plan_info[i].end_time[0]));
            plan_time_edit[i*8+2]->setTime(QTime::fromString(dev_plan_info[i].start_time[1]));
            plan_time_edit[i*8+3]->setTime(QTime::fromString(dev_plan_info[i].end_time[1]));
            plan_time_edit[i*8+4]->setTime(QTime::fromString(dev_plan_info[i].start_time[2]));
            plan_time_edit[i*8+5]->setTime(QTime::fromString(dev_plan_info[i].end_time[2]));
            plan_time_edit[i*8+6]->setTime(QTime::fromString(dev_plan_info[i].start_time[3]));
            plan_time_edit[i*8+7]->setTime(QTime::fromString(dev_plan_info[i].end_time[3]));
        }
        else if(dev_plan_info[i].plan_type == 1)
        {
            QString plan_type_widget_name;
            plan_type_widget_name.sprintf("sun_plan_%d", i+1);  // 使用 sprintf 格式化
            plan_tabwidget[i]->setCurrentIndex(1);
            plan_en_checkbox[i*2]->setChecked(false);
            plan_tabwidget[i]->setCurrentWidget(
                        plan_tabwidget[i]->findChild<QWidget *>(plan_type_widget_name));
            plan_en_checkbox[i*2+1]->setChecked(dev_plan_info[i].plan_valid);
            plan_lux_edit[i*2]->setText(QString::number(dev_plan_info[i].open_lux));
            plan_lux_edit[i*2+1]->setText(QString::number(dev_plan_info[i].close_lux));
        }
    }
}
void device_information::net_4g_show(dev4GInfo dev_4g)
{
    currdevinfo.dev_4G_info = dev_4g;
    this->ui->cat1_ip->setText(currdevinfo.dev_4G_info.dev_ip);
    this->ui->cat1_imei->setText(currdevinfo.dev_4G_info.dev_imei);
    this->ui->cat1_imsi->setText(currdevinfo.dev_4G_info.dev_imsi);
    this->ui->cat1_iccid->setText(currdevinfo.dev_4G_info.dev_iccid);
    this->ui->cat1_rssi->setText(QString::number(currdevinfo.dev_4G_info.dev_rssi));
    this->ui->cat1_apn->setText(currdevinfo.dev_4G_info.apn);
    this->ui->cat1_ip->setEnabled(false);
    this->ui->cat1_imei->setEnabled(false);
    this->ui->cat1_imsi->setEnabled(false);
    this->ui->cat1_iccid->setEnabled(false);
    this->ui->cat1_rssi->setEnabled(false);
}

void device_information::net_eth_show(devEthInfo dev_eth)
{
    currdevinfo.dev_eth_info = dev_eth;
    this->ui->eth_ip->setText(currdevinfo.dev_realip);
    this->ui->eth_netmask->setText(currdevinfo.dev_eth_info.dev_netmask);
    this->ui->eth_gw->setText(currdevinfo.dev_eth_info.dev_gateway);
    this->ui->eth_dhcp->setText(QString::number(currdevinfo.dev_eth_info.dev_dhcp));
    this->ui->eth_mac->setText(currdevinfo.dev_mac);
    this->ui->eth_dns->setText(currdevinfo.dev_eth_info.dev_dns);
}
void device_information::server_show(devServerInfo dev_server)
{
    currdevinfo.dev_server = dev_server;
    this->ui->dev_id->setText(currdevinfo.dev_id);
    this->ui->net_type->setText(currdevinfo.dev_nettype);
    this->ui->rel_num->setText(QString::number(currdevinfo.dev_rel_num));
    this->ui->RT->setText(QString::number(currdevinfo.dev_energy_para.RT));
    this->ui->server_ip->setText(currdevinfo.dev_server.dev_serverip);
    this->ui->server_port->setText(QString::number(currdevinfo.dev_server.dev_serverport));
    this->ui->username->setText(currdevinfo.dev_server.dev_server_username);
    this->ui->password->setText(currdevinfo.dev_server.dev_server_password);
    this->ui->ntp->setText(currdevinfo.dev_server.dev_ntp);


    this->ui->timeZone->setText(QString::number(currdevinfo.dev_other_para.timeZome));
}

void device_information::get_net_para(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("devtype", "LOOPCTRL");
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", FindDevPara_cmd);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void device_information::get_plan(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("devtype", "LOOPCTRL");
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", PlanGet_cmd);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}
void device_information::get_env(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("devtype", "LOOPCTRL");
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", EnvGet_cmd);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}
void device_information::get_ele(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("devtype", "LOOPCTRL");
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", EleGet_cmd);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}
void device_information::get_loop_sta(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("devtype", "LOOPCTRL");
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", LoopStaGet_cmd);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void device_information::ctrl_loop_sta(void)
{
    uint8_t loopid = 0;
    QRadioButton *active_btn = qobject_cast<QRadioButton*>(sender());

    for (uint8_t i=0; i<REL_NUM_MAX; i++) {
        if(active_btn == loop_sta_ctrlbtn[i])
        {
            loopid = i+1;
            break;
        }
    }
    QJsonObject dev_json;
    QJsonArray loopsta_array;
    QJsonObject loopsta;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", LoopCtrl_cmd);
    loopsta.insert("loopid", loopid);
    loopsta.insert("relsta", (active_btn->isChecked()) ? 1 : 0);
    loopsta_array.append(loopsta);
    dev_json.insert("loopsta", loopsta_array);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void get_ui_input_plan(QTimeEdit **time_edit, QString *ret_str, uint8_t *ret_phase)
{
    for (uint8_t i=0; i<4; i++) {
        QString str1 = (*time_edit[i*2]).time().toString("hh:mm");
        QString str2 = (*time_edit[i*2+1]).time().toString("hh:mm");

        if(str1 == str2)
        {
            break;
        }
        else
        {
            ret_str[i*2] = str1;
            ret_str[i*2+1] = str2;
            (*ret_phase)++;
        }
    }
}

void device_information::set_plan(void)
{
    uint8_t loopid = 0;
    QPushButton *active_btn = qobject_cast<QPushButton*>(sender());

    for (uint8_t i=0; i<REL_NUM_MAX; i++) {
        if(active_btn == plan_setbtn[i])
        {
            loopid = i+1;
            break;
        }
    }

    uint8_t ui_plan_type_curr = (plan_tabwidget[loopid-1]->currentIndex()) ? 1 : 0;
    uint8_t ui_plan_en_curr = (plan_en_checkbox[(loopid-1)*2+
                                plan_tabwidget[loopid-1]->currentIndex()]->
                                isChecked()) ? 1 : 0;
    qDebug() << "ui_plan_type_curr:" << ui_plan_type_curr;
    QJsonObject dev_json;
    QJsonArray plan_array;
    QJsonObject plan;
    QJsonArray plan_context_array;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", PlanSet_cmd);
    plan.insert("loopid", loopid);
    plan.insert("plan_type", ui_plan_type_curr);
    plan.insert("plan_valid", ui_plan_en_curr);
    if(ui_plan_type_curr == 0)
    {
        QString time_phase_str[8];
        uint8_t time_phase_num = 0;
        get_ui_input_plan(&plan_time_edit[(loopid-1)*8], time_phase_str, &time_phase_num);
        plan.insert("plan_phase_num", time_phase_num);
        for (uint8_t i=0; i<time_phase_num; i++) {
            QJsonObject plan_context;
            plan_context.insert("s_time", time_phase_str[i*2]);
            plan_context.insert("e_time", time_phase_str[i*2+1]);
            plan_context_array.append(plan_context);
        }
        plan.insert("plan_context", plan_context_array);
    }
    else if(ui_plan_type_curr == 1)
    {
        plan.insert("plan_phase_num", 1);
        QJsonObject plan_context;
        plan_context.insert("on", plan_lux_edit[(loopid-1)*2]->text().toInt());
        plan_context.insert("off", plan_lux_edit[(loopid-1)*2+1]->text().toInt());
        plan_context_array.append(plan_context);
        plan.insert("plan_context", plan_context_array);
    }
    plan_array.append(plan);
    dev_json.insert("plan", plan_array);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
    qDebug() << jsonbyte.data() <<jsonbyte.size();
}

void device_information::set_rel_num(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", RelNumSet_cmd);
    dev_json.insert("rel_num", this->ui->rel_num->text().toInt());
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
    QTimer::singleShot(500, this, SLOT(set_energy_para()));
}

void device_information::set_energy_para(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", EnergyParaSet_cmd);
    dev_json.insert("RT", this->ui->RT->text().toInt());
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif

}

void device_information::set_net_para(void)
{
    QJsonObject dev_json;
    QJsonObject eth;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", EthParaSet_cmd);
    eth.insert("ip", this->ui->eth_ip->text());
    eth.insert("netmask", this->ui->eth_netmask->text());
    eth.insert("gw", this->ui->eth_gw->text());
    eth.insert("dhcp", this->ui->eth_dhcp->text().toInt());
    eth.insert("dns", this->ui->eth_dns->text());
    dev_json.insert("eth", eth);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}
void device_information::set_server(void)
{
    QJsonObject dev_json;
    QJsonObject server_json;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", ServerSet_cmd);
    server_json.insert("serverIp", this->ui->server_ip->text());
    server_json.insert("serverPort", this->ui->server_port->text().toInt());
    server_json.insert("username", this->ui->username->text());
    server_json.insert("password", this->ui->password->text());
    server_json.insert("ntp", this->ui->ntp->text());

    dev_json.insert("server", server_json);
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void device_information::set_ui_sensor_use(void)
{
    this->ui->sb_windspeed->setChecked(sensor_use.bit_use.SM5386);
    this->ui->sb_winddir->setChecked(sensor_use.bit_use.SM5387B);
    this->ui->sb_temp->setChecked(sensor_use.bit_use.SM6333B);
    this->ui->yn_all_1a->setChecked(sensor_use.bit_use.HCD68XX_1A);
    this->ui->yn_all_ff->setChecked(sensor_use.bit_use.HCD68XX);
    this->ui->yn_all_UV->setChecked(sensor_use.bit_use.UVAB_YN);
    this->ui->yn_temp->setChecked(sensor_use.bit_use.WS301);
    this->ui->yn_xf900_all_ff->setChecked(sensor_use.bit_use.YN_XF900);
    this->ui->ml_angle->setChecked(sensor_use.bit_use.MTC70M);
    this->ui->ml_well_lid->setChecked(sensor_use.bit_use.ManholeCover_MTC70M);
    this->ui->jf_door->setChecked(sensor_use.bit_use.DOOR_LOCK_DS713);
    this->ui->th_aqi->setChecked(sensor_use.bit_use.TH_AQI);
    this->ui->th_sun->setChecked(sensor_use.bit_use.TH_LUX);
    this->ui->th_temp->setChecked(sensor_use.bit_use.TH_TempHum);
    this->ui->th_wind->setChecked(sensor_use.bit_use.TH_Wind);
    this->ui->lk_sun->setChecked(sensor_use.bit_use.LK_LUX);
}
void device_information::get_ui_sensor_use(void)
{
    sensor_use.bit_use.SM5386 = this->ui->sb_windspeed->isChecked();
    sensor_use.bit_use.SM5387B = this->ui->sb_winddir->isChecked();
    sensor_use.bit_use.SM6333B = this->ui->sb_temp->isChecked();
    sensor_use.bit_use.HCD68XX_1A = this->ui->yn_all_1a->isChecked();
    sensor_use.bit_use.HCD68XX = this->ui->yn_all_ff->isChecked();
    sensor_use.bit_use.UVAB_YN = this->ui->yn_all_UV->isChecked();
    sensor_use.bit_use.WS301 = this->ui->yn_temp->isChecked();
    sensor_use.bit_use.YN_XF900 = this->ui->yn_xf900_all_ff->isChecked();
    sensor_use.bit_use.MTC70M = this->ui->ml_angle->isChecked();
    sensor_use.bit_use.ManholeCover_MTC70M = this->ui->ml_well_lid->isChecked();
    sensor_use.bit_use.DOOR_LOCK_DS713 = this->ui->jf_door->isChecked();
    sensor_use.bit_use.TH_AQI = this->ui->th_aqi->isChecked();
    sensor_use.bit_use.TH_LUX = this->ui->th_sun->isChecked();
    sensor_use.bit_use.TH_TempHum = this->ui->th_temp->isChecked();
    sensor_use.bit_use.TH_Wind = this->ui->th_wind->isChecked();
    sensor_use.bit_use.LK_LUX = this->ui->lk_sun->isChecked();
}

void device_information::set_sensor_use(void)
{
    QJsonObject dev_json;
    QJsonObject server_json;

    get_ui_sensor_use();
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", SensorSet_cmd);
    dev_json.insert("sensorUse",  (int)(sensor_use.byte_use));

    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void device_information::set_other_para(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", TimeZoneSet_cmd);
    dev_json.insert("timeZone", this->ui->timeZone->text().toInt());
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}

void device_information::set_4g_para(void)
{
    QJsonObject dev_json;
    // 插入元素，对应键值对
    dev_json.insert("reqid", 1);
    dev_json.insert("devid", currdevinfo.dev_id);
    dev_json.insert("cmd", Para4GSet_cmd);
    dev_json.insert("APN", this->ui->cat1_apn->text());
    QJsonDocument jsonDoc(dev_json);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
#if USE_UDP_ONE_BY_ONE
    emit curr_udp_dev->udp_send_single((uint8_t *)jsonbyte.data(), jsonbyte.size(),
                                        QHostAddress(currdevinfo.dev_realip),
                                        currdevinfo.dev_port);
#else
    emit curr_udp_dev->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
#endif
}
