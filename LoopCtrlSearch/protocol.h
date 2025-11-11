#ifndef PROTOCOL_H
#define PROTOCOL_H

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "string.h"

uint16_t CRC16_calc(uint8_t *tmp_buf,uint32_t len);
uint8_t* Protocol_Pack(uint8_t sn, uint16_t type, uint32_t id, uint8_t cmd,uint16_t len, uint8_t *content);

#endif // PROTOCOL_H
