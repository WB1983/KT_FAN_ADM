////////////////////////////////////////////////////////////////////////////////
/// @file     hal_crc.h
/// @author   AE TEAM
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE CRC
///           FIRMWARE LIBRARY.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

// Define to prevent recursive inclusion
#ifndef __HAL_CRC_H
#define __HAL_CRC_H

#ifdef __cplusplus
extern "C" {
#endif

// Files includes
#include "types.h"
#include "reg_common.h"
#include "reg_crc.h"

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Hardware_Abstract_Layer
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup CRC_HAL
/// @brief CRC HAL modules
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup CRC_Exported_Types
/// @{

/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup CRC_Exported_Constants
/// @{

/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup CRC_Exported_Variables
/// @{
#ifdef _HAL_CRC_C_
#define GLOBAL

#else
#define GLOBAL extern
#endif

#undef GLOBAL
/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup CRC_Exported_Functions
/// @{
void CRC_ResetDR(void);
void CRC_SetIDRegister(u8 id_value);

u32 CRC_CalcCRC(u32 data);
u32 CRC_CalcBlockCRC(u32* buffer, u32 length);
u32 CRC_GetCRC(void);

u8 CRC_GetIDRegister(void);
u32 CRC_RevData(u32 value);

/// @}

/// @}

/// @}

#ifdef __cplusplus
}
#endif

////////////////////////////////////////////////////////////////////////////////
#endif// __HAL_CRC_H
////////////////////////////////////////////////////////////////////////////////
