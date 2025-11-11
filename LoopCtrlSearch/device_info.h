#ifndef DEVICE_INFO_H
#define DEVICE_INFO_H

#include <QMainWindow>

typedef struct
{
    QString dev_type;  //设备类型
    QString dev_id;    //设备id
    QString dev_realip; //设备实际ip
    QString dev_nettype;     //设备ip
    uint16_t dev_port;  //设备端口
    QString dev_netmask;   //设备子网掩码
    QString dev_gateway;   //设备网关
    QString dev_serverip;  //设备服务器ip
    uint16_t dev_serverport;//设备服务器端口
    QString dev_ntp;   //设备ntp服务器
    uint8_t dev_dhcp;   //设备dhcp
    QString dev_mac;   //设备mac
    QString hw_ver;    //硬件版本号
    QString sw_ver;    //软件版本号
}devInfo;

class deviceInfo : public QMainWindow
{
    Q_OBJECT
public:
    explicit deviceInfo(QWidget *parent = nullptr);

    devInfo currdevinfo;
    //重写paintEvent
//    void paintEvent(QPaintEvent *event);
private:
    void closeEvent ( QCloseEvent * e );

signals:
    //告诉主场景，点击了返回信号
    void senceBack(void);
    void updataFlieMd5(devInfo *devinfo, char *fileName, char *fileMd5);
private slots:
    void getFlieMd5(void);
    void openDevURL();

};

#endif // CHOOSELEVELSCENE_H
