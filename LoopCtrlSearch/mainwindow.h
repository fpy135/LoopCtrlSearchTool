#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include "device_information.h"

#define DevNumMax   100

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //设备详细信息场景
    udp_broadcast *udp_dev;

public slots:
    void processData(devInfo *dev_info_curr);
private slots:
    void refreshBtn_clicked();   //按钮点击信号
    void devinfoscene(QTreeWidgetItem *item, int num);
    void fileMd5DataSend(devInfo *devinfo, char *fileName, char *fileMd5);
private:
    Ui::MainWindow *ui;
    device_information *dev_info_widget = nullptr;
    uint16_t dev_num;
    QTreeWidgetItem dev[DevNumMax];

    uint8_t devInfoCompare(devInfo *dev_info1, devInfo *dev_info2);
    void processDevShow(QTreeWidgetItem *dev_show, devInfo *dev_info, uint8_t show_num);
    QString getLocalIPAddress(void);

};
#endif // MAINWINDOW_H
