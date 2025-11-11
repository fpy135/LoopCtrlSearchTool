#ifndef DEV_INFO_COMMON_H
#define DEV_INFO_COMMON_H

#include <QString>

#define REL_NUM_MAX (8)

#define RelNumSet_cmd       "relNumSet"     //设置继电器路数
#define RelNumRpt_cmd       "relNumRpt"     //继电器路数上报命令
#define EnergyParaSet_cmd   "energyParaSet" //设置电量计相关参数
#define EnergyParaRpt_cmd   "energyParaRpt" //电量计相关参数上报命令
#define FindDev_cmd         "findDev"       //搜索命令
#define FindDevBack_cmd     "findDevBack"   //搜索命令
#define FindDevPara_cmd     "findDevPara"   //查询设备参数命令
#define EthParaSet_cmd      "ethParaSet"    //设置eth网络参数
#define Online_cmd          "online"        //上线命令
#define Heart_cmd           "heart"         //心跳命令
#define NetGet_cmd          "netGet"        //网络状态查询命令
#define NetRpt_cmd          "netRpt"        //网络状态上报命令
#define EnvGet_cmd          "envGet"        //环境数据查询命令
#define EnvRpt_cmd          "envRpt"        //环境数据上报命令
#define LoopCtrl_cmd        "loopCtrl"      //远程控制回路命令
#define LoopStaGet_cmd      "loopstaGet"    //回路状态查询命令
#define LoopStaRpt_cmd      "loopstaRpt"    //回路状态上报命令
#define PlanSet_cmd         "planSet"       //计划策略设置命令
#define PlanGet_cmd         "planGet"       //计划策略查询命令
#define PlanRpt_cmd         "planRpt"       //计划策略上报命令
#define EleGet_cmd          "eleGet"        //电参数查询命令
#define EleRpt_cmd          "eleRpt"        //电参数上报命令
#define SwitchGet_cmd       "switchGet"     //开关量数据查询命令
#define SwitchRpt_cmd       "switchRpt"     //开关量数据上报命令
#define SwitchReply_cmd     "switchReply"   //开关量数据反馈命令
#define AngleGet_cmd        "angleGet"      //倾角查询命令
#define AngleRpt_cmd        "angleRpt"      //倾角上报命令
#define WellLidRpt_cmd      "wellLidRpt"    //井盖上报命令
#define DoorLockCtrl_cmd    "doorLockCtrl"  //门锁开关命令
#define DoorLockGet_cmd     "doorLockGet"   //门锁开关查询命令
#define DoorLockRpt_cmd     "doorLockRpt"   //门锁开关上报命令
#define ServerSet_cmd       "serverSet"     //门锁开关命令
#define ServerRpt_cmd       "serverRpt"     //服务器上报命令
#define SensorSet_cmd       "sensorSet"     //485传感器使用设置命令
#define SensorRpt_cmd       "sensorRpt"     //485传感器使用上报命令
#define TimeZoneSet_cmd     "timeZoneSet"   //时区设置命令
#define TimeZoneRpt_cmd     "timeZoneRpt"   //时区上报命令
#define Para4GSet_cmd       "para4GSet"     //4G参数设置命令
#define Para4GRpt_cmd       "para4GRpt"     //4G参数上报命令

typedef struct {
    uint32_t RT;        //电流互感器电流比
}dev_EnergyPara;

typedef struct {
    int8_t timeZome;    //时区
}dev_OtherPara;

typedef struct
{
    QString dev_ip; //设备实际ip
    QString dev_netmask;   //设备子网掩码
    QString dev_gateway;   //设备网关
    uint8_t dev_dhcp;   //设备dhcp
    QString dev_mac;   //设备mac
    QString dev_dns;   //设备dns
}devEthInfo;

typedef struct
{
    QString dev_ip; //设备实际ip
    QString dev_imei;   //设备imei
    QString dev_imsi;   //设备imsi
    QString dev_iccid;   //设备iccid
    uint8_t dev_rssi;   //设备rssi
    QString apn;        //apn
}dev4GInfo;

typedef struct
{
    QString dev_serverip;  //设备服务器ip
    uint16_t dev_serverport;//设备服务器端口
    QString dev_server_username;  //设备服务器用户名
    QString dev_server_password;  //设备服务器密码
    QString dev_ntp;   //设备ntp服务器
}devServerInfo;

typedef struct
{
    QString dev_type;  //设备类型
    QString dev_id;    //设备id
    QString dev_realip; //设备实际ip
    QString dev_nettype;     //设备网络类型
    uint16_t dev_port;  //设备端口
    uint8_t dev_rel_num;  //继电器数量
    dev_EnergyPara dev_energy_para;
    dev_OtherPara dev_other_para;
    uint8_t dev_dhcp;   //设备dhcp
    QString dev_mac;   //设备mac
    QString hw_ver;    //硬件版本号
    QString sw_ver;    //软件版本号
    devEthInfo dev_eth_info;
    dev4GInfo dev_4G_info;
    devServerInfo dev_server;
}devInfo;

typedef struct
{
//    uint32_t plan_id;
    uint8_t  plan_type;         //时控0或光控1
//    uint8_t  plan_level;
    uint8_t  plan_valid;        //计划是否使能
    uint8_t  plan_phase_num;    //时段有效个数
    QString  start_time[4];
    QString  end_time[4];
    uint16_t open_lux;          //光控开始
    uint16_t close_lux;         //光控结束
}devPlanInfo;


#define ELE_MAIN_CIRCUIT_NUM    (3)     //电量计主路数
#define ELE_LOOP_CIRCUIT_NUM    (24)    //电量计回路数
#define ELE_CIRCUIT_NUM         (ELE_MAIN_CIRCUIT_NUM+ELE_LOOP_CIRCUIT_NUM) //电量计路数
typedef struct
{
    uint32_t loop_current[ELE_LOOP_CIRCUIT_NUM];        //回路电流  mA = 0.001A
    uint32_t main_voltage[ELE_MAIN_CIRCUIT_NUM];        //主路电压  mV = 0.001V
    uint32_t main_current[ELE_MAIN_CIRCUIT_NUM];        //主路电流  mA = 0.001A
    uint32_t main_power[ELE_MAIN_CIRCUIT_NUM];          //主路功率  W = 1W
    uint32_t main_energy[ELE_MAIN_CIRCUIT_NUM];         //主路实际用电量 wh = 0.001kwh
//    uint32_t main_fir_cf_cnt[ELE_MAIN_CIRCUIT_NUM];     //上一次的CF_CNT寄存器读数
//    uint32_t main_mid_cf_cnt[ELE_MAIN_CIRCUIT_NUM];     //电能累积换算的中间变量
}dev_EleInfo;

typedef union
{
    uint32_t byte_use;
    struct{
        uint32_t    SM5386:1;   //上海搜博风速 0x01
        uint32_t    SM5387B:1;  //上海搜博风向 0x02
        uint32_t    SM6333B:1;  //上海搜博温湿度粉尘 0x03
        uint32_t    reserve0:1;
        uint32_t    reserve1:1;
        uint32_t    reserve2:1;
        uint32_t    reserve4:1;
        uint32_t    reserve5:1;

        uint32_t    HCD68XX_1A:1;   //0x1A耘农多合一传感器 0x1A
        uint32_t    MTC70M:1;   //上海默律倾角传感器 0x0A
        uint32_t    IOTB2_16:1; //透明物联智能空开 0x0B
        uint32_t    WS301:1;    //耘农温湿度传感器 0x15
        uint32_t    HCD68XX:1;  //耘农多合一传感器 0xff
        uint32_t    ManholeCover_MTC70M:1;  //上海默律倾角传感器模拟井盖 0x0C
        uint32_t    DOOR_LOCK_DS713:1;  //武汉金弗DS713门锁 0x20
        uint32_t    TH_TempHum:1;   //天合温湿压、噪声、露点温度、海拔数据 0x66

        uint32_t    TH_AQI:1;   //天合CO2/PM 0x8A
        uint32_t    TH_Wind:1;  //天合风速风向 0xC8
        uint32_t    TH_LUX:1;   //天合光照 0xCC
        uint32_t    UVAB_YN:1;  //耘农紫外线辐射表 0x16
        uint32_t    YN_XF900:1; //耘农XF系列10合1传感器 0x1B
        uint32_t    LK_LUX:1;   //蓝控电子 B-RS-L30 光照度传感器 0x04
    }bit_use;
}SENSOR_485_USE_TYPE;



#endif // DEVINFO_COMMON_H
