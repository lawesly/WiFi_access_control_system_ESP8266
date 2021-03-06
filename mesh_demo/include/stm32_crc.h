/**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: stm32_crc.h
**
** 创   建   人: 张进科
**
** 文件创建日期: 2016 年 12 月 7 日
**
** 描        述: STM32 CRC查表法实现

** 日志:
2016.12.07  创建本文件
*********************************************************************************************************/

#ifndef _STM32_CRC_H_
#define _STM32_CRC_H_

#include "user_interface.h"

extern uint32 CRC32Software(uint8 *pData, uint16 Length);

#endif
