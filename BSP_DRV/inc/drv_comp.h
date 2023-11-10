/** 
 * @file     drv_comp.h
 * @author   Motor TEAM
 * @brief    This file provides all the functions prototypes for the COMP.
 *
 * @attention
 *
 * THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
 * CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
 * TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
 * CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
 * HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
 * CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
 *
 * <H2><CENTER>&COPY; COPYRIGHT MINDMOTION </CENTER></H2>
 */

/** Define to prevent recursive inclusion */
#ifndef __DRV_COMP_H
#define __DRV_COMP_H

/** Files includes */
#include <stdio.h>
#include "mm32_device.h"
#include "hal_conf.h"

/** 
 * @addtogroup MM32_Hardware_Driver_Layer
 * @{
 */

/** 
 * @addtogroup Drv_COMP
 * @{
 */

typedef struct
{
    EM_COMP_NonInvertingInput   sCompNonInvertingInput;
    EM_COMP_InvertingInput      sCompInvertingInput;
    uint8_t                     u8CompCrvSelect;
}COMP_Input_TypeDef;

extern void Drv_Comp_Init(COMP_Selection_TypeDef sSelection,COMP_Input_TypeDef * pCompInput);

/**
  * @}
*/

/**
  * @}
*/

#endif
