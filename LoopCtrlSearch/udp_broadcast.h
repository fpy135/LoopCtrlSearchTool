#ifndef UDP_BROADCAST_H
#define UDP_BROADCAST_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QtNetwork>
#include <QTimer>

#include "dev_info_common.h"

class udp_broadcast : public QMainWindow
{
    Q_OBJECT
public:
    explicit udp_broadcast(QWidget *parent = nullptr);

    void autoFindDevice(uint8_t mode);
    void udp_sendData(uint8_t *send_data, uint16_t data_len, QHostAddress address, uint16_t port);

signals:
    void udp_send_single(uint8_t *send_data, uint8_t data_len, QHostAddress address, uint16_t port);

    void broadcast_sendValidData(uint8_t *send_data, uint16_t data_len);
    void broadcast_recvValidData(devInfo *dev_info);

//    void udp_recvPlanData(std::vector<devPlanInfo> dev_plan_info);
    void udp_recvPlanData(devPlanInfo *dev_plan_info);
    void udp_recvEnvData(QString env_info);
    void udp_recvSwitchData(QString switch_str);
    void udp_recvAngleData(QString angle_str);
    void udp_recvWellLidData(QString well_lid_str);
    void udp_recvLoopstaData(uint8_t *loop_sta);
    void udp_recvEleData(dev_EleInfo *dev_ele);

    void udp_recvRelNum(uint8_t relnum);
    void udp_recvEnergyPara(dev_EnergyPara energy_para);
    void udp_recvServerInfo(devServerInfo dev_server);
    void udp_recvSensorUse(SENSOR_485_USE_TYPE sensor_use);
    void udp_recvTimeZone(int timezone);
public slots:
    void broadcast_sendData(uint8_t *send_data, uint16_t data_len);
private slots:
    void recvDataPorcess(QUdpSocket* curr_udp);         //广播接受数据处理函数
private:
    QUdpSocket* udp_send;   //udp发送端
    QUdpSocket* udp_multicast_recv;   //udp发送端
    QTimer* timer_send;
    devPlanInfo dev_plan[REL_NUM_MAX];
    uint8_t loop_sta[REL_NUM_MAX];
    dev_EleInfo dev_ele;
    devInfo dev_info;

    void broadcastDatagram();   //广播数据发送函数
};

#endif // UDP_BROADCAST_H
