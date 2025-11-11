#include "udp_broadcast.h"
#include "protocol.h"

#include <QJsonObject> // { }
#include <QJsonArray> //[]
#include <QJsonDocument> // 解析Json
#include <QJsonValue> // int float double bool null { } [ ]
#include <QJsonParseError>

#include <QString>

#define BROADCASTPORT   (10022)

#define MULTICAST_GROUP  	"232.255.23.23"
#define MULTICAST_PORT 		10024

/*
udp_broadcast::udp_broadcast(QWidget *parent) : QMainWindow(parent)
{
    memset(loop_sta, 0, sizeof(loop_sta));

    //利用定时器定时发送寻找设备的广播数据
    timer_send = new QTimer(this);
    connect(timer_send, &QTimer::timeout, this, &udp_broadcast::broadcastDatagram);

    udp_send=new QUdpSocket(this);
    //udp_send->bind(10022,QUdpSocket::ShareAddress);
    connect(udp_send, &QUdpSocket::readyRead,this, &udp_broadcast::recvDataPorcess);
    connect(this, &udp_broadcast::broadcast_sendValidData, this,  &udp_broadcast::broadcast_sendData);
    connect(this, &udp_broadcast::udp_send_single, this,  &udp_broadcast::udp_sendData);
}
*/

void udp_broadcast::autoFindDevice(uint8_t mode)
{
    if(mode)
        timer_send->start(2000);
    else
        timer_send->stop();
}

QNetworkInterface selectMulticastInterface() {
    QNetworkInterface selectedInterface;
    QNetworkInterface fallbackInterface;

    const QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
    for (const QNetworkInterface &iface : interfaces) {
        if (iface.flags().testFlag(QNetworkInterface::IsUp) &&
            iface.flags().testFlag(QNetworkInterface::IsRunning) &&
            !iface.flags().testFlag(QNetworkInterface::IsLoopBack)) {

            for (const QNetworkAddressEntry &entry : iface.addressEntries()) {
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    QString name = iface.humanReadableName();

                    // 优先 Ethernet
                    if (name.contains("Ethernet", Qt::CaseInsensitive) || name.contains("以太网", Qt::CaseInsensitive)) {
                        if (!selectedInterface.isValid()) {
                            selectedInterface = iface;
                            return selectedInterface;
                        }
                    }

                    // 其次 Wi-Fi
                    if (name.contains("Wi-Fi", Qt::CaseInsensitive)) {
                        selectedInterface = iface;
                    }


                    // 如果没有匹配的，先保留一个兜底用的
                    if (!fallbackInterface.isValid()) {
                        fallbackInterface = iface;
                    }

                    break; // 一个地址符合就行了，不用继续看该接口
                }
            }
        }
    }

    if (selectedInterface.isValid())
        return selectedInterface;

    return fallbackInterface;
}


udp_broadcast::udp_broadcast(QWidget *parent) : QMainWindow(parent)
{
    //利用定时器定时发送寻找设备的广播数据
    timer_send = new QTimer(this);
    connect(timer_send, &QTimer::timeout, this, &udp_broadcast::broadcastDatagram);
    connect(this, &udp_broadcast::broadcast_sendValidData, this,  &udp_broadcast::broadcast_sendData);

    udp_send=new QUdpSocket(this);
    connect(udp_send, &QUdpSocket::readyRead, this, [=]() {
        recvDataPorcess(udp_send);
    });

    udp_multicast_recv = new QUdpSocket(this);
    connect(udp_multicast_recv, &QUdpSocket::readyRead, this, [=]() {
        recvDataPorcess(udp_multicast_recv);
    });
    // 存储优先匹配到的接口
    QNetworkInterface selectedInterface = selectMulticastInterface();
    if (!selectedInterface.isValid()) {
        qWarning() << "No suitable network interface found.";
        return;
    }
    if (!selectedInterface.name().isEmpty()) {
        qDebug() << "   Interface: " << selectedInterface.name();
        qDebug() << "       Hardware address:" << selectedInterface.hardwareAddress();

        udp_multicast_recv->bind(QHostAddress::AnyIPv4, MULTICAST_PORT, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

        // 设置 TTL
        udp_multicast_recv->setSocketOption(QAbstractSocket::MulticastTtlOption, 8);
        udp_multicast_recv->setMulticastInterface(selectedInterface);
        udp_multicast_recv->setSocketOption(QAbstractSocket::MulticastLoopbackOption, false);
        if (!udp_multicast_recv->joinMulticastGroup(QHostAddress(MULTICAST_GROUP), selectedInterface)) {
            qWarning() << "Failed to join multicast group on interface:" << selectedInterface.humanReadableName();
        }
        qDebug()<< "join multicast group on interface:" << udp_multicast_recv->multicastInterface().name();
    } else {
        qWarning() << "No suitable network interface found for multicast.";
    }

}


//发送udp数据查询设备信息
void udp_broadcast::udp_sendData(uint8_t *send_data, uint16_t data_len, QHostAddress address, uint16_t port)
{
    udp_send->writeDatagram((const char *)send_data, data_len, address, port);
}

//发送广播数据查询设备信息
void udp_broadcast::broadcast_sendData(uint8_t *send_data, uint16_t data_len)
{
//    udp_send->writeDatagram((const char *)send_data, data_len, QHostAddress::Broadcast, BROADCASTPORT);
    udp_multicast_recv->setSocketOption(QAbstractSocket::MulticastTtlOption, 8);
    if(udp_multicast_recv->writeDatagram((const char *)send_data, data_len, QHostAddress(MULTICAST_GROUP), MULTICAST_PORT) != data_len)
    {
        qDebug() << "发送组播数据失败:";
    }
}

//发送广播数据查询设备信息
void udp_broadcast::broadcastDatagram()
{
    QJsonObject find_dev;
    // 插入元素，对应键值对
    find_dev.insert("devtype", "LOOPCTRL");
    find_dev.insert("cmd", FindDev_cmd);
    QJsonDocument jsonDoc(find_dev);
    QByteArray jsonbyte = jsonDoc.toJson(QJsonDocument::Compact);
    emit this->broadcast_sendValidData((uint8_t *)jsonbyte.data(), jsonbyte.size());
//    uint8_t send_data[12] = {0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x56,0xA5};
//    //udp_send->writeDatagram((const char *)send_data, sizeof(send_data), QHostAddress::Broadcast, 10022);
//    emit this->broadcast_sendValidData(send_data, sizeof (send_data));
}

QString getMacForIP(QString ipAddress)
{
    QString MAC;
    QProcess process;
    //
    process.start(QString("arp -a %1").arg(ipAddress));
    if(process.waitForFinished())
    {
        QString result = process.readAll();
        QStringList list = result.split(QRegularExpression("\\s+"));
        if(list.contains(ipAddress))
            MAC = list.at(list.indexOf(ipAddress) + 1);
    }
    //
    return MAC;
}

void udp_broadcast::recvDataPorcess(QUdpSocket* curr_udp)
{
    QString strData;
    //有未处理的数据报
    while(curr_udp->hasPendingDatagrams()){
        QByteArray dataGram;
        uint8_t * pdata;
        //读取的数据报大小
        QHostAddress cli_addr;  //对方地址
        quint16 port;  //对方端口

        dataGram.resize(curr_udp->pendingDatagramSize());
        curr_udp->readDatagram(dataGram.data(),dataGram.size(),&cli_addr, &port);
//        ui->dataRecvEdit->setText(dataGram);   //将接收到的数据显示到标签上
        pdata = (uint8_t *)dataGram.data();

        qDebug() << QString("[%1:%2]").arg(cli_addr.toString()).arg(port)
                 << dataGram;
        // QJsonParseError类用于在JSON解析期间报告错误。
        QJsonParseError jsonError;
        // 将json解析为UTF-8编码的json文档，并从中创建一个QJsonDocument。
        // 如果解析成功，返回QJsonDocument对象，否则返回null
        QJsonDocument doc = QJsonDocument::fromJson(dataGram, &jsonError);
        // 判断是否解析失败
        if (jsonError.error != QJsonParseError::NoError && !doc.isNull()) {
            qDebug() << "Json格式错误！" << jsonError.error;
            return;
        }
        QJsonValue tmpjsonValue;
        QJsonObject rootObj = doc.object();
        QString devtype;
        tmpjsonValue = rootObj.value("devtype");
        devtype = tmpjsonValue.toString();
//        if(devtype.compare("LOOPCTRL") == 0)
        {
            tmpjsonValue = rootObj.value("cmd");
            QString dev_cmd = tmpjsonValue.toString();
            if((dev_cmd.compare(FindDev_cmd) == 0) || (dev_cmd.compare(FindDevBack_cmd) == 0))
            {
                dev_info.dev_type = devtype;
                quint32 addr_origin = cli_addr.toIPv4Address();
                dev_info.dev_realip = QHostAddress(addr_origin).toString();
                dev_info.dev_port = port;
                dev_info.dev_mac = getMacForIP(dev_info.dev_realip);
                tmpjsonValue = rootObj.value("devid");
                dev_info.dev_id = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("rel_num");
                dev_info.dev_rel_num = tmpjsonValue.toInt();
                tmpjsonValue = rootObj.value("RT");
                dev_info.dev_energy_para.RT = tmpjsonValue.toInt();
                tmpjsonValue = rootObj.value("timeZone");
                dev_info.dev_other_para.timeZome = tmpjsonValue.toInt();
                tmpjsonValue = rootObj.value("sw");
                dev_info.sw_ver = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("hw");
                dev_info.hw_ver = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("net");
                dev_info.dev_nettype = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("dhcp");
                dev_info.dev_dhcp = tmpjsonValue.toInt();
                tmpjsonValue = rootObj.value("serverIp");
                dev_info.dev_server.dev_serverip = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("serverPort");
                dev_info.dev_server.dev_serverport = tmpjsonValue.toInt();
                tmpjsonValue = rootObj.value("username");
                dev_info.dev_server.dev_server_username = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("password");
                dev_info.dev_server.dev_server_password = tmpjsonValue.toString();
                tmpjsonValue = rootObj.value("ntp");
                dev_info.dev_server.dev_ntp = tmpjsonValue.toString();

                QJsonObject dev_eth = rootObj.value("eth").toObject();
                tmpjsonValue = dev_eth.value("ip");
                dev_info.dev_eth_info.dev_ip = tmpjsonValue.toString();
                dev_info.dev_realip = dev_info.dev_eth_info.dev_ip;
                dev_info.dev_mac = getMacForIP(dev_info.dev_realip);
                tmpjsonValue = dev_eth.value("netmask");
                dev_info.dev_eth_info.dev_netmask = tmpjsonValue.toString();
                tmpjsonValue = dev_eth.value("gw");
                dev_info.dev_eth_info.dev_gateway = tmpjsonValue.toString();
                tmpjsonValue = dev_eth.value("dns");
                dev_info.dev_eth_info.dev_dns = tmpjsonValue.toString();
                tmpjsonValue = dev_eth.value("dhcp");
                dev_info.dev_eth_info.dev_dhcp = tmpjsonValue.toInt();

                QJsonObject dev_4g = rootObj.value("4G").toObject();
                tmpjsonValue = dev_4g.value("ip");
                dev_info.dev_4G_info.dev_ip = tmpjsonValue.toString();
                tmpjsonValue = dev_4g.value("imei");
                dev_info.dev_4G_info.dev_imei = tmpjsonValue.toString();
                tmpjsonValue = dev_4g.value("imsi");
                dev_info.dev_4G_info.dev_imsi = tmpjsonValue.toString();
                tmpjsonValue = dev_4g.value("iccid");
                dev_info.dev_4G_info.dev_iccid = tmpjsonValue.toString();
                tmpjsonValue = dev_4g.value("rssi");
                dev_info.dev_4G_info.dev_rssi = tmpjsonValue.toInt();
                tmpjsonValue = dev_4g.value("APN");
                dev_info.dev_4G_info.apn = tmpjsonValue.toString();
                emit this->broadcast_recvValidData(&dev_info);
            }
            else if(dev_cmd.compare(PlanRpt_cmd) == 0)
            {
//                std::vector<devPlanInfo> dev_plan;
//                devPlanInfo dev_plan[REL_NUM_MAX];
                uint8_t loopid;
                uint8_t plan_num;
                uint8_t plan_context_num;

                QJsonArray planjsonArray = rootObj["plan"].toArray();
                plan_num = planjsonArray.size();

                for(uint8_t i=0; i<plan_num; i++)
                {
                    QJsonObject planObj = planjsonArray.at(i).toObject();
                    tmpjsonValue = planObj.value("loopid");
                    loopid = tmpjsonValue.toInt();
                    tmpjsonValue = planObj.value("plan_type");
                    dev_plan[loopid-1].plan_type = tmpjsonValue.toInt();
                    tmpjsonValue = planObj.value("plan_valid");
                    dev_plan[loopid-1].plan_valid = tmpjsonValue.toInt();
                    tmpjsonValue = planObj.value("plan_phase_num");
                    dev_plan[loopid-1].plan_phase_num = tmpjsonValue.toInt();
                    QJsonArray plan_contextjsonArray = planObj["plan_context"].toArray();
                    plan_context_num = plan_contextjsonArray.size();
                    if(plan_context_num == dev_plan[loopid-1].plan_phase_num)
                    {
                        for(uint8_t j=0; j<4; j++)
                        {
                            dev_plan[loopid-1].start_time[j] = "00:00";
                            dev_plan[loopid-1].end_time[j] = "00:00";
                        }
                        for(uint8_t j=0; j<plan_context_num; j++)
                        {
                            QJsonObject timeObj = plan_contextjsonArray.at(j).toObject();
                            if(dev_plan[loopid-1].plan_type == 0)
                            {
                                tmpjsonValue = timeObj.value("s_time");
                                dev_plan[loopid-1].start_time[j] = tmpjsonValue.toString();
                                tmpjsonValue = timeObj.value("e_time");
                                dev_plan[loopid-1].end_time[j] = tmpjsonValue.toString();
                            }
                            else if(dev_plan[loopid-1].plan_type == 1)
                            {
                                tmpjsonValue = timeObj.value("on");
                                dev_plan[loopid-1].open_lux = tmpjsonValue.toInt();
                                tmpjsonValue = timeObj.value("off");
                                dev_plan[loopid-1].close_lux = tmpjsonValue.toInt();
                            }
                        }
                    }
                }
                emit this->udp_recvPlanData(dev_plan);
            }
            else if(dev_cmd.compare(EnvRpt_cmd) == 0)
            {
                QString env_str = "";
                // 获取子 JSON 对象
                QJsonObject envObj = rootObj.value("env").toObject();
//                QJsonDocument jsonDoc(envObj);
                // 导出为 QString
//                QString envStr = jsonDoc.toJson(QJsonDocument::Indented);

                tmpjsonValue = envObj.value("noise");
                env_str.append("noise:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("dB\n");
                tmpjsonValue = envObj.value("pm2.5");
                env_str.append("pm2.5:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ug/m3\n");
                tmpjsonValue = envObj.value("pm10");
                env_str.append("pm10:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ug/m3\n");
                tmpjsonValue = envObj.value("temp");
                env_str.append("temperatrue:");
                env_str.append(QString::number(tmpjsonValue.toInt()/100.0, 'f', 2));
                env_str.append("℃\n");
                tmpjsonValue = envObj.value("humidity");
                env_str.append("humidity:");
                env_str.append(QString::number(tmpjsonValue.toInt()/100.0, 'f', 2));
                env_str.append("%\n");
                tmpjsonValue = envObj.value("airPress");
                env_str.append("airPress:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("hPa\n");
                tmpjsonValue = envObj.value("windSpd");
                env_str.append("windSpd:");
                env_str.append(QString::number(tmpjsonValue.toInt()/100.0, 'f', 2));
                env_str.append("m/s\n");
                tmpjsonValue = envObj.value("windDir");
                env_str.append("windDir:");
                env_str.append(QString::number(tmpjsonValue.toInt()/100.0, 'f', 2));
                env_str.append("°\n");
                tmpjsonValue = envObj.value("rain");
                env_str.append("rain:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("mm/h\n");
                tmpjsonValue = envObj.value("UVIndex");
                env_str.append("UVIndex:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("\n");
                tmpjsonValue = envObj.value("NAI");
                env_str.append("NAI:");
                env_str.append(QString::number(tmpjsonValue.toInt()*10, 'f', 0));
                env_str.append("\n");
                tmpjsonValue = envObj.value("SO2");
                env_str.append("SO2:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ppb\n");
                tmpjsonValue = envObj.value("NO2");
                env_str.append("NO2:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ppb\n");
                tmpjsonValue = envObj.value("CO");
                env_str.append("CO:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ppb\n");
                tmpjsonValue = envObj.value("CO2");
                env_str.append("CO2:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ppb\n");
                tmpjsonValue = envObj.value("O3");
                env_str.append("O3:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ppb\n");
                tmpjsonValue = envObj.value("LUX");
                env_str.append("LUX:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("lux\n");
                tmpjsonValue = envObj.value("ALT");
                env_str.append("altitude:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("m\n");
                tmpjsonValue = envObj.value("dewTemp");
                env_str.append("dewTemp:");
                env_str.append(QString::number(tmpjsonValue.toInt()/100.0, 'f', 2));
                env_str.append("℃\n");
                tmpjsonValue = envObj.value("TSP");
                env_str.append("TSP:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("ug/m3\n");
                tmpjsonValue = envObj.value("SR");
                env_str.append("SR:");
                env_str.append(QString::number(tmpjsonValue.toInt()/1, 'f', 0));
                env_str.append("w/m2\n");
                tmpjsonValue = envObj.value("UVR");
                env_str.append("UVR:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10, 'f', 1));
                env_str.append("w/m2\n");
                emit this->udp_recvEnvData(env_str);
            }
            else if(dev_cmd.compare(LoopStaRpt_cmd) == 0)
            {
                // 获取子 JSON 对象
                QJsonArray loopstaArray = rootObj["loopsta"].toArray();
                if(loopstaArray.isEmpty() == false)
                {
                    for(uint8_t i=0; i<loopstaArray.size(); i++)
                    {
                        uint8_t loopid;
                        QJsonObject planObj = loopstaArray.at(i).toObject();
                        tmpjsonValue = planObj.value("loopid");
                        loopid = tmpjsonValue.toInt();
                        tmpjsonValue = planObj.value("relsta");
                        loop_sta[loopid-1] = tmpjsonValue.toInt();
                    }
                }
                else
                {
                    QJsonArray loopstaArray = rootObj["loop_sta_all"].toArray();
                    if(loopstaArray.isEmpty() == false)
                    {
                        for(uint8_t i=0; i<loopstaArray.size(); i++)
                        {
                            loop_sta[i] = loopstaArray[i].toInt();
                        }
                    }
                }
                emit this->udp_recvLoopstaData(loop_sta);
            }
            else if(dev_cmd.compare(EleRpt_cmd) == 0)
            {
                QJsonObject eleObj = rootObj["ele"].toObject();
                tmpjsonValue = eleObj.value("main_Va");
                dev_ele.main_voltage[0] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Ia");
                dev_ele.main_current[0] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Pa");
                dev_ele.main_power[0] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Ea");
                dev_ele.main_energy[0] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Vb");
                dev_ele.main_voltage[1] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Ib");
                dev_ele.main_current[1] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Pb");
                dev_ele.main_power[1] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Eb");
                dev_ele.main_energy[1] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Vc");
                dev_ele.main_voltage[2] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Ic");
                dev_ele.main_current[2] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Pc");
                dev_ele.main_power[2] = tmpjsonValue.toInt();
                tmpjsonValue = eleObj.value("main_Ec");
                dev_ele.main_energy[2] = tmpjsonValue.toInt();
                QJsonArray loop_I_Array = eleObj["loop_I"].toArray();
                if(loop_I_Array.isEmpty() == false)
                {
                    for(uint8_t i=0; i<loop_I_Array.size(); i++)
                    {
                        dev_ele.loop_current[i] = loop_I_Array[i].toInt();
                    }
                    emit this->udp_recvEleData(&dev_ele);
                }
                QJsonArray loopstaArray = eleObj["loop_sta_all"].toArray();
                if(loopstaArray.isEmpty() == false)
                {
                    for(uint8_t i=0; i<loopstaArray.size(); i++)
                    {
                        loop_sta[i] = loopstaArray[i].toInt();
                    }
                    emit this->udp_recvLoopstaData(loop_sta);
                }
            }
            else if(dev_cmd.compare(SwitchRpt_cmd) == 0)
            {
                QString env_str = "";
                // 获取子 JSON 对象
                QJsonObject envObj = rootObj.value("DI").toObject();
//                QJsonDocument jsonDoc(envObj);
                // 导出为 QString
//                QString envStr = jsonDoc.toJson(QJsonDocument::Indented);

                tmpjsonValue = envObj.value("water");
                env_str.append("water:");
                env_str.append(QString::number(tmpjsonValue.toInt()));
                env_str.append("\n");
                tmpjsonValue = envObj.value("smog");
                env_str.append("smog:");
                env_str.append(QString::number(tmpjsonValue.toInt()));
                env_str.append("\n");
                tmpjsonValue = envObj.value("door");
                env_str.append("door:");
                env_str.append(QString::number(tmpjsonValue.toInt()));
                env_str.append("\n");
                tmpjsonValue = envObj.value("doorlock");
                env_str.append("doorlock:");
                env_str.append(QString::number(tmpjsonValue.toInt()));
                env_str.append("\n");
                emit this->udp_recvSwitchData(env_str);
            }
            else if(dev_cmd.compare(AngleRpt_cmd) == 0)
            {
                QString env_str = "";
                // 获取子 JSON 对象
                QJsonObject envObj = rootObj.value("angle").toObject();
//                QJsonDocument jsonDoc(envObj);
                // 导出为 QString
//                QString envStr = jsonDoc.toJson(QJsonDocument::Indented);

                tmpjsonValue = envObj.value("x");
                env_str.append("x:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("\n");
                tmpjsonValue = envObj.value("y");
                env_str.append("y:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("\n");
                tmpjsonValue = envObj.value("z");
                env_str.append("z:");
                env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                env_str.append("\n");
                emit this->udp_recvAngleData(env_str);
            }
            else if(dev_cmd.compare(WellLidRpt_cmd) == 0)
            {
                QString env_str = "";
                // 获取子 JSON 对象
                QJsonArray wellLidArray = rootObj["wellLid"].toArray();
                if(wellLidArray.isEmpty() == false)
                {
                    for(uint8_t i=0; i<wellLidArray.size(); i++)
                    {
                        QJsonObject tmpObj = wellLidArray.at(i).toObject();
                        tmpjsonValue = tmpObj.value("wellLid_id");
                        env_str.append("id:");
                        env_str.append(QString::number(tmpjsonValue.toInt()));
                        env_str.append("\n");
                        QJsonObject tmpObj2 = tmpObj.value("wellLidAngle").toObject();
                        tmpjsonValue = tmpObj2.value("x");
                        env_str.append("x:");
                        env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                        env_str.append("\n");
                        tmpjsonValue = tmpObj2.value("y");
                        env_str.append("y:");
                        env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                        env_str.append("\n");
                        tmpjsonValue = tmpObj2.value("z");
                        env_str.append("z:");
                        env_str.append(QString::number(tmpjsonValue.toInt()/10.0, 'f', 1));
                        env_str.append("\n");
                        emit this->udp_recvWellLidData(env_str);
                    }
                }
            }
            else if(dev_cmd.compare(RelNumRpt_cmd) == 0)
            {
                uint8_t rel_num;
                // 获取子 JSON 对象
                tmpjsonValue = rootObj.value("rel_num");
                rel_num = tmpjsonValue.toInt();
                emit this->udp_recvRelNum(rel_num);
            }
            else if(dev_cmd.compare(RelNumRpt_cmd) == 0)
            {
                dev_EnergyPara energy_para;
                // 获取子 JSON 对象
                tmpjsonValue = rootObj.value("RT");
                energy_para.RT = tmpjsonValue.toInt();
                emit this->udp_recvEnergyPara(energy_para);
            }
            else if(dev_cmd.compare(ServerRpt_cmd) == 0)
            {
                // 获取子 JSON 对象
                QJsonObject serverObj = rootObj.value("server").toObject();
                tmpjsonValue = serverObj.value("ntp");
                dev_info.dev_server.dev_ntp = tmpjsonValue.toString();
                tmpjsonValue = serverObj.value("serverIp");
                dev_info.dev_server.dev_serverip = tmpjsonValue.toString();
                tmpjsonValue = serverObj.value("serverPort");
                dev_info.dev_server.dev_serverport = tmpjsonValue.toInt();
                tmpjsonValue = serverObj.value("username");
                dev_info.dev_server.dev_server_username = tmpjsonValue.toString();
                tmpjsonValue = serverObj.value("password");
                dev_info.dev_server.dev_server_password = tmpjsonValue.toString();
                emit this->udp_recvServerInfo(dev_info.dev_server);
            }
            else if(dev_cmd.compare(SensorRpt_cmd) == 0)
            {
                // 获取子 JSON 对象
                SENSOR_485_USE_TYPE sensor_use;
                tmpjsonValue = rootObj.value("sensorUse");
                sensor_use.byte_use = tmpjsonValue.toInt();
                emit this->udp_recvSensorUse(sensor_use);
            }
            else if(dev_cmd.compare(TimeZoneRpt_cmd) == 0)
            {
                // 获取子 JSON 对象
                tmpjsonValue = rootObj.value("timeZone");
                dev_info.dev_other_para.timeZome = tmpjsonValue.toInt();
                emit this->udp_recvTimeZone(dev_info.dev_other_para.timeZome);
            }
        }
    }
}


