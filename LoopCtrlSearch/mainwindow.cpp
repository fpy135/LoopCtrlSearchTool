#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "protocol.h"

devInfo dev_info[DevNumMax];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setWindowFlags (Qt::CustomizeWindowHint);
    this->setWindowTitle("network search");
    //this->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::Window | Qt::FramelessWindowHint | Qt::Tool);
    //this->setAttribute(Qt::WA_TranslucentBackground);
    this->resize(1400,800);

    //设置软件图标
    this->setWindowIcon(QIcon(":/resource/loopctrl_search.png"));

    // 注册类型
//    qRegisterMetaType<std::vector<devInfo>>("std::vector<devInfo>");

    dev_num = 0;

    //加载刷新键
    connect(ui->refreshBtn, &QPushButton::clicked,this, &MainWindow::refreshBtn_clicked);
    udp_dev = new udp_broadcast(this);
    udp_dev->autoFindDevice(true);
    //将udp接收到的数据发给处理函数
    connect(udp_dev, &udp_broadcast::broadcast_recvValidData, this,  &MainWindow::processData);
    //treeWidget
    QStringList title;
    title.append("num");
    title.append("real ip");
    title.append("net type");
    title.append("dev port");
    title.append("dev type");
    title.append("ID");
//    title.append("netmask");
//    title.append("gateway");
    title.append("server ip");
    title.append("server port");
//    title.append("ntp");
    title.append("net_type dhcp");
    title.append("mac");
    title.append("hw_version");
    title.append("hw_version");
    ui->treeWidget->setHeaderLabels(title);
    // TreeWidget 自动列宽
    ui->treeWidget->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    //点击表头排序
    ui->treeWidget->setSortingEnabled(true);
    ui->treeWidget->header()->setSortIndicatorShown(true);
    ui->treeWidget->header()->setSortIndicator(0, Qt::AscendingOrder);//这三句改变排序
    //添加设备项
    /*
    uint8_t i =0;
    for(i=0; i<DevNumMax; i++) {
        //dev[i] = new QTreeWidgetItem(QStringList() << "");
        ui->treeWidget->addTopLevelItem(&dev[i]);
    }
    */
}


MainWindow::~MainWindow()
{
    delete ui;
    /*
    delete udp_send;
    delete udp_recv;*/
}
/*
void MainWindow::broadcastDatagram()
{
    uint8_t send_data[] = {0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x56,0xA5};
    udp_send->writeDatagram((const char *)send_data, sizeof(send_data), QHostAddress::Broadcast, 10022);
}
*/

//递归删除节点
void removeItem(QTreeWidgetItem *item)
{
    int count = item->childCount();
    if(count == 0)//没有子节点，直接删除
    {
        delete item;
        return;
    }

    for(int i=0; i<count; i++)
    {
        QTreeWidgetItem *childItem = item->child(0);//删除子节点
        removeItem(childItem);
    }
    delete item;//最后将自己删除
}

void MainWindow::refreshBtn_clicked()
{
    ui->devSumEdit->setText(0);
    for(uint8_t i=0; i<dev_num; i++)
    {
        ui->treeWidget->takeTopLevelItem(0);//去除节点
    }
    dev_num = 0;
}

//devInfo结构体对比
//相等返回0，不相等返回1
uint8_t MainWindow::devInfoCompare(devInfo *dev_info1, devInfo *dev_info2)
{
    uint8_t ret = 0;
    if(dev_info1->dev_type != dev_info2->dev_type ||\
            dev_info1->dev_id != dev_info2->dev_id ||\
            dev_info1->dev_port != dev_info2->dev_port ||\
            dev_info1->dev_server.dev_serverport != dev_info2->dev_server.dev_serverport ||\
            dev_info1->dev_dhcp != dev_info2->dev_dhcp ||\
            QString::compare(dev_info1->dev_realip, dev_info2->dev_realip)!=0||\
            QString::compare(dev_info1->dev_nettype, dev_info2->dev_nettype)!=0||\
            QString::compare(dev_info1->dev_server.dev_serverip, dev_info2->dev_server.dev_serverip)!=0||\
            QString::compare(dev_info1->dev_server.dev_ntp, dev_info2->dev_server.dev_ntp)!=0||\
            QString::compare(dev_info1->dev_mac, dev_info2->dev_mac)!=0||\
            QString::compare(dev_info1->hw_ver, dev_info2->hw_ver)!=0||\
            QString::compare(dev_info1->sw_ver, dev_info2->sw_ver)!=0)
        //            QString::compare(dev_info1->dev_netmask, dev_info2->dev_netmask)!=0||\
        //            QString::compare(dev_info1->dev_gateway, dev_info2->dev_gateway)!=0||
//    if(dev_info1 != dev_info2)
    {
        ret = 1;
    }
    return ret;
}

void MainWindow::processDevShow(QTreeWidgetItem *dev_show, devInfo *dev_info, uint8_t show_num)
{
    dev_show->setText(0,QString::number(show_num));
    dev_show->setText(1, dev_info->dev_realip);
    dev_show->setText(2, dev_info->dev_nettype);
    dev_show->setText(3,QString::number( dev_info->dev_port));
//    dev_show->setText(4,QString::number( dev_info->dev_type,16));
//    dev_show->setText(5,QString::number( dev_info->dev_id,16));
    dev_show->setText(4, dev_info->dev_type);
    dev_show->setText(5, dev_info->dev_id);
//    dev_show->setText(6, dev_info->dev_netmask);
//    dev_show->setText(7, dev_info->dev_gateway);
//    dev_show->setText(8, dev_info->dev_serverip);
//    dev_show->setText(9,QString::number( dev_info->dev_serverport));
//    dev_show->setText(10, dev_info->dev_ntp);
//    dev_show->setText(11,QString::number( dev_info->dev_dhcp));
//    dev_show->setText(12, dev_info->dev_mac);
//    dev_show->setText(13, dev_info->hw_ver);
//    dev_show->setText(14, dev_info->sw_ver);
    dev_show->setText(6, dev_info->dev_server.dev_serverip);
    dev_show->setText(7,QString::number( dev_info->dev_server.dev_serverport));
//    dev_show->setText(10, dev_info->dev_ntp);
    dev_show->setText(8,QString::number( dev_info->dev_dhcp));
    dev_show->setText(9, dev_info->dev_mac);
    dev_show->setText(10, dev_info->hw_ver);
    dev_show->setText(11, dev_info->sw_ver);
}

void MainWindow::processData(devInfo *dev_info_curr)
{
    uint8_t dev_same_flag = 0;
    //格式转换
    for(uint8_t i=0; i<dev_num; i++)
    {
        if(dev_info_curr->dev_type == dev_info[i].dev_type && \
                dev_info_curr->dev_id == dev_info[i].dev_id )
        {
            //排除相同的id多次显示
            dev_same_flag = 1;
            if(devInfoCompare(&dev_info[i], dev_info_curr) == 1)
            {
                qDebug() << "存在相同设备，更新数据";
                dev_info[i] = *dev_info_curr;
                processDevShow(&dev[i], dev_info_curr, i);
            }
            break;
        }
    }
    if(dev_same_flag == 0)
    {
        ui->treeWidget->addTopLevelItem(&dev[dev_num]);
        //检测点击事件，信号槽机制
        connect(ui->treeWidget,SIGNAL(itemClicked(QTreeWidgetItem*,int)), this,SLOT(devinfoscene(QTreeWidgetItem* ,int)));

        dev_info[dev_num] = *dev_info_curr;
        //memcpy(&dev_info[dev_num], dev_info_curr, sizeof (devInfo));
        processDevShow(&dev[dev_num], &dev_info[dev_num], dev_num);
        dev_num++;
        if(dev_num >=DevNumMax){
            dev_num = 0;
        }
        ui->devSumEdit->setText(QString::number(dev_num));
    }
    qDebug() << dev_info[dev_num].dev_type << dev_info[dev_num].dev_id;
}

void MainWindow::devinfoscene(QTreeWidgetItem *item, int num)
{
    qDebug() << "QTreeWidgetItem clicked" <<"item" << num << item->text(num);
    //创建设备详细信息场景 实例化设备详细信息场景

    if(dev_info_widget == nullptr)
    {

         for(uint8_t i=0; i<dev_num; i++)
         {
             qDebug() << "currdevinfo"  << item->text(4) << item->text(5);
             if(dev_info[i].dev_type == item->text(4) && \
                     dev_info[i].dev_id == item->text(5))
             {
                 //排除相同的id多次显示
                 dev_info_widget = new device_information(dev_info[i], this->udp_dev, this);
//                 dev_info_widget->currdevinfo = dev_info[i];
//                 dev_info_widget->udp_dev = this->udp_dev;
                 qDebug() << "currdevinfo"  << dev_info_widget->currdevinfo.dev_id;
                 break;
             }
         }
        //隐藏自身场景
        this->hide();
        this->setWindowState(Qt::WindowActive);
        //展示设备场景

//        dev_info_widget->get_net_para();
//        dev_info_widget->get_plan();
//        dev_info_widget->server_show();
        //设置设备的位置
        dev_info_widget->setGeometry(this->geometry());
        dev_info_widget->show(); // Show
        udp_dev->autoFindDevice(false);

        connect(dev_info_widget, &device_information::senceBack, this, [=](){
            //删除设备场景
            qDebug() << "deviceInfo::senceBack";
            this->setGeometry(dev_info_widget->geometry());
            dev_info_widget->hide();
            dev_info_widget->deleteLater();
            dev_info_widget = nullptr;
            //展示主场景
            this->show();
            udp_dev->autoFindDevice(true);
        });
    }
}

QString MainWindow::getLocalIPAddress(void)
{
    //计算机名字
    QString hostName = QHostInfo::localHostName();
    QHostInfo  hostInfo=QHostInfo::fromName(hostName);//通过主机名称，获取IP地址，返回一个hostInfo类
    QString    localIP="";//本地IP地址string数组
    QList<QHostAddress> addList=hostInfo.addresses();//创建一个QList对象，容器内部存储QHostAddress类型的数据，返回一个address数组，QHostAddress类提供一个IP地址的信息，包括IPv4和Ipv6
    if (!addList.isEmpty())
    {
        for (int i=0;i<addList.count();i++)
        {
            QHostAddress aHost=addList.at(i);//访问指定位置的元素
            if (QAbstractSocket::IPv4Protocol==aHost.protocol())  //protocol()返回IP地址的协议类型,并且只返回IPv4的地址
            {
                localIP=aHost.toString();//返回IP地址的字符串
                break;
            }
        }
    }
    return localIP;
}

void MainWindow::fileMd5DataSend(devInfo *devinfo, char *fileName, char *fileMd5)
{
    uint8_t otafile_pacet[128] = {0};
    QHostAddress cli_addr;
    uint8_t* pbuf;
    uint8_t packet_len = 0;
    uint8_t *local_ip;

    local_ip = (uint8_t*)(getLocalIPAddress().toStdString().c_str());
    sprintf((char*)otafile_pacet, "\"remoteIp\":%s,\"fileName\":%s,\"fileMd5\":", local_ip, fileName);
    memcpy(otafile_pacet+strlen((char*)otafile_pacet), fileMd5, 16);
    packet_len = strlen((char*)otafile_pacet);
    cli_addr = QHostAddress(devinfo->dev_nettype);
//    pbuf = Protocol_Pack(0, devinfo->dev_type, devinfo->dev_id, 0xAf, packet_len, (uint8_t*)otafile_pacet);
    //udp_dev->broadcast_sendData(pbuf, 10+16+2);
    udp_dev->udp_sendData(pbuf, 10+packet_len+2, cli_addr, devinfo->dev_port);
}

