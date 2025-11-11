#ifndef DEVICE_INFORMATION_H
#define DEVICE_INFORMATION_H

#include <QMainWindow>
#include "dev_info_common.h"
#include "udp_broadcast.h"

namespace Ui {
class device_information;
}

//Q_DECLARE_METATYPE(std::vector<devPlanInfo>)

class device_information : public QMainWindow
{
    Q_OBJECT

public:
    explicit device_information(devInfo devinfo,
                                udp_broadcast *udp_dev,
                                QWidget *parent = nullptr);
    ~device_information();

    devInfo currdevinfo;
    devPlanInfo dev_plan[REL_NUM_MAX];
    udp_broadcast *curr_udp_dev;
//  void plan_show(std::vector<devPlanInfo> dev_plan_info);

private:
    Ui::device_information *ui;

    SENSOR_485_USE_TYPE sensor_use;
    int timeZome;

    void closeEvent ( QCloseEvent * e );

    void plan_show(devPlanInfo *dev_plan_info);
    void net_4g_show(dev4GInfo dev_4g);
    void net_eth_show(devEthInfo dev_eth);
    void server_show(devServerInfo dev_server);
    void env_show(QString env_info);
    void angle_show(QString env_info);
    void well_lid_show(QString env_info);
    void switch_show(QString env_info);
    void loop_sta_show(uint8_t *loop_sta);
    void ele_show(dev_EleInfo *dev_ele);
    void rel_num_show(uint8_t rel_num);
    void energy_para_show(dev_EnergyPara energy_para);
    void sensor_use_show(SENSOR_485_USE_TYPE sensor_use_curr);
    void other_para_show(int timezone);

    void ui_element_unit_process(void);
    void ui_button_unit_process(void);

    void get_net_para(void);
    void get_plan(void);
    void get_env(void);
    void get_ele(void);
    void get_loop_sta(void);

    void set_plan(void);
    void ctrl_loop_sta(void);
    void set_rel_num(void);
    void set_net_para(void);
    void set_server(void);
    void set_ui_sensor_use(void);
    void get_ui_sensor_use(void);
    void set_sensor_use(void);

    void set_other_para(void);
    void set_4g_para(void);
signals:
    //告诉主场景，点击了返回信号
    void senceBack(void);
private slots:
    void set_energy_para(void);
};

#endif // DEVICE_INFORMATION_H
