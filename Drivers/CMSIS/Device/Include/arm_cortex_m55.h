#ifndef __ARM_CORTEX_M55_H__
#define __ARM_CORTEX_M55_H__

#ifdef __cplusplus
extern "C" {
#endif

#define __CM55_REV                (0x0101U)

// NVIC
#define __NVIC_PRIO_BITS          (4U)

// SysTick
#define __Vendor_SysTickConfig    (1U)

// Vector Table
#define __VTOR_PRESENT            (1U)

// MPU
#define __MPU_PRESENT             (1U)

// FPU
#define __FPU_PRESENT             (1U)
#define __FPU_DP                  (1U)

// PMU
#define __PMU_PRESENT             (1U)
#define __PMU_NUM_EVENTCNT        (8U)

// Cache
#define __ICACHE_PRESENT          (1U)
#define __DCACHE_PRESENT          (1U)

// DSP Extensions
#define __DSP_PRESENT             (1U)

// TrustZone
#define __SAUREGION_PRESENT       (1U)

typedef enum {
  Reset_IRQn = -15,
  NMI_IRQn = -14,
  HardFault_IRQn = -13,
  MemManage_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SecureFault_IRQn = -9,
  SVC_IRQn = -5,
  DebugMon_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1
} IRQn_Type;

#include <stdint.h>
#include "core_cm55.h"

#ifdef __cplusplus
}
#endif

#endif
