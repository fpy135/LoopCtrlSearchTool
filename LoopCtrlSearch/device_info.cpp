#include "device_info.h"
#include <QMenuBar>
#include <QPainter>
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QCryptographicHash>
#include "udp_broadcast.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <QDesktopServices>
#include <QUrl>
#include <QTextBrowser>

#define FILEPATH  "C:\\"

deviceInfo::deviceInfo(QWidget *parent) //: QMainWindow(parent)
{
    /*************配置设备场景***************/
    //设置窗口大小
    this->setFixedSize(1200,600);

    //设置图标和标题
    this->setWindowTitle("设备信息");
    //设置软件图标
    this->setWindowIcon(QIcon(":/resource/search-01.png"));

    QPushButton *dev_url_btn = new QPushButton(this);
    dev_url_btn->setText("设备详细信息");
    dev_url_btn->resize(128,32);
    dev_url_btn->move(0, 0);
    connect(dev_url_btn, &QPushButton::clicked, this, &deviceInfo::openDevURL);

    QTextBrowser *updata_prompt = new QTextBrowser(this);
    updata_prompt->resize(128,128);
    updata_prompt->setText("使用本地升级前请提前自行安装并打开tftpd32应用程序，打开tftpd后请选择文件夹路径和当前本机的网卡");
    updata_prompt->move(0,32);
    QPushButton *updata_btn = new QPushButton(this);
    updata_btn->setText("本地升级");
    updata_btn->resize(64,32);
    updata_btn->move(0, 128+32);
    connect(updata_btn, &QPushButton::clicked, this, &deviceInfo::getFlieMd5);
}

void deviceInfo::openDevURL()
{
//    QDesktopServices::openUrl(QUrl(currdevinfo.dev_realip));
    QDesktopServices::openUrl(QUrl(QString("http://").append(currdevinfo.dev_realip)));
}


void deviceInfo::getFlieMd5(void)
{
    char *fileMd5;
    char *fileName;
    QString filepath = QFileDialog::getOpenFileName(this, QStringLiteral("选择目录"),
                       FILEPATH); // 选择目录，设置对话框标题，FILEPATH是目录默认路径的宏定义
    if(filepath == NULL)
        return;
    this->setWindowTitle(filepath); // 将选择的目录路径显示在控件上

    int cnt = filepath.length();
    int temppath = filepath.lastIndexOf("/");
    fileName = (char *)(filepath.right(cnt-temppath-1).toStdString().c_str());
    QFile theFile(filepath);
    theFile.open(QIODevice::ReadOnly);
    QByteArray ba = QCryptographicHash::hash(theFile.readAll(), QCryptographicHash::Md5);
    theFile.close();
    fileMd5 = ba.data();
    emit this->updataFlieMd5(&this->currdevinfo, fileName, fileMd5);
    qDebug() << "文件名字" << fileName;
    qDebug() << "文件路径" << filepath.left(temppath-1).toStdString().c_str();
    qDebug() << "文件md5" << ba.toHex().constData();
}

void deviceInfo::closeEvent ( QCloseEvent * e )
{
    emit this->senceBack();
}
