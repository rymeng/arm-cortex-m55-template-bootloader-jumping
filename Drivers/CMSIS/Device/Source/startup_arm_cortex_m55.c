#include "startup_arm_cortex_m55.h"

__VECTOR_TABLE_ATTRIBUTE const IRQHandler_Type __VECTOR_TABLE[496] = {
  (IRQHandler_Type)(0x20000000UL),
  Reset_Handler,
  NMI_Handler,
  HardFault_Handler,
  MemManage_Handler,
  BusFault_Handler,
  UsageFault_Handler,
  SecureFault_Handler,
  (IRQHandler_Type)0UL,
  (IRQHandler_Type)0UL,
  (IRQHandler_Type)0UL,
  SVC_Handler,
  DebugMon_Handler,
  (IRQHandler_Type)0UL,
  PendSV_Handler,
  SysTick_Handler
};

#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wmissing-noreturn"
#endif

// Reset Handler
__NO_RETURN void Reset_Handler(void)
{
  SCB->VTOR = 0x00400000UL;
  __DSB();

  __ASM volatile (
    "LDR R0, =0x00400000\n\t"
    "LDR R1, [R0]\n\t"
    "MSR MSP, R1\n\t"
    "LDR R1, [R0, #4]\n\t"
    "BX R1\n\t"
  );

  while (1) {
    __NOP();
  }
}

// NMI Handler: Infinite Loop
__NO_RETURN void NMI_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// HardFault_Handler: Infinite Loop
__NO_RETURN void HardFault_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// MemManage_Handler: Infinite Loop
__NO_RETURN void MemManage_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// BusFault_Handler: Infinite Loop
__NO_RETURN void BusFault_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// UsageFault_Handler: Infinite Loop
__NO_RETURN void UsageFault_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// SecureFault_Handler: Infinite Loop
__NO_RETURN void SecureFault_Handler(void)
{
  while (1) {
    __NOP();
  }
}

// SVC_Handler: Infinite Loop
void SVC_Handler(void)
{
  ;
}

// DebugMon_Handler: Infinite Loop
void DebugMon_Handler(void)
{
  ;
}

// PendSV_Handler: Infinite Loop
void PendSV_Handler(void)
{
  ;
}

// SysTick_Handler: Infinite Loop
void SysTick_Handler(void)
{
  ;
}

#if defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#endif
