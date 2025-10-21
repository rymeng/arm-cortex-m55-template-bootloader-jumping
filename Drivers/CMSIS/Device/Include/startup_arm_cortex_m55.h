#ifndef __STARTUP_ARM_CORTEX_M55_H__
#define __STARTUP_ARM_CORTEX_M55_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "arm_cortex_m55.h"

typedef void (*IRQHandler_Type)(void);

__NO_RETURN void Reset_Handler(void);
__NO_RETURN void NMI_Handler(void);
__NO_RETURN void HardFault_Handler(void);
__NO_RETURN void MemManage_Handler(void);
__NO_RETURN void BusFault_Handler(void);
__NO_RETURN void UsageFault_Handler(void);
__NO_RETURN void SecureFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);

#ifdef __cplusplus
}
#endif

#endif
