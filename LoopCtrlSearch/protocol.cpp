#include "protocol.h"

uint8_t send_data[256];

uint16_t CRC16_calc(uint8_t *tmp_buf,uint32_t len)
{
    uint16_t crc_tmp=0xFFFF;
    uint8_t j = 0;
    uint32_t i = 0;

    for(i=0,crc_tmp=0xFFFF; i < len; i++)//做CRC校验
    {
        crc_tmp ^= tmp_buf[i];
        for(j=0; j < 8; j++)
        {
            if(crc_tmp & 0x01)
            {
                crc_tmp = (crc_tmp>>1) ^ 0xA001;
            }
            else
            {
                crc_tmp >>=1;
            }
        }
    }
    return crc_tmp;
}

uint8_t* Protocol_Pack(uint8_t sn, uint16_t type, uint32_t id, uint8_t cmd,uint16_t len, uint8_t *content)
{
    uint16_t CRCRes;
    uint8_t *pBuf;
    uint16_t temp_type = (type);
    uint32_t temp_id = (id);
    send_data[0]  	= 0xAA;
    send_data[1]    = sn & 0x3f;
    send_data[2]  	= (uint8_t)((temp_type>>8) & 0xff);
    send_data[3]	= (uint8_t)(temp_type & 0xff);
    send_data[4]  	= (uint8_t)((temp_id>>24) & 0xff);
    send_data[5]	= (uint8_t)((temp_id>>16) & 0xff);
    send_data[6]   	= (uint8_t)((temp_id>>8) & 0xff);
    send_data[7]  	= (uint8_t)(temp_id & 0xff);
    send_data[8]   	= cmd;
    send_data[9]  	= len;
    memcpy(&send_data[10], content, len);

    pBuf = (uint8_t *)(&send_data);
    CRCRes = CRC16_calc(pBuf, 10+len);
//    RFProtocol.crc = (CRCRes << 8) | (CRCRes >> 8);
    send_data[10+len] = (uint8_t)(CRCRes & 0xff);
    send_data[10+len+1] = (uint8_t)((CRCRes>>8) & 0xff);
    return pBuf;
}
