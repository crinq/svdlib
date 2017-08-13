/* header created by json2c.py from f303.json */
#include <stdint.h>

#define CPU STM32F303

/** 
*  name: TIM2
*  description: General purpose timer
*  group: TIMs
*  address: 0x40000000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40000000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_0 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40000004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CR2_t {
    uint32_t _RESERVED_1 : 3;
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40000008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS_3 : 1;  ///< Slave mode selection bit3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4000000C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_2 : 1;
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t _RESERVED_3 : 1;
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_4 : 1;
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40000010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_5 : 1;
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t _RESERVED_6 : 2;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40000014
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM2_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t _RESERVED_7 : 1;
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register 1 (output mode)
  * address: 0x40000018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_8 : 7;
    uint32_t OC2M_3 : 1;  ///< Output compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40000018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/compare 2 selection, reset value: 0x0
    uint32_t IC2PSC : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register 2 (output mode)
  * address: 0x4000001C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t O24CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output compare 3 mode bit3, reset value: 0x0
    uint32_t _RESERVED_9 : 7;
    uint32_t OC4M_3 : 1;  ///< Output compare 4 mode bit3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x4000001C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40000020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t _RESERVED_10 : 1;
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t _RESERVED_11 : 1;
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_12 : 1;
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_13 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40000024
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CNT_t {
    uint32_t CNTL : 16;  ///< Low counter value, reset value: 0x0
    uint32_t CNTH : 15;  ///< High counter value, reset value: 0x0
    uint32_t CNT_or_UIFCPY : 1;  ///< if IUFREMAP=0 than CNT with read write access else UIFCPY with read only access, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40000028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4000002C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_ARR_t {
    uint32_t ARRL : 16;  ///< Low Auto-reload value, reset value: 0x0
    uint32_t ARRH : 16;  ///< High Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40000034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCR1_t {
    uint32_t CCR1L : 16;  ///< Low Capture/Compare 1 value, reset value: 0x0
    uint32_t CCR1H : 16;  ///< High Capture/Compare 1 value (on TIM2), reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40000038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCR2_t {
    uint32_t CCR2L : 16;  ///< Low Capture/Compare 2 value, reset value: 0x0
    uint32_t CCR2H : 16;  ///< High Capture/Compare 2 value (on TIM2), reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x4000003C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCR3_t {
    uint32_t CCR3L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR3H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40000040
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_CCR4_t {
    uint32_t CCR4L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR4H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR4;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40000048
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_14 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4000004C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM2_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

} TIM2_t;


/** 
*  name: TIM3
*  description: General purpose timer
*  group: TIMs
*  address: 0x40000400
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40000400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_15 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40000404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CR2_t {
    uint32_t _RESERVED_16 : 3;
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40000408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS_3 : 1;  ///< Slave mode selection bit3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4000040C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_17 : 1;
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t _RESERVED_18 : 1;
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_19 : 1;
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40000410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_20 : 1;
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t _RESERVED_21 : 2;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40000414
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM3_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t _RESERVED_22 : 1;
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register 1 (output mode)
  * address: 0x40000418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_23 : 7;
    uint32_t OC2M_3 : 1;  ///< Output compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40000418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/compare 2 selection, reset value: 0x0
    uint32_t IC2PSC : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register 2 (output mode)
  * address: 0x4000041C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t O24CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output compare 3 mode bit3, reset value: 0x0
    uint32_t _RESERVED_24 : 7;
    uint32_t OC4M_3 : 1;  ///< Output compare 4 mode bit3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x4000041C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40000420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t _RESERVED_25 : 1;
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t _RESERVED_26 : 1;
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_27 : 1;
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_28 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40000424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CNT_t {
    uint32_t CNTL : 16;  ///< Low counter value, reset value: 0x0
    uint32_t CNTH : 15;  ///< High counter value, reset value: 0x0
    uint32_t CNT_or_UIFCPY : 1;  ///< if IUFREMAP=0 than CNT with read write access else UIFCPY with read only access, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40000428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4000042C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_ARR_t {
    uint32_t ARRL : 16;  ///< Low Auto-reload value, reset value: 0x0
    uint32_t ARRH : 16;  ///< High Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40000434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCR1_t {
    uint32_t CCR1L : 16;  ///< Low Capture/Compare 1 value, reset value: 0x0
    uint32_t CCR1H : 16;  ///< High Capture/Compare 1 value (on TIM2), reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40000438
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCR2_t {
    uint32_t CCR2L : 16;  ///< Low Capture/Compare 2 value, reset value: 0x0
    uint32_t CCR2H : 16;  ///< High Capture/Compare 2 value (on TIM2), reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x4000043C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCR3_t {
    uint32_t CCR3L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR3H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40000440
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_CCR4_t {
    uint32_t CCR4L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR4H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR4;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40000448
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_29 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4000044C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM3_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

} TIM3_t;


/** 
*  name: TIM4
*  description: General purpose timer
*  group: TIMs
*  address: 0x40000800
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40000800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_30 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40000804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CR2_t {
    uint32_t _RESERVED_31 : 3;
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40000808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS_3 : 1;  ///< Slave mode selection bit3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4000080C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_32 : 1;
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t _RESERVED_33 : 1;
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_34 : 1;
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40000810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_35 : 1;
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t _RESERVED_36 : 2;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40000814
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM4_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t _RESERVED_37 : 1;
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register 1 (output mode)
  * address: 0x40000818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_38 : 7;
    uint32_t OC2M_3 : 1;  ///< Output compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40000818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/compare 2 selection, reset value: 0x0
    uint32_t IC2PSC : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register 2 (output mode)
  * address: 0x4000081C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t O24CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output compare 3 mode bit3, reset value: 0x0
    uint32_t _RESERVED_39 : 7;
    uint32_t OC4M_3 : 1;  ///< Output compare 4 mode bit3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x4000081C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40000820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t _RESERVED_40 : 1;
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t _RESERVED_41 : 1;
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_42 : 1;
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_43 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40000824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CNT_t {
    uint32_t CNTL : 16;  ///< Low counter value, reset value: 0x0
    uint32_t CNTH : 15;  ///< High counter value, reset value: 0x0
    uint32_t CNT_or_UIFCPY : 1;  ///< if IUFREMAP=0 than CNT with read write access else UIFCPY with read only access, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40000828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4000082C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_ARR_t {
    uint32_t ARRL : 16;  ///< Low Auto-reload value, reset value: 0x0
    uint32_t ARRH : 16;  ///< High Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40000834
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCR1_t {
    uint32_t CCR1L : 16;  ///< Low Capture/Compare 1 value, reset value: 0x0
    uint32_t CCR1H : 16;  ///< High Capture/Compare 1 value (on TIM2), reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40000838
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCR2_t {
    uint32_t CCR2L : 16;  ///< Low Capture/Compare 2 value, reset value: 0x0
    uint32_t CCR2H : 16;  ///< High Capture/Compare 2 value (on TIM2), reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x4000083C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCR3_t {
    uint32_t CCR3L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR3H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40000840
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_CCR4_t {
    uint32_t CCR4L : 16;  ///< Low Capture/Compare value, reset value: 0x0
    uint32_t CCR4H : 16;  ///< High Capture/Compare value (on TIM2), reset value: 0x0
  } CCR4;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40000848
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_44 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4000084C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM4_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

} TIM4_t;


/** 
*  name: TIM6
*  description: Basic timers
*  group: TIMs
*  address: 0x40001000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40001000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t _RESERVED_45 : 3;
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t _RESERVED_46 : 3;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40001004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_CR2_t {
    uint32_t _RESERVED_47 : 4;
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
  } CR2;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4000100C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t _RESERVED_48 : 7;
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40001010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40001014
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM6_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
  } EGR;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40001024
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM6_CNT_t {
    uint32_t CNT : 16;  ///< Low counter value, reset value: 0x0
    uint32_t _RESERVED_49 : 15;
    uint32_t UIFCPY : 1;  ///< UIF Copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40001028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4000102C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM6_ARR_t {
    uint32_t ARR : 16;  ///< Low Auto-reload value, reset value: 0x0
  } ARR;

} TIM6_t;


/** 
*  name: TIM7
*  description: Basic timers
*  group: TIMs
*  address: 0x40001400
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40001400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t _RESERVED_50 : 3;
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t _RESERVED_51 : 3;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40001404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_CR2_t {
    uint32_t _RESERVED_52 : 4;
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
  } CR2;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4000140C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t _RESERVED_53 : 7;
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40001410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40001414
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM7_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
  } EGR;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40001424
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM7_CNT_t {
    uint32_t CNT : 16;  ///< Low counter value, reset value: 0x0
    uint32_t _RESERVED_54 : 15;
    uint32_t UIFCPY : 1;  ///< UIF Copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40001428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4000142C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM7_ARR_t {
    uint32_t ARR : 16;  ///< Low Auto-reload value, reset value: 0x0
  } ARR;

} TIM7_t;


/** 
*  name: RTC
*  description: Real-time clock
*  group: RTC
*  address: 0x40002800
*/
typedef struct{
  /** 
  * name: TR
  * description: time register
  * address: 0x40002800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_TR_t {
    uint32_t SU : 4;  ///< Second units in BCD format, reset value: 0x0
    uint32_t ST : 3;  ///< Second tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_55 : 1;
    uint32_t MNU : 4;  ///< Minute units in BCD format, reset value: 0x0
    uint32_t MNT : 3;  ///< Minute tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_56 : 1;
    uint32_t HU : 4;  ///< Hour units in BCD format, reset value: 0x0
    uint32_t HT : 2;  ///< Hour tens in BCD format, reset value: 0x0
    uint32_t PM : 1;  ///< AM/PM notation, reset value: 0x0
  } TR;

  /** 
  * name: DR
  * description: date register
  * address: 0x40002804
  * offset: 0x4
  * reset value: 0x00002101
  * access: read-write
  */
  struct RTC_DR_t {
    uint32_t DU : 4;  ///< Date units in BCD format, reset value: 0x1
    uint32_t DT : 2;  ///< Date tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_57 : 2;
    uint32_t MU : 4;  ///< Month units in BCD format, reset value: 0x1
    uint32_t MT : 1;  ///< Month tens in BCD format, reset value: 0x0
    uint32_t WDU : 3;  ///< Week day units, reset value: 0x1
    uint32_t YU : 4;  ///< Year units in BCD format, reset value: 0x0
    uint32_t YT : 4;  ///< Year tens in BCD format, reset value: 0x0
  } DR;

  /** 
  * name: CR
  * description: control register
  * address: 0x40002808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_CR_t {
    uint32_t WCKSEL : 3;  ///< Wakeup clock selection, reset value: 0x0
    uint32_t TSEDGE : 1;  ///< Time-stamp event active edge, reset value: 0x0
    uint32_t REFCKON : 1;  ///< Reference clock detection enable (50 or 60 Hz), reset value: 0x0
    uint32_t BYPSHAD : 1;  ///< Bypass the shadow registers, reset value: 0x0
    uint32_t FMT : 1;  ///< Hour format, reset value: 0x0
    uint32_t _RESERVED_58 : 1;
    uint32_t ALRAE : 1;  ///< Alarm A enable, reset value: 0x0
    uint32_t ALRBE : 1;  ///< Alarm B enable, reset value: 0x0
    uint32_t WUTE : 1;  ///< Wakeup timer enable, reset value: 0x0
    uint32_t TSE : 1;  ///< Time stamp enable, reset value: 0x0
    uint32_t ALRAIE : 1;  ///< Alarm A interrupt enable, reset value: 0x0
    uint32_t ALRBIE : 1;  ///< Alarm B interrupt enable, reset value: 0x0
    uint32_t WUTIE : 1;  ///< Wakeup timer interrupt enable, reset value: 0x0
    uint32_t TSIE : 1;  ///< Time-stamp interrupt enable, reset value: 0x0
    uint32_t ADD1H : 1;  ///< Add 1 hour (summer time change), reset value: 0x0
    uint32_t SUB1H : 1;  ///< Subtract 1 hour (winter time change), reset value: 0x0
    uint32_t BKP : 1;  ///< Backup, reset value: 0x0
    uint32_t COSEL : 1;  ///< Calibration output selection, reset value: 0x0
    uint32_t POL : 1;  ///< Output polarity, reset value: 0x0
    uint32_t OSEL : 2;  ///< Output selection, reset value: 0x0
    uint32_t COE : 1;  ///< Calibration output enable, reset value: 0x0
  } CR;

  /** 
  * name: ISR
  * description: initialization and status register
  * address: 0x4000280C
  * offset: 0xC
  * reset value: 0x00000007
  * access: 
  */
  struct RTC_ISR_t {
    uint32_t ALRAWF : 1;  ///< Alarm A write flag, reset value: 0x1
    uint32_t ALRBWF : 1;  ///< Alarm B write flag, reset value: 0x1
    uint32_t WUTWF : 1;  ///< Wakeup timer write flag, reset value: 0x1
    uint32_t SHPF : 1;  ///< Shift operation pending, reset value: 0x0
    uint32_t INITS : 1;  ///< Initialization status flag, reset value: 0x0
    uint32_t RSF : 1;  ///< Registers synchronization flag, reset value: 0x0
    uint32_t INITF : 1;  ///< Initialization flag, reset value: 0x0
    uint32_t INIT : 1;  ///< Initialization mode, reset value: 0x0
    uint32_t ALRAF : 1;  ///< Alarm A flag, reset value: 0x0
    uint32_t ALRBF : 1;  ///< Alarm B flag, reset value: 0x0
    uint32_t WUTF : 1;  ///< Wakeup timer flag, reset value: 0x0
    uint32_t TSF : 1;  ///< Time-stamp flag, reset value: 0x0
    uint32_t TSOVF : 1;  ///< Time-stamp overflow flag, reset value: 0x0
    uint32_t TAMP1F : 1;  ///< Tamper detection flag, reset value: 0x0
    uint32_t TAMP2F : 1;  ///< RTC_TAMP2 detection flag, reset value: 0x0
    uint32_t TAMP3F : 1;  ///< RTC_TAMP3 detection flag, reset value: 0x0
    uint32_t RECALPF : 1;  ///< Recalibration pending Flag, reset value: 0x0
  } ISR;

  /** 
  * name: PRER
  * description: prescaler register
  * address: 0x40002810
  * offset: 0x10
  * reset value: 0x007F00FF
  * access: read-write
  */
  struct RTC_PRER_t {
    uint32_t PREDIV_S : 15;  ///< Synchronous prescaler factor, reset value: 0xFF
    uint32_t _RESERVED_59 : 1;
    uint32_t PREDIV_A : 7;  ///< Asynchronous prescaler factor, reset value: 0x7F
  } PRER;

  /** 
  * name: WUTR
  * description: wakeup timer register
  * address: 0x40002814
  * offset: 0x14
  * reset value: 0x0000FFFF
  * access: read-write
  */
  struct RTC_WUTR_t {
    uint32_t WUT : 16;  ///< Wakeup auto-reload value bits, reset value: 0xFFFF
  } WUTR;

  /** 
  * name: ALRMAR
  * description: alarm A register
  * address: 0x4000281C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_ALRMAR_t {
    uint32_t SU : 4;  ///< Second units in BCD format, reset value: 0x0
    uint32_t ST : 3;  ///< Second tens in BCD format, reset value: 0x0
    uint32_t MSK1 : 1;  ///< Alarm A seconds mask, reset value: 0x0
    uint32_t MNU : 4;  ///< Minute units in BCD format, reset value: 0x0
    uint32_t MNT : 3;  ///< Minute tens in BCD format, reset value: 0x0
    uint32_t MSK2 : 1;  ///< Alarm A minutes mask, reset value: 0x0
    uint32_t HU : 4;  ///< Hour units in BCD format, reset value: 0x0
    uint32_t HT : 2;  ///< Hour tens in BCD format, reset value: 0x0
    uint32_t PM : 1;  ///< AM/PM notation, reset value: 0x0
    uint32_t MSK3 : 1;  ///< Alarm A hours mask, reset value: 0x0
    uint32_t DU : 4;  ///< Date units or day in BCD format, reset value: 0x0
    uint32_t DT : 2;  ///< Date tens in BCD format, reset value: 0x0
    uint32_t WDSEL : 1;  ///< Week day selection, reset value: 0x0
    uint32_t MSK4 : 1;  ///< Alarm A date mask, reset value: 0x0
  } ALRMAR;

  /** 
  * name: ALRMBR
  * description: alarm B register
  * address: 0x40002820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_ALRMBR_t {
    uint32_t SU : 4;  ///< Second units in BCD format, reset value: 0x0
    uint32_t ST : 3;  ///< Second tens in BCD format, reset value: 0x0
    uint32_t MSK1 : 1;  ///< Alarm B seconds mask, reset value: 0x0
    uint32_t MNU : 4;  ///< Minute units in BCD format, reset value: 0x0
    uint32_t MNT : 3;  ///< Minute tens in BCD format, reset value: 0x0
    uint32_t MSK2 : 1;  ///< Alarm B minutes mask, reset value: 0x0
    uint32_t HU : 4;  ///< Hour units in BCD format, reset value: 0x0
    uint32_t HT : 2;  ///< Hour tens in BCD format, reset value: 0x0
    uint32_t PM : 1;  ///< AM/PM notation, reset value: 0x0
    uint32_t MSK3 : 1;  ///< Alarm B hours mask, reset value: 0x0
    uint32_t DU : 4;  ///< Date units or day in BCD format, reset value: 0x0
    uint32_t DT : 2;  ///< Date tens in BCD format, reset value: 0x0
    uint32_t WDSEL : 1;  ///< Week day selection, reset value: 0x0
    uint32_t MSK4 : 1;  ///< Alarm B date mask, reset value: 0x0
  } ALRMBR;

  /** 
  * name: WPR
  * description: write protection register
  * address: 0x40002824
  * offset: 0x24
  * reset value: 0x00000000
  * access: write-only
  */
  struct RTC_WPR_t {
    uint32_t KEY : 8;  ///< Write protection key, reset value: 0x0
  } WPR;

  /** 
  * name: SSR
  * description: sub second register
  * address: 0x40002828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-only
  */
  struct RTC_SSR_t {
    uint32_t SS : 16;  ///< Sub second value, reset value: 0x0
  } SSR;

  /** 
  * name: SHIFTR
  * description: shift control register
  * address: 0x4000282C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: write-only
  */
  struct RTC_SHIFTR_t {
    uint32_t SUBFS : 15;  ///< Subtract a fraction of a second, reset value: 0x0
    uint32_t _RESERVED_60 : 16;
    uint32_t ADD1S : 1;  ///< Add one second, reset value: 0x0
  } SHIFTR;

  /** 
  * name: TSTR
  * description: time stamp time register
  * address: 0x40002830
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-only
  */
  struct RTC_TSTR_t {
    uint32_t SU : 4;  ///< Second units in BCD format, reset value: 0x0
    uint32_t ST : 3;  ///< Second tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_61 : 1;
    uint32_t MNU : 4;  ///< Minute units in BCD format, reset value: 0x0
    uint32_t MNT : 3;  ///< Minute tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_62 : 1;
    uint32_t HU : 4;  ///< Hour units in BCD format, reset value: 0x0
    uint32_t HT : 2;  ///< Hour tens in BCD format, reset value: 0x0
    uint32_t PM : 1;  ///< AM/PM notation, reset value: 0x0
  } TSTR;

  /** 
  * name: TSDR
  * description: time stamp date register
  * address: 0x40002834
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-only
  */
  struct RTC_TSDR_t {
    uint32_t DU : 4;  ///< Date units in BCD format, reset value: 0x0
    uint32_t DT : 2;  ///< Date tens in BCD format, reset value: 0x0
    uint32_t _RESERVED_63 : 2;
    uint32_t MU : 4;  ///< Month units in BCD format, reset value: 0x0
    uint32_t MT : 1;  ///< Month tens in BCD format, reset value: 0x0
    uint32_t WDU : 3;  ///< Week day units, reset value: 0x0
  } TSDR;

  /** 
  * name: TSSSR
  * description: timestamp sub second register
  * address: 0x40002838
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-only
  */
  struct RTC_TSSSR_t {
    uint32_t SS : 16;  ///< Sub second value, reset value: 0x0
  } TSSSR;

  /** 
  * name: CALR
  * description: calibration register
  * address: 0x4000283C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_CALR_t {
    uint32_t CALM : 9;  ///< Calibration minus, reset value: 0x0
    uint32_t _RESERVED_64 : 4;
    uint32_t CALW16 : 1;  ///< Use a 16-second calibration cycle period, reset value: 0x0
    uint32_t CALW8 : 1;  ///< Use an 8-second calibration cycle period, reset value: 0x0
    uint32_t CALP : 1;  ///< Increase frequency of RTC by 488.5 ppm, reset value: 0x0
  } CALR;

  /** 
  * name: TAFCR
  * description: tamper and alternate function configuration register
  * address: 0x40002840
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_TAFCR_t {
    uint32_t TAMP1E : 1;  ///< Tamper 1 detection enable, reset value: 0x0
    uint32_t TAMP1TRG : 1;  ///< Active level for tamper 1, reset value: 0x0
    uint32_t TAMPIE : 1;  ///< Tamper interrupt enable, reset value: 0x0
    uint32_t TAMP2E : 1;  ///< Tamper 2 detection enable, reset value: 0x0
    uint32_t TAMP2TRG : 1;  ///< Active level for tamper 2, reset value: 0x0
    uint32_t TAMP3E : 1;  ///< Tamper 3 detection enable, reset value: 0x0
    uint32_t TAMP3TRG : 1;  ///< Active level for tamper 3, reset value: 0x0
    uint32_t TAMPTS : 1;  ///< Activate timestamp on tamper detection event, reset value: 0x0
    uint32_t TAMPFREQ : 3;  ///< Tamper sampling frequency, reset value: 0x0
    uint32_t TAMPFLT : 2;  ///< Tamper filter count, reset value: 0x0
    uint32_t TAMPPRCH : 2;  ///< Tamper precharge duration, reset value: 0x0
    uint32_t TAMPPUDIS : 1;  ///< TAMPER pull-up disable, reset value: 0x0
    uint32_t _RESERVED_65 : 2;
    uint32_t PC13VALUE : 1;  ///< PC13 value, reset value: 0x0
    uint32_t PC13MODE : 1;  ///< PC13 mode, reset value: 0x0
    uint32_t PC14VALUE : 1;  ///< PC14 value, reset value: 0x0
    uint32_t PC14MODE : 1;  ///< PC 14 mode, reset value: 0x0
    uint32_t PC15VALUE : 1;  ///< PC15 value, reset value: 0x0
    uint32_t PC15MODE : 1;  ///< PC15 mode, reset value: 0x0
  } TAFCR;

  /** 
  * name: ALRMASSR
  * description: alarm A sub second register
  * address: 0x40002844
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_ALRMASSR_t {
    uint32_t SS : 15;  ///< Sub seconds value, reset value: 0x0
    uint32_t _RESERVED_66 : 9;
    uint32_t MASKSS : 4;  ///< Mask the most-significant bits starting at this bit, reset value: 0x0
  } ALRMASSR;

  /** 
  * name: ALRMBSSR
  * description: alarm B sub second register
  * address: 0x40002848
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_ALRMBSSR_t {
    uint32_t SS : 15;  ///< Sub seconds value, reset value: 0x0
    uint32_t _RESERVED_67 : 9;
    uint32_t MASKSS : 4;  ///< Mask the most-significant bits starting at this bit, reset value: 0x0
  } ALRMBSSR;

  /** 
  * name: BKP0R
  * description: backup register
  * address: 0x40002850
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP0R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP0R;

  /** 
  * name: BKP1R
  * description: backup register
  * address: 0x40002854
  * offset: 0x54
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP1R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP1R;

  /** 
  * name: BKP2R
  * description: backup register
  * address: 0x40002858
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP2R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP2R;

  /** 
  * name: BKP3R
  * description: backup register
  * address: 0x4000285C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP3R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP3R;

  /** 
  * name: BKP4R
  * description: backup register
  * address: 0x40002860
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP4R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP4R;

  /** 
  * name: BKP5R
  * description: backup register
  * address: 0x40002864
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP5R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP5R;

  /** 
  * name: BKP6R
  * description: backup register
  * address: 0x40002868
  * offset: 0x68
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP6R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP6R;

  /** 
  * name: BKP7R
  * description: backup register
  * address: 0x4000286C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP7R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP7R;

  /** 
  * name: BKP8R
  * description: backup register
  * address: 0x40002870
  * offset: 0x70
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP8R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP8R;

  /** 
  * name: BKP9R
  * description: backup register
  * address: 0x40002874
  * offset: 0x74
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP9R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP9R;

  /** 
  * name: BKP10R
  * description: backup register
  * address: 0x40002878
  * offset: 0x78
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP10R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP10R;

  /** 
  * name: BKP11R
  * description: backup register
  * address: 0x4000287C
  * offset: 0x7C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP11R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP11R;

  /** 
  * name: BKP12R
  * description: backup register
  * address: 0x40002880
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP12R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP12R;

  /** 
  * name: BKP13R
  * description: backup register
  * address: 0x40002884
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP13R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP13R;

  /** 
  * name: BKP14R
  * description: backup register
  * address: 0x40002888
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP14R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP14R;

  /** 
  * name: BKP15R
  * description: backup register
  * address: 0x4000288C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP15R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP15R;

  /** 
  * name: BKP16R
  * description: backup register
  * address: 0x40002890
  * offset: 0x90
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP16R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP16R;

  /** 
  * name: BKP17R
  * description: backup register
  * address: 0x40002894
  * offset: 0x94
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP17R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP17R;

  /** 
  * name: BKP18R
  * description: backup register
  * address: 0x40002898
  * offset: 0x98
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP18R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP18R;

  /** 
  * name: BKP19R
  * description: backup register
  * address: 0x4000289C
  * offset: 0x9C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP19R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP19R;

  /** 
  * name: BKP20R
  * description: backup register
  * address: 0x400028A0
  * offset: 0xA0
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP20R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP20R;

  /** 
  * name: BKP21R
  * description: backup register
  * address: 0x400028A4
  * offset: 0xA4
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP21R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP21R;

  /** 
  * name: BKP22R
  * description: backup register
  * address: 0x400028A8
  * offset: 0xA8
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP22R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP22R;

  /** 
  * name: BKP23R
  * description: backup register
  * address: 0x400028AC
  * offset: 0xAC
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP23R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP23R;

  /** 
  * name: BKP24R
  * description: backup register
  * address: 0x400028B0
  * offset: 0xB0
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP24R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP24R;

  /** 
  * name: BKP25R
  * description: backup register
  * address: 0x400028B4
  * offset: 0xB4
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP25R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP25R;

  /** 
  * name: BKP26R
  * description: backup register
  * address: 0x400028B8
  * offset: 0xB8
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP26R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP26R;

  /** 
  * name: BKP27R
  * description: backup register
  * address: 0x400028BC
  * offset: 0xBC
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP27R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP27R;

  /** 
  * name: BKP28R
  * description: backup register
  * address: 0x400028C0
  * offset: 0xC0
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP28R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP28R;

  /** 
  * name: BKP29R
  * description: backup register
  * address: 0x400028C4
  * offset: 0xC4
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP29R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP29R;

  /** 
  * name: BKP30R
  * description: backup register
  * address: 0x400028C8
  * offset: 0xC8
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP30R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP30R;

  /** 
  * name: BKP31R
  * description: backup register
  * address: 0x400028CC
  * offset: 0xCC
  * reset value: 0x00000000
  * access: read-write
  */
  struct RTC_BKP31R_t {
    uint32_t BKP : 32;  ///< BKP, reset value: 0x0
  } BKP31R;

} RTC_t;


/** 
*  name: WWDG
*  description: Window watchdog
*  group: WWDG
*  address: 0x40002C00
*/
typedef struct{
  /** 
  * name: CR
  * description: Control register
  * address: 0x40002C00
  * offset: 0x0
  * reset value: 0x0000007F
  * access: read-write
  */
  struct WWDG_CR_t {
    uint32_t T : 7;  ///< 7-bit counter, reset value: 0x7F
    uint32_t WDGA : 1;  ///< Activation bit, reset value: 0x0
  } CR;

  /** 
  * name: CFR
  * description: Configuration register
  * address: 0x40002C04
  * offset: 0x4
  * reset value: 0x0000007F
  * access: read-write
  */
  struct WWDG_CFR_t {
    uint32_t W : 7;  ///< 7-bit window value, reset value: 0x7F
    uint32_t WDGTB : 2;  ///< Timer base, reset value: 0x0
    uint32_t EWI : 1;  ///< Early wakeup interrupt, reset value: 0x0
  } CFR;

  /** 
  * name: SR
  * description: Status register
  * address: 0x40002C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct WWDG_SR_t {
    uint32_t EWIF : 1;  ///< Early wakeup interrupt flag, reset value: 0x0
  } SR;

} WWDG_t;


/** 
*  name: IWDG
*  description: Independent watchdog
*  group: IWDG
*  address: 0x40003000
*/
typedef struct{
  /** 
  * name: KR
  * description: Key register
  * address: 0x40003000
  * offset: 0x0
  * reset value: 0x00000000
  * access: write-only
  */
  struct IWDG_KR_t {
    uint32_t KEY : 16;  ///< Key value, reset value: 0x0
  } KR;

  /** 
  * name: PR
  * description: Prescaler register
  * address: 0x40003004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct IWDG_PR_t {
    uint32_t PR : 3;  ///< Prescaler divider, reset value: 0x0
  } PR;

  /** 
  * name: RLR
  * description: Reload register
  * address: 0x40003008
  * offset: 0x8
  * reset value: 0x00000FFF
  * access: read-write
  */
  struct IWDG_RLR_t {
    uint32_t RL : 12;  ///< Watchdog counter reload value, reset value: 0xFFF
  } RLR;

  /** 
  * name: SR
  * description: Status register
  * address: 0x4000300C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-only
  */
  struct IWDG_SR_t {
    uint32_t PVU : 1;  ///< Watchdog prescaler value update, reset value: 0x0
    uint32_t RVU : 1;  ///< Watchdog counter reload value update, reset value: 0x0
    uint32_t WVU : 1;  ///< Watchdog counter window value update, reset value: 0x0
  } SR;

  /** 
  * name: WINR
  * description: Window register
  * address: 0x40003010
  * offset: 0x10
  * reset value: 0x00000FFF
  * access: read-write
  */
  struct IWDG_WINR_t {
    uint32_t WIN : 12;  ///< Watchdog counter window value, reset value: 0xFFF
  } WINR;

} IWDG_t;


/** 
*  name: I2S2ext
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40003400
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40003400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S2ext_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40003404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S2ext_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40003408
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct I2S2ext_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x4000340C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S2ext_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40003410
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct I2S2ext_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40003414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2S2ext_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40003418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2S2ext_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x4000341C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S2ext_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_68 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40003420
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct I2S2ext_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} I2S2ext_t;


/** 
*  name: SPI2
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40003800
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40003800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI2_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40003804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI2_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40003808
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct SPI2_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x4000380C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI2_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40003810
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct SPI2_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40003814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI2_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40003818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI2_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x4000381C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI2_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_69 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40003820
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct SPI2_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} SPI2_t;


/** 
*  name: SPI3
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40003C00
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40003C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI3_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40003C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI3_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40003C08
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct SPI3_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x40003C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI3_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40003C10
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct SPI3_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40003C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI3_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40003C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI3_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x40003C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI3_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_70 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40003C20
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct SPI3_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} SPI3_t;


/** 
*  name: I2S3ext
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40004000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40004000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S3ext_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40004004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S3ext_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40004008
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct I2S3ext_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x4000400C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S3ext_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40004010
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct I2S3ext_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40004014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2S3ext_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40004018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2S3ext_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x4000401C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2S3ext_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_71 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40004020
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct I2S3ext_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} I2S3ext_t;


/** 
*  name: USART2
*  description: Universal synchronous asynchronous receiver transmitter
*  group: USART
*  address: 0x40004400
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40004400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_CR1_t {
    uint32_t UE : 1;  ///< USART enable, reset value: 0x0
    uint32_t UESM : 1;  ///< USART enable in Stop mode, reset value: 0x0
    uint32_t RE : 1;  ///< Receiver enable, reset value: 0x0
    uint32_t TE : 1;  ///< Transmitter enable, reset value: 0x0
    uint32_t IDLEIE : 1;  ///< IDLE interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RXNE interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transmission complete interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< interrupt enable, reset value: 0x0
    uint32_t PEIE : 1;  ///< PE interrupt enable, reset value: 0x0
    uint32_t PS : 1;  ///< Parity selection, reset value: 0x0
    uint32_t PCE : 1;  ///< Parity control enable, reset value: 0x0
    uint32_t WAKE : 1;  ///< Receiver wakeup method, reset value: 0x0
    uint32_t M : 1;  ///< Word length, reset value: 0x0
    uint32_t MME : 1;  ///< Mute mode enable, reset value: 0x0
    uint32_t CMIE : 1;  ///< Character match interrupt enable, reset value: 0x0
    uint32_t OVER8 : 1;  ///< Oversampling mode, reset value: 0x0
    uint32_t DEDT : 5;  ///< Driver Enable deassertion time, reset value: 0x0
    uint32_t DEAT : 5;  ///< Driver Enable assertion time, reset value: 0x0
    uint32_t RTOIE : 1;  ///< Receiver timeout interrupt enable, reset value: 0x0
    uint32_t EOBIE : 1;  ///< End of Block interrupt enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40004404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_CR2_t {
    uint32_t _RESERVED_72 : 4;
    uint32_t ADDM7 : 1;  ///< 7-bit Address Detection/4-bit Address Detection, reset value: 0x0
    uint32_t LBDL : 1;  ///< LIN break detection length, reset value: 0x0
    uint32_t LBDIE : 1;  ///< LIN break detection interrupt enable, reset value: 0x0
    uint32_t _RESERVED_73 : 1;
    uint32_t LBCL : 1;  ///< Last bit clock pulse, reset value: 0x0
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t CLKEN : 1;  ///< Clock enable, reset value: 0x0
    uint32_t STOP : 2;  ///< STOP bits, reset value: 0x0
    uint32_t LINEN : 1;  ///< LIN mode enable, reset value: 0x0
    uint32_t SWAP : 1;  ///< Swap TX/RX pins, reset value: 0x0
    uint32_t RXINV : 1;  ///< RX pin active level inversion, reset value: 0x0
    uint32_t TXINV : 1;  ///< TX pin active level inversion, reset value: 0x0
    uint32_t DATAINV : 1;  ///< Binary data inversion, reset value: 0x0
    uint32_t MSBFIRST : 1;  ///< Most significant bit first, reset value: 0x0
    uint32_t ABREN : 1;  ///< Auto baud rate enable, reset value: 0x0
    uint32_t ABRMOD : 2;  ///< Auto baud rate mode, reset value: 0x0
    uint32_t RTOEN : 1;  ///< Receiver timeout enable, reset value: 0x0
    uint32_t ADD0 : 4;  ///< Address of the USART node, reset value: 0x0
    uint32_t ADD4 : 4;  ///< Address of the USART node, reset value: 0x0
  } CR2;

  /** 
  * name: CR3
  * description: Control register 3
  * address: 0x40004408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_CR3_t {
    uint32_t EIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t IREN : 1;  ///< IrDA mode enable, reset value: 0x0
    uint32_t IRLP : 1;  ///< IrDA low-power, reset value: 0x0
    uint32_t HDSEL : 1;  ///< Half-duplex selection, reset value: 0x0
    uint32_t NACK : 1;  ///< Smartcard NACK enable, reset value: 0x0
    uint32_t SCEN : 1;  ///< Smartcard mode enable, reset value: 0x0
    uint32_t DMAR : 1;  ///< DMA enable receiver, reset value: 0x0
    uint32_t DMAT : 1;  ///< DMA enable transmitter, reset value: 0x0
    uint32_t RTSE : 1;  ///< RTS enable, reset value: 0x0
    uint32_t CTSE : 1;  ///< CTS enable, reset value: 0x0
    uint32_t CTSIE : 1;  ///< CTS interrupt enable, reset value: 0x0
    uint32_t ONEBIT : 1;  ///< One sample bit method enable, reset value: 0x0
    uint32_t OVRDIS : 1;  ///< Overrun Disable, reset value: 0x0
    uint32_t DDRE : 1;  ///< DMA Disable on Reception Error, reset value: 0x0
    uint32_t DEM : 1;  ///< Driver enable mode, reset value: 0x0
    uint32_t DEP : 1;  ///< Driver enable polarity selection, reset value: 0x0
    uint32_t _RESERVED_74 : 1;
    uint32_t SCARCNT : 3;  ///< Smartcard auto-retry count, reset value: 0x0
    uint32_t WUS : 2;  ///< Wakeup from Stop mode interrupt flag selection, reset value: 0x0
    uint32_t WUFIE : 1;  ///< Wakeup from Stop mode interrupt enable, reset value: 0x0
  } CR3;

  /** 
  * name: BRR
  * description: Baud rate register
  * address: 0x4000440C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_BRR_t {
    uint32_t DIV_Fraction : 4;  ///< fraction of USARTDIV, reset value: 0x0
    uint32_t DIV_Mantissa : 12;  ///< mantissa of USARTDIV, reset value: 0x0
  } BRR;

  /** 
  * name: GTPR
  * description: Guard time and prescaler register
  * address: 0x40004410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_GTPR_t {
    uint32_t PSC : 8;  ///< Prescaler value, reset value: 0x0
    uint32_t GT : 8;  ///< Guard time value, reset value: 0x0
  } GTPR;

  /** 
  * name: RTOR
  * description: Receiver timeout register
  * address: 0x40004414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_RTOR_t {
    uint32_t RTO : 24;  ///< Receiver timeout value, reset value: 0x0
    uint32_t BLEN : 8;  ///< Block Length, reset value: 0x0
  } RTOR;

  /** 
  * name: RQR
  * description: Request register
  * address: 0x40004418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_RQR_t {
    uint32_t ABRRQ : 1;  ///< Auto baud rate request, reset value: 0x0
    uint32_t SBKRQ : 1;  ///< Send break request, reset value: 0x0
    uint32_t MMRQ : 1;  ///< Mute mode request, reset value: 0x0
    uint32_t RXFRQ : 1;  ///< Receive data flush request, reset value: 0x0
    uint32_t TXFRQ : 1;  ///< Transmit data flush request, reset value: 0x0
  } RQR;

  /** 
  * name: ISR
  * description: Interrupt & status register
  * address: 0x4000441C
  * offset: 0x1C
  * reset value: 0x000000C0
  * access: read-only
  */
  struct USART2_ISR_t {
    uint32_t PE : 1;  ///< Parity error, reset value: 0x0
    uint32_t FE : 1;  ///< Framing error, reset value: 0x0
    uint32_t NF : 1;  ///< Noise detected flag, reset value: 0x0
    uint32_t ORE : 1;  ///< Overrun error, reset value: 0x0
    uint32_t IDLE : 1;  ///< Idle line detected, reset value: 0x0
    uint32_t RXNE : 1;  ///< Read data register not empty, reset value: 0x0
    uint32_t TC : 1;  ///< Transmission complete, reset value: 0x1
    uint32_t TXE : 1;  ///< Transmit data register empty, reset value: 0x1
    uint32_t LBDF : 1;  ///< LIN break detection flag, reset value: 0x0
    uint32_t CTSIF : 1;  ///< CTS interrupt flag, reset value: 0x0
    uint32_t CTS : 1;  ///< CTS flag, reset value: 0x0
    uint32_t RTOF : 1;  ///< Receiver timeout, reset value: 0x0
    uint32_t EOBF : 1;  ///< End of block flag, reset value: 0x0
    uint32_t _RESERVED_75 : 1;
    uint32_t ABRE : 1;  ///< Auto baud rate error, reset value: 0x0
    uint32_t ABRF : 1;  ///< Auto baud rate flag, reset value: 0x0
    uint32_t BUSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t CMF : 1;  ///< character match flag, reset value: 0x0
    uint32_t SBKF : 1;  ///< Send break flag, reset value: 0x0
    uint32_t RWU : 1;  ///< Receiver wakeup from Mute mode, reset value: 0x0
    uint32_t WUF : 1;  ///< Wakeup from Stop mode flag, reset value: 0x0
    uint32_t TEACK : 1;  ///< Transmit enable acknowledge flag, reset value: 0x0
    uint32_t REACK : 1;  ///< Receive enable acknowledge flag, reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt flag clear register
  * address: 0x40004420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_ICR_t {
    uint32_t PECF : 1;  ///< Parity error clear flag, reset value: 0x0
    uint32_t FECF : 1;  ///< Framing error clear flag, reset value: 0x0
    uint32_t NCF : 1;  ///< Noise detected clear flag, reset value: 0x0
    uint32_t ORECF : 1;  ///< Overrun error clear flag, reset value: 0x0
    uint32_t IDLECF : 1;  ///< Idle line detected clear flag, reset value: 0x0
    uint32_t _RESERVED_76 : 1;
    uint32_t TCCF : 1;  ///< Transmission complete clear flag, reset value: 0x0
    uint32_t _RESERVED_77 : 1;
    uint32_t LBDCF : 1;  ///< LIN break detection clear flag, reset value: 0x0
    uint32_t CTSCF : 1;  ///< CTS clear flag, reset value: 0x0
    uint32_t _RESERVED_78 : 1;
    uint32_t RTOCF : 1;  ///< Receiver timeout clear flag, reset value: 0x0
    uint32_t EOBCF : 1;  ///< End of timeout clear flag, reset value: 0x0
    uint32_t _RESERVED_79 : 4;
    uint32_t CMCF : 1;  ///< Character match clear flag, reset value: 0x0
    uint32_t _RESERVED_80 : 2;
    uint32_t WUCF : 1;  ///< Wakeup from Stop mode clear flag, reset value: 0x0
  } ICR;

  /** 
  * name: RDR
  * description: Receive data register
  * address: 0x40004424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct USART2_RDR_t {
    uint32_t RDR : 9;  ///< Receive data value, reset value: 0x0
  } RDR;

  /** 
  * name: TDR
  * description: Transmit data register
  * address: 0x40004428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART2_TDR_t {
    uint32_t TDR : 9;  ///< Transmit data value, reset value: 0x0
  } TDR;

} USART2_t;


/** 
*  name: USART3
*  description: Universal synchronous asynchronous receiver transmitter
*  group: USART
*  address: 0x40004800
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40004800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_CR1_t {
    uint32_t UE : 1;  ///< USART enable, reset value: 0x0
    uint32_t UESM : 1;  ///< USART enable in Stop mode, reset value: 0x0
    uint32_t RE : 1;  ///< Receiver enable, reset value: 0x0
    uint32_t TE : 1;  ///< Transmitter enable, reset value: 0x0
    uint32_t IDLEIE : 1;  ///< IDLE interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RXNE interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transmission complete interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< interrupt enable, reset value: 0x0
    uint32_t PEIE : 1;  ///< PE interrupt enable, reset value: 0x0
    uint32_t PS : 1;  ///< Parity selection, reset value: 0x0
    uint32_t PCE : 1;  ///< Parity control enable, reset value: 0x0
    uint32_t WAKE : 1;  ///< Receiver wakeup method, reset value: 0x0
    uint32_t M : 1;  ///< Word length, reset value: 0x0
    uint32_t MME : 1;  ///< Mute mode enable, reset value: 0x0
    uint32_t CMIE : 1;  ///< Character match interrupt enable, reset value: 0x0
    uint32_t OVER8 : 1;  ///< Oversampling mode, reset value: 0x0
    uint32_t DEDT : 5;  ///< Driver Enable deassertion time, reset value: 0x0
    uint32_t DEAT : 5;  ///< Driver Enable assertion time, reset value: 0x0
    uint32_t RTOIE : 1;  ///< Receiver timeout interrupt enable, reset value: 0x0
    uint32_t EOBIE : 1;  ///< End of Block interrupt enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40004804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_CR2_t {
    uint32_t _RESERVED_81 : 4;
    uint32_t ADDM7 : 1;  ///< 7-bit Address Detection/4-bit Address Detection, reset value: 0x0
    uint32_t LBDL : 1;  ///< LIN break detection length, reset value: 0x0
    uint32_t LBDIE : 1;  ///< LIN break detection interrupt enable, reset value: 0x0
    uint32_t _RESERVED_82 : 1;
    uint32_t LBCL : 1;  ///< Last bit clock pulse, reset value: 0x0
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t CLKEN : 1;  ///< Clock enable, reset value: 0x0
    uint32_t STOP : 2;  ///< STOP bits, reset value: 0x0
    uint32_t LINEN : 1;  ///< LIN mode enable, reset value: 0x0
    uint32_t SWAP : 1;  ///< Swap TX/RX pins, reset value: 0x0
    uint32_t RXINV : 1;  ///< RX pin active level inversion, reset value: 0x0
    uint32_t TXINV : 1;  ///< TX pin active level inversion, reset value: 0x0
    uint32_t DATAINV : 1;  ///< Binary data inversion, reset value: 0x0
    uint32_t MSBFIRST : 1;  ///< Most significant bit first, reset value: 0x0
    uint32_t ABREN : 1;  ///< Auto baud rate enable, reset value: 0x0
    uint32_t ABRMOD : 2;  ///< Auto baud rate mode, reset value: 0x0
    uint32_t RTOEN : 1;  ///< Receiver timeout enable, reset value: 0x0
    uint32_t ADD0 : 4;  ///< Address of the USART node, reset value: 0x0
    uint32_t ADD4 : 4;  ///< Address of the USART node, reset value: 0x0
  } CR2;

  /** 
  * name: CR3
  * description: Control register 3
  * address: 0x40004808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_CR3_t {
    uint32_t EIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t IREN : 1;  ///< IrDA mode enable, reset value: 0x0
    uint32_t IRLP : 1;  ///< IrDA low-power, reset value: 0x0
    uint32_t HDSEL : 1;  ///< Half-duplex selection, reset value: 0x0
    uint32_t NACK : 1;  ///< Smartcard NACK enable, reset value: 0x0
    uint32_t SCEN : 1;  ///< Smartcard mode enable, reset value: 0x0
    uint32_t DMAR : 1;  ///< DMA enable receiver, reset value: 0x0
    uint32_t DMAT : 1;  ///< DMA enable transmitter, reset value: 0x0
    uint32_t RTSE : 1;  ///< RTS enable, reset value: 0x0
    uint32_t CTSE : 1;  ///< CTS enable, reset value: 0x0
    uint32_t CTSIE : 1;  ///< CTS interrupt enable, reset value: 0x0
    uint32_t ONEBIT : 1;  ///< One sample bit method enable, reset value: 0x0
    uint32_t OVRDIS : 1;  ///< Overrun Disable, reset value: 0x0
    uint32_t DDRE : 1;  ///< DMA Disable on Reception Error, reset value: 0x0
    uint32_t DEM : 1;  ///< Driver enable mode, reset value: 0x0
    uint32_t DEP : 1;  ///< Driver enable polarity selection, reset value: 0x0
    uint32_t _RESERVED_83 : 1;
    uint32_t SCARCNT : 3;  ///< Smartcard auto-retry count, reset value: 0x0
    uint32_t WUS : 2;  ///< Wakeup from Stop mode interrupt flag selection, reset value: 0x0
    uint32_t WUFIE : 1;  ///< Wakeup from Stop mode interrupt enable, reset value: 0x0
  } CR3;

  /** 
  * name: BRR
  * description: Baud rate register
  * address: 0x4000480C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_BRR_t {
    uint32_t DIV_Fraction : 4;  ///< fraction of USARTDIV, reset value: 0x0
    uint32_t DIV_Mantissa : 12;  ///< mantissa of USARTDIV, reset value: 0x0
  } BRR;

  /** 
  * name: GTPR
  * description: Guard time and prescaler register
  * address: 0x40004810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_GTPR_t {
    uint32_t PSC : 8;  ///< Prescaler value, reset value: 0x0
    uint32_t GT : 8;  ///< Guard time value, reset value: 0x0
  } GTPR;

  /** 
  * name: RTOR
  * description: Receiver timeout register
  * address: 0x40004814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_RTOR_t {
    uint32_t RTO : 24;  ///< Receiver timeout value, reset value: 0x0
    uint32_t BLEN : 8;  ///< Block Length, reset value: 0x0
  } RTOR;

  /** 
  * name: RQR
  * description: Request register
  * address: 0x40004818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_RQR_t {
    uint32_t ABRRQ : 1;  ///< Auto baud rate request, reset value: 0x0
    uint32_t SBKRQ : 1;  ///< Send break request, reset value: 0x0
    uint32_t MMRQ : 1;  ///< Mute mode request, reset value: 0x0
    uint32_t RXFRQ : 1;  ///< Receive data flush request, reset value: 0x0
    uint32_t TXFRQ : 1;  ///< Transmit data flush request, reset value: 0x0
  } RQR;

  /** 
  * name: ISR
  * description: Interrupt & status register
  * address: 0x4000481C
  * offset: 0x1C
  * reset value: 0x000000C0
  * access: read-only
  */
  struct USART3_ISR_t {
    uint32_t PE : 1;  ///< Parity error, reset value: 0x0
    uint32_t FE : 1;  ///< Framing error, reset value: 0x0
    uint32_t NF : 1;  ///< Noise detected flag, reset value: 0x0
    uint32_t ORE : 1;  ///< Overrun error, reset value: 0x0
    uint32_t IDLE : 1;  ///< Idle line detected, reset value: 0x0
    uint32_t RXNE : 1;  ///< Read data register not empty, reset value: 0x0
    uint32_t TC : 1;  ///< Transmission complete, reset value: 0x1
    uint32_t TXE : 1;  ///< Transmit data register empty, reset value: 0x1
    uint32_t LBDF : 1;  ///< LIN break detection flag, reset value: 0x0
    uint32_t CTSIF : 1;  ///< CTS interrupt flag, reset value: 0x0
    uint32_t CTS : 1;  ///< CTS flag, reset value: 0x0
    uint32_t RTOF : 1;  ///< Receiver timeout, reset value: 0x0
    uint32_t EOBF : 1;  ///< End of block flag, reset value: 0x0
    uint32_t _RESERVED_84 : 1;
    uint32_t ABRE : 1;  ///< Auto baud rate error, reset value: 0x0
    uint32_t ABRF : 1;  ///< Auto baud rate flag, reset value: 0x0
    uint32_t BUSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t CMF : 1;  ///< character match flag, reset value: 0x0
    uint32_t SBKF : 1;  ///< Send break flag, reset value: 0x0
    uint32_t RWU : 1;  ///< Receiver wakeup from Mute mode, reset value: 0x0
    uint32_t WUF : 1;  ///< Wakeup from Stop mode flag, reset value: 0x0
    uint32_t TEACK : 1;  ///< Transmit enable acknowledge flag, reset value: 0x0
    uint32_t REACK : 1;  ///< Receive enable acknowledge flag, reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt flag clear register
  * address: 0x40004820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_ICR_t {
    uint32_t PECF : 1;  ///< Parity error clear flag, reset value: 0x0
    uint32_t FECF : 1;  ///< Framing error clear flag, reset value: 0x0
    uint32_t NCF : 1;  ///< Noise detected clear flag, reset value: 0x0
    uint32_t ORECF : 1;  ///< Overrun error clear flag, reset value: 0x0
    uint32_t IDLECF : 1;  ///< Idle line detected clear flag, reset value: 0x0
    uint32_t _RESERVED_85 : 1;
    uint32_t TCCF : 1;  ///< Transmission complete clear flag, reset value: 0x0
    uint32_t _RESERVED_86 : 1;
    uint32_t LBDCF : 1;  ///< LIN break detection clear flag, reset value: 0x0
    uint32_t CTSCF : 1;  ///< CTS clear flag, reset value: 0x0
    uint32_t _RESERVED_87 : 1;
    uint32_t RTOCF : 1;  ///< Receiver timeout clear flag, reset value: 0x0
    uint32_t EOBCF : 1;  ///< End of timeout clear flag, reset value: 0x0
    uint32_t _RESERVED_88 : 4;
    uint32_t CMCF : 1;  ///< Character match clear flag, reset value: 0x0
    uint32_t _RESERVED_89 : 2;
    uint32_t WUCF : 1;  ///< Wakeup from Stop mode clear flag, reset value: 0x0
  } ICR;

  /** 
  * name: RDR
  * description: Receive data register
  * address: 0x40004824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct USART3_RDR_t {
    uint32_t RDR : 9;  ///< Receive data value, reset value: 0x0
  } RDR;

  /** 
  * name: TDR
  * description: Transmit data register
  * address: 0x40004828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART3_TDR_t {
    uint32_t TDR : 9;  ///< Transmit data value, reset value: 0x0
  } TDR;

} USART3_t;


/** 
*  name: UART4
*  description: Universal synchronous asynchronous receiver transmitter
*  group: USART
*  address: 0x40004C00
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40004C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_CR1_t {
    uint32_t UE : 1;  ///< USART enable, reset value: 0x0
    uint32_t UESM : 1;  ///< USART enable in Stop mode, reset value: 0x0
    uint32_t RE : 1;  ///< Receiver enable, reset value: 0x0
    uint32_t TE : 1;  ///< Transmitter enable, reset value: 0x0
    uint32_t IDLEIE : 1;  ///< IDLE interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RXNE interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transmission complete interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< interrupt enable, reset value: 0x0
    uint32_t PEIE : 1;  ///< PE interrupt enable, reset value: 0x0
    uint32_t PS : 1;  ///< Parity selection, reset value: 0x0
    uint32_t PCE : 1;  ///< Parity control enable, reset value: 0x0
    uint32_t WAKE : 1;  ///< Receiver wakeup method, reset value: 0x0
    uint32_t M : 1;  ///< Word length, reset value: 0x0
    uint32_t MME : 1;  ///< Mute mode enable, reset value: 0x0
    uint32_t CMIE : 1;  ///< Character match interrupt enable, reset value: 0x0
    uint32_t OVER8 : 1;  ///< Oversampling mode, reset value: 0x0
    uint32_t DEDT : 5;  ///< Driver Enable deassertion time, reset value: 0x0
    uint32_t DEAT : 5;  ///< Driver Enable assertion time, reset value: 0x0
    uint32_t RTOIE : 1;  ///< Receiver timeout interrupt enable, reset value: 0x0
    uint32_t EOBIE : 1;  ///< End of Block interrupt enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40004C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_CR2_t {
    uint32_t _RESERVED_90 : 4;
    uint32_t ADDM7 : 1;  ///< 7-bit Address Detection/4-bit Address Detection, reset value: 0x0
    uint32_t LBDL : 1;  ///< LIN break detection length, reset value: 0x0
    uint32_t LBDIE : 1;  ///< LIN break detection interrupt enable, reset value: 0x0
    uint32_t _RESERVED_91 : 1;
    uint32_t LBCL : 1;  ///< Last bit clock pulse, reset value: 0x0
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t CLKEN : 1;  ///< Clock enable, reset value: 0x0
    uint32_t STOP : 2;  ///< STOP bits, reset value: 0x0
    uint32_t LINEN : 1;  ///< LIN mode enable, reset value: 0x0
    uint32_t SWAP : 1;  ///< Swap TX/RX pins, reset value: 0x0
    uint32_t RXINV : 1;  ///< RX pin active level inversion, reset value: 0x0
    uint32_t TXINV : 1;  ///< TX pin active level inversion, reset value: 0x0
    uint32_t DATAINV : 1;  ///< Binary data inversion, reset value: 0x0
    uint32_t MSBFIRST : 1;  ///< Most significant bit first, reset value: 0x0
    uint32_t ABREN : 1;  ///< Auto baud rate enable, reset value: 0x0
    uint32_t ABRMOD : 2;  ///< Auto baud rate mode, reset value: 0x0
    uint32_t RTOEN : 1;  ///< Receiver timeout enable, reset value: 0x0
    uint32_t ADD0 : 4;  ///< Address of the USART node, reset value: 0x0
    uint32_t ADD4 : 4;  ///< Address of the USART node, reset value: 0x0
  } CR2;

  /** 
  * name: CR3
  * description: Control register 3
  * address: 0x40004C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_CR3_t {
    uint32_t EIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t IREN : 1;  ///< IrDA mode enable, reset value: 0x0
    uint32_t IRLP : 1;  ///< IrDA low-power, reset value: 0x0
    uint32_t HDSEL : 1;  ///< Half-duplex selection, reset value: 0x0
    uint32_t NACK : 1;  ///< Smartcard NACK enable, reset value: 0x0
    uint32_t SCEN : 1;  ///< Smartcard mode enable, reset value: 0x0
    uint32_t DMAR : 1;  ///< DMA enable receiver, reset value: 0x0
    uint32_t DMAT : 1;  ///< DMA enable transmitter, reset value: 0x0
    uint32_t RTSE : 1;  ///< RTS enable, reset value: 0x0
    uint32_t CTSE : 1;  ///< CTS enable, reset value: 0x0
    uint32_t CTSIE : 1;  ///< CTS interrupt enable, reset value: 0x0
    uint32_t ONEBIT : 1;  ///< One sample bit method enable, reset value: 0x0
    uint32_t OVRDIS : 1;  ///< Overrun Disable, reset value: 0x0
    uint32_t DDRE : 1;  ///< DMA Disable on Reception Error, reset value: 0x0
    uint32_t DEM : 1;  ///< Driver enable mode, reset value: 0x0
    uint32_t DEP : 1;  ///< Driver enable polarity selection, reset value: 0x0
    uint32_t _RESERVED_92 : 1;
    uint32_t SCARCNT : 3;  ///< Smartcard auto-retry count, reset value: 0x0
    uint32_t WUS : 2;  ///< Wakeup from Stop mode interrupt flag selection, reset value: 0x0
    uint32_t WUFIE : 1;  ///< Wakeup from Stop mode interrupt enable, reset value: 0x0
  } CR3;

  /** 
  * name: BRR
  * description: Baud rate register
  * address: 0x40004C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_BRR_t {
    uint32_t DIV_Fraction : 4;  ///< fraction of USARTDIV, reset value: 0x0
    uint32_t DIV_Mantissa : 12;  ///< mantissa of USARTDIV, reset value: 0x0
  } BRR;

  /** 
  * name: GTPR
  * description: Guard time and prescaler register
  * address: 0x40004C10
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_GTPR_t {
    uint32_t PSC : 8;  ///< Prescaler value, reset value: 0x0
    uint32_t GT : 8;  ///< Guard time value, reset value: 0x0
  } GTPR;

  /** 
  * name: RTOR
  * description: Receiver timeout register
  * address: 0x40004C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_RTOR_t {
    uint32_t RTO : 24;  ///< Receiver timeout value, reset value: 0x0
    uint32_t BLEN : 8;  ///< Block Length, reset value: 0x0
  } RTOR;

  /** 
  * name: RQR
  * description: Request register
  * address: 0x40004C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_RQR_t {
    uint32_t ABRRQ : 1;  ///< Auto baud rate request, reset value: 0x0
    uint32_t SBKRQ : 1;  ///< Send break request, reset value: 0x0
    uint32_t MMRQ : 1;  ///< Mute mode request, reset value: 0x0
    uint32_t RXFRQ : 1;  ///< Receive data flush request, reset value: 0x0
    uint32_t TXFRQ : 1;  ///< Transmit data flush request, reset value: 0x0
  } RQR;

  /** 
  * name: ISR
  * description: Interrupt & status register
  * address: 0x40004C1C
  * offset: 0x1C
  * reset value: 0x000000C0
  * access: read-only
  */
  struct UART4_ISR_t {
    uint32_t PE : 1;  ///< Parity error, reset value: 0x0
    uint32_t FE : 1;  ///< Framing error, reset value: 0x0
    uint32_t NF : 1;  ///< Noise detected flag, reset value: 0x0
    uint32_t ORE : 1;  ///< Overrun error, reset value: 0x0
    uint32_t IDLE : 1;  ///< Idle line detected, reset value: 0x0
    uint32_t RXNE : 1;  ///< Read data register not empty, reset value: 0x0
    uint32_t TC : 1;  ///< Transmission complete, reset value: 0x1
    uint32_t TXE : 1;  ///< Transmit data register empty, reset value: 0x1
    uint32_t LBDF : 1;  ///< LIN break detection flag, reset value: 0x0
    uint32_t CTSIF : 1;  ///< CTS interrupt flag, reset value: 0x0
    uint32_t CTS : 1;  ///< CTS flag, reset value: 0x0
    uint32_t RTOF : 1;  ///< Receiver timeout, reset value: 0x0
    uint32_t EOBF : 1;  ///< End of block flag, reset value: 0x0
    uint32_t _RESERVED_93 : 1;
    uint32_t ABRE : 1;  ///< Auto baud rate error, reset value: 0x0
    uint32_t ABRF : 1;  ///< Auto baud rate flag, reset value: 0x0
    uint32_t BUSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t CMF : 1;  ///< character match flag, reset value: 0x0
    uint32_t SBKF : 1;  ///< Send break flag, reset value: 0x0
    uint32_t RWU : 1;  ///< Receiver wakeup from Mute mode, reset value: 0x0
    uint32_t WUF : 1;  ///< Wakeup from Stop mode flag, reset value: 0x0
    uint32_t TEACK : 1;  ///< Transmit enable acknowledge flag, reset value: 0x0
    uint32_t REACK : 1;  ///< Receive enable acknowledge flag, reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt flag clear register
  * address: 0x40004C20
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_ICR_t {
    uint32_t PECF : 1;  ///< Parity error clear flag, reset value: 0x0
    uint32_t FECF : 1;  ///< Framing error clear flag, reset value: 0x0
    uint32_t NCF : 1;  ///< Noise detected clear flag, reset value: 0x0
    uint32_t ORECF : 1;  ///< Overrun error clear flag, reset value: 0x0
    uint32_t IDLECF : 1;  ///< Idle line detected clear flag, reset value: 0x0
    uint32_t _RESERVED_94 : 1;
    uint32_t TCCF : 1;  ///< Transmission complete clear flag, reset value: 0x0
    uint32_t _RESERVED_95 : 1;
    uint32_t LBDCF : 1;  ///< LIN break detection clear flag, reset value: 0x0
    uint32_t CTSCF : 1;  ///< CTS clear flag, reset value: 0x0
    uint32_t _RESERVED_96 : 1;
    uint32_t RTOCF : 1;  ///< Receiver timeout clear flag, reset value: 0x0
    uint32_t EOBCF : 1;  ///< End of timeout clear flag, reset value: 0x0
    uint32_t _RESERVED_97 : 4;
    uint32_t CMCF : 1;  ///< Character match clear flag, reset value: 0x0
    uint32_t _RESERVED_98 : 2;
    uint32_t WUCF : 1;  ///< Wakeup from Stop mode clear flag, reset value: 0x0
  } ICR;

  /** 
  * name: RDR
  * description: Receive data register
  * address: 0x40004C24
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct UART4_RDR_t {
    uint32_t RDR : 9;  ///< Receive data value, reset value: 0x0
  } RDR;

  /** 
  * name: TDR
  * description: Transmit data register
  * address: 0x40004C28
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART4_TDR_t {
    uint32_t TDR : 9;  ///< Transmit data value, reset value: 0x0
  } TDR;

} UART4_t;


/** 
*  name: UART5
*  description: Universal synchronous asynchronous receiver transmitter
*  group: USART
*  address: 0x40005000
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40005000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_CR1_t {
    uint32_t UE : 1;  ///< USART enable, reset value: 0x0
    uint32_t UESM : 1;  ///< USART enable in Stop mode, reset value: 0x0
    uint32_t RE : 1;  ///< Receiver enable, reset value: 0x0
    uint32_t TE : 1;  ///< Transmitter enable, reset value: 0x0
    uint32_t IDLEIE : 1;  ///< IDLE interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RXNE interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transmission complete interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< interrupt enable, reset value: 0x0
    uint32_t PEIE : 1;  ///< PE interrupt enable, reset value: 0x0
    uint32_t PS : 1;  ///< Parity selection, reset value: 0x0
    uint32_t PCE : 1;  ///< Parity control enable, reset value: 0x0
    uint32_t WAKE : 1;  ///< Receiver wakeup method, reset value: 0x0
    uint32_t M : 1;  ///< Word length, reset value: 0x0
    uint32_t MME : 1;  ///< Mute mode enable, reset value: 0x0
    uint32_t CMIE : 1;  ///< Character match interrupt enable, reset value: 0x0
    uint32_t OVER8 : 1;  ///< Oversampling mode, reset value: 0x0
    uint32_t DEDT : 5;  ///< Driver Enable deassertion time, reset value: 0x0
    uint32_t DEAT : 5;  ///< Driver Enable assertion time, reset value: 0x0
    uint32_t RTOIE : 1;  ///< Receiver timeout interrupt enable, reset value: 0x0
    uint32_t EOBIE : 1;  ///< End of Block interrupt enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40005004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_CR2_t {
    uint32_t _RESERVED_99 : 4;
    uint32_t ADDM7 : 1;  ///< 7-bit Address Detection/4-bit Address Detection, reset value: 0x0
    uint32_t LBDL : 1;  ///< LIN break detection length, reset value: 0x0
    uint32_t LBDIE : 1;  ///< LIN break detection interrupt enable, reset value: 0x0
    uint32_t _RESERVED_100 : 1;
    uint32_t LBCL : 1;  ///< Last bit clock pulse, reset value: 0x0
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t CLKEN : 1;  ///< Clock enable, reset value: 0x0
    uint32_t STOP : 2;  ///< STOP bits, reset value: 0x0
    uint32_t LINEN : 1;  ///< LIN mode enable, reset value: 0x0
    uint32_t SWAP : 1;  ///< Swap TX/RX pins, reset value: 0x0
    uint32_t RXINV : 1;  ///< RX pin active level inversion, reset value: 0x0
    uint32_t TXINV : 1;  ///< TX pin active level inversion, reset value: 0x0
    uint32_t DATAINV : 1;  ///< Binary data inversion, reset value: 0x0
    uint32_t MSBFIRST : 1;  ///< Most significant bit first, reset value: 0x0
    uint32_t ABREN : 1;  ///< Auto baud rate enable, reset value: 0x0
    uint32_t ABRMOD : 2;  ///< Auto baud rate mode, reset value: 0x0
    uint32_t RTOEN : 1;  ///< Receiver timeout enable, reset value: 0x0
    uint32_t ADD0 : 4;  ///< Address of the USART node, reset value: 0x0
    uint32_t ADD4 : 4;  ///< Address of the USART node, reset value: 0x0
  } CR2;

  /** 
  * name: CR3
  * description: Control register 3
  * address: 0x40005008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_CR3_t {
    uint32_t EIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t IREN : 1;  ///< IrDA mode enable, reset value: 0x0
    uint32_t IRLP : 1;  ///< IrDA low-power, reset value: 0x0
    uint32_t HDSEL : 1;  ///< Half-duplex selection, reset value: 0x0
    uint32_t NACK : 1;  ///< Smartcard NACK enable, reset value: 0x0
    uint32_t SCEN : 1;  ///< Smartcard mode enable, reset value: 0x0
    uint32_t DMAR : 1;  ///< DMA enable receiver, reset value: 0x0
    uint32_t DMAT : 1;  ///< DMA enable transmitter, reset value: 0x0
    uint32_t RTSE : 1;  ///< RTS enable, reset value: 0x0
    uint32_t CTSE : 1;  ///< CTS enable, reset value: 0x0
    uint32_t CTSIE : 1;  ///< CTS interrupt enable, reset value: 0x0
    uint32_t ONEBIT : 1;  ///< One sample bit method enable, reset value: 0x0
    uint32_t OVRDIS : 1;  ///< Overrun Disable, reset value: 0x0
    uint32_t DDRE : 1;  ///< DMA Disable on Reception Error, reset value: 0x0
    uint32_t DEM : 1;  ///< Driver enable mode, reset value: 0x0
    uint32_t DEP : 1;  ///< Driver enable polarity selection, reset value: 0x0
    uint32_t _RESERVED_101 : 1;
    uint32_t SCARCNT : 3;  ///< Smartcard auto-retry count, reset value: 0x0
    uint32_t WUS : 2;  ///< Wakeup from Stop mode interrupt flag selection, reset value: 0x0
    uint32_t WUFIE : 1;  ///< Wakeup from Stop mode interrupt enable, reset value: 0x0
  } CR3;

  /** 
  * name: BRR
  * description: Baud rate register
  * address: 0x4000500C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_BRR_t {
    uint32_t DIV_Fraction : 4;  ///< fraction of USARTDIV, reset value: 0x0
    uint32_t DIV_Mantissa : 12;  ///< mantissa of USARTDIV, reset value: 0x0
  } BRR;

  /** 
  * name: GTPR
  * description: Guard time and prescaler register
  * address: 0x40005010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_GTPR_t {
    uint32_t PSC : 8;  ///< Prescaler value, reset value: 0x0
    uint32_t GT : 8;  ///< Guard time value, reset value: 0x0
  } GTPR;

  /** 
  * name: RTOR
  * description: Receiver timeout register
  * address: 0x40005014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_RTOR_t {
    uint32_t RTO : 24;  ///< Receiver timeout value, reset value: 0x0
    uint32_t BLEN : 8;  ///< Block Length, reset value: 0x0
  } RTOR;

  /** 
  * name: RQR
  * description: Request register
  * address: 0x40005018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_RQR_t {
    uint32_t ABRRQ : 1;  ///< Auto baud rate request, reset value: 0x0
    uint32_t SBKRQ : 1;  ///< Send break request, reset value: 0x0
    uint32_t MMRQ : 1;  ///< Mute mode request, reset value: 0x0
    uint32_t RXFRQ : 1;  ///< Receive data flush request, reset value: 0x0
    uint32_t TXFRQ : 1;  ///< Transmit data flush request, reset value: 0x0
  } RQR;

  /** 
  * name: ISR
  * description: Interrupt & status register
  * address: 0x4000501C
  * offset: 0x1C
  * reset value: 0x000000C0
  * access: read-only
  */
  struct UART5_ISR_t {
    uint32_t PE : 1;  ///< Parity error, reset value: 0x0
    uint32_t FE : 1;  ///< Framing error, reset value: 0x0
    uint32_t NF : 1;  ///< Noise detected flag, reset value: 0x0
    uint32_t ORE : 1;  ///< Overrun error, reset value: 0x0
    uint32_t IDLE : 1;  ///< Idle line detected, reset value: 0x0
    uint32_t RXNE : 1;  ///< Read data register not empty, reset value: 0x0
    uint32_t TC : 1;  ///< Transmission complete, reset value: 0x1
    uint32_t TXE : 1;  ///< Transmit data register empty, reset value: 0x1
    uint32_t LBDF : 1;  ///< LIN break detection flag, reset value: 0x0
    uint32_t CTSIF : 1;  ///< CTS interrupt flag, reset value: 0x0
    uint32_t CTS : 1;  ///< CTS flag, reset value: 0x0
    uint32_t RTOF : 1;  ///< Receiver timeout, reset value: 0x0
    uint32_t EOBF : 1;  ///< End of block flag, reset value: 0x0
    uint32_t _RESERVED_102 : 1;
    uint32_t ABRE : 1;  ///< Auto baud rate error, reset value: 0x0
    uint32_t ABRF : 1;  ///< Auto baud rate flag, reset value: 0x0
    uint32_t BUSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t CMF : 1;  ///< character match flag, reset value: 0x0
    uint32_t SBKF : 1;  ///< Send break flag, reset value: 0x0
    uint32_t RWU : 1;  ///< Receiver wakeup from Mute mode, reset value: 0x0
    uint32_t WUF : 1;  ///< Wakeup from Stop mode flag, reset value: 0x0
    uint32_t TEACK : 1;  ///< Transmit enable acknowledge flag, reset value: 0x0
    uint32_t REACK : 1;  ///< Receive enable acknowledge flag, reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt flag clear register
  * address: 0x40005020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_ICR_t {
    uint32_t PECF : 1;  ///< Parity error clear flag, reset value: 0x0
    uint32_t FECF : 1;  ///< Framing error clear flag, reset value: 0x0
    uint32_t NCF : 1;  ///< Noise detected clear flag, reset value: 0x0
    uint32_t ORECF : 1;  ///< Overrun error clear flag, reset value: 0x0
    uint32_t IDLECF : 1;  ///< Idle line detected clear flag, reset value: 0x0
    uint32_t _RESERVED_103 : 1;
    uint32_t TCCF : 1;  ///< Transmission complete clear flag, reset value: 0x0
    uint32_t _RESERVED_104 : 1;
    uint32_t LBDCF : 1;  ///< LIN break detection clear flag, reset value: 0x0
    uint32_t CTSCF : 1;  ///< CTS clear flag, reset value: 0x0
    uint32_t _RESERVED_105 : 1;
    uint32_t RTOCF : 1;  ///< Receiver timeout clear flag, reset value: 0x0
    uint32_t EOBCF : 1;  ///< End of timeout clear flag, reset value: 0x0
    uint32_t _RESERVED_106 : 4;
    uint32_t CMCF : 1;  ///< Character match clear flag, reset value: 0x0
    uint32_t _RESERVED_107 : 2;
    uint32_t WUCF : 1;  ///< Wakeup from Stop mode clear flag, reset value: 0x0
  } ICR;

  /** 
  * name: RDR
  * description: Receive data register
  * address: 0x40005024
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct UART5_RDR_t {
    uint32_t RDR : 9;  ///< Receive data value, reset value: 0x0
  } RDR;

  /** 
  * name: TDR
  * description: Transmit data register
  * address: 0x40005028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct UART5_TDR_t {
    uint32_t TDR : 9;  ///< Transmit data value, reset value: 0x0
  } TDR;

} UART5_t;


/** 
*  name: I2C1
*  description: Inter-integrated circuit
*  group: I2C
*  address: 0x40005400
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40005400
  * offset: 0x0
  * reset value: 0x00000000
  * access: 
  */
  struct I2C1_CR1_t {
    uint32_t PE : 1;  ///< Peripheral enable, reset value: 0x0
    uint32_t TXIE : 1;  ///< TX Interrupt enable, reset value: 0x0
    uint32_t RXIE : 1;  ///< RX Interrupt enable, reset value: 0x0
    uint32_t ADDRIE : 1;  ///< Address match interrupt enable (slave only), reset value: 0x0
    uint32_t NACKIE : 1;  ///< Not acknowledge received interrupt enable, reset value: 0x0
    uint32_t STOPIE : 1;  ///< STOP detection Interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer Complete interrupt enable, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupts enable, reset value: 0x0
    uint32_t DNF : 4;  ///< Digital noise filter, reset value: 0x0
    uint32_t ANFOFF : 1;  ///< Analog noise filter OFF, reset value: 0x0
    uint32_t SWRST : 1;  ///< Software reset, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< DMA transmission requests enable, reset value: 0x0
    uint32_t RXDMAEN : 1;  ///< DMA reception requests enable, reset value: 0x0
    uint32_t SBC : 1;  ///< Slave byte control, reset value: 0x0
    uint32_t NOSTRETCH : 1;  ///< Clock stretching disable, reset value: 0x0
    uint32_t WUPEN : 1;  ///< Wakeup from STOP enable, reset value: 0x0
    uint32_t GCEN : 1;  ///< General call enable, reset value: 0x0
    uint32_t SMBHEN : 1;  ///< SMBus Host address enable, reset value: 0x0
    uint32_t SMBDEN : 1;  ///< SMBus Device Default address enable, reset value: 0x0
    uint32_t ALERTEN : 1;  ///< SMBUS alert enable, reset value: 0x0
    uint32_t PECEN : 1;  ///< PEC enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40005404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_CR2_t {
    uint32_t SADD0 : 1;  ///< Slave address bit 0 (master mode), reset value: 0x0
    uint32_t SADD1 : 7;  ///< Slave address bit 7:1 (master mode), reset value: 0x0
    uint32_t SADD8 : 2;  ///< Slave address bit 9:8 (master mode), reset value: 0x0
    uint32_t RD_WRN : 1;  ///< Transfer direction (master mode), reset value: 0x0
    uint32_t ADD10 : 1;  ///< 10-bit addressing mode (master mode), reset value: 0x0
    uint32_t HEAD10R : 1;  ///< 10-bit address header only read direction (master receiver mode), reset value: 0x0
    uint32_t START : 1;  ///< Start generation, reset value: 0x0
    uint32_t STOP : 1;  ///< Stop generation (master mode), reset value: 0x0
    uint32_t NACK : 1;  ///< NACK generation (slave mode), reset value: 0x0
    uint32_t NBYTES : 8;  ///< Number of bytes, reset value: 0x0
    uint32_t RELOAD : 1;  ///< NBYTES reload mode, reset value: 0x0
    uint32_t AUTOEND : 1;  ///< Automatic end mode (master mode), reset value: 0x0
    uint32_t PECBYTE : 1;  ///< Packet error checking byte, reset value: 0x0
  } CR2;

  /** 
  * name: OAR1
  * description: Own address register 1
  * address: 0x40005408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_OAR1_t {
    uint32_t OA1_0 : 1;  ///< Interface address, reset value: 0x0
    uint32_t OA1_1 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA1_8 : 2;  ///< Interface address, reset value: 0x0
    uint32_t OA1MODE : 1;  ///< Own Address 1 10-bit mode, reset value: 0x0
    uint32_t _RESERVED_108 : 4;
    uint32_t OA1EN : 1;  ///< Own Address 1 enable, reset value: 0x0
  } OAR1;

  /** 
  * name: OAR2
  * description: Own address register 2
  * address: 0x4000540C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_OAR2_t {
    uint32_t _RESERVED_109 : 1;
    uint32_t OA2 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA2MSK : 3;  ///< Own Address 2 masks, reset value: 0x0
    uint32_t _RESERVED_110 : 4;
    uint32_t OA2EN : 1;  ///< Own Address 2 enable, reset value: 0x0
  } OAR2;

  /** 
  * name: TIMINGR
  * description: Timing register
  * address: 0x40005410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_TIMINGR_t {
    uint32_t SCLL : 8;  ///< SCL low period (master mode), reset value: 0x0
    uint32_t SCLH : 8;  ///< SCL high period (master mode), reset value: 0x0
    uint32_t SDADEL : 4;  ///< Data hold time, reset value: 0x0
    uint32_t SCLDEL : 4;  ///< Data setup time, reset value: 0x0
    uint32_t _RESERVED_111 : 4;
    uint32_t PRESC : 4;  ///< Timing prescaler, reset value: 0x0
  } TIMINGR;

  /** 
  * name: TIMEOUTR
  * description: Status register 1
  * address: 0x40005414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_TIMEOUTR_t {
    uint32_t TIMEOUTA : 12;  ///< Bus timeout A, reset value: 0x0
    uint32_t TIDLE : 1;  ///< Idle clock timeout detection, reset value: 0x0
    uint32_t _RESERVED_112 : 2;
    uint32_t TIMOUTEN : 1;  ///< Clock timeout enable, reset value: 0x0
    uint32_t TIMEOUTB : 12;  ///< Bus timeout B, reset value: 0x0
    uint32_t _RESERVED_113 : 3;
    uint32_t TEXTEN : 1;  ///< Extended clock timeout enable, reset value: 0x0
  } TIMEOUTR;

  /** 
  * name: ISR
  * description: Interrupt and Status register
  * address: 0x40005418
  * offset: 0x18
  * reset value: 0x00000001
  * access: 
  */
  struct I2C1_ISR_t {
    uint32_t TXE : 1;  ///< Transmit data register empty (transmitters), reset value: 0x1
    uint32_t TXIS : 1;  ///< Transmit interrupt status (transmitters), reset value: 0x0
    uint32_t RXNE : 1;  ///< Receive data register not empty (receivers), reset value: 0x0
    uint32_t ADDR : 1;  ///< Address matched (slave mode), reset value: 0x0
    uint32_t NACKF : 1;  ///< Not acknowledge received flag, reset value: 0x0
    uint32_t STOPF : 1;  ///< Stop detection flag, reset value: 0x0
    uint32_t TC : 1;  ///< Transfer Complete (master mode), reset value: 0x0
    uint32_t TCR : 1;  ///< Transfer Complete Reload, reset value: 0x0
    uint32_t BERR : 1;  ///< Bus error, reset value: 0x0
    uint32_t ARLO : 1;  ///< Arbitration lost, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun/Underrun (slave mode), reset value: 0x0
    uint32_t PECERR : 1;  ///< PEC Error in reception, reset value: 0x0
    uint32_t TIMEOUT : 1;  ///< Timeout or t_low detection flag, reset value: 0x0
    uint32_t ALERT : 1;  ///< SMBus alert, reset value: 0x0
    uint32_t _RESERVED_114 : 1;
    uint32_t BUSY : 1;  ///< Bus busy, reset value: 0x0
    uint32_t DIR : 1;  ///< Transfer direction (Slave mode), reset value: 0x0
    uint32_t ADDCODE : 7;  ///< Address match code (Slave mode), reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt clear register
  * address: 0x4000541C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: write-only
  */
  struct I2C1_ICR_t {
    uint32_t _RESERVED_115 : 3;
    uint32_t ADDRCF : 1;  ///< Address Matched flag clear, reset value: 0x0
    uint32_t NACKCF : 1;  ///< Not Acknowledge flag clear, reset value: 0x0
    uint32_t STOPCF : 1;  ///< Stop detection flag clear, reset value: 0x0
    uint32_t _RESERVED_116 : 2;
    uint32_t BERRCF : 1;  ///< Bus error flag clear, reset value: 0x0
    uint32_t ARLOCF : 1;  ///< Arbitration lost flag clear, reset value: 0x0
    uint32_t OVRCF : 1;  ///< Overrun/Underrun flag clear, reset value: 0x0
    uint32_t PECCF : 1;  ///< PEC Error flag clear, reset value: 0x0
    uint32_t TIMOUTCF : 1;  ///< Timeout detection flag clear, reset value: 0x0
    uint32_t ALERTCF : 1;  ///< Alert flag clear, reset value: 0x0
  } ICR;

  /** 
  * name: PECR
  * description: PEC register
  * address: 0x40005420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C1_PECR_t {
    uint32_t PEC : 8;  ///< Packet error checking register, reset value: 0x0
  } PECR;

  /** 
  * name: RXDR
  * description: Receive data register
  * address: 0x40005424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C1_RXDR_t {
    uint32_t RXDATA : 8;  ///< 8-bit receive data, reset value: 0x0
  } RXDR;

  /** 
  * name: TXDR
  * description: Transmit data register
  * address: 0x40005428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C1_TXDR_t {
    uint32_t TXDATA : 8;  ///< 8-bit transmit data, reset value: 0x0
  } TXDR;

} I2C1_t;


/** 
*  name: I2C2
*  description: Inter-integrated circuit
*  group: I2C
*  address: 0x40005800
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40005800
  * offset: 0x0
  * reset value: 0x00000000
  * access: 
  */
  struct I2C2_CR1_t {
    uint32_t PE : 1;  ///< Peripheral enable, reset value: 0x0
    uint32_t TXIE : 1;  ///< TX Interrupt enable, reset value: 0x0
    uint32_t RXIE : 1;  ///< RX Interrupt enable, reset value: 0x0
    uint32_t ADDRIE : 1;  ///< Address match interrupt enable (slave only), reset value: 0x0
    uint32_t NACKIE : 1;  ///< Not acknowledge received interrupt enable, reset value: 0x0
    uint32_t STOPIE : 1;  ///< STOP detection Interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer Complete interrupt enable, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupts enable, reset value: 0x0
    uint32_t DNF : 4;  ///< Digital noise filter, reset value: 0x0
    uint32_t ANFOFF : 1;  ///< Analog noise filter OFF, reset value: 0x0
    uint32_t SWRST : 1;  ///< Software reset, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< DMA transmission requests enable, reset value: 0x0
    uint32_t RXDMAEN : 1;  ///< DMA reception requests enable, reset value: 0x0
    uint32_t SBC : 1;  ///< Slave byte control, reset value: 0x0
    uint32_t NOSTRETCH : 1;  ///< Clock stretching disable, reset value: 0x0
    uint32_t WUPEN : 1;  ///< Wakeup from STOP enable, reset value: 0x0
    uint32_t GCEN : 1;  ///< General call enable, reset value: 0x0
    uint32_t SMBHEN : 1;  ///< SMBus Host address enable, reset value: 0x0
    uint32_t SMBDEN : 1;  ///< SMBus Device Default address enable, reset value: 0x0
    uint32_t ALERTEN : 1;  ///< SMBUS alert enable, reset value: 0x0
    uint32_t PECEN : 1;  ///< PEC enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40005804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_CR2_t {
    uint32_t SADD0 : 1;  ///< Slave address bit 0 (master mode), reset value: 0x0
    uint32_t SADD1 : 7;  ///< Slave address bit 7:1 (master mode), reset value: 0x0
    uint32_t SADD8 : 2;  ///< Slave address bit 9:8 (master mode), reset value: 0x0
    uint32_t RD_WRN : 1;  ///< Transfer direction (master mode), reset value: 0x0
    uint32_t ADD10 : 1;  ///< 10-bit addressing mode (master mode), reset value: 0x0
    uint32_t HEAD10R : 1;  ///< 10-bit address header only read direction (master receiver mode), reset value: 0x0
    uint32_t START : 1;  ///< Start generation, reset value: 0x0
    uint32_t STOP : 1;  ///< Stop generation (master mode), reset value: 0x0
    uint32_t NACK : 1;  ///< NACK generation (slave mode), reset value: 0x0
    uint32_t NBYTES : 8;  ///< Number of bytes, reset value: 0x0
    uint32_t RELOAD : 1;  ///< NBYTES reload mode, reset value: 0x0
    uint32_t AUTOEND : 1;  ///< Automatic end mode (master mode), reset value: 0x0
    uint32_t PECBYTE : 1;  ///< Packet error checking byte, reset value: 0x0
  } CR2;

  /** 
  * name: OAR1
  * description: Own address register 1
  * address: 0x40005808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_OAR1_t {
    uint32_t OA1_0 : 1;  ///< Interface address, reset value: 0x0
    uint32_t OA1_1 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA1_8 : 2;  ///< Interface address, reset value: 0x0
    uint32_t OA1MODE : 1;  ///< Own Address 1 10-bit mode, reset value: 0x0
    uint32_t _RESERVED_117 : 4;
    uint32_t OA1EN : 1;  ///< Own Address 1 enable, reset value: 0x0
  } OAR1;

  /** 
  * name: OAR2
  * description: Own address register 2
  * address: 0x4000580C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_OAR2_t {
    uint32_t _RESERVED_118 : 1;
    uint32_t OA2 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA2MSK : 3;  ///< Own Address 2 masks, reset value: 0x0
    uint32_t _RESERVED_119 : 4;
    uint32_t OA2EN : 1;  ///< Own Address 2 enable, reset value: 0x0
  } OAR2;

  /** 
  * name: TIMINGR
  * description: Timing register
  * address: 0x40005810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_TIMINGR_t {
    uint32_t SCLL : 8;  ///< SCL low period (master mode), reset value: 0x0
    uint32_t SCLH : 8;  ///< SCL high period (master mode), reset value: 0x0
    uint32_t SDADEL : 4;  ///< Data hold time, reset value: 0x0
    uint32_t SCLDEL : 4;  ///< Data setup time, reset value: 0x0
    uint32_t _RESERVED_120 : 4;
    uint32_t PRESC : 4;  ///< Timing prescaler, reset value: 0x0
  } TIMINGR;

  /** 
  * name: TIMEOUTR
  * description: Status register 1
  * address: 0x40005814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_TIMEOUTR_t {
    uint32_t TIMEOUTA : 12;  ///< Bus timeout A, reset value: 0x0
    uint32_t TIDLE : 1;  ///< Idle clock timeout detection, reset value: 0x0
    uint32_t _RESERVED_121 : 2;
    uint32_t TIMOUTEN : 1;  ///< Clock timeout enable, reset value: 0x0
    uint32_t TIMEOUTB : 12;  ///< Bus timeout B, reset value: 0x0
    uint32_t _RESERVED_122 : 3;
    uint32_t TEXTEN : 1;  ///< Extended clock timeout enable, reset value: 0x0
  } TIMEOUTR;

  /** 
  * name: ISR
  * description: Interrupt and Status register
  * address: 0x40005818
  * offset: 0x18
  * reset value: 0x00000001
  * access: 
  */
  struct I2C2_ISR_t {
    uint32_t TXE : 1;  ///< Transmit data register empty (transmitters), reset value: 0x1
    uint32_t TXIS : 1;  ///< Transmit interrupt status (transmitters), reset value: 0x0
    uint32_t RXNE : 1;  ///< Receive data register not empty (receivers), reset value: 0x0
    uint32_t ADDR : 1;  ///< Address matched (slave mode), reset value: 0x0
    uint32_t NACKF : 1;  ///< Not acknowledge received flag, reset value: 0x0
    uint32_t STOPF : 1;  ///< Stop detection flag, reset value: 0x0
    uint32_t TC : 1;  ///< Transfer Complete (master mode), reset value: 0x0
    uint32_t TCR : 1;  ///< Transfer Complete Reload, reset value: 0x0
    uint32_t BERR : 1;  ///< Bus error, reset value: 0x0
    uint32_t ARLO : 1;  ///< Arbitration lost, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun/Underrun (slave mode), reset value: 0x0
    uint32_t PECERR : 1;  ///< PEC Error in reception, reset value: 0x0
    uint32_t TIMEOUT : 1;  ///< Timeout or t_low detection flag, reset value: 0x0
    uint32_t ALERT : 1;  ///< SMBus alert, reset value: 0x0
    uint32_t _RESERVED_123 : 1;
    uint32_t BUSY : 1;  ///< Bus busy, reset value: 0x0
    uint32_t DIR : 1;  ///< Transfer direction (Slave mode), reset value: 0x0
    uint32_t ADDCODE : 7;  ///< Address match code (Slave mode), reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt clear register
  * address: 0x4000581C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: write-only
  */
  struct I2C2_ICR_t {
    uint32_t _RESERVED_124 : 3;
    uint32_t ADDRCF : 1;  ///< Address Matched flag clear, reset value: 0x0
    uint32_t NACKCF : 1;  ///< Not Acknowledge flag clear, reset value: 0x0
    uint32_t STOPCF : 1;  ///< Stop detection flag clear, reset value: 0x0
    uint32_t _RESERVED_125 : 2;
    uint32_t BERRCF : 1;  ///< Bus error flag clear, reset value: 0x0
    uint32_t ARLOCF : 1;  ///< Arbitration lost flag clear, reset value: 0x0
    uint32_t OVRCF : 1;  ///< Overrun/Underrun flag clear, reset value: 0x0
    uint32_t PECCF : 1;  ///< PEC Error flag clear, reset value: 0x0
    uint32_t TIMOUTCF : 1;  ///< Timeout detection flag clear, reset value: 0x0
    uint32_t ALERTCF : 1;  ///< Alert flag clear, reset value: 0x0
  } ICR;

  /** 
  * name: PECR
  * description: PEC register
  * address: 0x40005820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C2_PECR_t {
    uint32_t PEC : 8;  ///< Packet error checking register, reset value: 0x0
  } PECR;

  /** 
  * name: RXDR
  * description: Receive data register
  * address: 0x40005824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C2_RXDR_t {
    uint32_t RXDATA : 8;  ///< 8-bit receive data, reset value: 0x0
  } RXDR;

  /** 
  * name: TXDR
  * description: Transmit data register
  * address: 0x40005828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C2_TXDR_t {
    uint32_t TXDATA : 8;  ///< 8-bit transmit data, reset value: 0x0
  } TXDR;

} I2C2_t;


/** 
*  name: USB_FS
*  description: Universal serial bus full-speed device interface
*  group: USB_FS
*  address: 0x40005C00
*/
typedef struct{
  /** 
  * name: USB_EP0R
  * description: endpoint 0 register
  * address: 0x40005C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP0R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP0R;

  /** 
  * name: USB_EP1R
  * description: endpoint 1 register
  * address: 0x40005C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP1R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP1R;

  /** 
  * name: USB_EP2R
  * description: endpoint 2 register
  * address: 0x40005C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP2R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP2R;

  /** 
  * name: USB_EP3R
  * description: endpoint 3 register
  * address: 0x40005C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP3R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP3R;

  /** 
  * name: USB_EP4R
  * description: endpoint 4 register
  * address: 0x40005C10
  * offset: 0x10
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP4R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP4R;

  /** 
  * name: USB_EP5R
  * description: endpoint 5 register
  * address: 0x40005C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP5R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP5R;

  /** 
  * name: USB_EP6R
  * description: endpoint 6 register
  * address: 0x40005C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP6R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP6R;

  /** 
  * name: USB_EP7R
  * description: endpoint 7 register
  * address: 0x40005C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_USB_EP7R_t {
    uint32_t EA : 4;  ///< Endpoint address, reset value: 0x0
    uint32_t STAT_TX : 2;  ///< Status bits, for transmission transfers, reset value: 0x0
    uint32_t DTOG_TX : 1;  ///< Data Toggle, for transmission transfers, reset value: 0x0
    uint32_t CTR_TX : 1;  ///< Correct Transfer for transmission, reset value: 0x0
    uint32_t EP_KIND : 1;  ///< Endpoint kind, reset value: 0x0
    uint32_t EP_TYPE : 2;  ///< Endpoint type, reset value: 0x0
    uint32_t SETUP : 1;  ///< Setup transaction completed, reset value: 0x0
    uint32_t STAT_RX : 2;  ///< Status bits, for reception transfers, reset value: 0x0
    uint32_t DTOG_RX : 1;  ///< Data Toggle, for reception transfers, reset value: 0x0
    uint32_t CTR_RX : 1;  ///< Correct transfer for reception, reset value: 0x0
  } USB_EP7R;

  const uint8_t _RESERVED_126[4];
  /** 
  * name: USB_CNTR
  * description: control register
  * address: 0x40005C40
  * offset: 0x40
  * reset value: 0x00000003
  * access: read-write
  */
  struct USB_FS_USB_CNTR_t {
    uint32_t FRES : 1;  ///< Force USB Reset, reset value: 0x1
    uint32_t PDWN : 1;  ///< Power down, reset value: 0x1
    uint32_t LPMODE : 1;  ///< Low-power mode, reset value: 0x0
    uint32_t FSUSP : 1;  ///< Force suspend, reset value: 0x0
    uint32_t RESUME : 1;  ///< Resume request, reset value: 0x0
    uint32_t _RESERVED_127 : 3;
    uint32_t ESOFM : 1;  ///< Expected start of frame interrupt mask, reset value: 0x0
    uint32_t SOFM : 1;  ///< Start of frame interrupt mask, reset value: 0x0
    uint32_t RESETM : 1;  ///< USB reset interrupt mask, reset value: 0x0
    uint32_t SUSPM : 1;  ///< Suspend mode interrupt mask, reset value: 0x0
    uint32_t WKUPM : 1;  ///< Wakeup interrupt mask, reset value: 0x0
    uint32_t ERRM : 1;  ///< Error interrupt mask, reset value: 0x0
    uint32_t PMAOVRM : 1;  ///< Packet memory area over / underrun interrupt mask, reset value: 0x0
    uint32_t CTRM : 1;  ///< Correct transfer interrupt mask, reset value: 0x0
  } USB_CNTR;

  /** 
  * name: ISTR
  * description: interrupt status register
  * address: 0x40005C44
  * offset: 0x44
  * reset value: 0x00000000
  * access: 
  */
  struct USB_FS_ISTR_t {
    uint32_t EP_ID : 4;  ///< Endpoint Identifier, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction of transaction, reset value: 0x0
    uint32_t _RESERVED_128 : 3;
    uint32_t ESOF : 1;  ///< Expected start frame, reset value: 0x0
    uint32_t SOF : 1;  ///< start of frame, reset value: 0x0
    uint32_t RESET : 1;  ///< reset request, reset value: 0x0
    uint32_t SUSP : 1;  ///< Suspend mode request, reset value: 0x0
    uint32_t WKUP : 1;  ///< Wakeup, reset value: 0x0
    uint32_t ERR : 1;  ///< Error, reset value: 0x0
    uint32_t PMAOVR : 1;  ///< Packet memory area over / underrun, reset value: 0x0
    uint32_t CTR : 1;  ///< Correct transfer, reset value: 0x0
  } ISTR;

  /** 
  * name: FNR
  * description: frame number register
  * address: 0x40005C48
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-only
  */
  struct USB_FS_FNR_t {
    uint32_t FN : 11;  ///< Frame number, reset value: 0x0
    uint32_t LSOF : 2;  ///< Lost SOF, reset value: 0x0
    uint32_t LCK : 1;  ///< Locked, reset value: 0x0
    uint32_t RXDM : 1;  ///< Receive data - line status, reset value: 0x0
    uint32_t RXDP : 1;  ///< Receive data + line status, reset value: 0x0
  } FNR;

  /** 
  * name: DADDR
  * description: device address
  * address: 0x40005C4C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct USB_FS_DADDR_t {
    uint32_t ADD : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD1 : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD2 : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD3 : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD4 : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD5 : 1;  ///< Device address, reset value: 0x0
    uint32_t ADD6 : 1;  ///< Device address, reset value: 0x0
    uint32_t EF : 1;  ///< Enable function, reset value: 0x0
  } DADDR;

  /** 
  * name: BTABLE
  * description: Buffer table address
  * address: 0x40005C50
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-write
  */
  struct USB_FS_BTABLE_t {
    uint32_t _RESERVED_129 : 3;
    uint32_t BTABLE : 13;  ///< Buffer table, reset value: 0x0
  } BTABLE;

} USB_FS_t;


/** 
*  name: CAN
*  description: Controller area network
*  group: CAN
*  address: 0x40006400
*/
typedef struct{
  /** 
  * name: MCR
  * description: master control register
  * address: 0x40006400
  * offset: 0x0
  * reset value: 0x00010002
  * access: read-write
  */
  struct CAN_MCR_t {
    uint32_t INRQ : 1;  ///< INRQ, reset value: 0x0
    uint32_t SLEEP : 1;  ///< SLEEP, reset value: 0x1
    uint32_t TXFP : 1;  ///< TXFP, reset value: 0x0
    uint32_t RFLM : 1;  ///< RFLM, reset value: 0x0
    uint32_t NART : 1;  ///< NART, reset value: 0x0
    uint32_t AWUM : 1;  ///< AWUM, reset value: 0x0
    uint32_t ABOM : 1;  ///< ABOM, reset value: 0x0
    uint32_t TTCM : 1;  ///< TTCM, reset value: 0x0
    uint32_t _RESERVED_130 : 7;
    uint32_t RESET : 1;  ///< RESET, reset value: 0x0
    uint32_t DBF : 1;  ///< DBF, reset value: 0x1
  } MCR;

  /** 
  * name: MSR
  * description: master status register
  * address: 0x40006404
  * offset: 0x4
  * reset value: 0x00000C02
  * access: 
  */
  struct CAN_MSR_t {
    uint32_t INAK : 1;  ///< INAK, reset value: 0x0
    uint32_t SLAK : 1;  ///< SLAK, reset value: 0x1
    uint32_t ERRI : 1;  ///< ERRI, reset value: 0x0
    uint32_t WKUI : 1;  ///< WKUI, reset value: 0x0
    uint32_t SLAKI : 1;  ///< SLAKI, reset value: 0x0
    uint32_t _RESERVED_131 : 3;
    uint32_t TXM : 1;  ///< TXM, reset value: 0x0
    uint32_t RXM : 1;  ///< RXM, reset value: 0x0
    uint32_t SAMP : 1;  ///< SAMP, reset value: 0x1
    uint32_t RX : 1;  ///< RX, reset value: 0x1
  } MSR;

  /** 
  * name: TSR
  * description: transmit status register
  * address: 0x40006408
  * offset: 0x8
  * reset value: 0x1C000000
  * access: 
  */
  struct CAN_TSR_t {
    uint32_t RQCP0 : 1;  ///< RQCP0, reset value: 0x0
    uint32_t TXOK0 : 1;  ///< TXOK0, reset value: 0x0
    uint32_t ALST0 : 1;  ///< ALST0, reset value: 0x0
    uint32_t TERR0 : 1;  ///< TERR0, reset value: 0x0
    uint32_t _RESERVED_132 : 3;
    uint32_t ABRQ0 : 1;  ///< ABRQ0, reset value: 0x0
    uint32_t RQCP1 : 1;  ///< RQCP1, reset value: 0x0
    uint32_t TXOK1 : 1;  ///< TXOK1, reset value: 0x0
    uint32_t ALST1 : 1;  ///< ALST1, reset value: 0x0
    uint32_t TERR1 : 1;  ///< TERR1, reset value: 0x0
    uint32_t _RESERVED_133 : 3;
    uint32_t ABRQ1 : 1;  ///< ABRQ1, reset value: 0x0
    uint32_t RQCP2 : 1;  ///< RQCP2, reset value: 0x0
    uint32_t TXOK2 : 1;  ///< TXOK2, reset value: 0x0
    uint32_t ALST2 : 1;  ///< ALST2, reset value: 0x0
    uint32_t TERR2 : 1;  ///< TERR2, reset value: 0x0
    uint32_t _RESERVED_134 : 3;
    uint32_t ABRQ2 : 1;  ///< ABRQ2, reset value: 0x0
    uint32_t CODE : 2;  ///< CODE, reset value: 0x0
    uint32_t TME0 : 1;  ///< Lowest priority flag for mailbox 0, reset value: 0x1
    uint32_t TME1 : 1;  ///< Lowest priority flag for mailbox 1, reset value: 0x1
    uint32_t TME2 : 1;  ///< Lowest priority flag for mailbox 2, reset value: 0x1
    uint32_t LOW0 : 1;  ///< Lowest priority flag for mailbox 0, reset value: 0x0
    uint32_t LOW1 : 1;  ///< Lowest priority flag for mailbox 1, reset value: 0x0
    uint32_t LOW2 : 1;  ///< Lowest priority flag for mailbox 2, reset value: 0x0
  } TSR;

  /** 
  * name: RF0R
  * description: receive FIFO 0 register
  * address: 0x4000640C
  * offset: 0xC
  * reset value: 0x00000000
  * access: 
  */
  struct CAN_RF0R_t {
    uint32_t FMP0 : 2;  ///< FMP0, reset value: 0x0
    uint32_t _RESERVED_135 : 1;
    uint32_t FULL0 : 1;  ///< FULL0, reset value: 0x0
    uint32_t FOVR0 : 1;  ///< FOVR0, reset value: 0x0
    uint32_t RFOM0 : 1;  ///< RFOM0, reset value: 0x0
  } RF0R;

  /** 
  * name: RF1R
  * description: receive FIFO 1 register
  * address: 0x40006410
  * offset: 0x10
  * reset value: 0x00000000
  * access: 
  */
  struct CAN_RF1R_t {
    uint32_t FMP1 : 2;  ///< FMP1, reset value: 0x0
    uint32_t _RESERVED_136 : 1;
    uint32_t FULL1 : 1;  ///< FULL1, reset value: 0x0
    uint32_t FOVR1 : 1;  ///< FOVR1, reset value: 0x0
    uint32_t RFOM1 : 1;  ///< RFOM1, reset value: 0x0
  } RF1R;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x40006414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_IER_t {
    uint32_t TMEIE : 1;  ///< TMEIE, reset value: 0x0
    uint32_t FMPIE0 : 1;  ///< FMPIE0, reset value: 0x0
    uint32_t FFIE0 : 1;  ///< FFIE0, reset value: 0x0
    uint32_t FOVIE0 : 1;  ///< FOVIE0, reset value: 0x0
    uint32_t FMPIE1 : 1;  ///< FMPIE1, reset value: 0x0
    uint32_t FFIE1 : 1;  ///< FFIE1, reset value: 0x0
    uint32_t FOVIE1 : 1;  ///< FOVIE1, reset value: 0x0
    uint32_t _RESERVED_137 : 1;
    uint32_t EWGIE : 1;  ///< EWGIE, reset value: 0x0
    uint32_t EPVIE : 1;  ///< EPVIE, reset value: 0x0
    uint32_t BOFIE : 1;  ///< BOFIE, reset value: 0x0
    uint32_t LECIE : 1;  ///< LECIE, reset value: 0x0
    uint32_t _RESERVED_138 : 3;
    uint32_t ERRIE : 1;  ///< ERRIE, reset value: 0x0
    uint32_t WKUIE : 1;  ///< WKUIE, reset value: 0x0
    uint32_t SLKIE : 1;  ///< SLKIE, reset value: 0x0
  } IER;

  /** 
  * name: ESR
  * description: error status register
  * address: 0x40006418
  * offset: 0x18
  * reset value: 0x00000000
  * access: 
  */
  struct CAN_ESR_t {
    uint32_t EWGF : 1;  ///< EWGF, reset value: 0x0
    uint32_t EPVF : 1;  ///< EPVF, reset value: 0x0
    uint32_t BOFF : 1;  ///< BOFF, reset value: 0x0
    uint32_t _RESERVED_139 : 1;
    uint32_t LEC : 3;  ///< LEC, reset value: 0x0
    uint32_t _RESERVED_140 : 9;
    uint32_t TEC : 8;  ///< TEC, reset value: 0x0
    uint32_t REC : 8;  ///< REC, reset value: 0x0
  } ESR;

  /** 
  * name: BTR
  * description: bit timing register
  * address: 0x4000641C
  * offset: 0x1C
  * reset value: 0x01230000
  * access: read-write
  */
  struct CAN_BTR_t {
    uint32_t BRP : 10;  ///< BRP, reset value: 0x0
    uint32_t _RESERVED_141 : 6;
    uint32_t TS1 : 4;  ///< TS1, reset value: 0x3
    uint32_t TS2 : 3;  ///< TS2, reset value: 0x2
    uint32_t _RESERVED_142 : 1;
    uint32_t SJW : 2;  ///< SJW, reset value: 0x1
    uint32_t _RESERVED_143 : 4;
    uint32_t LBKM : 1;  ///< LBKM, reset value: 0x0
    uint32_t SILM : 1;  ///< SILM, reset value: 0x0
  } BTR;

  const uint8_t _RESERVED_144[324];
  /** 
  * name: TI0R
  * description: TX mailbox identifier register
  * address: 0x40006580
  * offset: 0x180
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TI0R_t {
    uint32_t TXRQ : 1;  ///< TXRQ, reset value: 0x0
    uint32_t RTR : 1;  ///< RTR, reset value: 0x0
    uint32_t IDE : 1;  ///< IDE, reset value: 0x0
    uint32_t EXID : 18;  ///< EXID, reset value: 0x0
    uint32_t STID : 11;  ///< STID, reset value: 0x0
  } TI0R;

  /** 
  * name: TDT0R
  * description: mailbox data length control and time stamp register
  * address: 0x40006584
  * offset: 0x184
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDT0R_t {
    uint32_t DLC : 4;  ///< DLC, reset value: 0x0
    uint32_t _RESERVED_145 : 4;
    uint32_t TGT : 1;  ///< TGT, reset value: 0x0
    uint32_t _RESERVED_146 : 7;
    uint32_t TIME : 16;  ///< TIME, reset value: 0x0
  } TDT0R;

  /** 
  * name: TDL0R
  * description: mailbox data low register
  * address: 0x40006588
  * offset: 0x188
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDL0R_t {
    uint32_t DATA0 : 8;  ///< DATA0, reset value: 0x0
    uint32_t DATA1 : 8;  ///< DATA1, reset value: 0x0
    uint32_t DATA2 : 8;  ///< DATA2, reset value: 0x0
    uint32_t DATA3 : 8;  ///< DATA3, reset value: 0x0
  } TDL0R;

  /** 
  * name: TDH0R
  * description: mailbox data high register
  * address: 0x4000658C
  * offset: 0x18C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDH0R_t {
    uint32_t DATA4 : 8;  ///< DATA4, reset value: 0x0
    uint32_t DATA5 : 8;  ///< DATA5, reset value: 0x0
    uint32_t DATA6 : 8;  ///< DATA6, reset value: 0x0
    uint32_t DATA7 : 8;  ///< DATA7, reset value: 0x0
  } TDH0R;

  /** 
  * name: TI1R
  * description: TX mailbox identifier register
  * address: 0x40006590
  * offset: 0x190
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TI1R_t {
    uint32_t TXRQ : 1;  ///< TXRQ, reset value: 0x0
    uint32_t RTR : 1;  ///< RTR, reset value: 0x0
    uint32_t IDE : 1;  ///< IDE, reset value: 0x0
    uint32_t EXID : 18;  ///< EXID, reset value: 0x0
    uint32_t STID : 11;  ///< STID, reset value: 0x0
  } TI1R;

  /** 
  * name: TDT1R
  * description: mailbox data length control and time stamp register
  * address: 0x40006594
  * offset: 0x194
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDT1R_t {
    uint32_t DLC : 4;  ///< DLC, reset value: 0x0
    uint32_t _RESERVED_147 : 4;
    uint32_t TGT : 1;  ///< TGT, reset value: 0x0
    uint32_t _RESERVED_148 : 7;
    uint32_t TIME : 16;  ///< TIME, reset value: 0x0
  } TDT1R;

  /** 
  * name: TDL1R
  * description: mailbox data low register
  * address: 0x40006598
  * offset: 0x198
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDL1R_t {
    uint32_t DATA0 : 8;  ///< DATA0, reset value: 0x0
    uint32_t DATA1 : 8;  ///< DATA1, reset value: 0x0
    uint32_t DATA2 : 8;  ///< DATA2, reset value: 0x0
    uint32_t DATA3 : 8;  ///< DATA3, reset value: 0x0
  } TDL1R;

  /** 
  * name: TDH1R
  * description: mailbox data high register
  * address: 0x4000659C
  * offset: 0x19C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDH1R_t {
    uint32_t DATA4 : 8;  ///< DATA4, reset value: 0x0
    uint32_t DATA5 : 8;  ///< DATA5, reset value: 0x0
    uint32_t DATA6 : 8;  ///< DATA6, reset value: 0x0
    uint32_t DATA7 : 8;  ///< DATA7, reset value: 0x0
  } TDH1R;

  /** 
  * name: TI2R
  * description: TX mailbox identifier register
  * address: 0x400065A0
  * offset: 0x1A0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TI2R_t {
    uint32_t TXRQ : 1;  ///< TXRQ, reset value: 0x0
    uint32_t RTR : 1;  ///< RTR, reset value: 0x0
    uint32_t IDE : 1;  ///< IDE, reset value: 0x0
    uint32_t EXID : 18;  ///< EXID, reset value: 0x0
    uint32_t STID : 11;  ///< STID, reset value: 0x0
  } TI2R;

  /** 
  * name: TDT2R
  * description: mailbox data length control and time stamp register
  * address: 0x400065A4
  * offset: 0x1A4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDT2R_t {
    uint32_t DLC : 4;  ///< DLC, reset value: 0x0
    uint32_t _RESERVED_149 : 4;
    uint32_t TGT : 1;  ///< TGT, reset value: 0x0
    uint32_t _RESERVED_150 : 7;
    uint32_t TIME : 16;  ///< TIME, reset value: 0x0
  } TDT2R;

  /** 
  * name: TDL2R
  * description: mailbox data low register
  * address: 0x400065A8
  * offset: 0x1A8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDL2R_t {
    uint32_t DATA0 : 8;  ///< DATA0, reset value: 0x0
    uint32_t DATA1 : 8;  ///< DATA1, reset value: 0x0
    uint32_t DATA2 : 8;  ///< DATA2, reset value: 0x0
    uint32_t DATA3 : 8;  ///< DATA3, reset value: 0x0
  } TDL2R;

  /** 
  * name: TDH2R
  * description: mailbox data high register
  * address: 0x400065AC
  * offset: 0x1AC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_TDH2R_t {
    uint32_t DATA4 : 8;  ///< DATA4, reset value: 0x0
    uint32_t DATA5 : 8;  ///< DATA5, reset value: 0x0
    uint32_t DATA6 : 8;  ///< DATA6, reset value: 0x0
    uint32_t DATA7 : 8;  ///< DATA7, reset value: 0x0
  } TDH2R;

  /** 
  * name: RI0R
  * description: receive FIFO mailbox identifier register
  * address: 0x400065B0
  * offset: 0x1B0
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RI0R_t {
    uint32_t _RESERVED_151 : 1;
    uint32_t RTR : 1;  ///< RTR, reset value: 0x0
    uint32_t IDE : 1;  ///< IDE, reset value: 0x0
    uint32_t EXID : 18;  ///< EXID, reset value: 0x0
    uint32_t STID : 11;  ///< STID, reset value: 0x0
  } RI0R;

  /** 
  * name: RDT0R
  * description: receive FIFO mailbox data length control and time stamp register
  * address: 0x400065B4
  * offset: 0x1B4
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDT0R_t {
    uint32_t DLC : 4;  ///< DLC, reset value: 0x0
    uint32_t _RESERVED_152 : 4;
    uint32_t FMI : 8;  ///< FMI, reset value: 0x0
    uint32_t TIME : 16;  ///< TIME, reset value: 0x0
  } RDT0R;

  /** 
  * name: RDL0R
  * description: receive FIFO mailbox data low register
  * address: 0x400065B8
  * offset: 0x1B8
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDL0R_t {
    uint32_t DATA0 : 8;  ///< DATA0, reset value: 0x0
    uint32_t DATA1 : 8;  ///< DATA1, reset value: 0x0
    uint32_t DATA2 : 8;  ///< DATA2, reset value: 0x0
    uint32_t DATA3 : 8;  ///< DATA3, reset value: 0x0
  } RDL0R;

  /** 
  * name: RDH0R
  * description: receive FIFO mailbox data high register
  * address: 0x400065BC
  * offset: 0x1BC
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDH0R_t {
    uint32_t DATA4 : 8;  ///< DATA4, reset value: 0x0
    uint32_t DATA5 : 8;  ///< DATA5, reset value: 0x0
    uint32_t DATA6 : 8;  ///< DATA6, reset value: 0x0
    uint32_t DATA7 : 8;  ///< DATA7, reset value: 0x0
  } RDH0R;

  /** 
  * name: RI1R
  * description: receive FIFO mailbox identifier register
  * address: 0x400065C0
  * offset: 0x1C0
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RI1R_t {
    uint32_t _RESERVED_153 : 1;
    uint32_t RTR : 1;  ///< RTR, reset value: 0x0
    uint32_t IDE : 1;  ///< IDE, reset value: 0x0
    uint32_t EXID : 18;  ///< EXID, reset value: 0x0
    uint32_t STID : 11;  ///< STID, reset value: 0x0
  } RI1R;

  /** 
  * name: RDT1R
  * description: receive FIFO mailbox data length control and time stamp register
  * address: 0x400065C4
  * offset: 0x1C4
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDT1R_t {
    uint32_t DLC : 4;  ///< DLC, reset value: 0x0
    uint32_t _RESERVED_154 : 4;
    uint32_t FMI : 8;  ///< FMI, reset value: 0x0
    uint32_t TIME : 16;  ///< TIME, reset value: 0x0
  } RDT1R;

  /** 
  * name: RDL1R
  * description: receive FIFO mailbox data low register
  * address: 0x400065C8
  * offset: 0x1C8
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDL1R_t {
    uint32_t DATA0 : 8;  ///< DATA0, reset value: 0x0
    uint32_t DATA1 : 8;  ///< DATA1, reset value: 0x0
    uint32_t DATA2 : 8;  ///< DATA2, reset value: 0x0
    uint32_t DATA3 : 8;  ///< DATA3, reset value: 0x0
  } RDL1R;

  /** 
  * name: RDH1R
  * description: receive FIFO mailbox data high register
  * address: 0x400065CC
  * offset: 0x1CC
  * reset value: 0x00000000
  * access: read-only
  */
  struct CAN_RDH1R_t {
    uint32_t DATA4 : 8;  ///< DATA4, reset value: 0x0
    uint32_t DATA5 : 8;  ///< DATA5, reset value: 0x0
    uint32_t DATA6 : 8;  ///< DATA6, reset value: 0x0
    uint32_t DATA7 : 8;  ///< DATA7, reset value: 0x0
  } RDH1R;

  const uint8_t _RESERVED_155[20];
  /** 
  * name: FMR
  * description: filter master register
  * address: 0x40006600
  * offset: 0x200
  * reset value: 0x2A1C0E01
  * access: read-write
  */
  struct CAN_FMR_t {
    uint32_t FINIT : 1;  ///< Filter init mode, reset value: 0x1
    uint32_t _RESERVED_156 : 7;
    uint32_t CAN2SB : 6;  ///< CAN2 start bank, reset value: 0xE
  } FMR;

  /** 
  * name: FM1R
  * description: filter mode register
  * address: 0x40006604
  * offset: 0x204
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_FM1R_t {
    uint32_t FBM0 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM1 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM2 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM3 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM4 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM5 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM6 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM7 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM8 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM9 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM10 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM11 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM12 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM13 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM14 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM15 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM16 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM17 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM18 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM19 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM20 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM21 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM22 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM23 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM24 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM25 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM26 : 1;  ///< Filter mode, reset value: 0x0
    uint32_t FBM27 : 1;  ///< Filter mode, reset value: 0x0
  } FM1R;

  /** 
  * name: FS1R
  * description: filter scale register
  * address: 0x4000660C
  * offset: 0x20C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_FS1R_t {
    uint32_t FSC0 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC1 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC2 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC3 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC4 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC5 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC6 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC7 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC8 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC9 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC10 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC11 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC12 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC13 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC14 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC15 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC16 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC17 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC18 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC19 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC20 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC21 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC22 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC23 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC24 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC25 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC26 : 1;  ///< Filter scale configuration, reset value: 0x0
    uint32_t FSC27 : 1;  ///< Filter scale configuration, reset value: 0x0
  } FS1R;

  /** 
  * name: FFA1R
  * description: filter FIFO assignment register
  * address: 0x40006614
  * offset: 0x214
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_FFA1R_t {
    uint32_t FFA0 : 1;  ///< Filter FIFO assignment for filter 0, reset value: 0x0
    uint32_t FFA1 : 1;  ///< Filter FIFO assignment for filter 1, reset value: 0x0
    uint32_t FFA2 : 1;  ///< Filter FIFO assignment for filter 2, reset value: 0x0
    uint32_t FFA3 : 1;  ///< Filter FIFO assignment for filter 3, reset value: 0x0
    uint32_t FFA4 : 1;  ///< Filter FIFO assignment for filter 4, reset value: 0x0
    uint32_t FFA5 : 1;  ///< Filter FIFO assignment for filter 5, reset value: 0x0
    uint32_t FFA6 : 1;  ///< Filter FIFO assignment for filter 6, reset value: 0x0
    uint32_t FFA7 : 1;  ///< Filter FIFO assignment for filter 7, reset value: 0x0
    uint32_t FFA8 : 1;  ///< Filter FIFO assignment for filter 8, reset value: 0x0
    uint32_t FFA9 : 1;  ///< Filter FIFO assignment for filter 9, reset value: 0x0
    uint32_t FFA10 : 1;  ///< Filter FIFO assignment for filter 10, reset value: 0x0
    uint32_t FFA11 : 1;  ///< Filter FIFO assignment for filter 11, reset value: 0x0
    uint32_t FFA12 : 1;  ///< Filter FIFO assignment for filter 12, reset value: 0x0
    uint32_t FFA13 : 1;  ///< Filter FIFO assignment for filter 13, reset value: 0x0
    uint32_t FFA14 : 1;  ///< Filter FIFO assignment for filter 14, reset value: 0x0
    uint32_t FFA15 : 1;  ///< Filter FIFO assignment for filter 15, reset value: 0x0
    uint32_t FFA16 : 1;  ///< Filter FIFO assignment for filter 16, reset value: 0x0
    uint32_t FFA17 : 1;  ///< Filter FIFO assignment for filter 17, reset value: 0x0
    uint32_t FFA18 : 1;  ///< Filter FIFO assignment for filter 18, reset value: 0x0
    uint32_t FFA19 : 1;  ///< Filter FIFO assignment for filter 19, reset value: 0x0
    uint32_t FFA20 : 1;  ///< Filter FIFO assignment for filter 20, reset value: 0x0
    uint32_t FFA21 : 1;  ///< Filter FIFO assignment for filter 21, reset value: 0x0
    uint32_t FFA22 : 1;  ///< Filter FIFO assignment for filter 22, reset value: 0x0
    uint32_t FFA23 : 1;  ///< Filter FIFO assignment for filter 23, reset value: 0x0
    uint32_t FFA24 : 1;  ///< Filter FIFO assignment for filter 24, reset value: 0x0
    uint32_t FFA25 : 1;  ///< Filter FIFO assignment for filter 25, reset value: 0x0
    uint32_t FFA26 : 1;  ///< Filter FIFO assignment for filter 26, reset value: 0x0
    uint32_t FFA27 : 1;  ///< Filter FIFO assignment for filter 27, reset value: 0x0
  } FFA1R;

  /** 
  * name: FA1R
  * description: CAN filter activation register
  * address: 0x4000661C
  * offset: 0x21C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_FA1R_t {
    uint32_t FACT0 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT1 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT2 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT3 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT4 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT5 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT6 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT7 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT8 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT9 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT10 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT11 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT12 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT13 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT14 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT15 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT16 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT17 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT18 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT19 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT20 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT21 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT22 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT23 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT24 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT25 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT26 : 1;  ///< Filter active, reset value: 0x0
    uint32_t FACT27 : 1;  ///< Filter active, reset value: 0x0
  } FA1R;

  const uint8_t _RESERVED_157[4];
  /** 
  * name: F0R1
  * description: Filter bank 0 register 1
  * address: 0x40006640
  * offset: 0x240
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F0R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F0R1;

  /** 
  * name: F0R2
  * description: Filter bank 0 register 2
  * address: 0x40006644
  * offset: 0x244
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F0R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F0R2;

  /** 
  * name: F1R1
  * description: Filter bank 1 register 1
  * address: 0x40006648
  * offset: 0x248
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F1R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F1R1;

  /** 
  * name: F1R2
  * description: Filter bank 1 register 2
  * address: 0x4000664C
  * offset: 0x24C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F1R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F1R2;

  /** 
  * name: F2R1
  * description: Filter bank 2 register 1
  * address: 0x40006650
  * offset: 0x250
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F2R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F2R1;

  /** 
  * name: F2R2
  * description: Filter bank 2 register 2
  * address: 0x40006654
  * offset: 0x254
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F2R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F2R2;

  /** 
  * name: F3R1
  * description: Filter bank 3 register 1
  * address: 0x40006658
  * offset: 0x258
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F3R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F3R1;

  /** 
  * name: F3R2
  * description: Filter bank 3 register 2
  * address: 0x4000665C
  * offset: 0x25C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F3R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F3R2;

  /** 
  * name: F4R1
  * description: Filter bank 4 register 1
  * address: 0x40006660
  * offset: 0x260
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F4R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F4R1;

  /** 
  * name: F4R2
  * description: Filter bank 4 register 2
  * address: 0x40006664
  * offset: 0x264
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F4R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F4R2;

  /** 
  * name: F5R1
  * description: Filter bank 5 register 1
  * address: 0x40006668
  * offset: 0x268
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F5R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F5R1;

  /** 
  * name: F5R2
  * description: Filter bank 5 register 2
  * address: 0x4000666C
  * offset: 0x26C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F5R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F5R2;

  /** 
  * name: F6R1
  * description: Filter bank 6 register 1
  * address: 0x40006670
  * offset: 0x270
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F6R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F6R1;

  /** 
  * name: F6R2
  * description: Filter bank 6 register 2
  * address: 0x40006674
  * offset: 0x274
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F6R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F6R2;

  /** 
  * name: F7R1
  * description: Filter bank 7 register 1
  * address: 0x40006678
  * offset: 0x278
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F7R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F7R1;

  /** 
  * name: F7R2
  * description: Filter bank 7 register 2
  * address: 0x4000667C
  * offset: 0x27C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F7R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F7R2;

  /** 
  * name: F8R1
  * description: Filter bank 8 register 1
  * address: 0x40006680
  * offset: 0x280
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F8R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F8R1;

  /** 
  * name: F8R2
  * description: Filter bank 8 register 2
  * address: 0x40006684
  * offset: 0x284
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F8R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F8R2;

  /** 
  * name: F9R1
  * description: Filter bank 9 register 1
  * address: 0x40006688
  * offset: 0x288
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F9R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F9R1;

  /** 
  * name: F9R2
  * description: Filter bank 9 register 2
  * address: 0x4000668C
  * offset: 0x28C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F9R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F9R2;

  /** 
  * name: F10R1
  * description: Filter bank 10 register 1
  * address: 0x40006690
  * offset: 0x290
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F10R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F10R1;

  /** 
  * name: F10R2
  * description: Filter bank 10 register 2
  * address: 0x40006694
  * offset: 0x294
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F10R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F10R2;

  /** 
  * name: F11R1
  * description: Filter bank 11 register 1
  * address: 0x40006698
  * offset: 0x298
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F11R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F11R1;

  /** 
  * name: F11R2
  * description: Filter bank 11 register 2
  * address: 0x4000669C
  * offset: 0x29C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F11R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F11R2;

  /** 
  * name: F12R1
  * description: Filter bank 4 register 1
  * address: 0x400066A0
  * offset: 0x2A0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F12R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F12R1;

  /** 
  * name: F12R2
  * description: Filter bank 12 register 2
  * address: 0x400066A4
  * offset: 0x2A4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F12R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F12R2;

  /** 
  * name: F13R1
  * description: Filter bank 13 register 1
  * address: 0x400066A8
  * offset: 0x2A8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F13R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F13R1;

  /** 
  * name: F13R2
  * description: Filter bank 13 register 2
  * address: 0x400066AC
  * offset: 0x2AC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F13R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F13R2;

  /** 
  * name: F14R1
  * description: Filter bank 14 register 1
  * address: 0x400066B0
  * offset: 0x2B0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F14R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F14R1;

  /** 
  * name: F14R2
  * description: Filter bank 14 register 2
  * address: 0x400066B4
  * offset: 0x2B4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F14R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F14R2;

  /** 
  * name: F15R1
  * description: Filter bank 15 register 1
  * address: 0x400066B8
  * offset: 0x2B8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F15R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F15R1;

  /** 
  * name: F15R2
  * description: Filter bank 15 register 2
  * address: 0x400066BC
  * offset: 0x2BC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F15R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F15R2;

  /** 
  * name: F16R1
  * description: Filter bank 16 register 1
  * address: 0x400066C0
  * offset: 0x2C0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F16R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F16R1;

  /** 
  * name: F16R2
  * description: Filter bank 16 register 2
  * address: 0x400066C4
  * offset: 0x2C4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F16R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F16R2;

  /** 
  * name: F17R1
  * description: Filter bank 17 register 1
  * address: 0x400066C8
  * offset: 0x2C8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F17R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F17R1;

  /** 
  * name: F17R2
  * description: Filter bank 17 register 2
  * address: 0x400066CC
  * offset: 0x2CC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F17R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F17R2;

  /** 
  * name: F18R1
  * description: Filter bank 18 register 1
  * address: 0x400066D0
  * offset: 0x2D0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F18R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F18R1;

  /** 
  * name: F18R2
  * description: Filter bank 18 register 2
  * address: 0x400066D4
  * offset: 0x2D4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F18R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F18R2;

  /** 
  * name: F19R1
  * description: Filter bank 19 register 1
  * address: 0x400066D8
  * offset: 0x2D8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F19R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F19R1;

  /** 
  * name: F19R2
  * description: Filter bank 19 register 2
  * address: 0x400066DC
  * offset: 0x2DC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F19R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F19R2;

  /** 
  * name: F20R1
  * description: Filter bank 20 register 1
  * address: 0x400066E0
  * offset: 0x2E0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F20R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F20R1;

  /** 
  * name: F20R2
  * description: Filter bank 20 register 2
  * address: 0x400066E4
  * offset: 0x2E4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F20R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F20R2;

  /** 
  * name: F21R1
  * description: Filter bank 21 register 1
  * address: 0x400066E8
  * offset: 0x2E8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F21R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F21R1;

  /** 
  * name: F21R2
  * description: Filter bank 21 register 2
  * address: 0x400066EC
  * offset: 0x2EC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F21R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F21R2;

  /** 
  * name: F22R1
  * description: Filter bank 22 register 1
  * address: 0x400066F0
  * offset: 0x2F0
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F22R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F22R1;

  /** 
  * name: F22R2
  * description: Filter bank 22 register 2
  * address: 0x400066F4
  * offset: 0x2F4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F22R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F22R2;

  /** 
  * name: F23R1
  * description: Filter bank 23 register 1
  * address: 0x400066F8
  * offset: 0x2F8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F23R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F23R1;

  /** 
  * name: F23R2
  * description: Filter bank 23 register 2
  * address: 0x400066FC
  * offset: 0x2FC
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F23R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F23R2;

  /** 
  * name: F24R1
  * description: Filter bank 24 register 1
  * address: 0x40006700
  * offset: 0x300
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F24R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F24R1;

  /** 
  * name: F24R2
  * description: Filter bank 24 register 2
  * address: 0x40006704
  * offset: 0x304
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F24R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F24R2;

  /** 
  * name: F25R1
  * description: Filter bank 25 register 1
  * address: 0x40006708
  * offset: 0x308
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F25R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F25R1;

  /** 
  * name: F25R2
  * description: Filter bank 25 register 2
  * address: 0x4000670C
  * offset: 0x30C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F25R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F25R2;

  /** 
  * name: F26R1
  * description: Filter bank 26 register 1
  * address: 0x40006710
  * offset: 0x310
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F26R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F26R1;

  /** 
  * name: F26R2
  * description: Filter bank 26 register 2
  * address: 0x40006714
  * offset: 0x314
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F26R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F26R2;

  /** 
  * name: F27R1
  * description: Filter bank 27 register 1
  * address: 0x40006718
  * offset: 0x318
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F27R1_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F27R1;

  /** 
  * name: F27R2
  * description: Filter bank 27 register 2
  * address: 0x4000671C
  * offset: 0x31C
  * reset value: 0x00000000
  * access: read-write
  */
  struct CAN_F27R2_t {
    uint32_t FB0 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB1 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB2 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB3 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB4 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB5 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB6 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB7 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB8 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB9 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB10 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB11 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB12 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB13 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB14 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB15 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB16 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB17 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB18 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB19 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB20 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB21 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB22 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB23 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB24 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB25 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB26 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB27 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB28 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB29 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB30 : 1;  ///< Filter bits, reset value: 0x0
    uint32_t FB31 : 1;  ///< Filter bits, reset value: 0x0
  } F27R2;

} CAN_t;


/** 
*  name: PWR
*  description: Power control
*  group: PWR
*  address: 0x40007000
*/
typedef struct{
  /** 
  * name: CR
  * description: power control register
  * address: 0x40007000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct PWR_CR_t {
    uint32_t LPDS : 1;  ///< Low-power deep sleep, reset value: 0x0
    uint32_t PDDS : 1;  ///< Power down deepsleep, reset value: 0x0
    uint32_t CWUF : 1;  ///< Clear wakeup flag, reset value: 0x0
    uint32_t CSBF : 1;  ///< Clear standby flag, reset value: 0x0
    uint32_t PVDE : 1;  ///< Power voltage detector enable, reset value: 0x0
    uint32_t PLS : 3;  ///< PVD level selection, reset value: 0x0
    uint32_t DBP : 1;  ///< Disable backup domain write protection, reset value: 0x0
  } CR;

  /** 
  * name: CSR
  * description: power control/status register
  * address: 0x40007004
  * offset: 0x4
  * reset value: 0x00000000
  * access: 
  */
  struct PWR_CSR_t {
    uint32_t WUF : 1;  ///< Wakeup flag, reset value: 0x0
    uint32_t SBF : 1;  ///< Standby flag, reset value: 0x0
    uint32_t PVDO : 1;  ///< PVD output, reset value: 0x0
    uint32_t _RESERVED_158 : 5;
    uint32_t EWUP1 : 1;  ///< Enable WKUP1 pin, reset value: 0x0
    uint32_t EWUP2 : 1;  ///< Enable WKUP2 pin, reset value: 0x0
  } CSR;

} PWR_t;


/** 
*  name: DAC
*  description: Digital-to-analog converter
*  group: DAC
*  address: 0x40007400
*/
typedef struct{
  /** 
  * name: CR
  * description: control register
  * address: 0x40007400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_CR_t {
    uint32_t EN1 : 1;  ///< DAC channel1 enable, reset value: 0x0
    uint32_t BOFF1 : 1;  ///< DAC channel1 output buffer disable, reset value: 0x0
    uint32_t TEN1 : 1;  ///< DAC channel1 trigger enable, reset value: 0x0
    uint32_t TSEL1 : 3;  ///< DAC channel1 trigger selection, reset value: 0x0
    uint32_t WAVE1 : 2;  ///< DAC channel1 noise/triangle wave generation enable, reset value: 0x0
    uint32_t MAMP1 : 4;  ///< DAC channel1 mask/amplitude selector, reset value: 0x0
    uint32_t DMAEN1 : 1;  ///< DAC channel1 DMA enable, reset value: 0x0
    uint32_t DMAUDRIE1 : 1;  ///< DAC channel1 DMA Underrun Interrupt enable, reset value: 0x0
    uint32_t _RESERVED_159 : 2;
    uint32_t EN2 : 1;  ///< DAC channel2 enable, reset value: 0x0
    uint32_t BOFF2 : 1;  ///< DAC channel2 output buffer disable, reset value: 0x0
    uint32_t TEN2 : 1;  ///< DAC channel2 trigger enable, reset value: 0x0
    uint32_t TSEL2 : 3;  ///< DAC channel2 trigger selection, reset value: 0x0
    uint32_t WAVE2 : 2;  ///< DAC channel2 noise/triangle wave generation enable, reset value: 0x0
    uint32_t MAMP2 : 4;  ///< DAC channel2 mask/amplitude selector, reset value: 0x0
    uint32_t DMAEN2 : 1;  ///< DAC channel2 DMA enable, reset value: 0x0
    uint32_t DMAUDRIE2 : 1;  ///< DAC channel2 DMA underrun interrupt enable, reset value: 0x0
  } CR;

  /** 
  * name: SWTRIGR
  * description: software trigger register
  * address: 0x40007404
  * offset: 0x4
  * reset value: 0x00000000
  * access: write-only
  */
  struct DAC_SWTRIGR_t {
    uint32_t SWTRIG1 : 1;  ///< DAC channel1 software trigger, reset value: 0x0
    uint32_t SWTRIG2 : 1;  ///< DAC channel2 software trigger, reset value: 0x0
  } SWTRIGR;

  /** 
  * name: DHR12R1
  * description: channel1 12-bit right-aligned data holding register
  * address: 0x40007408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12R1_t {
    uint32_t DACC1DHR : 12;  ///< DAC channel1 12-bit right-aligned data, reset value: 0x0
  } DHR12R1;

  /** 
  * name: DHR12L1
  * description: channel1 12-bit left aligned data holding register
  * address: 0x4000740C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12L1_t {
    uint32_t _RESERVED_160 : 4;
    uint32_t DACC1DHR : 12;  ///< DAC channel1 12-bit left-aligned data, reset value: 0x0
  } DHR12L1;

  /** 
  * name: DHR8R1
  * description: channel1 8-bit right aligned data holding register
  * address: 0x40007410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR8R1_t {
    uint32_t DACC1DHR : 8;  ///< DAC channel1 8-bit right-aligned data, reset value: 0x0
  } DHR8R1;

  /** 
  * name: DHR12R2
  * description: channel2 12-bit right aligned data holding register
  * address: 0x40007414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12R2_t {
    uint32_t DACC2DHR : 12;  ///< DAC channel2 12-bit right-aligned data, reset value: 0x0
  } DHR12R2;

  /** 
  * name: DHR12L2
  * description: channel2 12-bit left aligned data holding register
  * address: 0x40007418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12L2_t {
    uint32_t _RESERVED_161 : 4;
    uint32_t DACC2DHR : 12;  ///< DAC channel2 12-bit left-aligned data, reset value: 0x0
  } DHR12L2;

  /** 
  * name: DHR8R2
  * description: channel2 8-bit right-aligned data holding register
  * address: 0x4000741C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR8R2_t {
    uint32_t DACC2DHR : 8;  ///< DAC channel2 8-bit right-aligned data, reset value: 0x0
  } DHR8R2;

  /** 
  * name: DHR12RD
  * description: Dual DAC 12-bit right-aligned data holding register
  * address: 0x40007420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12RD_t {
    uint32_t DACC1DHR : 12;  ///< DAC channel1 12-bit right-aligned data, reset value: 0x0
    uint32_t _RESERVED_162 : 4;
    uint32_t DACC2DHR : 12;  ///< DAC channel2 12-bit right-aligned data, reset value: 0x0
  } DHR12RD;

  /** 
  * name: DHR12LD
  * description: DUAL DAC 12-bit left aligned data holding register
  * address: 0x40007424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR12LD_t {
    uint32_t _RESERVED_163 : 4;
    uint32_t DACC1DHR : 12;  ///< DAC channel1 12-bit left-aligned data, reset value: 0x0
    uint32_t _RESERVED_164 : 4;
    uint32_t DACC2DHR : 12;  ///< DAC channel2 12-bit left-aligned data, reset value: 0x0
  } DHR12LD;

  /** 
  * name: DHR8RD
  * description: DUAL DAC 8-bit right aligned data holding register
  * address: 0x40007428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_DHR8RD_t {
    uint32_t DACC1DHR : 8;  ///< DAC channel1 8-bit right-aligned data, reset value: 0x0
    uint32_t DACC2DHR : 8;  ///< DAC channel2 8-bit right-aligned data, reset value: 0x0
  } DHR8RD;

  /** 
  * name: DOR1
  * description: channel1 data output register
  * address: 0x4000742C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-only
  */
  struct DAC_DOR1_t {
    uint32_t DACC1DOR : 12;  ///< DAC channel1 data output, reset value: 0x0
  } DOR1;

  /** 
  * name: DOR2
  * description: channel2 data output register
  * address: 0x40007430
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-only
  */
  struct DAC_DOR2_t {
    uint32_t DACC2DOR : 12;  ///< DAC channel2 data output, reset value: 0x0
  } DOR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40007434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct DAC_SR_t {
    uint32_t _RESERVED_165 : 13;
    uint32_t DMAUDR1 : 1;  ///< DAC channel1 DMA underrun flag, reset value: 0x0
    uint32_t _RESERVED_166 : 15;
    uint32_t DMAUDR2 : 1;  ///< DAC channel2 DMA underrun flag, reset value: 0x0
  } SR;

} DAC_t;


/** 
*  name: I2C3
*  description: Inter-integrated circuit
*  group: I2C
*  address: 0x40007800
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40007800
  * offset: 0x0
  * reset value: 0x00000000
  * access: 
  */
  struct I2C3_CR1_t {
    uint32_t PE : 1;  ///< Peripheral enable, reset value: 0x0
    uint32_t TXIE : 1;  ///< TX Interrupt enable, reset value: 0x0
    uint32_t RXIE : 1;  ///< RX Interrupt enable, reset value: 0x0
    uint32_t ADDRIE : 1;  ///< Address match interrupt enable (slave only), reset value: 0x0
    uint32_t NACKIE : 1;  ///< Not acknowledge received interrupt enable, reset value: 0x0
    uint32_t STOPIE : 1;  ///< STOP detection Interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer Complete interrupt enable, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupts enable, reset value: 0x0
    uint32_t DNF : 4;  ///< Digital noise filter, reset value: 0x0
    uint32_t ANFOFF : 1;  ///< Analog noise filter OFF, reset value: 0x0
    uint32_t SWRST : 1;  ///< Software reset, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< DMA transmission requests enable, reset value: 0x0
    uint32_t RXDMAEN : 1;  ///< DMA reception requests enable, reset value: 0x0
    uint32_t SBC : 1;  ///< Slave byte control, reset value: 0x0
    uint32_t NOSTRETCH : 1;  ///< Clock stretching disable, reset value: 0x0
    uint32_t WUPEN : 1;  ///< Wakeup from STOP enable, reset value: 0x0
    uint32_t GCEN : 1;  ///< General call enable, reset value: 0x0
    uint32_t SMBHEN : 1;  ///< SMBus Host address enable, reset value: 0x0
    uint32_t SMBDEN : 1;  ///< SMBus Device Default address enable, reset value: 0x0
    uint32_t ALERTEN : 1;  ///< SMBUS alert enable, reset value: 0x0
    uint32_t PECEN : 1;  ///< PEC enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40007804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_CR2_t {
    uint32_t SADD0 : 1;  ///< Slave address bit 0 (master mode), reset value: 0x0
    uint32_t SADD1 : 7;  ///< Slave address bit 7:1 (master mode), reset value: 0x0
    uint32_t SADD8 : 2;  ///< Slave address bit 9:8 (master mode), reset value: 0x0
    uint32_t RD_WRN : 1;  ///< Transfer direction (master mode), reset value: 0x0
    uint32_t ADD10 : 1;  ///< 10-bit addressing mode (master mode), reset value: 0x0
    uint32_t HEAD10R : 1;  ///< 10-bit address header only read direction (master receiver mode), reset value: 0x0
    uint32_t START : 1;  ///< Start generation, reset value: 0x0
    uint32_t STOP : 1;  ///< Stop generation (master mode), reset value: 0x0
    uint32_t NACK : 1;  ///< NACK generation (slave mode), reset value: 0x0
    uint32_t NBYTES : 8;  ///< Number of bytes, reset value: 0x0
    uint32_t RELOAD : 1;  ///< NBYTES reload mode, reset value: 0x0
    uint32_t AUTOEND : 1;  ///< Automatic end mode (master mode), reset value: 0x0
    uint32_t PECBYTE : 1;  ///< Packet error checking byte, reset value: 0x0
  } CR2;

  /** 
  * name: OAR1
  * description: Own address register 1
  * address: 0x40007808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_OAR1_t {
    uint32_t OA1_0 : 1;  ///< Interface address, reset value: 0x0
    uint32_t OA1_1 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA1_8 : 2;  ///< Interface address, reset value: 0x0
    uint32_t OA1MODE : 1;  ///< Own Address 1 10-bit mode, reset value: 0x0
    uint32_t _RESERVED_167 : 4;
    uint32_t OA1EN : 1;  ///< Own Address 1 enable, reset value: 0x0
  } OAR1;

  /** 
  * name: OAR2
  * description: Own address register 2
  * address: 0x4000780C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_OAR2_t {
    uint32_t _RESERVED_168 : 1;
    uint32_t OA2 : 7;  ///< Interface address, reset value: 0x0
    uint32_t OA2MSK : 3;  ///< Own Address 2 masks, reset value: 0x0
    uint32_t _RESERVED_169 : 4;
    uint32_t OA2EN : 1;  ///< Own Address 2 enable, reset value: 0x0
  } OAR2;

  /** 
  * name: TIMINGR
  * description: Timing register
  * address: 0x40007810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_TIMINGR_t {
    uint32_t SCLL : 8;  ///< SCL low period (master mode), reset value: 0x0
    uint32_t SCLH : 8;  ///< SCL high period (master mode), reset value: 0x0
    uint32_t SDADEL : 4;  ///< Data hold time, reset value: 0x0
    uint32_t SCLDEL : 4;  ///< Data setup time, reset value: 0x0
    uint32_t _RESERVED_170 : 4;
    uint32_t PRESC : 4;  ///< Timing prescaler, reset value: 0x0
  } TIMINGR;

  /** 
  * name: TIMEOUTR
  * description: Status register 1
  * address: 0x40007814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_TIMEOUTR_t {
    uint32_t TIMEOUTA : 12;  ///< Bus timeout A, reset value: 0x0
    uint32_t TIDLE : 1;  ///< Idle clock timeout detection, reset value: 0x0
    uint32_t _RESERVED_171 : 2;
    uint32_t TIMOUTEN : 1;  ///< Clock timeout enable, reset value: 0x0
    uint32_t TIMEOUTB : 12;  ///< Bus timeout B, reset value: 0x0
    uint32_t _RESERVED_172 : 3;
    uint32_t TEXTEN : 1;  ///< Extended clock timeout enable, reset value: 0x0
  } TIMEOUTR;

  /** 
  * name: ISR
  * description: Interrupt and Status register
  * address: 0x40007818
  * offset: 0x18
  * reset value: 0x00000001
  * access: 
  */
  struct I2C3_ISR_t {
    uint32_t TXE : 1;  ///< Transmit data register empty (transmitters), reset value: 0x1
    uint32_t TXIS : 1;  ///< Transmit interrupt status (transmitters), reset value: 0x0
    uint32_t RXNE : 1;  ///< Receive data register not empty (receivers), reset value: 0x0
    uint32_t ADDR : 1;  ///< Address matched (slave mode), reset value: 0x0
    uint32_t NACKF : 1;  ///< Not acknowledge received flag, reset value: 0x0
    uint32_t STOPF : 1;  ///< Stop detection flag, reset value: 0x0
    uint32_t TC : 1;  ///< Transfer Complete (master mode), reset value: 0x0
    uint32_t TCR : 1;  ///< Transfer Complete Reload, reset value: 0x0
    uint32_t BERR : 1;  ///< Bus error, reset value: 0x0
    uint32_t ARLO : 1;  ///< Arbitration lost, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun/Underrun (slave mode), reset value: 0x0
    uint32_t PECERR : 1;  ///< PEC Error in reception, reset value: 0x0
    uint32_t TIMEOUT : 1;  ///< Timeout or t_low detection flag, reset value: 0x0
    uint32_t ALERT : 1;  ///< SMBus alert, reset value: 0x0
    uint32_t _RESERVED_173 : 1;
    uint32_t BUSY : 1;  ///< Bus busy, reset value: 0x0
    uint32_t DIR : 1;  ///< Transfer direction (Slave mode), reset value: 0x0
    uint32_t ADDCODE : 7;  ///< Address match code (Slave mode), reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt clear register
  * address: 0x4000781C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: write-only
  */
  struct I2C3_ICR_t {
    uint32_t _RESERVED_174 : 3;
    uint32_t ADDRCF : 1;  ///< Address Matched flag clear, reset value: 0x0
    uint32_t NACKCF : 1;  ///< Not Acknowledge flag clear, reset value: 0x0
    uint32_t STOPCF : 1;  ///< Stop detection flag clear, reset value: 0x0
    uint32_t _RESERVED_175 : 2;
    uint32_t BERRCF : 1;  ///< Bus error flag clear, reset value: 0x0
    uint32_t ARLOCF : 1;  ///< Arbitration lost flag clear, reset value: 0x0
    uint32_t OVRCF : 1;  ///< Overrun/Underrun flag clear, reset value: 0x0
    uint32_t PECCF : 1;  ///< PEC Error flag clear, reset value: 0x0
    uint32_t TIMOUTCF : 1;  ///< Timeout detection flag clear, reset value: 0x0
    uint32_t ALERTCF : 1;  ///< Alert flag clear, reset value: 0x0
  } ICR;

  /** 
  * name: PECR
  * description: PEC register
  * address: 0x40007820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C3_PECR_t {
    uint32_t PEC : 8;  ///< Packet error checking register, reset value: 0x0
  } PECR;

  /** 
  * name: RXDR
  * description: Receive data register
  * address: 0x40007824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct I2C3_RXDR_t {
    uint32_t RXDATA : 8;  ///< 8-bit receive data, reset value: 0x0
  } RXDR;

  /** 
  * name: TXDR
  * description: Transmit data register
  * address: 0x40007828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct I2C3_TXDR_t {
    uint32_t TXDATA : 8;  ///< 8-bit transmit data, reset value: 0x0
  } TXDR;

} I2C3_t;


/** 
*  name: SYSCFG_COMP_OPAMP
*  description: System configuration controller _Comparator and Operational amplifier
*  group: SYSCFG_COMP_OPAMP
*  address: 0x40010000
*/
typedef struct{
  /** 
  * name: SYSCFG_CFGR1
  * description: configuration register 1
  * address: 0x40010000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_t {
    uint32_t MEM_MODE : 2;  ///< Memory mapping selection bits, reset value: 0x0
    uint32_t _RESERVED_176 : 3;
    uint32_t USB_IT_RMP : 1;  ///< USB interrupt remap, reset value: 0x0
    uint32_t TIM1_ITR_RMP : 1;  ///< Timer 1 ITR3 selection, reset value: 0x0
    uint32_t DAC_TRIG_RMP : 1;  ///< DAC trigger remap (when TSEL = 001), reset value: 0x0
    uint32_t ADC24_DMA_RMP : 1;  ///< ADC24 DMA remapping bit, reset value: 0x0
    uint32_t _RESERVED_177 : 2;
    uint32_t TIM16_DMA_RMP : 1;  ///< TIM16 DMA request remapping bit, reset value: 0x0
    uint32_t TIM17_DMA_RMP : 1;  ///< TIM17 DMA request remapping bit, reset value: 0x0
    uint32_t TIM6_DAC1_DMA_RMP : 1;  ///< TIM6 and DAC1 DMA request remapping bit, reset value: 0x0
    uint32_t TIM7_DAC2_DMA_RMP : 1;  ///< TIM7 and DAC2 DMA request remapping bit, reset value: 0x0
    uint32_t _RESERVED_178 : 1;
    uint32_t I2C_PB6_FM : 1;  ///< Fast Mode Plus (FM+) driving capability activation bits., reset value: 0x0
    uint32_t I2C_PB7_FM : 1;  ///< Fast Mode Plus (FM+) driving capability activation bits., reset value: 0x0
    uint32_t I2C_PB8_FM : 1;  ///< Fast Mode Plus (FM+) driving capability activation bits., reset value: 0x0
    uint32_t I2C_PB9_FM : 1;  ///< Fast Mode Plus (FM+) driving capability activation bits., reset value: 0x0
    uint32_t I2C1_FM : 1;  ///< I2C1 Fast Mode Plus, reset value: 0x0
    uint32_t I2C2_FM : 1;  ///< I2C2 Fast Mode Plus, reset value: 0x0
    uint32_t ENCODER_MODE : 2;  ///< Encoder mode, reset value: 0x0
    uint32_t _RESERVED_179 : 2;
    uint32_t FPU_IT : 6;  ///< Interrupt enable bits from FPU, reset value: 0x0
  } SYSCFG_CFGR1;

  /** 
  * name: SYSCFG_RCR
  * description: CCM SRAM protection register
  * address: 0x40010004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_RCR_t {
    uint32_t PAGE0_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE1_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE2_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE3_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE4_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE5_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE6_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
    uint32_t PAGE7_WP : 1;  ///< CCM SRAM page write protection bit, reset value: 0x0
  } SYSCFG_RCR;

  /** 
  * name: SYSCFG_EXTICR1
  * description: external interrupt configuration register 1
  * address: 0x40010008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_t {
    uint32_t EXTI0 : 4;  ///< EXTI 0 configuration bits, reset value: 0x0
    uint32_t EXTI1 : 4;  ///< EXTI 1 configuration bits, reset value: 0x0
    uint32_t EXTI2 : 4;  ///< EXTI 2 configuration bits, reset value: 0x0
    uint32_t EXTI3 : 4;  ///< EXTI 3 configuration bits, reset value: 0x0
  } SYSCFG_EXTICR1;

  /** 
  * name: SYSCFG_EXTICR2
  * description: external interrupt configuration register 2
  * address: 0x4001000C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_t {
    uint32_t EXTI4 : 4;  ///< EXTI 4 configuration bits, reset value: 0x0
    uint32_t EXTI5 : 4;  ///< EXTI 5 configuration bits, reset value: 0x0
    uint32_t EXTI6 : 4;  ///< EXTI 6 configuration bits, reset value: 0x0
    uint32_t EXTI7 : 4;  ///< EXTI 7 configuration bits, reset value: 0x0
  } SYSCFG_EXTICR2;

  /** 
  * name: SYSCFG_EXTICR3
  * description: external interrupt configuration register 3
  * address: 0x40010010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_t {
    uint32_t EXTI8 : 4;  ///< EXTI 8 configuration bits, reset value: 0x0
    uint32_t EXTI9 : 4;  ///< EXTI 9 configuration bits, reset value: 0x0
    uint32_t EXTI10 : 4;  ///< EXTI 10 configuration bits, reset value: 0x0
    uint32_t EXTI11 : 4;  ///< EXTI 11 configuration bits, reset value: 0x0
  } SYSCFG_EXTICR3;

  /** 
  * name: SYSCFG_EXTICR4
  * description: external interrupt configuration register 4
  * address: 0x40010014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_t {
    uint32_t EXTI12 : 4;  ///< EXTI 12 configuration bits, reset value: 0x0
    uint32_t EXTI13 : 4;  ///< EXTI 13 configuration bits, reset value: 0x0
    uint32_t EXTI14 : 4;  ///< EXTI 14 configuration bits, reset value: 0x0
    uint32_t EXTI15 : 4;  ///< EXTI 15 configuration bits, reset value: 0x0
  } SYSCFG_EXTICR4;

  /** 
  * name: SYSCFG_CFGR2
  * description: configuration register 2
  * address: 0x40010018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_t {
    uint32_t LOCUP_LOCK : 1;  ///< Cortex-M0 LOCKUP bit enable bit, reset value: 0x0
    uint32_t SRAM_PARITY_LOCK : 1;  ///< SRAM parity lock bit, reset value: 0x0
    uint32_t PVD_LOCK : 1;  ///< PVD lock enable bit, reset value: 0x0
    uint32_t _RESERVED_180 : 1;
    uint32_t BYP_ADD_PAR : 1;  ///< Bypass address bit 29 in parity calculation, reset value: 0x0
    uint32_t _RESERVED_181 : 3;
    uint32_t SRAM_PEF : 1;  ///< SRAM parity flag, reset value: 0x0
  } SYSCFG_CFGR2;

  /** 
  * name: COMP1_CSR
  * description: control and status register
  * address: 0x4001001C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP1_CSR_t {
    uint32_t COMP1EN : 1;  ///< Comparator 1 enable, reset value: 0x0
    uint32_t COMP1_INP_DAC : 1;  ///< COMP1_INP_DAC, reset value: 0x0
    uint32_t COMP1MODE : 2;  ///< Comparator 1 mode, reset value: 0x0
    uint32_t COMP1INSEL : 3;  ///< Comparator 1 inverting input selection, reset value: 0x0
    uint32_t _RESERVED_182 : 3;
    uint32_t COMP1_OUT_SEL : 4;  ///< Comparator 1 output selection, reset value: 0x0
    uint32_t _RESERVED_183 : 1;
    uint32_t COMP1POL : 1;  ///< Comparator 1 output polarity, reset value: 0x0
    uint32_t COMP1HYST : 2;  ///< Comparator 1 hysteresis, reset value: 0x0
    uint32_t COMP1_BLANKING : 3;  ///< Comparator 1 blanking source, reset value: 0x0
    uint32_t _RESERVED_184 : 9;
    uint32_t COMP1OUT : 1;  ///< Comparator 1 output, reset value: 0x0
    uint32_t COMP1LOCK : 1;  ///< Comparator 1 lock, reset value: 0x0
  } COMP1_CSR;

  /** 
  * name: COMP2_CSR
  * description: control and status register
  * address: 0x40010020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct SYSCFG_COMP_OPAMP_COMP2_CSR_t {
    uint32_t COMP2EN : 1;  ///< Comparator 2 enable, reset value: 0x0
    uint32_t _RESERVED_185 : 1;
    uint32_t COMP2MODE : 2;  ///< Comparator 2 mode, reset value: 0x0
    uint32_t COMP2INSEL : 3;  ///< Comparator 2 inverting input selection, reset value: 0x0
    uint32_t COMP2INPSEL : 1;  ///< Comparator 2 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_186 : 1;
    uint32_t COMP2INMSEL : 1;  ///< Comparator 1inverting input selection, reset value: 0x0
    uint32_t COMP2_OUT_SEL : 4;  ///< Comparator 2 output selection, reset value: 0x0
    uint32_t _RESERVED_187 : 1;
    uint32_t COMP2POL : 1;  ///< Comparator 2 output polarity, reset value: 0x0
    uint32_t COMP2HYST : 2;  ///< Comparator 2 hysteresis, reset value: 0x0
    uint32_t COMP2_BLANKING : 3;  ///< Comparator 2 blanking source, reset value: 0x0
    uint32_t _RESERVED_188 : 10;
    uint32_t COMP2LOCK : 1;  ///< Comparator 2 lock, reset value: 0x0
  } COMP2_CSR;

  /** 
  * name: COMP3_CSR
  * description: control and status register
  * address: 0x40010024
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP3_CSR_t {
    uint32_t COMP3EN : 1;  ///< Comparator 3 enable, reset value: 0x0
    uint32_t _RESERVED_189 : 1;
    uint32_t COMP3MODE : 2;  ///< Comparator 3 mode, reset value: 0x0
    uint32_t COMP3INSEL : 3;  ///< Comparator 3 inverting input selection, reset value: 0x0
    uint32_t COMP3INPSEL : 1;  ///< Comparator 3 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_190 : 2;
    uint32_t COMP3_OUT_SEL : 4;  ///< Comparator 3 output selection, reset value: 0x0
    uint32_t _RESERVED_191 : 1;
    uint32_t COMP3POL : 1;  ///< Comparator 3 output polarity, reset value: 0x0
    uint32_t COMP3HYST : 2;  ///< Comparator 3 hysteresis, reset value: 0x0
    uint32_t COMP3_BLANKING : 3;  ///< Comparator 3 blanking source, reset value: 0x0
    uint32_t _RESERVED_192 : 9;
    uint32_t COMP3OUT : 1;  ///< Comparator 3 output, reset value: 0x0
    uint32_t COMP3LOCK : 1;  ///< Comparator 3 lock, reset value: 0x0
  } COMP3_CSR;

  /** 
  * name: COMP4_CSR
  * description: control and status register
  * address: 0x40010028
  * offset: 0x28
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP4_CSR_t {
    uint32_t COMP4EN : 1;  ///< Comparator 4 enable, reset value: 0x0
    uint32_t _RESERVED_193 : 1;
    uint32_t COMP4MODE : 2;  ///< Comparator 4 mode, reset value: 0x0
    uint32_t COMP4INSEL : 3;  ///< Comparator 4 inverting input selection, reset value: 0x0
    uint32_t COMP4INPSEL : 1;  ///< Comparator 4 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_194 : 1;
    uint32_t COM4WINMODE : 1;  ///< Comparator 4 window mode, reset value: 0x0
    uint32_t COMP4_OUT_SEL : 4;  ///< Comparator 4 output selection, reset value: 0x0
    uint32_t _RESERVED_195 : 1;
    uint32_t COMP4POL : 1;  ///< Comparator 4 output polarity, reset value: 0x0
    uint32_t COMP4HYST : 2;  ///< Comparator 4 hysteresis, reset value: 0x0
    uint32_t COMP4_BLANKING : 3;  ///< Comparator 4 blanking source, reset value: 0x0
    uint32_t _RESERVED_196 : 9;
    uint32_t COMP4OUT : 1;  ///< Comparator 4 output, reset value: 0x0
    uint32_t COMP4LOCK : 1;  ///< Comparator 4 lock, reset value: 0x0
  } COMP4_CSR;

  /** 
  * name: COMP5_CSR
  * description: control and status register
  * address: 0x4001002C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP5_CSR_t {
    uint32_t COMP5EN : 1;  ///< Comparator 5 enable, reset value: 0x0
    uint32_t _RESERVED_197 : 1;
    uint32_t COMP5MODE : 2;  ///< Comparator 5 mode, reset value: 0x0
    uint32_t COMP5INSEL : 3;  ///< Comparator 5 inverting input selection, reset value: 0x0
    uint32_t COMP5INPSEL : 1;  ///< Comparator 5 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_198 : 2;
    uint32_t COMP5_OUT_SEL : 4;  ///< Comparator 5 output selection, reset value: 0x0
    uint32_t _RESERVED_199 : 1;
    uint32_t COMP5POL : 1;  ///< Comparator 5 output polarity, reset value: 0x0
    uint32_t COMP5HYST : 2;  ///< Comparator 5 hysteresis, reset value: 0x0
    uint32_t COMP5_BLANKING : 3;  ///< Comparator 5 blanking source, reset value: 0x0
    uint32_t _RESERVED_200 : 9;
    uint32_t COMP5OUT : 1;  ///< Comparator51 output, reset value: 0x0
    uint32_t COMP5LOCK : 1;  ///< Comparator 5 lock, reset value: 0x0
  } COMP5_CSR;

  /** 
  * name: COMP6_CSR
  * description: control and status register
  * address: 0x40010030
  * offset: 0x30
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP6_CSR_t {
    uint32_t COMP6EN : 1;  ///< Comparator 6 enable, reset value: 0x0
    uint32_t _RESERVED_201 : 1;
    uint32_t COMP6MODE : 2;  ///< Comparator 6 mode, reset value: 0x0
    uint32_t COMP6INSEL : 3;  ///< Comparator 6 inverting input selection, reset value: 0x0
    uint32_t COMP6INPSEL : 1;  ///< Comparator 6 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_202 : 1;
    uint32_t COM6WINMODE : 1;  ///< Comparator 6 window mode, reset value: 0x0
    uint32_t COMP6_OUT_SEL : 4;  ///< Comparator 6 output selection, reset value: 0x0
    uint32_t _RESERVED_203 : 1;
    uint32_t COMP6POL : 1;  ///< Comparator 6 output polarity, reset value: 0x0
    uint32_t COMP6HYST : 2;  ///< Comparator 6 hysteresis, reset value: 0x0
    uint32_t COMP6_BLANKING : 3;  ///< Comparator 6 blanking source, reset value: 0x0
    uint32_t _RESERVED_204 : 9;
    uint32_t COMP6OUT : 1;  ///< Comparator 6 output, reset value: 0x0
    uint32_t COMP6LOCK : 1;  ///< Comparator 6 lock, reset value: 0x0
  } COMP6_CSR;

  /** 
  * name: COMP7_CSR
  * description: control and status register
  * address: 0x40010034
  * offset: 0x34
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_COMP7_CSR_t {
    uint32_t COMP7EN : 1;  ///< Comparator 7 enable, reset value: 0x0
    uint32_t _RESERVED_205 : 1;
    uint32_t COMP7MODE : 2;  ///< Comparator 7 mode, reset value: 0x0
    uint32_t COMP7INSEL : 3;  ///< Comparator 7 inverting input selection, reset value: 0x0
    uint32_t COMP7INPSEL : 1;  ///< Comparator 7 non inverted input selection, reset value: 0x0
    uint32_t _RESERVED_206 : 2;
    uint32_t COMP7_OUT_SEL : 4;  ///< Comparator 7 output selection, reset value: 0x0
    uint32_t _RESERVED_207 : 1;
    uint32_t COMP7POL : 1;  ///< Comparator 7 output polarity, reset value: 0x0
    uint32_t COMP7HYST : 2;  ///< Comparator 7 hysteresis, reset value: 0x0
    uint32_t COMP7_BLANKING : 3;  ///< Comparator 7 blanking source, reset value: 0x0
    uint32_t _RESERVED_208 : 9;
    uint32_t COMP7OUT : 1;  ///< Comparator 7 output, reset value: 0x0
    uint32_t COMP7LOCK : 1;  ///< Comparator 7 lock, reset value: 0x0
  } COMP7_CSR;

  /** 
  * name: OPAMP1_CSR
  * description: control register
  * address: 0x40010038
  * offset: 0x38
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_OPAMP1_CSR_t {
    uint32_t OPAMP1_EN : 1;  ///< OPAMP1 enable, reset value: 0x0
    uint32_t FORCE_VP : 1;  ///< FORCE_VP, reset value: 0x0
    uint32_t VP_SEL : 2;  ///< OPAMP1 Non inverting input selection, reset value: 0x0
    uint32_t _RESERVED_209 : 1;
    uint32_t VM_SEL : 2;  ///< OPAMP1 inverting input selection, reset value: 0x0
    uint32_t TCM_EN : 1;  ///< Timer controlled Mux mode enable, reset value: 0x0
    uint32_t VMS_SEL : 1;  ///< OPAMP1 inverting input secondary selection, reset value: 0x0
    uint32_t VPS_SEL : 2;  ///< OPAMP1 Non inverting input secondary selection, reset value: 0x0
    uint32_t CALON : 1;  ///< Calibration mode enable, reset value: 0x0
    uint32_t CALSEL : 2;  ///< Calibration selection, reset value: 0x0
    uint32_t PGA_GAIN : 4;  ///< Gain in PGA mode, reset value: 0x0
    uint32_t USER_TRIM : 1;  ///< User trimming enable, reset value: 0x0
    uint32_t TRIMOFFSETP : 5;  ///< Offset trimming value (PMOS), reset value: 0x0
    uint32_t TRIMOFFSETN : 5;  ///< Offset trimming value (NMOS), reset value: 0x0
    uint32_t TSTREF : 1;  ///< TSTREF, reset value: 0x0
    uint32_t OUTCAL : 1;  ///< OPAMP 1 ouput status flag, reset value: 0x0
    uint32_t LOCK : 1;  ///< OPAMP 1 lock, reset value: 0x0
  } OPAMP1_CSR;

  /** 
  * name: OPAMP2_CSR
  * description: control register
  * address: 0x4001003C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_OPAMP2_CSR_t {
    uint32_t OPAMP2EN : 1;  ///< OPAMP2 enable, reset value: 0x0
    uint32_t FORCE_VP : 1;  ///< FORCE_VP, reset value: 0x0
    uint32_t VP_SEL : 2;  ///< OPAMP2 Non inverting input selection, reset value: 0x0
    uint32_t _RESERVED_210 : 1;
    uint32_t VM_SEL : 2;  ///< OPAMP2 inverting input selection, reset value: 0x0
    uint32_t TCM_EN : 1;  ///< Timer controlled Mux mode enable, reset value: 0x0
    uint32_t VMS_SEL : 1;  ///< OPAMP2 inverting input secondary selection, reset value: 0x0
    uint32_t VPS_SEL : 2;  ///< OPAMP2 Non inverting input secondary selection, reset value: 0x0
    uint32_t CALON : 1;  ///< Calibration mode enable, reset value: 0x0
    uint32_t CAL_SEL : 2;  ///< Calibration selection, reset value: 0x0
    uint32_t PGA_GAIN : 4;  ///< Gain in PGA mode, reset value: 0x0
    uint32_t USER_TRIM : 1;  ///< User trimming enable, reset value: 0x0
    uint32_t TRIMOFFSETP : 5;  ///< Offset trimming value (PMOS), reset value: 0x0
    uint32_t TRIMOFFSETN : 5;  ///< Offset trimming value (NMOS), reset value: 0x0
    uint32_t TSTREF : 1;  ///< TSTREF, reset value: 0x0
    uint32_t OUTCAL : 1;  ///< OPAMP 2 ouput status flag, reset value: 0x0
    uint32_t LOCK : 1;  ///< OPAMP 2 lock, reset value: 0x0
  } OPAMP2_CSR;

  /** 
  * name: OPAMP3_CSR
  * description: control register
  * address: 0x40010040
  * offset: 0x40
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_OPAMP3_CSR_t {
    uint32_t OPAMP3EN : 1;  ///< OPAMP3 enable, reset value: 0x0
    uint32_t FORCE_VP : 1;  ///< FORCE_VP, reset value: 0x0
    uint32_t VP_SEL : 2;  ///< OPAMP3 Non inverting input selection, reset value: 0x0
    uint32_t _RESERVED_211 : 1;
    uint32_t VM_SEL : 2;  ///< OPAMP3 inverting input selection, reset value: 0x0
    uint32_t TCM_EN : 1;  ///< Timer controlled Mux mode enable, reset value: 0x0
    uint32_t VMS_SEL : 1;  ///< OPAMP3 inverting input secondary selection, reset value: 0x0
    uint32_t VPS_SEL : 2;  ///< OPAMP3 Non inverting input secondary selection, reset value: 0x0
    uint32_t CALON : 1;  ///< Calibration mode enable, reset value: 0x0
    uint32_t CALSEL : 2;  ///< Calibration selection, reset value: 0x0
    uint32_t PGA_GAIN : 4;  ///< Gain in PGA mode, reset value: 0x0
    uint32_t USER_TRIM : 1;  ///< User trimming enable, reset value: 0x0
    uint32_t TRIMOFFSETP : 5;  ///< Offset trimming value (PMOS), reset value: 0x0
    uint32_t TRIMOFFSETN : 5;  ///< Offset trimming value (NMOS), reset value: 0x0
    uint32_t TSTREF : 1;  ///< TSTREF, reset value: 0x0
    uint32_t OUTCAL : 1;  ///< OPAMP 3 ouput status flag, reset value: 0x0
    uint32_t LOCK : 1;  ///< OPAMP 3 lock, reset value: 0x0
  } OPAMP3_CSR;

  /** 
  * name: OPAMP4_CSR
  * description: control register
  * address: 0x40010044
  * offset: 0x44
  * reset value: 0x00000000
  * access: 
  */
  struct SYSCFG_COMP_OPAMP_OPAMP4_CSR_t {
    uint32_t OPAMP4EN : 1;  ///< OPAMP4 enable, reset value: 0x0
    uint32_t FORCE_VP : 1;  ///< FORCE_VP, reset value: 0x0
    uint32_t VP_SEL : 2;  ///< OPAMP4 Non inverting input selection, reset value: 0x0
    uint32_t _RESERVED_212 : 1;
    uint32_t VM_SEL : 2;  ///< OPAMP4 inverting input selection, reset value: 0x0
    uint32_t TCM_EN : 1;  ///< Timer controlled Mux mode enable, reset value: 0x0
    uint32_t VMS_SEL : 1;  ///< OPAMP4 inverting input secondary selection, reset value: 0x0
    uint32_t VPS_SEL : 2;  ///< OPAMP4 Non inverting input secondary selection, reset value: 0x0
    uint32_t CALON : 1;  ///< Calibration mode enable, reset value: 0x0
    uint32_t CALSEL : 2;  ///< Calibration selection, reset value: 0x0
    uint32_t PGA_GAIN : 4;  ///< Gain in PGA mode, reset value: 0x0
    uint32_t USER_TRIM : 1;  ///< User trimming enable, reset value: 0x0
    uint32_t TRIMOFFSETP : 5;  ///< Offset trimming value (PMOS), reset value: 0x0
    uint32_t TRIMOFFSETN : 5;  ///< Offset trimming value (NMOS), reset value: 0x0
    uint32_t TSTREF : 1;  ///< TSTREF, reset value: 0x0
    uint32_t OUTCAL : 1;  ///< OPAMP 4 ouput status flag, reset value: 0x0
    uint32_t LOCK : 1;  ///< OPAMP 4 lock, reset value: 0x0
  } OPAMP4_CSR;

} SYSCFG_COMP_OPAMP_t;


/** 
*  name: EXTI
*  description: External interrupt/event controller
*  group: EXTI
*  address: 0x40010400
*/
typedef struct{
  /** 
  * name: IMR1
  * description: Interrupt mask register
  * address: 0x40010400
  * offset: 0x0
  * reset value: 0x1F800000
  * access: read-write
  */
  struct EXTI_IMR1_t {
    uint32_t MR0 : 1;  ///< Interrupt Mask on line 0, reset value: 0x0
    uint32_t MR1 : 1;  ///< Interrupt Mask on line 1, reset value: 0x0
    uint32_t MR2 : 1;  ///< Interrupt Mask on line 2, reset value: 0x0
    uint32_t MR3 : 1;  ///< Interrupt Mask on line 3, reset value: 0x0
    uint32_t MR4 : 1;  ///< Interrupt Mask on line 4, reset value: 0x0
    uint32_t MR5 : 1;  ///< Interrupt Mask on line 5, reset value: 0x0
    uint32_t MR6 : 1;  ///< Interrupt Mask on line 6, reset value: 0x0
    uint32_t MR7 : 1;  ///< Interrupt Mask on line 7, reset value: 0x0
    uint32_t MR8 : 1;  ///< Interrupt Mask on line 8, reset value: 0x0
    uint32_t MR9 : 1;  ///< Interrupt Mask on line 9, reset value: 0x0
    uint32_t MR10 : 1;  ///< Interrupt Mask on line 10, reset value: 0x0
    uint32_t MR11 : 1;  ///< Interrupt Mask on line 11, reset value: 0x0
    uint32_t MR12 : 1;  ///< Interrupt Mask on line 12, reset value: 0x0
    uint32_t MR13 : 1;  ///< Interrupt Mask on line 13, reset value: 0x0
    uint32_t MR14 : 1;  ///< Interrupt Mask on line 14, reset value: 0x0
    uint32_t MR15 : 1;  ///< Interrupt Mask on line 15, reset value: 0x0
    uint32_t MR16 : 1;  ///< Interrupt Mask on line 16, reset value: 0x0
    uint32_t MR17 : 1;  ///< Interrupt Mask on line 17, reset value: 0x0
    uint32_t MR18 : 1;  ///< Interrupt Mask on line 18, reset value: 0x0
    uint32_t MR19 : 1;  ///< Interrupt Mask on line 19, reset value: 0x0
    uint32_t MR20 : 1;  ///< Interrupt Mask on line 20, reset value: 0x0
    uint32_t MR21 : 1;  ///< Interrupt Mask on line 21, reset value: 0x0
    uint32_t MR22 : 1;  ///< Interrupt Mask on line 22, reset value: 0x0
    uint32_t MR23 : 1;  ///< Interrupt Mask on line 23, reset value: 0x1
    uint32_t MR24 : 1;  ///< Interrupt Mask on line 24, reset value: 0x1
    uint32_t MR25 : 1;  ///< Interrupt Mask on line 25, reset value: 0x1
    uint32_t MR26 : 1;  ///< Interrupt Mask on line 26, reset value: 0x1
    uint32_t MR27 : 1;  ///< Interrupt Mask on line 27, reset value: 0x1
    uint32_t MR28 : 1;  ///< Interrupt Mask on line 28, reset value: 0x1
    uint32_t MR29 : 1;  ///< Interrupt Mask on line 29, reset value: 0x0
    uint32_t MR30 : 1;  ///< Interrupt Mask on line 30, reset value: 0x0
    uint32_t MR31 : 1;  ///< Interrupt Mask on line 31, reset value: 0x0
  } IMR1;

  /** 
  * name: EMR1
  * description: Event mask register
  * address: 0x40010404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_EMR1_t {
    uint32_t MR0 : 1;  ///< Event Mask on line 0, reset value: 0x0
    uint32_t MR1 : 1;  ///< Event Mask on line 1, reset value: 0x0
    uint32_t MR2 : 1;  ///< Event Mask on line 2, reset value: 0x0
    uint32_t MR3 : 1;  ///< Event Mask on line 3, reset value: 0x0
    uint32_t MR4 : 1;  ///< Event Mask on line 4, reset value: 0x0
    uint32_t MR5 : 1;  ///< Event Mask on line 5, reset value: 0x0
    uint32_t MR6 : 1;  ///< Event Mask on line 6, reset value: 0x0
    uint32_t MR7 : 1;  ///< Event Mask on line 7, reset value: 0x0
    uint32_t MR8 : 1;  ///< Event Mask on line 8, reset value: 0x0
    uint32_t MR9 : 1;  ///< Event Mask on line 9, reset value: 0x0
    uint32_t MR10 : 1;  ///< Event Mask on line 10, reset value: 0x0
    uint32_t MR11 : 1;  ///< Event Mask on line 11, reset value: 0x0
    uint32_t MR12 : 1;  ///< Event Mask on line 12, reset value: 0x0
    uint32_t MR13 : 1;  ///< Event Mask on line 13, reset value: 0x0
    uint32_t MR14 : 1;  ///< Event Mask on line 14, reset value: 0x0
    uint32_t MR15 : 1;  ///< Event Mask on line 15, reset value: 0x0
    uint32_t MR16 : 1;  ///< Event Mask on line 16, reset value: 0x0
    uint32_t MR17 : 1;  ///< Event Mask on line 17, reset value: 0x0
    uint32_t MR18 : 1;  ///< Event Mask on line 18, reset value: 0x0
    uint32_t MR19 : 1;  ///< Event Mask on line 19, reset value: 0x0
    uint32_t MR20 : 1;  ///< Event Mask on line 20, reset value: 0x0
    uint32_t MR21 : 1;  ///< Event Mask on line 21, reset value: 0x0
    uint32_t MR22 : 1;  ///< Event Mask on line 22, reset value: 0x0
    uint32_t MR23 : 1;  ///< Event Mask on line 23, reset value: 0x0
    uint32_t MR24 : 1;  ///< Event Mask on line 24, reset value: 0x0
    uint32_t MR25 : 1;  ///< Event Mask on line 25, reset value: 0x0
    uint32_t MR26 : 1;  ///< Event Mask on line 26, reset value: 0x0
    uint32_t MR27 : 1;  ///< Event Mask on line 27, reset value: 0x0
    uint32_t MR28 : 1;  ///< Event Mask on line 28, reset value: 0x0
    uint32_t MR29 : 1;  ///< Event Mask on line 29, reset value: 0x0
    uint32_t MR30 : 1;  ///< Event Mask on line 30, reset value: 0x0
    uint32_t MR31 : 1;  ///< Event Mask on line 31, reset value: 0x0
  } EMR1;

  /** 
  * name: RTSR1
  * description: Rising Trigger selection register
  * address: 0x40010408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_RTSR1_t {
    uint32_t TR0 : 1;  ///< Rising trigger event configuration of line 0, reset value: 0x0
    uint32_t TR1 : 1;  ///< Rising trigger event configuration of line 1, reset value: 0x0
    uint32_t TR2 : 1;  ///< Rising trigger event configuration of line 2, reset value: 0x0
    uint32_t TR3 : 1;  ///< Rising trigger event configuration of line 3, reset value: 0x0
    uint32_t TR4 : 1;  ///< Rising trigger event configuration of line 4, reset value: 0x0
    uint32_t TR5 : 1;  ///< Rising trigger event configuration of line 5, reset value: 0x0
    uint32_t TR6 : 1;  ///< Rising trigger event configuration of line 6, reset value: 0x0
    uint32_t TR7 : 1;  ///< Rising trigger event configuration of line 7, reset value: 0x0
    uint32_t TR8 : 1;  ///< Rising trigger event configuration of line 8, reset value: 0x0
    uint32_t TR9 : 1;  ///< Rising trigger event configuration of line 9, reset value: 0x0
    uint32_t TR10 : 1;  ///< Rising trigger event configuration of line 10, reset value: 0x0
    uint32_t TR11 : 1;  ///< Rising trigger event configuration of line 11, reset value: 0x0
    uint32_t TR12 : 1;  ///< Rising trigger event configuration of line 12, reset value: 0x0
    uint32_t TR13 : 1;  ///< Rising trigger event configuration of line 13, reset value: 0x0
    uint32_t TR14 : 1;  ///< Rising trigger event configuration of line 14, reset value: 0x0
    uint32_t TR15 : 1;  ///< Rising trigger event configuration of line 15, reset value: 0x0
    uint32_t TR16 : 1;  ///< Rising trigger event configuration of line 16, reset value: 0x0
    uint32_t TR17 : 1;  ///< Rising trigger event configuration of line 17, reset value: 0x0
    uint32_t TR18 : 1;  ///< Rising trigger event configuration of line 18, reset value: 0x0
    uint32_t TR19 : 1;  ///< Rising trigger event configuration of line 19, reset value: 0x0
    uint32_t TR20 : 1;  ///< Rising trigger event configuration of line 20, reset value: 0x0
    uint32_t TR21 : 1;  ///< Rising trigger event configuration of line 21, reset value: 0x0
    uint32_t TR22 : 1;  ///< Rising trigger event configuration of line 22, reset value: 0x0
    uint32_t _RESERVED_213 : 6;
    uint32_t TR29 : 1;  ///< Rising trigger event configuration of line 29, reset value: 0x0
    uint32_t TR30 : 1;  ///< Rising trigger event configuration of line 30, reset value: 0x0
    uint32_t TR31 : 1;  ///< Rising trigger event configuration of line 31, reset value: 0x0
  } RTSR1;

  /** 
  * name: FTSR1
  * description: Falling Trigger selection register
  * address: 0x4001040C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_FTSR1_t {
    uint32_t TR0 : 1;  ///< Falling trigger event configuration of line 0, reset value: 0x0
    uint32_t TR1 : 1;  ///< Falling trigger event configuration of line 1, reset value: 0x0
    uint32_t TR2 : 1;  ///< Falling trigger event configuration of line 2, reset value: 0x0
    uint32_t TR3 : 1;  ///< Falling trigger event configuration of line 3, reset value: 0x0
    uint32_t TR4 : 1;  ///< Falling trigger event configuration of line 4, reset value: 0x0
    uint32_t TR5 : 1;  ///< Falling trigger event configuration of line 5, reset value: 0x0
    uint32_t TR6 : 1;  ///< Falling trigger event configuration of line 6, reset value: 0x0
    uint32_t TR7 : 1;  ///< Falling trigger event configuration of line 7, reset value: 0x0
    uint32_t TR8 : 1;  ///< Falling trigger event configuration of line 8, reset value: 0x0
    uint32_t TR9 : 1;  ///< Falling trigger event configuration of line 9, reset value: 0x0
    uint32_t TR10 : 1;  ///< Falling trigger event configuration of line 10, reset value: 0x0
    uint32_t TR11 : 1;  ///< Falling trigger event configuration of line 11, reset value: 0x0
    uint32_t TR12 : 1;  ///< Falling trigger event configuration of line 12, reset value: 0x0
    uint32_t TR13 : 1;  ///< Falling trigger event configuration of line 13, reset value: 0x0
    uint32_t TR14 : 1;  ///< Falling trigger event configuration of line 14, reset value: 0x0
    uint32_t TR15 : 1;  ///< Falling trigger event configuration of line 15, reset value: 0x0
    uint32_t TR16 : 1;  ///< Falling trigger event configuration of line 16, reset value: 0x0
    uint32_t TR17 : 1;  ///< Falling trigger event configuration of line 17, reset value: 0x0
    uint32_t TR18 : 1;  ///< Falling trigger event configuration of line 18, reset value: 0x0
    uint32_t TR19 : 1;  ///< Falling trigger event configuration of line 19, reset value: 0x0
    uint32_t TR20 : 1;  ///< Falling trigger event configuration of line 20, reset value: 0x0
    uint32_t TR21 : 1;  ///< Falling trigger event configuration of line 21, reset value: 0x0
    uint32_t TR22 : 1;  ///< Falling trigger event configuration of line 22, reset value: 0x0
    uint32_t _RESERVED_214 : 6;
    uint32_t TR29 : 1;  ///< Falling trigger event configuration of line 29, reset value: 0x0
    uint32_t TR30 : 1;  ///< Falling trigger event configuration of line 30., reset value: 0x0
    uint32_t TR31 : 1;  ///< Falling trigger event configuration of line 31, reset value: 0x0
  } FTSR1;

  /** 
  * name: SWIER1
  * description: Software interrupt event register
  * address: 0x40010410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_SWIER1_t {
    uint32_t SWIER0 : 1;  ///< Software Interrupt on line 0, reset value: 0x0
    uint32_t SWIER1 : 1;  ///< Software Interrupt on line 1, reset value: 0x0
    uint32_t SWIER2 : 1;  ///< Software Interrupt on line 2, reset value: 0x0
    uint32_t SWIER3 : 1;  ///< Software Interrupt on line 3, reset value: 0x0
    uint32_t SWIER4 : 1;  ///< Software Interrupt on line 4, reset value: 0x0
    uint32_t SWIER5 : 1;  ///< Software Interrupt on line 5, reset value: 0x0
    uint32_t SWIER6 : 1;  ///< Software Interrupt on line 6, reset value: 0x0
    uint32_t SWIER7 : 1;  ///< Software Interrupt on line 7, reset value: 0x0
    uint32_t SWIER8 : 1;  ///< Software Interrupt on line 8, reset value: 0x0
    uint32_t SWIER9 : 1;  ///< Software Interrupt on line 9, reset value: 0x0
    uint32_t SWIER10 : 1;  ///< Software Interrupt on line 10, reset value: 0x0
    uint32_t SWIER11 : 1;  ///< Software Interrupt on line 11, reset value: 0x0
    uint32_t SWIER12 : 1;  ///< Software Interrupt on line 12, reset value: 0x0
    uint32_t SWIER13 : 1;  ///< Software Interrupt on line 13, reset value: 0x0
    uint32_t SWIER14 : 1;  ///< Software Interrupt on line 14, reset value: 0x0
    uint32_t SWIER15 : 1;  ///< Software Interrupt on line 15, reset value: 0x0
    uint32_t SWIER16 : 1;  ///< Software Interrupt on line 16, reset value: 0x0
    uint32_t SWIER17 : 1;  ///< Software Interrupt on line 17, reset value: 0x0
    uint32_t SWIER18 : 1;  ///< Software Interrupt on line 18, reset value: 0x0
    uint32_t SWIER19 : 1;  ///< Software Interrupt on line 19, reset value: 0x0
    uint32_t SWIER20 : 1;  ///< Software Interrupt on line 20, reset value: 0x0
    uint32_t SWIER21 : 1;  ///< Software Interrupt on line 21, reset value: 0x0
    uint32_t SWIER22 : 1;  ///< Software Interrupt on line 22, reset value: 0x0
    uint32_t _RESERVED_215 : 6;
    uint32_t SWIER29 : 1;  ///< Software Interrupt on line 29, reset value: 0x0
    uint32_t SWIER30 : 1;  ///< Software Interrupt on line 309, reset value: 0x0
    uint32_t SWIER31 : 1;  ///< Software Interrupt on line 319, reset value: 0x0
  } SWIER1;

  /** 
  * name: PR1
  * description: Pending register
  * address: 0x40010414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_PR1_t {
    uint32_t PR0 : 1;  ///< Pending bit 0, reset value: 0x0
    uint32_t PR1 : 1;  ///< Pending bit 1, reset value: 0x0
    uint32_t PR2 : 1;  ///< Pending bit 2, reset value: 0x0
    uint32_t PR3 : 1;  ///< Pending bit 3, reset value: 0x0
    uint32_t PR4 : 1;  ///< Pending bit 4, reset value: 0x0
    uint32_t PR5 : 1;  ///< Pending bit 5, reset value: 0x0
    uint32_t PR6 : 1;  ///< Pending bit 6, reset value: 0x0
    uint32_t PR7 : 1;  ///< Pending bit 7, reset value: 0x0
    uint32_t PR8 : 1;  ///< Pending bit 8, reset value: 0x0
    uint32_t PR9 : 1;  ///< Pending bit 9, reset value: 0x0
    uint32_t PR10 : 1;  ///< Pending bit 10, reset value: 0x0
    uint32_t PR11 : 1;  ///< Pending bit 11, reset value: 0x0
    uint32_t PR12 : 1;  ///< Pending bit 12, reset value: 0x0
    uint32_t PR13 : 1;  ///< Pending bit 13, reset value: 0x0
    uint32_t PR14 : 1;  ///< Pending bit 14, reset value: 0x0
    uint32_t PR15 : 1;  ///< Pending bit 15, reset value: 0x0
    uint32_t PR16 : 1;  ///< Pending bit 16, reset value: 0x0
    uint32_t PR17 : 1;  ///< Pending bit 17, reset value: 0x0
    uint32_t PR18 : 1;  ///< Pending bit 18, reset value: 0x0
    uint32_t PR19 : 1;  ///< Pending bit 19, reset value: 0x0
    uint32_t PR20 : 1;  ///< Pending bit 20, reset value: 0x0
    uint32_t PR21 : 1;  ///< Pending bit 21, reset value: 0x0
    uint32_t PR22 : 1;  ///< Pending bit 22, reset value: 0x0
    uint32_t _RESERVED_216 : 6;
    uint32_t PR29 : 1;  ///< Pending bit 29, reset value: 0x0
    uint32_t PR30 : 1;  ///< Pending bit 30, reset value: 0x0
    uint32_t PR31 : 1;  ///< Pending bit 31, reset value: 0x0
  } PR1;

  /** 
  * name: IMR2
  * description: Interrupt mask register
  * address: 0x40010418
  * offset: 0x18
  * reset value: 0xFFFFFFFC
  * access: read-write
  */
  struct EXTI_IMR2_t {
    uint32_t MR32 : 1;  ///< Interrupt Mask on external/internal line 32, reset value: 0x0
    uint32_t MR33 : 1;  ///< Interrupt Mask on external/internal line 33, reset value: 0x0
    uint32_t MR34 : 1;  ///< Interrupt Mask on external/internal line 34, reset value: 0x1
    uint32_t MR35 : 1;  ///< Interrupt Mask on external/internal line 35, reset value: 0x1
  } IMR2;

  /** 
  * name: EMR2
  * description: Event mask register
  * address: 0x4001041C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_EMR2_t {
    uint32_t MR32 : 1;  ///< Event mask on external/internal line 32, reset value: 0x0
    uint32_t MR33 : 1;  ///< Event mask on external/internal line 33, reset value: 0x0
    uint32_t MR34 : 1;  ///< Event mask on external/internal line 34, reset value: 0x0
    uint32_t MR35 : 1;  ///< Event mask on external/internal line 35, reset value: 0x0
  } EMR2;

  /** 
  * name: RTSR2
  * description: Rising Trigger selection register
  * address: 0x40010420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_RTSR2_t {
    uint32_t TR32 : 1;  ///< Rising trigger event configuration bit of line 32, reset value: 0x0
    uint32_t TR33 : 1;  ///< Rising trigger event configuration bit of line 33, reset value: 0x0
  } RTSR2;

  /** 
  * name: FTSR2
  * description: Falling Trigger selection register
  * address: 0x40010424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_FTSR2_t {
    uint32_t TR32 : 1;  ///< Falling trigger event configuration bit of line 32, reset value: 0x0
    uint32_t TR33 : 1;  ///< Falling trigger event configuration bit of line 33, reset value: 0x0
  } FTSR2;

  /** 
  * name: SWIER2
  * description: Software interrupt event register
  * address: 0x40010428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_SWIER2_t {
    uint32_t SWIER32 : 1;  ///< Software interrupt on line 32, reset value: 0x0
    uint32_t SWIER33 : 1;  ///< Software interrupt on line 33, reset value: 0x0
  } SWIER2;

  /** 
  * name: PR2
  * description: Pending register
  * address: 0x4001042C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct EXTI_PR2_t {
    uint32_t PR32 : 1;  ///< Pending bit on line 32, reset value: 0x0
    uint32_t PR33 : 1;  ///< Pending bit on line 33, reset value: 0x0
  } PR2;

} EXTI_t;


/** 
*  name: TIM1
*  description: Advanced timer
*  group: TIMs
*  address: 0x40012C00
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40012C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_217 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40012C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_218 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS2 : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS2N : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS3 : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS3N : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS4 : 1;  ///< Output Idle state 4, reset value: 0x0
    uint32_t _RESERVED_219 : 1;
    uint32_t OIS5 : 1;  ///< Output Idle state 5, reset value: 0x0
    uint32_t _RESERVED_220 : 1;
    uint32_t OIS6 : 1;  ///< Output Idle state 6, reset value: 0x0
    uint32_t _RESERVED_221 : 1;
    uint32_t MMS2 : 4;  ///< Master mode selection 2, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40012C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS3 : 1;  ///< Slave mode selection bit 3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x40012C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40012C10
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t B2IF : 1;  ///< Break 2 interrupt flag, reset value: 0x0
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
    uint32_t _RESERVED_222 : 3;
    uint32_t C5IF : 1;  ///< Capture/Compare 5 interrupt flag, reset value: 0x0
    uint32_t C6IF : 1;  ///< Capture/Compare 6 interrupt flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40012C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM1_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
    uint32_t B2G : 1;  ///< Break 2 generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40012C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output Compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output Compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output Compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output Compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output Compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_223 : 7;
    uint32_t OC2M_3 : 1;  ///< Output Compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40012C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PCS : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t IC2PCS : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40012C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t OC4CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output Compare 3 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_224 : 7;
    uint32_t OC4M_3 : 1;  ///< Output Compare 4 mode bit 3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x40012C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40012C20
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC2NE : 1;  ///< Capture/Compare 2 complementary output enable, reset value: 0x0
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC3NE : 1;  ///< Capture/Compare 3 complementary output enable, reset value: 0x0
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_225 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 4 output Polarity, reset value: 0x0
    uint32_t CC5E : 1;  ///< Capture/Compare 5 output enable, reset value: 0x0
    uint32_t CC5P : 1;  ///< Capture/Compare 5 output Polarity, reset value: 0x0
    uint32_t _RESERVED_226 : 2;
    uint32_t CC6E : 1;  ///< Capture/Compare 6 output enable, reset value: 0x0
    uint32_t CC6P : 1;  ///< Capture/Compare 6 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40012C24
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM1_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_227 : 15;
    uint32_t UIFCPY : 1;  ///< UIF copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40012C28
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x40012C2C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40012C30
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_RCR_t {
    uint32_t REP : 16;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40012C34
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40012C38
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR2_t {
    uint32_t CCR2 : 16;  ///< Capture/Compare 2 value, reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x40012C3C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR3_t {
    uint32_t CCR3 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40012C40
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR4_t {
    uint32_t CCR4 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR4;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40012C44
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
    uint32_t BK2F : 4;  ///< Break 2 filter, reset value: 0x0
    uint32_t BK2E : 1;  ///< Break 2 enable, reset value: 0x0
    uint32_t BK2P : 1;  ///< Break 2 polarity, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40012C48
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_228 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x40012C4C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

  /** 
  * name: CCMR3_Output
  * description: capture/compare mode register 3 (output mode)
  * address: 0x40012C54
  * offset: 0x54
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCMR3_Output_t {
    uint32_t _RESERVED_229 : 2;
    uint32_t OC5FE : 1;  ///< Output compare 5 fast enable, reset value: 0x0
    uint32_t OC5PE : 1;  ///< Output compare 5 preload enable, reset value: 0x0
    uint32_t OC5M : 3;  ///< Output compare 5 mode, reset value: 0x0
    uint32_t OC5CE : 1;  ///< Output compare 5 clear enable, reset value: 0x0
    uint32_t _RESERVED_230 : 2;
    uint32_t OC6FE : 1;  ///< Output compare 6 fast enable, reset value: 0x0
    uint32_t OC6PE : 1;  ///< Output compare 6 preload enable, reset value: 0x0
    uint32_t OC6M : 3;  ///< Output compare 6 mode, reset value: 0x0
    uint32_t OC6CE : 1;  ///< Output compare 6 clear enable, reset value: 0x0
    uint32_t OC5M_3 : 1;  ///< Outout Compare 5 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_231 : 7;
    uint32_t OC6M_3 : 1;  ///< Outout Compare 6 mode bit 3, reset value: 0x0
  } CCMR3_Output;

  /** 
  * name: CCR5
  * description: capture/compare register 5
  * address: 0x40012C58
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR5_t {
    uint32_t CCR5 : 16;  ///< Capture/Compare 5 value, reset value: 0x0
    uint32_t _RESERVED_232 : 13;
    uint32_t GC5C1 : 1;  ///< Group Channel 5 and Channel 1, reset value: 0x0
    uint32_t GC5C2 : 1;  ///< Group Channel 5 and Channel 2, reset value: 0x0
    uint32_t GC5C3 : 1;  ///< Group Channel 5 and Channel 3, reset value: 0x0
  } CCR5;

  /** 
  * name: CCR6
  * description: capture/compare register 6
  * address: 0x40012C5C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_CCR6_t {
    uint32_t CCR6 : 16;  ///< Capture/Compare 6 value, reset value: 0x0
  } CCR6;

  /** 
  * name: OR
  * description: option registers
  * address: 0x40012C60
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM1_OR_t {
    uint32_t TIM1_ETR_ADC1_RMP : 2;  ///< TIM1_ETR_ADC1 remapping capability, reset value: 0x0
    uint32_t TIM1_ETR_ADC4_RMP : 2;  ///< TIM1_ETR_ADC4 remapping capability, reset value: 0x0
  } OR;

} TIM1_t;


/** 
*  name: SPI1
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40013000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40013000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI1_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40013004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI1_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40013008
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct SPI1_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x4001300C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI1_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40013010
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct SPI1_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40013014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI1_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40013018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI1_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x4001301C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI1_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_233 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40013020
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct SPI1_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} SPI1_t;


/** 
*  name: TIM8
*  description: Advanced-timers
*  group: TIMs
*  address: 0x40013400
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40013400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_234 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40013404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_235 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS2 : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS2N : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS3 : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS3N : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS4 : 1;  ///< Output Idle state 4, reset value: 0x0
    uint32_t _RESERVED_236 : 1;
    uint32_t OIS5 : 1;  ///< Output Idle state 5, reset value: 0x0
    uint32_t _RESERVED_237 : 1;
    uint32_t OIS6 : 1;  ///< Output Idle state 6, reset value: 0x0
    uint32_t _RESERVED_238 : 1;
    uint32_t MMS2 : 4;  ///< Master mode selection 2, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40013408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS3 : 1;  ///< Slave mode selection bit 3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4001340C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40013410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t B2IF : 1;  ///< Break 2 interrupt flag, reset value: 0x0
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
    uint32_t _RESERVED_239 : 3;
    uint32_t C5IF : 1;  ///< Capture/Compare 5 interrupt flag, reset value: 0x0
    uint32_t C6IF : 1;  ///< Capture/Compare 6 interrupt flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40013414
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM8_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
    uint32_t B2G : 1;  ///< Break 2 generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40013418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output Compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output Compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output Compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output Compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output Compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_240 : 7;
    uint32_t OC2M_3 : 1;  ///< Output Compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40013418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PCS : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t IC2PCS : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register (output mode)
  * address: 0x4001341C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t OC4CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output Compare 3 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_241 : 7;
    uint32_t OC4M_3 : 1;  ///< Output Compare 4 mode bit 3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x4001341C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40013420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC2NE : 1;  ///< Capture/Compare 2 complementary output enable, reset value: 0x0
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC3NE : 1;  ///< Capture/Compare 3 complementary output enable, reset value: 0x0
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_242 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 4 output Polarity, reset value: 0x0
    uint32_t CC5E : 1;  ///< Capture/Compare 5 output enable, reset value: 0x0
    uint32_t CC5P : 1;  ///< Capture/Compare 5 output Polarity, reset value: 0x0
    uint32_t _RESERVED_243 : 2;
    uint32_t CC6E : 1;  ///< Capture/Compare 6 output enable, reset value: 0x0
    uint32_t CC6P : 1;  ///< Capture/Compare 6 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40013424
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM8_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_244 : 15;
    uint32_t UIFCPY : 1;  ///< UIF copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40013428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4001342C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40013430
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_RCR_t {
    uint32_t REP : 16;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40013434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40013438
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR2_t {
    uint32_t CCR2 : 16;  ///< Capture/Compare 2 value, reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x4001343C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR3_t {
    uint32_t CCR3 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40013440
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR4_t {
    uint32_t CCR4 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR4;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40013444
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
    uint32_t BK2F : 4;  ///< Break 2 filter, reset value: 0x0
    uint32_t BK2E : 1;  ///< Break 2 enable, reset value: 0x0
    uint32_t BK2P : 1;  ///< Break 2 polarity, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40013448
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_245 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4001344C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

  /** 
  * name: CCMR3_Output
  * description: capture/compare mode register 3 (output mode)
  * address: 0x40013454
  * offset: 0x54
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCMR3_Output_t {
    uint32_t _RESERVED_246 : 2;
    uint32_t OC5FE : 1;  ///< Output compare 5 fast enable, reset value: 0x0
    uint32_t OC5PE : 1;  ///< Output compare 5 preload enable, reset value: 0x0
    uint32_t OC5M : 3;  ///< Output compare 5 mode, reset value: 0x0
    uint32_t OC5CE : 1;  ///< Output compare 5 clear enable, reset value: 0x0
    uint32_t _RESERVED_247 : 2;
    uint32_t OC6FE : 1;  ///< Output compare 6 fast enable, reset value: 0x0
    uint32_t OC6PE : 1;  ///< Output compare 6 preload enable, reset value: 0x0
    uint32_t OC6M : 3;  ///< Output compare 6 mode, reset value: 0x0
    uint32_t OC6CE : 1;  ///< Output compare 6 clear enable, reset value: 0x0
    uint32_t OC5M_3 : 1;  ///< Outout Compare 5 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_248 : 7;
    uint32_t OC6M_3 : 1;  ///< Outout Compare 6 mode bit 3, reset value: 0x0
  } CCMR3_Output;

  /** 
  * name: CCR5
  * description: capture/compare register 5
  * address: 0x40013458
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR5_t {
    uint32_t CCR5 : 16;  ///< Capture/Compare 5 value, reset value: 0x0
    uint32_t _RESERVED_249 : 13;
    uint32_t GC5C1 : 1;  ///< Group Channel 5 and Channel 1, reset value: 0x0
    uint32_t GC5C2 : 1;  ///< Group Channel 5 and Channel 2, reset value: 0x0
    uint32_t GC5C3 : 1;  ///< Group Channel 5 and Channel 3, reset value: 0x0
  } CCR5;

  /** 
  * name: CCR6
  * description: capture/compare register 6
  * address: 0x4001345C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_CCR6_t {
    uint32_t CCR6 : 16;  ///< Capture/Compare 6 value, reset value: 0x0
  } CCR6;

  /** 
  * name: OR
  * description: option registers
  * address: 0x40013460
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM8_OR_t {
    uint32_t TIM8_ETR_ADC2_RMP : 2;  ///< TIM8_ETR_ADC2 remapping capability, reset value: 0x0
    uint32_t TIM8_ETR_ADC3_RMP : 2;  ///< TIM8_ETR_ADC3 remapping capability, reset value: 0x0
  } OR;

} TIM8_t;


/** 
*  name: USART1
*  description: Universal synchronous asynchronous receiver transmitter
*  group: USART
*  address: 0x40013800
*/
typedef struct{
  /** 
  * name: CR1
  * description: Control register 1
  * address: 0x40013800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_CR1_t {
    uint32_t UE : 1;  ///< USART enable, reset value: 0x0
    uint32_t UESM : 1;  ///< USART enable in Stop mode, reset value: 0x0
    uint32_t RE : 1;  ///< Receiver enable, reset value: 0x0
    uint32_t TE : 1;  ///< Transmitter enable, reset value: 0x0
    uint32_t IDLEIE : 1;  ///< IDLE interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RXNE interrupt enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transmission complete interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< interrupt enable, reset value: 0x0
    uint32_t PEIE : 1;  ///< PE interrupt enable, reset value: 0x0
    uint32_t PS : 1;  ///< Parity selection, reset value: 0x0
    uint32_t PCE : 1;  ///< Parity control enable, reset value: 0x0
    uint32_t WAKE : 1;  ///< Receiver wakeup method, reset value: 0x0
    uint32_t M : 1;  ///< Word length, reset value: 0x0
    uint32_t MME : 1;  ///< Mute mode enable, reset value: 0x0
    uint32_t CMIE : 1;  ///< Character match interrupt enable, reset value: 0x0
    uint32_t OVER8 : 1;  ///< Oversampling mode, reset value: 0x0
    uint32_t DEDT : 5;  ///< Driver Enable deassertion time, reset value: 0x0
    uint32_t DEAT : 5;  ///< Driver Enable assertion time, reset value: 0x0
    uint32_t RTOIE : 1;  ///< Receiver timeout interrupt enable, reset value: 0x0
    uint32_t EOBIE : 1;  ///< End of Block interrupt enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: Control register 2
  * address: 0x40013804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_CR2_t {
    uint32_t _RESERVED_250 : 4;
    uint32_t ADDM7 : 1;  ///< 7-bit Address Detection/4-bit Address Detection, reset value: 0x0
    uint32_t LBDL : 1;  ///< LIN break detection length, reset value: 0x0
    uint32_t LBDIE : 1;  ///< LIN break detection interrupt enable, reset value: 0x0
    uint32_t _RESERVED_251 : 1;
    uint32_t LBCL : 1;  ///< Last bit clock pulse, reset value: 0x0
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t CLKEN : 1;  ///< Clock enable, reset value: 0x0
    uint32_t STOP : 2;  ///< STOP bits, reset value: 0x0
    uint32_t LINEN : 1;  ///< LIN mode enable, reset value: 0x0
    uint32_t SWAP : 1;  ///< Swap TX/RX pins, reset value: 0x0
    uint32_t RXINV : 1;  ///< RX pin active level inversion, reset value: 0x0
    uint32_t TXINV : 1;  ///< TX pin active level inversion, reset value: 0x0
    uint32_t DATAINV : 1;  ///< Binary data inversion, reset value: 0x0
    uint32_t MSBFIRST : 1;  ///< Most significant bit first, reset value: 0x0
    uint32_t ABREN : 1;  ///< Auto baud rate enable, reset value: 0x0
    uint32_t ABRMOD : 2;  ///< Auto baud rate mode, reset value: 0x0
    uint32_t RTOEN : 1;  ///< Receiver timeout enable, reset value: 0x0
    uint32_t ADD0 : 4;  ///< Address of the USART node, reset value: 0x0
    uint32_t ADD4 : 4;  ///< Address of the USART node, reset value: 0x0
  } CR2;

  /** 
  * name: CR3
  * description: Control register 3
  * address: 0x40013808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_CR3_t {
    uint32_t EIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t IREN : 1;  ///< IrDA mode enable, reset value: 0x0
    uint32_t IRLP : 1;  ///< IrDA low-power, reset value: 0x0
    uint32_t HDSEL : 1;  ///< Half-duplex selection, reset value: 0x0
    uint32_t NACK : 1;  ///< Smartcard NACK enable, reset value: 0x0
    uint32_t SCEN : 1;  ///< Smartcard mode enable, reset value: 0x0
    uint32_t DMAR : 1;  ///< DMA enable receiver, reset value: 0x0
    uint32_t DMAT : 1;  ///< DMA enable transmitter, reset value: 0x0
    uint32_t RTSE : 1;  ///< RTS enable, reset value: 0x0
    uint32_t CTSE : 1;  ///< CTS enable, reset value: 0x0
    uint32_t CTSIE : 1;  ///< CTS interrupt enable, reset value: 0x0
    uint32_t ONEBIT : 1;  ///< One sample bit method enable, reset value: 0x0
    uint32_t OVRDIS : 1;  ///< Overrun Disable, reset value: 0x0
    uint32_t DDRE : 1;  ///< DMA Disable on Reception Error, reset value: 0x0
    uint32_t DEM : 1;  ///< Driver enable mode, reset value: 0x0
    uint32_t DEP : 1;  ///< Driver enable polarity selection, reset value: 0x0
    uint32_t _RESERVED_252 : 1;
    uint32_t SCARCNT : 3;  ///< Smartcard auto-retry count, reset value: 0x0
    uint32_t WUS : 2;  ///< Wakeup from Stop mode interrupt flag selection, reset value: 0x0
    uint32_t WUFIE : 1;  ///< Wakeup from Stop mode interrupt enable, reset value: 0x0
  } CR3;

  /** 
  * name: BRR
  * description: Baud rate register
  * address: 0x4001380C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_BRR_t {
    uint32_t DIV_Fraction : 4;  ///< fraction of USARTDIV, reset value: 0x0
    uint32_t DIV_Mantissa : 12;  ///< mantissa of USARTDIV, reset value: 0x0
  } BRR;

  /** 
  * name: GTPR
  * description: Guard time and prescaler register
  * address: 0x40013810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_GTPR_t {
    uint32_t PSC : 8;  ///< Prescaler value, reset value: 0x0
    uint32_t GT : 8;  ///< Guard time value, reset value: 0x0
  } GTPR;

  /** 
  * name: RTOR
  * description: Receiver timeout register
  * address: 0x40013814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_RTOR_t {
    uint32_t RTO : 24;  ///< Receiver timeout value, reset value: 0x0
    uint32_t BLEN : 8;  ///< Block Length, reset value: 0x0
  } RTOR;

  /** 
  * name: RQR
  * description: Request register
  * address: 0x40013818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_RQR_t {
    uint32_t ABRRQ : 1;  ///< Auto baud rate request, reset value: 0x0
    uint32_t SBKRQ : 1;  ///< Send break request, reset value: 0x0
    uint32_t MMRQ : 1;  ///< Mute mode request, reset value: 0x0
    uint32_t RXFRQ : 1;  ///< Receive data flush request, reset value: 0x0
    uint32_t TXFRQ : 1;  ///< Transmit data flush request, reset value: 0x0
  } RQR;

  /** 
  * name: ISR
  * description: Interrupt & status register
  * address: 0x4001381C
  * offset: 0x1C
  * reset value: 0x000000C0
  * access: read-only
  */
  struct USART1_ISR_t {
    uint32_t PE : 1;  ///< Parity error, reset value: 0x0
    uint32_t FE : 1;  ///< Framing error, reset value: 0x0
    uint32_t NF : 1;  ///< Noise detected flag, reset value: 0x0
    uint32_t ORE : 1;  ///< Overrun error, reset value: 0x0
    uint32_t IDLE : 1;  ///< Idle line detected, reset value: 0x0
    uint32_t RXNE : 1;  ///< Read data register not empty, reset value: 0x0
    uint32_t TC : 1;  ///< Transmission complete, reset value: 0x1
    uint32_t TXE : 1;  ///< Transmit data register empty, reset value: 0x1
    uint32_t LBDF : 1;  ///< LIN break detection flag, reset value: 0x0
    uint32_t CTSIF : 1;  ///< CTS interrupt flag, reset value: 0x0
    uint32_t CTS : 1;  ///< CTS flag, reset value: 0x0
    uint32_t RTOF : 1;  ///< Receiver timeout, reset value: 0x0
    uint32_t EOBF : 1;  ///< End of block flag, reset value: 0x0
    uint32_t _RESERVED_253 : 1;
    uint32_t ABRE : 1;  ///< Auto baud rate error, reset value: 0x0
    uint32_t ABRF : 1;  ///< Auto baud rate flag, reset value: 0x0
    uint32_t BUSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t CMF : 1;  ///< character match flag, reset value: 0x0
    uint32_t SBKF : 1;  ///< Send break flag, reset value: 0x0
    uint32_t RWU : 1;  ///< Receiver wakeup from Mute mode, reset value: 0x0
    uint32_t WUF : 1;  ///< Wakeup from Stop mode flag, reset value: 0x0
    uint32_t TEACK : 1;  ///< Transmit enable acknowledge flag, reset value: 0x0
    uint32_t REACK : 1;  ///< Receive enable acknowledge flag, reset value: 0x0
  } ISR;

  /** 
  * name: ICR
  * description: Interrupt flag clear register
  * address: 0x40013820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_ICR_t {
    uint32_t PECF : 1;  ///< Parity error clear flag, reset value: 0x0
    uint32_t FECF : 1;  ///< Framing error clear flag, reset value: 0x0
    uint32_t NCF : 1;  ///< Noise detected clear flag, reset value: 0x0
    uint32_t ORECF : 1;  ///< Overrun error clear flag, reset value: 0x0
    uint32_t IDLECF : 1;  ///< Idle line detected clear flag, reset value: 0x0
    uint32_t _RESERVED_254 : 1;
    uint32_t TCCF : 1;  ///< Transmission complete clear flag, reset value: 0x0
    uint32_t _RESERVED_255 : 1;
    uint32_t LBDCF : 1;  ///< LIN break detection clear flag, reset value: 0x0
    uint32_t CTSCF : 1;  ///< CTS clear flag, reset value: 0x0
    uint32_t _RESERVED_256 : 1;
    uint32_t RTOCF : 1;  ///< Receiver timeout clear flag, reset value: 0x0
    uint32_t EOBCF : 1;  ///< End of timeout clear flag, reset value: 0x0
    uint32_t _RESERVED_257 : 4;
    uint32_t CMCF : 1;  ///< Character match clear flag, reset value: 0x0
    uint32_t _RESERVED_258 : 2;
    uint32_t WUCF : 1;  ///< Wakeup from Stop mode clear flag, reset value: 0x0
  } ICR;

  /** 
  * name: RDR
  * description: Receive data register
  * address: 0x40013824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-only
  */
  struct USART1_RDR_t {
    uint32_t RDR : 9;  ///< Receive data value, reset value: 0x0
  } RDR;

  /** 
  * name: TDR
  * description: Transmit data register
  * address: 0x40013828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct USART1_TDR_t {
    uint32_t TDR : 9;  ///< Transmit data value, reset value: 0x0
  } TDR;

} USART1_t;


/** 
*  name: SPI4
*  description: Serial peripheral interface/Inter-IC sound
*  group: SPI
*  address: 0x40013C00
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40013C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI4_CR1_t {
    uint32_t CPHA : 1;  ///< Clock phase, reset value: 0x0
    uint32_t CPOL : 1;  ///< Clock polarity, reset value: 0x0
    uint32_t MSTR : 1;  ///< Master selection, reset value: 0x0
    uint32_t BR : 3;  ///< Baud rate control, reset value: 0x0
    uint32_t SPE : 1;  ///< SPI enable, reset value: 0x0
    uint32_t LSBFIRST : 1;  ///< Frame format, reset value: 0x0
    uint32_t SSI : 1;  ///< Internal slave select, reset value: 0x0
    uint32_t SSM : 1;  ///< Software slave management, reset value: 0x0
    uint32_t RXONLY : 1;  ///< Receive only, reset value: 0x0
    uint32_t CRCL : 1;  ///< CRC length, reset value: 0x0
    uint32_t CRCNEXT : 1;  ///< CRC transfer next, reset value: 0x0
    uint32_t CRCEN : 1;  ///< Hardware CRC calculation enable, reset value: 0x0
    uint32_t BIDIOE : 1;  ///< Output enable in bidirectional mode, reset value: 0x0
    uint32_t BIDIMODE : 1;  ///< Bidirectional data mode enable, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40013C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI4_CR2_t {
    uint32_t RXDMAEN : 1;  ///< Rx buffer DMA enable, reset value: 0x0
    uint32_t TXDMAEN : 1;  ///< Tx buffer DMA enable, reset value: 0x0
    uint32_t SSOE : 1;  ///< SS output enable, reset value: 0x0
    uint32_t NSSP : 1;  ///< NSS pulse management, reset value: 0x0
    uint32_t FRF : 1;  ///< Frame format, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t RXNEIE : 1;  ///< RX buffer not empty interrupt enable, reset value: 0x0
    uint32_t TXEIE : 1;  ///< Tx buffer empty interrupt enable, reset value: 0x0
    uint32_t DS : 4;  ///< Data size, reset value: 0x0
    uint32_t FRXTH : 1;  ///< FIFO reception threshold, reset value: 0x0
    uint32_t LDMA_RX : 1;  ///< Last DMA transfer for reception, reset value: 0x0
    uint32_t LDMA_TX : 1;  ///< Last DMA transfer for transmission, reset value: 0x0
  } CR2;

  /** 
  * name: SR
  * description: status register
  * address: 0x40013C08
  * offset: 0x8
  * reset value: 0x00000002
  * access: 
  */
  struct SPI4_SR_t {
    uint32_t RXNE : 1;  ///< Receive buffer not empty, reset value: 0x0
    uint32_t TXE : 1;  ///< Transmit buffer empty, reset value: 0x1
    uint32_t CHSIDE : 1;  ///< Channel side, reset value: 0x0
    uint32_t UDR : 1;  ///< Underrun flag, reset value: 0x0
    uint32_t CRCERR : 1;  ///< CRC error flag, reset value: 0x0
    uint32_t MODF : 1;  ///< Mode fault, reset value: 0x0
    uint32_t OVR : 1;  ///< Overrun flag, reset value: 0x0
    uint32_t BSY : 1;  ///< Busy flag, reset value: 0x0
    uint32_t TIFRFE : 1;  ///< TI frame format error, reset value: 0x0
    uint32_t FRLVL : 2;  ///< FIFO reception level, reset value: 0x0
    uint32_t FTLVL : 2;  ///< FIFO transmission level, reset value: 0x0
  } SR;

  /** 
  * name: DR
  * description: data register
  * address: 0x40013C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI4_DR_t {
    uint32_t DR : 16;  ///< Data register, reset value: 0x0
  } DR;

  /** 
  * name: CRCPR
  * description: CRC polynomial register
  * address: 0x40013C10
  * offset: 0x10
  * reset value: 0x00000007
  * access: read-write
  */
  struct SPI4_CRCPR_t {
    uint32_t CRCPOLY : 16;  ///< CRC polynomial register, reset value: 0x7
  } CRCPR;

  /** 
  * name: RXCRCR
  * description: RX CRC register
  * address: 0x40013C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI4_RXCRCR_t {
    uint32_t RxCRC : 16;  ///< Rx CRC register, reset value: 0x0
  } RXCRCR;

  /** 
  * name: TXCRCR
  * description: TX CRC register
  * address: 0x40013C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-only
  */
  struct SPI4_TXCRCR_t {
    uint32_t TxCRC : 16;  ///< Tx CRC register, reset value: 0x0
  } TXCRCR;

  /** 
  * name: I2SCFGR
  * description: I2S configuration register
  * address: 0x40013C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct SPI4_I2SCFGR_t {
    uint32_t CHLEN : 1;  ///< Channel length (number of bits per audio channel), reset value: 0x0
    uint32_t DATLEN : 2;  ///< Data length to be transferred, reset value: 0x0
    uint32_t CKPOL : 1;  ///< Steady state clock polarity, reset value: 0x0
    uint32_t I2SSTD : 2;  ///< I2S standard selection, reset value: 0x0
    uint32_t _RESERVED_259 : 1;
    uint32_t PCMSYNC : 1;  ///< PCM frame synchronization, reset value: 0x0
    uint32_t I2SCFG : 2;  ///< I2S configuration mode, reset value: 0x0
    uint32_t I2SE : 1;  ///< I2S Enable, reset value: 0x0
    uint32_t I2SMOD : 1;  ///< I2S mode selection, reset value: 0x0
  } I2SCFGR;

  /** 
  * name: I2SPR
  * description: I2S prescaler register
  * address: 0x40013C20
  * offset: 0x20
  * reset value: 0x00000010
  * access: read-write
  */
  struct SPI4_I2SPR_t {
    uint32_t I2SDIV : 8;  ///< I2S Linear prescaler, reset value: 0x10
    uint32_t ODD : 1;  ///< Odd factor for the prescaler, reset value: 0x0
    uint32_t MCKOE : 1;  ///< Master clock output enable, reset value: 0x0
  } I2SPR;

} SPI4_t;


/** 
*  name: TIM15
*  description: General purpose timers
*  group: TIMs
*  address: 0x40014000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40014000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t _RESERVED_260 : 3;
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_261 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40014004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_262 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS2 : 1;  ///< Output Idle state 2, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40014008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t _RESERVED_263 : 1;
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t _RESERVED_264 : 8;
    uint32_t SMS_3 : 1;  ///< Slave mode selection bit 3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4001400C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_265 : 2;
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_266 : 2;
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40014010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_267 : 2;
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t _RESERVED_268 : 1;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40014014
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM15_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t _RESERVED_269 : 2;
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40014018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t _RESERVED_270 : 1;
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output Compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output Compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output Compare 2 mode, reset value: 0x0
    uint32_t _RESERVED_271 : 1;
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_272 : 7;
    uint32_t OC2M_3 : 1;  ///< Output Compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40014018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t IC2PSC : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40014020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t _RESERVED_273 : 1;
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40014024
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM15_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_274 : 15;
    uint32_t UIFCPY : 1;  ///< UIF copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40014028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4001402C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40014030
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_RCR_t {
    uint32_t REP : 8;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40014034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40014038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_CCR2_t {
    uint32_t CCR2 : 16;  ///< Capture/Compare 2 value, reset value: 0x0
  } CCR2;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40014044
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40014048
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_275 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4001404C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM15_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

} TIM15_t;


/** 
*  name: TIM16
*  description: General-purpose-timers
*  group: TIMs
*  address: 0x40014400
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40014400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t _RESERVED_276 : 3;
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_277 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40014404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_278 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t _RESERVED_279 : 4;
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
  } CR2;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4001440C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_280 : 3;
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_281 : 3;
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40014410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_282 : 3;
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t _RESERVED_283 : 1;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40014414
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM16_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t _RESERVED_284 : 3;
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40014418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t _RESERVED_285 : 9;
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40014418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40014420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40014424
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM16_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_286 : 15;
    uint32_t UIFCPY : 1;  ///< UIF Copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40014428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4001442C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40014430
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_RCR_t {
    uint32_t REP : 8;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40014434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40014444
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40014448
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_287 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4001444C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

  /** 
  * name: OR
  * description: option register
  * address: 0x40014450
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM16_OR_t {
  } OR;

} TIM16_t;


/** 
*  name: TIM17
*  description: General purpose timer
*  group: TIMs
*  address: 0x40014800
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40014800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t _RESERVED_288 : 3;
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_289 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40014804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_290 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t _RESERVED_291 : 4;
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
  } CR2;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4001480C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t _RESERVED_292 : 3;
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t _RESERVED_293 : 3;
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40014810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t _RESERVED_294 : 3;
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t _RESERVED_295 : 1;
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40014814
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM17_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t _RESERVED_296 : 3;
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40014818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t _RESERVED_297 : 9;
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40014818
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PSC : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40014820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40014824
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM17_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_298 : 15;
    uint32_t UIFCPY : 1;  ///< UIF Copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40014828
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4001482C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40014830
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_RCR_t {
    uint32_t REP : 8;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40014834
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40014844
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40014848
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_299 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4001484C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM17_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

} TIM17_t;


/** 
*  name: TIM20
*  description: Advanced timer
*  group: TIMs
*  address: 0x40015000
*/
typedef struct{
  /** 
  * name: CR1
  * description: control register 1
  * address: 0x40015000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CR1_t {
    uint32_t CEN : 1;  ///< Counter enable, reset value: 0x0
    uint32_t UDIS : 1;  ///< Update disable, reset value: 0x0
    uint32_t URS : 1;  ///< Update request source, reset value: 0x0
    uint32_t OPM : 1;  ///< One-pulse mode, reset value: 0x0
    uint32_t DIR : 1;  ///< Direction, reset value: 0x0
    uint32_t CMS : 2;  ///< Center-aligned mode selection, reset value: 0x0
    uint32_t ARPE : 1;  ///< Auto-reload preload enable, reset value: 0x0
    uint32_t CKD : 2;  ///< Clock division, reset value: 0x0
    uint32_t _RESERVED_300 : 1;
    uint32_t UIFREMAP : 1;  ///< UIF status bit remapping, reset value: 0x0
  } CR1;

  /** 
  * name: CR2
  * description: control register 2
  * address: 0x40015004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CR2_t {
    uint32_t CCPC : 1;  ///< Capture/compare preloaded control, reset value: 0x0
    uint32_t _RESERVED_301 : 1;
    uint32_t CCUS : 1;  ///< Capture/compare control update selection, reset value: 0x0
    uint32_t CCDS : 1;  ///< Capture/compare DMA selection, reset value: 0x0
    uint32_t MMS : 3;  ///< Master mode selection, reset value: 0x0
    uint32_t TI1S : 1;  ///< TI1 selection, reset value: 0x0
    uint32_t OIS1 : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS1N : 1;  ///< Output Idle state 1, reset value: 0x0
    uint32_t OIS2 : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS2N : 1;  ///< Output Idle state 2, reset value: 0x0
    uint32_t OIS3 : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS3N : 1;  ///< Output Idle state 3, reset value: 0x0
    uint32_t OIS4 : 1;  ///< Output Idle state 4, reset value: 0x0
    uint32_t _RESERVED_302 : 1;
    uint32_t OIS5 : 1;  ///< Output Idle state 5, reset value: 0x0
    uint32_t _RESERVED_303 : 1;
    uint32_t OIS6 : 1;  ///< Output Idle state 6, reset value: 0x0
    uint32_t _RESERVED_304 : 1;
    uint32_t MMS2 : 4;  ///< Master mode selection 2, reset value: 0x0
  } CR2;

  /** 
  * name: SMCR
  * description: slave mode control register
  * address: 0x40015008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_SMCR_t {
    uint32_t SMS : 3;  ///< Slave mode selection, reset value: 0x0
    uint32_t OCCS : 1;  ///< OCREF clear selection, reset value: 0x0
    uint32_t TS : 3;  ///< Trigger selection, reset value: 0x0
    uint32_t MSM : 1;  ///< Master/Slave mode, reset value: 0x0
    uint32_t ETF : 4;  ///< External trigger filter, reset value: 0x0
    uint32_t ETPS : 2;  ///< External trigger prescaler, reset value: 0x0
    uint32_t ECE : 1;  ///< External clock enable, reset value: 0x0
    uint32_t ETP : 1;  ///< External trigger polarity, reset value: 0x0
    uint32_t SMS3 : 1;  ///< Slave mode selection bit 3, reset value: 0x0
  } SMCR;

  /** 
  * name: DIER
  * description: DMA/Interrupt enable register
  * address: 0x4001500C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_DIER_t {
    uint32_t UIE : 1;  ///< Update interrupt enable, reset value: 0x0
    uint32_t CC1IE : 1;  ///< Capture/Compare 1 interrupt enable, reset value: 0x0
    uint32_t CC2IE : 1;  ///< Capture/Compare 2 interrupt enable, reset value: 0x0
    uint32_t CC3IE : 1;  ///< Capture/Compare 3 interrupt enable, reset value: 0x0
    uint32_t CC4IE : 1;  ///< Capture/Compare 4 interrupt enable, reset value: 0x0
    uint32_t COMIE : 1;  ///< COM interrupt enable, reset value: 0x0
    uint32_t TIE : 1;  ///< Trigger interrupt enable, reset value: 0x0
    uint32_t BIE : 1;  ///< Break interrupt enable, reset value: 0x0
    uint32_t UDE : 1;  ///< Update DMA request enable, reset value: 0x0
    uint32_t CC1DE : 1;  ///< Capture/Compare 1 DMA request enable, reset value: 0x0
    uint32_t CC2DE : 1;  ///< Capture/Compare 2 DMA request enable, reset value: 0x0
    uint32_t CC3DE : 1;  ///< Capture/Compare 3 DMA request enable, reset value: 0x0
    uint32_t CC4DE : 1;  ///< Capture/Compare 4 DMA request enable, reset value: 0x0
    uint32_t COMDE : 1;  ///< COM DMA request enable, reset value: 0x0
    uint32_t TDE : 1;  ///< Trigger DMA request enable, reset value: 0x0
  } DIER;

  /** 
  * name: SR
  * description: status register
  * address: 0x40015010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_SR_t {
    uint32_t UIF : 1;  ///< Update interrupt flag, reset value: 0x0
    uint32_t CC1IF : 1;  ///< Capture/compare 1 interrupt flag, reset value: 0x0
    uint32_t CC2IF : 1;  ///< Capture/Compare 2 interrupt flag, reset value: 0x0
    uint32_t CC3IF : 1;  ///< Capture/Compare 3 interrupt flag, reset value: 0x0
    uint32_t CC4IF : 1;  ///< Capture/Compare 4 interrupt flag, reset value: 0x0
    uint32_t COMIF : 1;  ///< COM interrupt flag, reset value: 0x0
    uint32_t TIF : 1;  ///< Trigger interrupt flag, reset value: 0x0
    uint32_t BIF : 1;  ///< Break interrupt flag, reset value: 0x0
    uint32_t B2IF : 1;  ///< Break 2 interrupt flag, reset value: 0x0
    uint32_t CC1OF : 1;  ///< Capture/Compare 1 overcapture flag, reset value: 0x0
    uint32_t CC2OF : 1;  ///< Capture/compare 2 overcapture flag, reset value: 0x0
    uint32_t CC3OF : 1;  ///< Capture/Compare 3 overcapture flag, reset value: 0x0
    uint32_t CC4OF : 1;  ///< Capture/Compare 4 overcapture flag, reset value: 0x0
    uint32_t _RESERVED_305 : 3;
    uint32_t C5IF : 1;  ///< Capture/Compare 5 interrupt flag, reset value: 0x0
    uint32_t C6IF : 1;  ///< Capture/Compare 6 interrupt flag, reset value: 0x0
  } SR;

  /** 
  * name: EGR
  * description: event generation register
  * address: 0x40015014
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct TIM20_EGR_t {
    uint32_t UG : 1;  ///< Update generation, reset value: 0x0
    uint32_t CC1G : 1;  ///< Capture/compare 1 generation, reset value: 0x0
    uint32_t CC2G : 1;  ///< Capture/compare 2 generation, reset value: 0x0
    uint32_t CC3G : 1;  ///< Capture/compare 3 generation, reset value: 0x0
    uint32_t CC4G : 1;  ///< Capture/compare 4 generation, reset value: 0x0
    uint32_t COMG : 1;  ///< Capture/Compare control update generation, reset value: 0x0
    uint32_t TG : 1;  ///< Trigger generation, reset value: 0x0
    uint32_t BG : 1;  ///< Break generation, reset value: 0x0
    uint32_t B2G : 1;  ///< Break 2 generation, reset value: 0x0
  } EGR;

  /** 
  * name: CCMR1_Output
  * description: capture/compare mode register (output mode)
  * address: 0x40015018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCMR1_Output_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t OC1FE : 1;  ///< Output Compare 1 fast enable, reset value: 0x0
    uint32_t OC1PE : 1;  ///< Output Compare 1 preload enable, reset value: 0x0
    uint32_t OC1M : 3;  ///< Output Compare 1 mode, reset value: 0x0
    uint32_t OC1CE : 1;  ///< Output Compare 1 clear enable, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t OC2FE : 1;  ///< Output Compare 2 fast enable, reset value: 0x0
    uint32_t OC2PE : 1;  ///< Output Compare 2 preload enable, reset value: 0x0
    uint32_t OC2M : 3;  ///< Output Compare 2 mode, reset value: 0x0
    uint32_t OC2CE : 1;  ///< Output Compare 2 clear enable, reset value: 0x0
    uint32_t OC1M_3 : 1;  ///< Output Compare 1 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_306 : 7;
    uint32_t OC2M_3 : 1;  ///< Output Compare 2 mode bit 3, reset value: 0x0
  } CCMR1_Output;

  /** 
  * name: CCMR1_Input
  * description: capture/compare mode register 1 (input mode)
  * address: 0x40015018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCMR1_Input_t {
    uint32_t CC1S : 2;  ///< Capture/Compare 1 selection, reset value: 0x0
    uint32_t IC1PCS : 2;  ///< Input capture 1 prescaler, reset value: 0x0
    uint32_t IC1F : 4;  ///< Input capture 1 filter, reset value: 0x0
    uint32_t CC2S : 2;  ///< Capture/Compare 2 selection, reset value: 0x0
    uint32_t IC2PCS : 2;  ///< Input capture 2 prescaler, reset value: 0x0
    uint32_t IC2F : 4;  ///< Input capture 2 filter, reset value: 0x0
  } CCMR1_Input;

  /** 
  * name: CCMR2_Output
  * description: capture/compare mode register (output mode)
  * address: 0x4001501C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCMR2_Output_t {
    uint32_t CC3S : 2;  ///< Capture/Compare 3 selection, reset value: 0x0
    uint32_t OC3FE : 1;  ///< Output compare 3 fast enable, reset value: 0x0
    uint32_t OC3PE : 1;  ///< Output compare 3 preload enable, reset value: 0x0
    uint32_t OC3M : 3;  ///< Output compare 3 mode, reset value: 0x0
    uint32_t OC3CE : 1;  ///< Output compare 3 clear enable, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t OC4FE : 1;  ///< Output compare 4 fast enable, reset value: 0x0
    uint32_t OC4PE : 1;  ///< Output compare 4 preload enable, reset value: 0x0
    uint32_t OC4M : 3;  ///< Output compare 4 mode, reset value: 0x0
    uint32_t OC4CE : 1;  ///< Output compare 4 clear enable, reset value: 0x0
    uint32_t OC3M_3 : 1;  ///< Output Compare 3 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_307 : 7;
    uint32_t OC4M_3 : 1;  ///< Output Compare 4 mode bit 3, reset value: 0x0
  } CCMR2_Output;

  /** 
  * name: CCMR2_Input
  * description: capture/compare mode register 2 (input mode)
  * address: 0x4001501C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCMR2_Input_t {
    uint32_t CC3S : 2;  ///< Capture/compare 3 selection, reset value: 0x0
    uint32_t IC3PSC : 2;  ///< Input capture 3 prescaler, reset value: 0x0
    uint32_t IC3F : 4;  ///< Input capture 3 filter, reset value: 0x0
    uint32_t CC4S : 2;  ///< Capture/Compare 4 selection, reset value: 0x0
    uint32_t IC4PSC : 2;  ///< Input capture 4 prescaler, reset value: 0x0
    uint32_t IC4F : 4;  ///< Input capture 4 filter, reset value: 0x0
  } CCMR2_Input;

  /** 
  * name: CCER
  * description: capture/compare enable register
  * address: 0x40015020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCER_t {
    uint32_t CC1E : 1;  ///< Capture/Compare 1 output enable, reset value: 0x0
    uint32_t CC1P : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC1NE : 1;  ///< Capture/Compare 1 complementary output enable, reset value: 0x0
    uint32_t CC1NP : 1;  ///< Capture/Compare 1 output Polarity, reset value: 0x0
    uint32_t CC2E : 1;  ///< Capture/Compare 2 output enable, reset value: 0x0
    uint32_t CC2P : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC2NE : 1;  ///< Capture/Compare 2 complementary output enable, reset value: 0x0
    uint32_t CC2NP : 1;  ///< Capture/Compare 2 output Polarity, reset value: 0x0
    uint32_t CC3E : 1;  ///< Capture/Compare 3 output enable, reset value: 0x0
    uint32_t CC3P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC3NE : 1;  ///< Capture/Compare 3 complementary output enable, reset value: 0x0
    uint32_t CC3NP : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t CC4E : 1;  ///< Capture/Compare 4 output enable, reset value: 0x0
    uint32_t CC4P : 1;  ///< Capture/Compare 3 output Polarity, reset value: 0x0
    uint32_t _RESERVED_308 : 1;
    uint32_t CC4NP : 1;  ///< Capture/Compare 4 output Polarity, reset value: 0x0
    uint32_t CC5E : 1;  ///< Capture/Compare 5 output enable, reset value: 0x0
    uint32_t CC5P : 1;  ///< Capture/Compare 5 output Polarity, reset value: 0x0
    uint32_t _RESERVED_309 : 2;
    uint32_t CC6E : 1;  ///< Capture/Compare 6 output enable, reset value: 0x0
    uint32_t CC6P : 1;  ///< Capture/Compare 6 output Polarity, reset value: 0x0
  } CCER;

  /** 
  * name: CNT
  * description: counter
  * address: 0x40015024
  * offset: 0x24
  * reset value: 0x00000000
  * access: 
  */
  struct TIM20_CNT_t {
    uint32_t CNT : 16;  ///< counter value, reset value: 0x0
    uint32_t _RESERVED_310 : 15;
    uint32_t UIFCPY : 1;  ///< UIF copy, reset value: 0x0
  } CNT;

  /** 
  * name: PSC
  * description: prescaler
  * address: 0x40015028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_PSC_t {
    uint32_t PSC : 16;  ///< Prescaler value, reset value: 0x0
  } PSC;

  /** 
  * name: ARR
  * description: auto-reload register
  * address: 0x4001502C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_ARR_t {
    uint32_t ARR : 16;  ///< Auto-reload value, reset value: 0x0
  } ARR;

  /** 
  * name: RCR
  * description: repetition counter register
  * address: 0x40015030
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_RCR_t {
    uint32_t REP : 16;  ///< Repetition counter value, reset value: 0x0
  } RCR;

  /** 
  * name: CCR1
  * description: capture/compare register 1
  * address: 0x40015034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR1_t {
    uint32_t CCR1 : 16;  ///< Capture/Compare 1 value, reset value: 0x0
  } CCR1;

  /** 
  * name: CCR2
  * description: capture/compare register 2
  * address: 0x40015038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR2_t {
    uint32_t CCR2 : 16;  ///< Capture/Compare 2 value, reset value: 0x0
  } CCR2;

  /** 
  * name: CCR3
  * description: capture/compare register 3
  * address: 0x4001503C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR3_t {
    uint32_t CCR3 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR3;

  /** 
  * name: CCR4
  * description: capture/compare register 4
  * address: 0x40015040
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR4_t {
    uint32_t CCR4 : 16;  ///< Capture/Compare 3 value, reset value: 0x0
  } CCR4;

  /** 
  * name: BDTR
  * description: break and dead-time register
  * address: 0x40015044
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_BDTR_t {
    uint32_t DTG : 8;  ///< Dead-time generator setup, reset value: 0x0
    uint32_t LOCK : 2;  ///< Lock configuration, reset value: 0x0
    uint32_t OSSI : 1;  ///< Off-state selection for Idle mode, reset value: 0x0
    uint32_t OSSR : 1;  ///< Off-state selection for Run mode, reset value: 0x0
    uint32_t BKE : 1;  ///< Break enable, reset value: 0x0
    uint32_t BKP : 1;  ///< Break polarity, reset value: 0x0
    uint32_t AOE : 1;  ///< Automatic output enable, reset value: 0x0
    uint32_t MOE : 1;  ///< Main output enable, reset value: 0x0
    uint32_t BKF : 4;  ///< Break filter, reset value: 0x0
    uint32_t BK2F : 4;  ///< Break 2 filter, reset value: 0x0
    uint32_t BK2E : 1;  ///< Break 2 enable, reset value: 0x0
    uint32_t BK2P : 1;  ///< Break 2 polarity, reset value: 0x0
  } BDTR;

  /** 
  * name: DCR
  * description: DMA control register
  * address: 0x40015048
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_DCR_t {
    uint32_t DBA : 5;  ///< DMA base address, reset value: 0x0
    uint32_t _RESERVED_311 : 3;
    uint32_t DBL : 5;  ///< DMA burst length, reset value: 0x0
  } DCR;

  /** 
  * name: DMAR
  * description: DMA address for full transfer
  * address: 0x4001504C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_DMAR_t {
    uint32_t DMAB : 16;  ///< DMA register for burst accesses, reset value: 0x0
  } DMAR;

  /** 
  * name: CCMR3_Output
  * description: capture/compare mode register 3 (output mode)
  * address: 0x40015054
  * offset: 0x54
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCMR3_Output_t {
    uint32_t _RESERVED_312 : 2;
    uint32_t OC5FE : 1;  ///< Output compare 5 fast enable, reset value: 0x0
    uint32_t OC5PE : 1;  ///< Output compare 5 preload enable, reset value: 0x0
    uint32_t OC5M : 3;  ///< Output compare 5 mode, reset value: 0x0
    uint32_t OC5CE : 1;  ///< Output compare 5 clear enable, reset value: 0x0
    uint32_t _RESERVED_313 : 2;
    uint32_t OC6FE : 1;  ///< Output compare 6 fast enable, reset value: 0x0
    uint32_t OC6PE : 1;  ///< Output compare 6 preload enable, reset value: 0x0
    uint32_t OC6M : 3;  ///< Output compare 6 mode, reset value: 0x0
    uint32_t OC6CE : 1;  ///< Output compare 6 clear enable, reset value: 0x0
    uint32_t OC5M_3 : 1;  ///< Outout Compare 5 mode bit 3, reset value: 0x0
    uint32_t _RESERVED_314 : 7;
    uint32_t OC6M_3 : 1;  ///< Outout Compare 6 mode bit 3, reset value: 0x0
  } CCMR3_Output;

  /** 
  * name: CCR5
  * description: capture/compare register 5
  * address: 0x40015058
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR5_t {
    uint32_t CCR5 : 16;  ///< Capture/Compare 5 value, reset value: 0x0
    uint32_t _RESERVED_315 : 13;
    uint32_t GC5C1 : 1;  ///< Group Channel 5 and Channel 1, reset value: 0x0
    uint32_t GC5C2 : 1;  ///< Group Channel 5 and Channel 2, reset value: 0x0
    uint32_t GC5C3 : 1;  ///< Group Channel 5 and Channel 3, reset value: 0x0
  } CCR5;

  /** 
  * name: CCR6
  * description: capture/compare register 6
  * address: 0x4001505C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_CCR6_t {
    uint32_t CCR6 : 16;  ///< Capture/Compare 6 value, reset value: 0x0
  } CCR6;

  /** 
  * name: OR
  * description: option registers
  * address: 0x40015060
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct TIM20_OR_t {
    uint32_t TIM1_ETR_ADC1_RMP : 2;  ///< TIM1_ETR_ADC1 remapping capability, reset value: 0x0
    uint32_t TIM1_ETR_ADC4_RMP : 2;  ///< TIM1_ETR_ADC4 remapping capability, reset value: 0x0
  } OR;

} TIM20_t;


/** 
*  name: DMA1
*  description: DMA controller 1
*  group: DMA
*  address: 0x40020000
*/
typedef struct{
  /** 
  * name: ISR
  * description: DMA interrupt status register (DMA_ISR)
  * address: 0x40020000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-only
  */
  struct DMA1_ISR_t {
    uint32_t GIF1 : 1;  ///< Channel 1 Global interrupt flag, reset value: 0x0
    uint32_t TCIF1 : 1;  ///< Channel 1 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF1 : 1;  ///< Channel 1 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF1 : 1;  ///< Channel 1 Transfer Error flag, reset value: 0x0
    uint32_t GIF2 : 1;  ///< Channel 2 Global interrupt flag, reset value: 0x0
    uint32_t TCIF2 : 1;  ///< Channel 2 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF2 : 1;  ///< Channel 2 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF2 : 1;  ///< Channel 2 Transfer Error flag, reset value: 0x0
    uint32_t GIF3 : 1;  ///< Channel 3 Global interrupt flag, reset value: 0x0
    uint32_t TCIF3 : 1;  ///< Channel 3 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF3 : 1;  ///< Channel 3 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF3 : 1;  ///< Channel 3 Transfer Error flag, reset value: 0x0
    uint32_t GIF4 : 1;  ///< Channel 4 Global interrupt flag, reset value: 0x0
    uint32_t TCIF4 : 1;  ///< Channel 4 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF4 : 1;  ///< Channel 4 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF4 : 1;  ///< Channel 4 Transfer Error flag, reset value: 0x0
    uint32_t GIF5 : 1;  ///< Channel 5 Global interrupt flag, reset value: 0x0
    uint32_t TCIF5 : 1;  ///< Channel 5 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF5 : 1;  ///< Channel 5 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF5 : 1;  ///< Channel 5 Transfer Error flag, reset value: 0x0
    uint32_t GIF6 : 1;  ///< Channel 6 Global interrupt flag, reset value: 0x0
    uint32_t TCIF6 : 1;  ///< Channel 6 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF6 : 1;  ///< Channel 6 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF6 : 1;  ///< Channel 6 Transfer Error flag, reset value: 0x0
    uint32_t GIF7 : 1;  ///< Channel 7 Global interrupt flag, reset value: 0x0
    uint32_t TCIF7 : 1;  ///< Channel 7 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF7 : 1;  ///< Channel 7 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF7 : 1;  ///< Channel 7 Transfer Error flag, reset value: 0x0
  } ISR;

  /** 
  * name: IFCR
  * description: DMA interrupt flag clear register (DMA_IFCR)
  * address: 0x40020004
  * offset: 0x4
  * reset value: 0x00000000
  * access: write-only
  */
  struct DMA1_IFCR_t {
    uint32_t CGIF1 : 1;  ///< Channel 1 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF1 : 1;  ///< Channel 1 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF1 : 1;  ///< Channel 1 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF1 : 1;  ///< Channel 1 Transfer Error clear, reset value: 0x0
    uint32_t CGIF2 : 1;  ///< Channel 2 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF2 : 1;  ///< Channel 2 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF2 : 1;  ///< Channel 2 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF2 : 1;  ///< Channel 2 Transfer Error clear, reset value: 0x0
    uint32_t CGIF3 : 1;  ///< Channel 3 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF3 : 1;  ///< Channel 3 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF3 : 1;  ///< Channel 3 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF3 : 1;  ///< Channel 3 Transfer Error clear, reset value: 0x0
    uint32_t CGIF4 : 1;  ///< Channel 4 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF4 : 1;  ///< Channel 4 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF4 : 1;  ///< Channel 4 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF4 : 1;  ///< Channel 4 Transfer Error clear, reset value: 0x0
    uint32_t CGIF5 : 1;  ///< Channel 5 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF5 : 1;  ///< Channel 5 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF5 : 1;  ///< Channel 5 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF5 : 1;  ///< Channel 5 Transfer Error clear, reset value: 0x0
    uint32_t CGIF6 : 1;  ///< Channel 6 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF6 : 1;  ///< Channel 6 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF6 : 1;  ///< Channel 6 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF6 : 1;  ///< Channel 6 Transfer Error clear, reset value: 0x0
    uint32_t CGIF7 : 1;  ///< Channel 7 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF7 : 1;  ///< Channel 7 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF7 : 1;  ///< Channel 7 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF7 : 1;  ///< Channel 7 Transfer Error clear, reset value: 0x0
  } IFCR;

  /** 
  * name: CCR1
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR1_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR1;

  /** 
  * name: CNDTR1
  * description: DMA channel 1 number of data register
  * address: 0x4002000C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR1_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR1;

  /** 
  * name: CPAR1
  * description: DMA channel 1 peripheral address register
  * address: 0x40020010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR1_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR1;

  /** 
  * name: CMAR1
  * description: DMA channel 1 memory address register
  * address: 0x40020014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR1_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR1;

  /** 
  * name: CCR2
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x4002001C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR2_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR2;

  /** 
  * name: CNDTR2
  * description: DMA channel 2 number of data register
  * address: 0x40020020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR2_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR2;

  /** 
  * name: CPAR2
  * description: DMA channel 2 peripheral address register
  * address: 0x40020024
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR2_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR2;

  /** 
  * name: CMAR2
  * description: DMA channel 2 memory address register
  * address: 0x40020028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR2_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR2;

  /** 
  * name: CCR3
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020030
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR3_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR3;

  /** 
  * name: CNDTR3
  * description: DMA channel 3 number of data register
  * address: 0x40020034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR3_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR3;

  /** 
  * name: CPAR3
  * description: DMA channel 3 peripheral address register
  * address: 0x40020038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR3_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR3;

  /** 
  * name: CMAR3
  * description: DMA channel 3 memory address register
  * address: 0x4002003C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR3_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR3;

  /** 
  * name: CCR4
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020044
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR4_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR4;

  /** 
  * name: CNDTR4
  * description: DMA channel 4 number of data register
  * address: 0x40020048
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR4_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR4;

  /** 
  * name: CPAR4
  * description: DMA channel 4 peripheral address register
  * address: 0x4002004C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR4_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR4;

  /** 
  * name: CMAR4
  * description: DMA channel 4 memory address register
  * address: 0x40020050
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR4_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR4;

  /** 
  * name: CCR5
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020058
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR5_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR5;

  /** 
  * name: CNDTR5
  * description: DMA channel 5 number of data register
  * address: 0x4002005C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR5_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR5;

  /** 
  * name: CPAR5
  * description: DMA channel 5 peripheral address register
  * address: 0x40020060
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR5_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR5;

  /** 
  * name: CMAR5
  * description: DMA channel 5 memory address register
  * address: 0x40020064
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR5_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR5;

  /** 
  * name: CCR6
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x4002006C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR6_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR6;

  /** 
  * name: CNDTR6
  * description: DMA channel 6 number of data register
  * address: 0x40020070
  * offset: 0x70
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR6_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR6;

  /** 
  * name: CPAR6
  * description: DMA channel 6 peripheral address register
  * address: 0x40020074
  * offset: 0x74
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR6_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR6;

  /** 
  * name: CMAR6
  * description: DMA channel 6 memory address register
  * address: 0x40020078
  * offset: 0x78
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR6_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR6;

  /** 
  * name: CCR7
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020080
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CCR7_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR7;

  /** 
  * name: CNDTR7
  * description: DMA channel 7 number of data register
  * address: 0x40020084
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CNDTR7_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR7;

  /** 
  * name: CPAR7
  * description: DMA channel 7 peripheral address register
  * address: 0x40020088
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CPAR7_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR7;

  /** 
  * name: CMAR7
  * description: DMA channel 7 memory address register
  * address: 0x4002008C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA1_CMAR7_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR7;

} DMA1_t;


/** 
*  name: DMA2
*  description: DMA controller 1
*  group: DMA
*  address: 0x40020400
*/
typedef struct{
  /** 
  * name: ISR
  * description: DMA interrupt status register (DMA_ISR)
  * address: 0x40020400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-only
  */
  struct DMA2_ISR_t {
    uint32_t GIF1 : 1;  ///< Channel 1 Global interrupt flag, reset value: 0x0
    uint32_t TCIF1 : 1;  ///< Channel 1 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF1 : 1;  ///< Channel 1 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF1 : 1;  ///< Channel 1 Transfer Error flag, reset value: 0x0
    uint32_t GIF2 : 1;  ///< Channel 2 Global interrupt flag, reset value: 0x0
    uint32_t TCIF2 : 1;  ///< Channel 2 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF2 : 1;  ///< Channel 2 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF2 : 1;  ///< Channel 2 Transfer Error flag, reset value: 0x0
    uint32_t GIF3 : 1;  ///< Channel 3 Global interrupt flag, reset value: 0x0
    uint32_t TCIF3 : 1;  ///< Channel 3 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF3 : 1;  ///< Channel 3 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF3 : 1;  ///< Channel 3 Transfer Error flag, reset value: 0x0
    uint32_t GIF4 : 1;  ///< Channel 4 Global interrupt flag, reset value: 0x0
    uint32_t TCIF4 : 1;  ///< Channel 4 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF4 : 1;  ///< Channel 4 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF4 : 1;  ///< Channel 4 Transfer Error flag, reset value: 0x0
    uint32_t GIF5 : 1;  ///< Channel 5 Global interrupt flag, reset value: 0x0
    uint32_t TCIF5 : 1;  ///< Channel 5 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF5 : 1;  ///< Channel 5 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF5 : 1;  ///< Channel 5 Transfer Error flag, reset value: 0x0
    uint32_t GIF6 : 1;  ///< Channel 6 Global interrupt flag, reset value: 0x0
    uint32_t TCIF6 : 1;  ///< Channel 6 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF6 : 1;  ///< Channel 6 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF6 : 1;  ///< Channel 6 Transfer Error flag, reset value: 0x0
    uint32_t GIF7 : 1;  ///< Channel 7 Global interrupt flag, reset value: 0x0
    uint32_t TCIF7 : 1;  ///< Channel 7 Transfer Complete flag, reset value: 0x0
    uint32_t HTIF7 : 1;  ///< Channel 7 Half Transfer Complete flag, reset value: 0x0
    uint32_t TEIF7 : 1;  ///< Channel 7 Transfer Error flag, reset value: 0x0
  } ISR;

  /** 
  * name: IFCR
  * description: DMA interrupt flag clear register (DMA_IFCR)
  * address: 0x40020404
  * offset: 0x4
  * reset value: 0x00000000
  * access: write-only
  */
  struct DMA2_IFCR_t {
    uint32_t CGIF1 : 1;  ///< Channel 1 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF1 : 1;  ///< Channel 1 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF1 : 1;  ///< Channel 1 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF1 : 1;  ///< Channel 1 Transfer Error clear, reset value: 0x0
    uint32_t CGIF2 : 1;  ///< Channel 2 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF2 : 1;  ///< Channel 2 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF2 : 1;  ///< Channel 2 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF2 : 1;  ///< Channel 2 Transfer Error clear, reset value: 0x0
    uint32_t CGIF3 : 1;  ///< Channel 3 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF3 : 1;  ///< Channel 3 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF3 : 1;  ///< Channel 3 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF3 : 1;  ///< Channel 3 Transfer Error clear, reset value: 0x0
    uint32_t CGIF4 : 1;  ///< Channel 4 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF4 : 1;  ///< Channel 4 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF4 : 1;  ///< Channel 4 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF4 : 1;  ///< Channel 4 Transfer Error clear, reset value: 0x0
    uint32_t CGIF5 : 1;  ///< Channel 5 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF5 : 1;  ///< Channel 5 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF5 : 1;  ///< Channel 5 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF5 : 1;  ///< Channel 5 Transfer Error clear, reset value: 0x0
    uint32_t CGIF6 : 1;  ///< Channel 6 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF6 : 1;  ///< Channel 6 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF6 : 1;  ///< Channel 6 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF6 : 1;  ///< Channel 6 Transfer Error clear, reset value: 0x0
    uint32_t CGIF7 : 1;  ///< Channel 7 Global interrupt clear, reset value: 0x0
    uint32_t CTCIF7 : 1;  ///< Channel 7 Transfer Complete clear, reset value: 0x0
    uint32_t CHTIF7 : 1;  ///< Channel 7 Half Transfer clear, reset value: 0x0
    uint32_t CTEIF7 : 1;  ///< Channel 7 Transfer Error clear, reset value: 0x0
  } IFCR;

  /** 
  * name: CCR1
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR1_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR1;

  /** 
  * name: CNDTR1
  * description: DMA channel 1 number of data register
  * address: 0x4002040C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR1_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR1;

  /** 
  * name: CPAR1
  * description: DMA channel 1 peripheral address register
  * address: 0x40020410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR1_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR1;

  /** 
  * name: CMAR1
  * description: DMA channel 1 memory address register
  * address: 0x40020414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR1_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR1;

  /** 
  * name: CCR2
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x4002041C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR2_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR2;

  /** 
  * name: CNDTR2
  * description: DMA channel 2 number of data register
  * address: 0x40020420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR2_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR2;

  /** 
  * name: CPAR2
  * description: DMA channel 2 peripheral address register
  * address: 0x40020424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR2_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR2;

  /** 
  * name: CMAR2
  * description: DMA channel 2 memory address register
  * address: 0x40020428
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR2_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR2;

  /** 
  * name: CCR3
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020430
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR3_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR3;

  /** 
  * name: CNDTR3
  * description: DMA channel 3 number of data register
  * address: 0x40020434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR3_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR3;

  /** 
  * name: CPAR3
  * description: DMA channel 3 peripheral address register
  * address: 0x40020438
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR3_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR3;

  /** 
  * name: CMAR3
  * description: DMA channel 3 memory address register
  * address: 0x4002043C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR3_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR3;

  /** 
  * name: CCR4
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020444
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR4_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR4;

  /** 
  * name: CNDTR4
  * description: DMA channel 4 number of data register
  * address: 0x40020448
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR4_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR4;

  /** 
  * name: CPAR4
  * description: DMA channel 4 peripheral address register
  * address: 0x4002044C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR4_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR4;

  /** 
  * name: CMAR4
  * description: DMA channel 4 memory address register
  * address: 0x40020450
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR4_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR4;

  /** 
  * name: CCR5
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020458
  * offset: 0x58
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR5_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR5;

  /** 
  * name: CNDTR5
  * description: DMA channel 5 number of data register
  * address: 0x4002045C
  * offset: 0x5C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR5_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR5;

  /** 
  * name: CPAR5
  * description: DMA channel 5 peripheral address register
  * address: 0x40020460
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR5_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR5;

  /** 
  * name: CMAR5
  * description: DMA channel 5 memory address register
  * address: 0x40020464
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR5_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR5;

  /** 
  * name: CCR6
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x4002046C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR6_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR6;

  /** 
  * name: CNDTR6
  * description: DMA channel 6 number of data register
  * address: 0x40020470
  * offset: 0x70
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR6_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR6;

  /** 
  * name: CPAR6
  * description: DMA channel 6 peripheral address register
  * address: 0x40020474
  * offset: 0x74
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR6_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR6;

  /** 
  * name: CMAR6
  * description: DMA channel 6 memory address register
  * address: 0x40020478
  * offset: 0x78
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR6_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR6;

  /** 
  * name: CCR7
  * description: DMA channel configuration register (DMA_CCR)
  * address: 0x40020480
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CCR7_t {
    uint32_t EN : 1;  ///< Channel enable, reset value: 0x0
    uint32_t TCIE : 1;  ///< Transfer complete interrupt enable, reset value: 0x0
    uint32_t HTIE : 1;  ///< Half Transfer interrupt enable, reset value: 0x0
    uint32_t TEIE : 1;  ///< Transfer error interrupt enable, reset value: 0x0
    uint32_t DIR : 1;  ///< Data transfer direction, reset value: 0x0
    uint32_t CIRC : 1;  ///< Circular mode, reset value: 0x0
    uint32_t PINC : 1;  ///< Peripheral increment mode, reset value: 0x0
    uint32_t MINC : 1;  ///< Memory increment mode, reset value: 0x0
    uint32_t PSIZE : 2;  ///< Peripheral size, reset value: 0x0
    uint32_t MSIZE : 2;  ///< Memory size, reset value: 0x0
    uint32_t PL : 2;  ///< Channel Priority level, reset value: 0x0
    uint32_t MEM2MEM : 1;  ///< Memory to memory mode, reset value: 0x0
  } CCR7;

  /** 
  * name: CNDTR7
  * description: DMA channel 7 number of data register
  * address: 0x40020484
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CNDTR7_t {
    uint32_t NDT : 16;  ///< Number of data to transfer, reset value: 0x0
  } CNDTR7;

  /** 
  * name: CPAR7
  * description: DMA channel 7 peripheral address register
  * address: 0x40020488
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CPAR7_t {
    uint32_t PA : 32;  ///< Peripheral address, reset value: 0x0
  } CPAR7;

  /** 
  * name: CMAR7
  * description: DMA channel 7 memory address register
  * address: 0x4002048C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-write
  */
  struct DMA2_CMAR7_t {
    uint32_t MA : 32;  ///< Memory address, reset value: 0x0
  } CMAR7;

} DMA2_t;


/** 
*  name: RCC
*  description: Reset and clock control
*  group: RCC
*  address: 0x40021000
*/
typedef struct{
  /** 
  * name: CR
  * description: Clock control register
  * address: 0x40021000
  * offset: 0x0
  * reset value: 0x00000083
  * access: 
  */
  struct RCC_CR_t {
    uint32_t HSION : 1;  ///< Internal High Speed clock enable, reset value: 0x1
    uint32_t HSIRDY : 1;  ///< Internal High Speed clock ready flag, reset value: 0x1
    uint32_t _RESERVED_316 : 1;
    uint32_t HSITRIM : 5;  ///< Internal High Speed clock trimming, reset value: 0x10
    uint32_t HSICAL : 8;  ///< Internal High Speed clock Calibration, reset value: 0x0
    uint32_t HSEON : 1;  ///< External High Speed clock enable, reset value: 0x0
    uint32_t HSERDY : 1;  ///< External High Speed clock ready flag, reset value: 0x0
    uint32_t HSEBYP : 1;  ///< External High Speed clock Bypass, reset value: 0x0
    uint32_t CSSON : 1;  ///< Clock Security System enable, reset value: 0x0
    uint32_t _RESERVED_317 : 4;
    uint32_t PLLON : 1;  ///< PLL enable, reset value: 0x0
    uint32_t PLLRDY : 1;  ///< PLL clock ready flag, reset value: 0x0
  } CR;

  /** 
  * name: CFGR
  * description: Clock configuration register (RCC_CFGR)
  * address: 0x40021004
  * offset: 0x4
  * reset value: 0x00000000
  * access: 
  */
  struct RCC_CFGR_t {
    uint32_t SW : 2;  ///< System clock Switch, reset value: 0x0
    uint32_t SWS : 2;  ///< System Clock Switch Status, reset value: 0x0
    uint32_t HPRE : 4;  ///< AHB prescaler, reset value: 0x0
    uint32_t PPRE1 : 3;  ///< APB Low speed prescaler (APB1), reset value: 0x0
    uint32_t PPRE2 : 3;  ///< APB high speed prescaler (APB2), reset value: 0x0
    uint32_t _RESERVED_318 : 1;
    uint32_t PLLSRC : 2;  ///< PLL entry clock source, reset value: 0x0
    uint32_t PLLXTPRE : 1;  ///< HSE divider for PLL entry, reset value: 0x0
    uint32_t PLLMUL : 4;  ///< PLL Multiplication Factor, reset value: 0x0
    uint32_t USBPRES : 1;  ///< USB prescaler, reset value: 0x0
    uint32_t I2SSRC : 1;  ///< I2S external clock source selection, reset value: 0x0
    uint32_t MCO : 3;  ///< Microcontroller clock output, reset value: 0x0
    uint32_t _RESERVED_319 : 1;
    uint32_t MCOF : 1;  ///< Microcontroller Clock Output Flag, reset value: 0x0
  } CFGR;

  /** 
  * name: CIR
  * description: Clock interrupt register (RCC_CIR)
  * address: 0x40021008
  * offset: 0x8
  * reset value: 0x00000000
  * access: 
  */
  struct RCC_CIR_t {
    uint32_t LSIRDYF : 1;  ///< LSI Ready Interrupt flag, reset value: 0x0
    uint32_t LSERDYF : 1;  ///< LSE Ready Interrupt flag, reset value: 0x0
    uint32_t HSIRDYF : 1;  ///< HSI Ready Interrupt flag, reset value: 0x0
    uint32_t HSERDYF : 1;  ///< HSE Ready Interrupt flag, reset value: 0x0
    uint32_t PLLRDYF : 1;  ///< PLL Ready Interrupt flag, reset value: 0x0
    uint32_t _RESERVED_320 : 2;
    uint32_t CSSF : 1;  ///< Clock Security System Interrupt flag, reset value: 0x0
    uint32_t LSIRDYIE : 1;  ///< LSI Ready Interrupt Enable, reset value: 0x0
    uint32_t LSERDYIE : 1;  ///< LSE Ready Interrupt Enable, reset value: 0x0
    uint32_t HSIRDYIE : 1;  ///< HSI Ready Interrupt Enable, reset value: 0x0
    uint32_t HSERDYIE : 1;  ///< HSE Ready Interrupt Enable, reset value: 0x0
    uint32_t PLLRDYIE : 1;  ///< PLL Ready Interrupt Enable, reset value: 0x0
    uint32_t _RESERVED_321 : 3;
    uint32_t LSIRDYC : 1;  ///< LSI Ready Interrupt Clear, reset value: 0x0
    uint32_t LSERDYC : 1;  ///< LSE Ready Interrupt Clear, reset value: 0x0
    uint32_t HSIRDYC : 1;  ///< HSI Ready Interrupt Clear, reset value: 0x0
    uint32_t HSERDYC : 1;  ///< HSE Ready Interrupt Clear, reset value: 0x0
    uint32_t PLLRDYC : 1;  ///< PLL Ready Interrupt Clear, reset value: 0x0
    uint32_t _RESERVED_322 : 2;
    uint32_t CSSC : 1;  ///< Clock security system interrupt clear, reset value: 0x0
  } CIR;

  /** 
  * name: APB2RSTR
  * description: APB2 peripheral reset register (RCC_APB2RSTR)
  * address: 0x4002100C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_APB2RSTR_t {
    uint32_t SYSCFGRST : 1;  ///< SYSCFG and COMP reset, reset value: 0x0
    uint32_t _RESERVED_323 : 10;
    uint32_t TIM1RST : 1;  ///< TIM1 timer reset, reset value: 0x0
    uint32_t SPI1RST : 1;  ///< SPI 1 reset, reset value: 0x0
    uint32_t TIM8RST : 1;  ///< TIM8 timer reset, reset value: 0x0
    uint32_t USART1RST : 1;  ///< USART1 reset, reset value: 0x0
    uint32_t _RESERVED_324 : 1;
    uint32_t TIM15RST : 1;  ///< TIM15 timer reset, reset value: 0x0
    uint32_t TIM16RST : 1;  ///< TIM16 timer reset, reset value: 0x0
    uint32_t TIM17RST : 1;  ///< TIM17 timer reset, reset value: 0x0
  } APB2RSTR;

  /** 
  * name: APB1RSTR
  * description: APB1 peripheral reset register (RCC_APB1RSTR)
  * address: 0x40021010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_APB1RSTR_t {
    uint32_t TIM2RST : 1;  ///< Timer 2 reset, reset value: 0x0
    uint32_t TIM3RST : 1;  ///< Timer 3 reset, reset value: 0x0
    uint32_t TIM4RST : 1;  ///< Timer 14 reset, reset value: 0x0
    uint32_t _RESERVED_325 : 1;
    uint32_t TIM6RST : 1;  ///< Timer 6 reset, reset value: 0x0
    uint32_t TIM7RST : 1;  ///< Timer 7 reset, reset value: 0x0
    uint32_t _RESERVED_326 : 5;
    uint32_t WWDGRST : 1;  ///< Window watchdog reset, reset value: 0x0
    uint32_t _RESERVED_327 : 2;
    uint32_t SPI2RST : 1;  ///< SPI2 reset, reset value: 0x0
    uint32_t SPI3RST : 1;  ///< SPI3 reset, reset value: 0x0
    uint32_t _RESERVED_328 : 1;
    uint32_t USART2RST : 1;  ///< USART 2 reset, reset value: 0x0
    uint32_t USART3RST : 1;  ///< USART3 reset, reset value: 0x0
    uint32_t UART4RST : 1;  ///< UART 4 reset, reset value: 0x0
    uint32_t UART5RST : 1;  ///< UART 5 reset, reset value: 0x0
    uint32_t I2C1RST : 1;  ///< I2C1 reset, reset value: 0x0
    uint32_t I2C2RST : 1;  ///< I2C2 reset, reset value: 0x0
    uint32_t USBRST : 1;  ///< USB reset, reset value: 0x0
    uint32_t _RESERVED_329 : 1;
    uint32_t CANRST : 1;  ///< CAN reset, reset value: 0x0
    uint32_t _RESERVED_330 : 2;
    uint32_t PWRRST : 1;  ///< Power interface reset, reset value: 0x0
    uint32_t DACRST : 1;  ///< DAC interface reset, reset value: 0x0
  } APB1RSTR;

  /** 
  * name: AHBENR
  * description: AHB Peripheral Clock enable register (RCC_AHBENR)
  * address: 0x40021014
  * offset: 0x14
  * reset value: 0x00000014
  * access: read-write
  */
  struct RCC_AHBENR_t {
    uint32_t DMAEN : 1;  ///< DMA1 clock enable, reset value: 0x0
    uint32_t DMA2EN : 1;  ///< DMA2 clock enable, reset value: 0x0
    uint32_t SRAMEN : 1;  ///< SRAM interface clock enable, reset value: 0x1
    uint32_t _RESERVED_331 : 1;
    uint32_t FLITFEN : 1;  ///< FLITF clock enable, reset value: 0x1
    uint32_t _RESERVED_332 : 1;
    uint32_t CRCEN : 1;  ///< CRC clock enable, reset value: 0x0
    uint32_t _RESERVED_333 : 10;
    uint32_t IOPAEN : 1;  ///< I/O port A clock enable, reset value: 0x0
    uint32_t IOPBEN : 1;  ///< I/O port B clock enable, reset value: 0x0
    uint32_t IOPCEN : 1;  ///< I/O port C clock enable, reset value: 0x0
    uint32_t IOPDEN : 1;  ///< I/O port D clock enable, reset value: 0x0
    uint32_t IOPEEN : 1;  ///< I/O port E clock enable, reset value: 0x0
    uint32_t IOPFEN : 1;  ///< I/O port F clock enable, reset value: 0x0
    uint32_t _RESERVED_334 : 1;
    uint32_t TSCEN : 1;  ///< Touch sensing controller clock enable, reset value: 0x0
    uint32_t _RESERVED_335 : 3;
    uint32_t ADC12EN : 1;  ///< ADC1 and ADC2 clock enable, reset value: 0x0
    uint32_t ADC34EN : 1;  ///< ADC3 and ADC4 clock enable, reset value: 0x0
  } AHBENR;

  /** 
  * name: APB2ENR
  * description: APB2 peripheral clock enable register (RCC_APB2ENR)
  * address: 0x40021018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_APB2ENR_t {
    uint32_t SYSCFGEN : 1;  ///< SYSCFG clock enable, reset value: 0x0
    uint32_t _RESERVED_336 : 10;
    uint32_t TIM1EN : 1;  ///< TIM1 Timer clock enable, reset value: 0x0
    uint32_t SPI1EN : 1;  ///< SPI 1 clock enable, reset value: 0x0
    uint32_t TIM8EN : 1;  ///< TIM8 Timer clock enable, reset value: 0x0
    uint32_t USART1EN : 1;  ///< USART1 clock enable, reset value: 0x0
    uint32_t _RESERVED_337 : 1;
    uint32_t TIM15EN : 1;  ///< TIM15 timer clock enable, reset value: 0x0
    uint32_t TIM16EN : 1;  ///< TIM16 timer clock enable, reset value: 0x0
    uint32_t TIM17EN : 1;  ///< TIM17 timer clock enable, reset value: 0x0
  } APB2ENR;

  /** 
  * name: APB1ENR
  * description: APB1 peripheral clock enable register (RCC_APB1ENR)
  * address: 0x4002101C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_APB1ENR_t {
    uint32_t TIM2EN : 1;  ///< Timer 2 clock enable, reset value: 0x0
    uint32_t TIM3EN : 1;  ///< Timer 3 clock enable, reset value: 0x0
    uint32_t TIM4EN : 1;  ///< Timer 4 clock enable, reset value: 0x0
    uint32_t _RESERVED_338 : 1;
    uint32_t TIM6EN : 1;  ///< Timer 6 clock enable, reset value: 0x0
    uint32_t TIM7EN : 1;  ///< Timer 7 clock enable, reset value: 0x0
    uint32_t _RESERVED_339 : 5;
    uint32_t WWDGEN : 1;  ///< Window watchdog clock enable, reset value: 0x0
    uint32_t _RESERVED_340 : 2;
    uint32_t SPI2EN : 1;  ///< SPI 2 clock enable, reset value: 0x0
    uint32_t SPI3EN : 1;  ///< SPI 3 clock enable, reset value: 0x0
    uint32_t _RESERVED_341 : 1;
    uint32_t USART2EN : 1;  ///< USART 2 clock enable, reset value: 0x0
    uint32_t _RESERVED_342 : 3;
    uint32_t I2C1EN : 1;  ///< I2C 1 clock enable, reset value: 0x0
    uint32_t I2C2EN : 1;  ///< I2C 2 clock enable, reset value: 0x0
    uint32_t USBEN : 1;  ///< USB clock enable, reset value: 0x0
    uint32_t _RESERVED_343 : 1;
    uint32_t CANEN : 1;  ///< CAN clock enable, reset value: 0x0
    uint32_t _RESERVED_344 : 2;
    uint32_t PWREN : 1;  ///< Power interface clock enable, reset value: 0x0
    uint32_t DACEN : 1;  ///< DAC interface clock enable, reset value: 0x0
  } APB1ENR;

  /** 
  * name: BDCR
  * description: Backup domain control register (RCC_BDCR)
  * address: 0x40021020
  * offset: 0x20
  * reset value: 0x00000000
  * access: 
  */
  struct RCC_BDCR_t {
    uint32_t LSEON : 1;  ///< External Low Speed oscillator enable, reset value: 0x0
    uint32_t LSERDY : 1;  ///< External Low Speed oscillator ready, reset value: 0x0
    uint32_t LSEBYP : 1;  ///< External Low Speed oscillator bypass, reset value: 0x0
    uint32_t LSEDRV : 2;  ///< LSE oscillator drive capability, reset value: 0x0
    uint32_t _RESERVED_345 : 3;
    uint32_t RTCSEL : 2;  ///< RTC clock source selection, reset value: 0x0
    uint32_t _RESERVED_346 : 5;
    uint32_t RTCEN : 1;  ///< RTC clock enable, reset value: 0x0
    uint32_t BDRST : 1;  ///< Backup domain software reset, reset value: 0x0
  } BDCR;

  /** 
  * name: CSR
  * description: Control/status register (RCC_CSR)
  * address: 0x40021024
  * offset: 0x24
  * reset value: 0x0C000000
  * access: 
  */
  struct RCC_CSR_t {
    uint32_t LSION : 1;  ///< Internal low speed oscillator enable, reset value: 0x0
    uint32_t LSIRDY : 1;  ///< Internal low speed oscillator ready, reset value: 0x0
    uint32_t _RESERVED_347 : 22;
    uint32_t RMVF : 1;  ///< Remove reset flag, reset value: 0x0
    uint32_t OBLRSTF : 1;  ///< Option byte loader reset flag, reset value: 0x0
    uint32_t PINRSTF : 1;  ///< PIN reset flag, reset value: 0x1
    uint32_t PORRSTF : 1;  ///< POR/PDR reset flag, reset value: 0x1
    uint32_t SFTRSTF : 1;  ///< Software reset flag, reset value: 0x0
    uint32_t IWDGRSTF : 1;  ///< Independent watchdog reset flag, reset value: 0x0
    uint32_t WWDGRSTF : 1;  ///< Window watchdog reset flag, reset value: 0x0
    uint32_t LPWRRSTF : 1;  ///< Low-power reset flag, reset value: 0x0
  } CSR;

  /** 
  * name: AHBRSTR
  * description: AHB peripheral reset register
  * address: 0x40021028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_AHBRSTR_t {
    uint32_t _RESERVED_348 : 17;
    uint32_t IOPARST : 1;  ///< I/O port A reset, reset value: 0x0
    uint32_t IOPBRST : 1;  ///< I/O port B reset, reset value: 0x0
    uint32_t IOPCRST : 1;  ///< I/O port C reset, reset value: 0x0
    uint32_t IOPDRST : 1;  ///< I/O port D reset, reset value: 0x0
    uint32_t IOPERST : 1;  ///< I/O port E reset, reset value: 0x0
    uint32_t IOPFRST : 1;  ///< I/O port F reset, reset value: 0x0
    uint32_t _RESERVED_349 : 1;
    uint32_t TSCRST : 1;  ///< Touch sensing controller reset, reset value: 0x0
    uint32_t _RESERVED_350 : 3;
    uint32_t ADC12RST : 1;  ///< ADC1 and ADC2 reset, reset value: 0x0
    uint32_t ADC34RST : 1;  ///< ADC3 and ADC4 reset, reset value: 0x0
  } AHBRSTR;

  /** 
  * name: CFGR2
  * description: Clock configuration register 2
  * address: 0x4002102C
  * offset: 0x2C
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_CFGR2_t {
    uint32_t PREDIV : 4;  ///< PREDIV division factor, reset value: 0x0
    uint32_t ADC12PRES : 5;  ///< ADC1 and ADC2 prescaler, reset value: 0x0
    uint32_t ADC34PRES : 5;  ///< ADC3 and ADC4 prescaler, reset value: 0x0
  } CFGR2;

  /** 
  * name: CFGR3
  * description: Clock configuration register 3
  * address: 0x40021030
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct RCC_CFGR3_t {
    uint32_t USART1SW : 2;  ///< USART1 clock source selection, reset value: 0x0
    uint32_t _RESERVED_351 : 2;
    uint32_t I2C1SW : 1;  ///< I2C1 clock source selection, reset value: 0x0
    uint32_t I2C2SW : 1;  ///< I2C2 clock source selection, reset value: 0x0
    uint32_t _RESERVED_352 : 2;
    uint32_t TIM1SW : 1;  ///< Timer1 clock source selection, reset value: 0x0
    uint32_t TIM8SW : 1;  ///< Timer8 clock source selection, reset value: 0x0
    uint32_t _RESERVED_353 : 6;
    uint32_t USART2SW : 2;  ///< USART2 clock source selection, reset value: 0x0
    uint32_t USART3SW : 2;  ///< USART3 clock source selection, reset value: 0x0
    uint32_t UART4SW : 2;  ///< UART4 clock source selection, reset value: 0x0
    uint32_t UART5SW : 2;  ///< UART5 clock source selection, reset value: 0x0
  } CFGR3;

} RCC_t;


/** 
*  name: Flash
*  description: Flash
*  group: Flash
*  address: 0x40022000
*/
typedef struct{
  /** 
  * name: ACR
  * description: Flash access control register
  * address: 0x40022000
  * offset: 0x0
  * reset value: 0x00000030
  * access: 
  */
  struct Flash_ACR_t {
    uint32_t LATENCY : 3;  ///< LATENCY, reset value: 0x0
    uint32_t _RESERVED_354 : 1;
    uint32_t PRFTBE : 1;  ///< PRFTBE, reset value: 0x1
    uint32_t PRFTBS : 1;  ///< PRFTBS, reset value: 0x1
  } ACR;

  /** 
  * name: KEYR
  * description: Flash key register
  * address: 0x40022004
  * offset: 0x4
  * reset value: 0x00000000
  * access: write-only
  */
  struct Flash_KEYR_t {
    uint32_t FKEYR : 32;  ///< Flash Key, reset value: 0x0
  } KEYR;

  /** 
  * name: OPTKEYR
  * description: Flash option key register
  * address: 0x40022008
  * offset: 0x8
  * reset value: 0x00000000
  * access: write-only
  */
  struct Flash_OPTKEYR_t {
    uint32_t OPTKEYR : 32;  ///< Option byte key, reset value: 0x0
  } OPTKEYR;

  /** 
  * name: SR
  * description: Flash status register
  * address: 0x4002200C
  * offset: 0xC
  * reset value: 0x00000000
  * access: 
  */
  struct Flash_SR_t {
    uint32_t BSY : 1;  ///< Busy, reset value: 0x0
    uint32_t _RESERVED_355 : 1;
    uint32_t PGERR : 1;  ///< Programming error, reset value: 0x0
    uint32_t _RESERVED_356 : 1;
    uint32_t WRPRT : 1;  ///< Write protection error, reset value: 0x0
    uint32_t EOP : 1;  ///< End of operation, reset value: 0x0
  } SR;

  /** 
  * name: CR
  * description: Flash control register
  * address: 0x40022010
  * offset: 0x10
  * reset value: 0x00000080
  * access: read-write
  */
  struct Flash_CR_t {
    uint32_t PG : 1;  ///< Programming, reset value: 0x0
    uint32_t PER : 1;  ///< Page erase, reset value: 0x0
    uint32_t MER : 1;  ///< Mass erase, reset value: 0x0
    uint32_t _RESERVED_357 : 1;
    uint32_t OPTPG : 1;  ///< Option byte programming, reset value: 0x0
    uint32_t OPTER : 1;  ///< Option byte erase, reset value: 0x0
    uint32_t STRT : 1;  ///< Start, reset value: 0x0
    uint32_t LOCK : 1;  ///< Lock, reset value: 0x1
    uint32_t _RESERVED_358 : 1;
    uint32_t OPTWRE : 1;  ///< Option bytes write enable, reset value: 0x0
    uint32_t ERRIE : 1;  ///< Error interrupt enable, reset value: 0x0
    uint32_t _RESERVED_359 : 1;
    uint32_t EOPIE : 1;  ///< End of operation interrupt enable, reset value: 0x0
    uint32_t FORCE_OPTLOAD : 1;  ///< Force option byte loading, reset value: 0x0
  } CR;

  /** 
  * name: AR
  * description: Flash address register
  * address: 0x40022014
  * offset: 0x14
  * reset value: 0x00000000
  * access: write-only
  */
  struct Flash_AR_t {
    uint32_t FAR : 32;  ///< Flash address, reset value: 0x0
  } AR;

  /** 
  * name: OBR
  * description: Option byte register
  * address: 0x4002201C
  * offset: 0x1C
  * reset value: 0xFFFFFF02
  * access: read-only
  */
  struct Flash_OBR_t {
    uint32_t OPTERR : 1;  ///< Option byte error, reset value: 0x0
    uint32_t LEVEL1_PROT : 1;  ///< Level 1 protection status, reset value: 0x1
    uint32_t LEVEL2_PROT : 1;  ///< Level 2 protection status, reset value: 0x0
    uint32_t _RESERVED_360 : 5;
    uint32_t WDG_SW : 1;  ///< WDG_SW, reset value: 0x1
    uint32_t nRST_STOP : 1;  ///< nRST_STOP, reset value: 0x1
    uint32_t nRST_STDBY : 1;  ///< nRST_STDBY, reset value: 0x1
    uint32_t _RESERVED_361 : 1;
    uint32_t BOOT1 : 1;  ///< BOOT1, reset value: 0x1
    uint32_t VDDA_MONITOR : 1;  ///< VDDA_MONITOR, reset value: 0x1
    uint32_t SRAM_PARITY_CHECK : 1;  ///< SRAM_PARITY_CHECK, reset value: 0x1
    uint32_t _RESERVED_362 : 1;
    uint32_t Data0 : 8;  ///< Data0, reset value: 0xFF
    uint32_t Data1 : 8;  ///< Data1, reset value: 0xFF
  } OBR;

  /** 
  * name: WRPR
  * description: Write protection register
  * address: 0x40022020
  * offset: 0x20
  * reset value: 0xFFFFFFFF
  * access: read-only
  */
  struct Flash_WRPR_t {
    uint32_t WRP : 32;  ///< Write protect, reset value: 0xFFFFFFFF
  } WRPR;

} Flash_t;


/** 
*  name: CRC
*  description: cyclic redundancy check calculation unit
*  group: CRC
*  address: 0x40023000
*/
typedef struct{
  /** 
  * name: DR
  * description: Data register
  * address: 0x40023000
  * offset: 0x0
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct CRC_DR_t {
    uint32_t DR : 32;  ///< Data register bits, reset value: 0xFFFFFFFF
  } DR;

  /** 
  * name: IDR
  * description: Independent data register
  * address: 0x40023004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct CRC_IDR_t {
    uint32_t IDR : 8;  ///< General-purpose 8-bit data register bits, reset value: 0x0
  } IDR;

  /** 
  * name: CR
  * description: Control register
  * address: 0x40023008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct CRC_CR_t {
    uint32_t RESET : 1;  ///< reset bit, reset value: 0x0
    uint32_t _RESERVED_363 : 2;
    uint32_t POLYSIZE : 2;  ///< Polynomial size, reset value: 0x0
    uint32_t REV_IN : 2;  ///< Reverse input data, reset value: 0x0
    uint32_t REV_OUT : 1;  ///< Reverse output data, reset value: 0x0
  } CR;

  /** 
  * name: INIT
  * description: Initial CRC value
  * address: 0x40023010
  * offset: 0x10
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct CRC_INIT_t {
    uint32_t INIT : 32;  ///< Programmable initial CRC value, reset value: 0xFFFFFFFF
  } INIT;

  /** 
  * name: POL
  * description: CRC polynomial
  * address: 0x40023014
  * offset: 0x14
  * reset value: 0x04C11DB7
  * access: read-write
  */
  struct CRC_POL_t {
    uint32_t POL : 32;  ///< Programmable polynomial, reset value: 0x4C11DB7
  } POL;

} CRC_t;


/** 
*  name: TSC
*  description: Touch sensing controller
*  group: TSC
*  address: 0x40024000
*/
typedef struct{
  /** 
  * name: CR
  * description: control register
  * address: 0x40024000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_CR_t {
    uint32_t TSCE : 1;  ///< Touch sensing controller enable, reset value: 0x0
    uint32_t START : 1;  ///< Start a new acquisition, reset value: 0x0
    uint32_t AM : 1;  ///< Acquisition mode, reset value: 0x0
    uint32_t SYNCPOL : 1;  ///< Synchronization pin polarity, reset value: 0x0
    uint32_t IODEF : 1;  ///< I/O Default mode, reset value: 0x0
    uint32_t MCV : 3;  ///< Max count value, reset value: 0x0
    uint32_t _RESERVED_364 : 4;
    uint32_t PGPSC : 3;  ///< pulse generator prescaler, reset value: 0x0
    uint32_t SSPSC : 1;  ///< Spread spectrum prescaler, reset value: 0x0
    uint32_t SSE : 1;  ///< Spread spectrum enable, reset value: 0x0
    uint32_t SSD : 7;  ///< Spread spectrum deviation, reset value: 0x0
    uint32_t CTPL : 4;  ///< Charge transfer pulse low, reset value: 0x0
    uint32_t CTPH : 4;  ///< Charge transfer pulse high, reset value: 0x0
  } CR;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x40024004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_IER_t {
    uint32_t EOAIE : 1;  ///< End of acquisition interrupt enable, reset value: 0x0
    uint32_t MCEIE : 1;  ///< Max count error interrupt enable, reset value: 0x0
  } IER;

  /** 
  * name: ICR
  * description: interrupt clear register
  * address: 0x40024008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_ICR_t {
    uint32_t EOAIC : 1;  ///< End of acquisition interrupt clear, reset value: 0x0
    uint32_t MCEIC : 1;  ///< Max count error interrupt clear, reset value: 0x0
  } ICR;

  /** 
  * name: ISR
  * description: interrupt status register
  * address: 0x4002400C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_ISR_t {
    uint32_t EOAF : 1;  ///< End of acquisition flag, reset value: 0x0
    uint32_t MCEF : 1;  ///< Max count error flag, reset value: 0x0
  } ISR;

  /** 
  * name: IOHCR
  * description: I/O hysteresis control register
  * address: 0x40024010
  * offset: 0x10
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct TSC_IOHCR_t {
    uint32_t G1_IO1 : 1;  ///< G1_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G1_IO2 : 1;  ///< G1_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G1_IO3 : 1;  ///< G1_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G1_IO4 : 1;  ///< G1_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G2_IO1 : 1;  ///< G2_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G2_IO2 : 1;  ///< G2_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G2_IO3 : 1;  ///< G2_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G2_IO4 : 1;  ///< G2_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G3_IO1 : 1;  ///< G3_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G3_IO2 : 1;  ///< G3_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G3_IO3 : 1;  ///< G3_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G3_IO4 : 1;  ///< G3_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G4_IO1 : 1;  ///< G4_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G4_IO2 : 1;  ///< G4_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G4_IO3 : 1;  ///< G4_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G4_IO4 : 1;  ///< G4_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G5_IO1 : 1;  ///< G5_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G5_IO2 : 1;  ///< G5_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G5_IO3 : 1;  ///< G5_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G5_IO4 : 1;  ///< G5_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G6_IO1 : 1;  ///< G6_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G6_IO2 : 1;  ///< G6_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G6_IO3 : 1;  ///< G6_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G6_IO4 : 1;  ///< G6_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G7_IO1 : 1;  ///< G7_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G7_IO2 : 1;  ///< G7_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G7_IO3 : 1;  ///< G7_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G7_IO4 : 1;  ///< G7_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G8_IO1 : 1;  ///< G8_IO1 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G8_IO2 : 1;  ///< G8_IO2 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G8_IO3 : 1;  ///< G8_IO3 Schmitt trigger hysteresis mode, reset value: 0x1
    uint32_t G8_IO4 : 1;  ///< G8_IO4 Schmitt trigger hysteresis mode, reset value: 0x1
  } IOHCR;

  /** 
  * name: IOASCR
  * description: I/O analog switch control register
  * address: 0x40024018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_IOASCR_t {
    uint32_t G1_IO1 : 1;  ///< G1_IO1 analog switch enable, reset value: 0x0
    uint32_t G1_IO2 : 1;  ///< G1_IO2 analog switch enable, reset value: 0x0
    uint32_t G1_IO3 : 1;  ///< G1_IO3 analog switch enable, reset value: 0x0
    uint32_t G1_IO4 : 1;  ///< G1_IO4 analog switch enable, reset value: 0x0
    uint32_t G2_IO1 : 1;  ///< G2_IO1 analog switch enable, reset value: 0x0
    uint32_t G2_IO2 : 1;  ///< G2_IO2 analog switch enable, reset value: 0x0
    uint32_t G2_IO3 : 1;  ///< G2_IO3 analog switch enable, reset value: 0x0
    uint32_t G2_IO4 : 1;  ///< G2_IO4 analog switch enable, reset value: 0x0
    uint32_t G3_IO1 : 1;  ///< G3_IO1 analog switch enable, reset value: 0x0
    uint32_t G3_IO2 : 1;  ///< G3_IO2 analog switch enable, reset value: 0x0
    uint32_t G3_IO3 : 1;  ///< G3_IO3 analog switch enable, reset value: 0x0
    uint32_t G3_IO4 : 1;  ///< G3_IO4 analog switch enable, reset value: 0x0
    uint32_t G4_IO1 : 1;  ///< G4_IO1 analog switch enable, reset value: 0x0
    uint32_t G4_IO2 : 1;  ///< G4_IO2 analog switch enable, reset value: 0x0
    uint32_t G4_IO3 : 1;  ///< G4_IO3 analog switch enable, reset value: 0x0
    uint32_t G4_IO4 : 1;  ///< G4_IO4 analog switch enable, reset value: 0x0
    uint32_t G5_IO1 : 1;  ///< G5_IO1 analog switch enable, reset value: 0x0
    uint32_t G5_IO2 : 1;  ///< G5_IO2 analog switch enable, reset value: 0x0
    uint32_t G5_IO3 : 1;  ///< G5_IO3 analog switch enable, reset value: 0x0
    uint32_t G5_IO4 : 1;  ///< G5_IO4 analog switch enable, reset value: 0x0
    uint32_t G6_IO1 : 1;  ///< G6_IO1 analog switch enable, reset value: 0x0
    uint32_t G6_IO2 : 1;  ///< G6_IO2 analog switch enable, reset value: 0x0
    uint32_t G6_IO3 : 1;  ///< G6_IO3 analog switch enable, reset value: 0x0
    uint32_t G6_IO4 : 1;  ///< G6_IO4 analog switch enable, reset value: 0x0
    uint32_t G7_IO1 : 1;  ///< G7_IO1 analog switch enable, reset value: 0x0
    uint32_t G7_IO2 : 1;  ///< G7_IO2 analog switch enable, reset value: 0x0
    uint32_t G7_IO3 : 1;  ///< G7_IO3 analog switch enable, reset value: 0x0
    uint32_t G7_IO4 : 1;  ///< G7_IO4 analog switch enable, reset value: 0x0
    uint32_t G8_IO1 : 1;  ///< G8_IO1 analog switch enable, reset value: 0x0
    uint32_t G8_IO2 : 1;  ///< G8_IO2 analog switch enable, reset value: 0x0
    uint32_t G8_IO3 : 1;  ///< G8_IO3 analog switch enable, reset value: 0x0
    uint32_t G8_IO4 : 1;  ///< G8_IO4 analog switch enable, reset value: 0x0
  } IOASCR;

  /** 
  * name: IOSCR
  * description: I/O sampling control register
  * address: 0x40024020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_IOSCR_t {
    uint32_t G1_IO1 : 1;  ///< G1_IO1 sampling mode, reset value: 0x0
    uint32_t G1_IO2 : 1;  ///< G1_IO2 sampling mode, reset value: 0x0
    uint32_t G1_IO3 : 1;  ///< G1_IO3 sampling mode, reset value: 0x0
    uint32_t G1_IO4 : 1;  ///< G1_IO4 sampling mode, reset value: 0x0
    uint32_t G2_IO1 : 1;  ///< G2_IO1 sampling mode, reset value: 0x0
    uint32_t G2_IO2 : 1;  ///< G2_IO2 sampling mode, reset value: 0x0
    uint32_t G2_IO3 : 1;  ///< G2_IO3 sampling mode, reset value: 0x0
    uint32_t G2_IO4 : 1;  ///< G2_IO4 sampling mode, reset value: 0x0
    uint32_t G3_IO1 : 1;  ///< G3_IO1 sampling mode, reset value: 0x0
    uint32_t G3_IO2 : 1;  ///< G3_IO2 sampling mode, reset value: 0x0
    uint32_t G3_IO3 : 1;  ///< G3_IO3 sampling mode, reset value: 0x0
    uint32_t G3_IO4 : 1;  ///< G3_IO4 sampling mode, reset value: 0x0
    uint32_t G4_IO1 : 1;  ///< G4_IO1 sampling mode, reset value: 0x0
    uint32_t G4_IO2 : 1;  ///< G4_IO2 sampling mode, reset value: 0x0
    uint32_t G4_IO3 : 1;  ///< G4_IO3 sampling mode, reset value: 0x0
    uint32_t G4_IO4 : 1;  ///< G4_IO4 sampling mode, reset value: 0x0
    uint32_t G5_IO1 : 1;  ///< G5_IO1 sampling mode, reset value: 0x0
    uint32_t G5_IO2 : 1;  ///< G5_IO2 sampling mode, reset value: 0x0
    uint32_t G5_IO3 : 1;  ///< G5_IO3 sampling mode, reset value: 0x0
    uint32_t G5_IO4 : 1;  ///< G5_IO4 sampling mode, reset value: 0x0
    uint32_t G6_IO1 : 1;  ///< G6_IO1 sampling mode, reset value: 0x0
    uint32_t G6_IO2 : 1;  ///< G6_IO2 sampling mode, reset value: 0x0
    uint32_t G6_IO3 : 1;  ///< G6_IO3 sampling mode, reset value: 0x0
    uint32_t G6_IO4 : 1;  ///< G6_IO4 sampling mode, reset value: 0x0
    uint32_t G7_IO1 : 1;  ///< G7_IO1 sampling mode, reset value: 0x0
    uint32_t G7_IO2 : 1;  ///< G7_IO2 sampling mode, reset value: 0x0
    uint32_t G7_IO3 : 1;  ///< G7_IO3 sampling mode, reset value: 0x0
    uint32_t G7_IO4 : 1;  ///< G7_IO4 sampling mode, reset value: 0x0
    uint32_t G8_IO1 : 1;  ///< G8_IO1 sampling mode, reset value: 0x0
    uint32_t G8_IO2 : 1;  ///< G8_IO2 sampling mode, reset value: 0x0
    uint32_t G8_IO3 : 1;  ///< G8_IO3 sampling mode, reset value: 0x0
    uint32_t G8_IO4 : 1;  ///< G8_IO4 sampling mode, reset value: 0x0
  } IOSCR;

  /** 
  * name: IOCCR
  * description: I/O channel control register
  * address: 0x40024028
  * offset: 0x28
  * reset value: 0x00000000
  * access: read-write
  */
  struct TSC_IOCCR_t {
    uint32_t G1_IO1 : 1;  ///< G1_IO1 channel mode, reset value: 0x0
    uint32_t G1_IO2 : 1;  ///< G1_IO2 channel mode, reset value: 0x0
    uint32_t G1_IO3 : 1;  ///< G1_IO3 channel mode, reset value: 0x0
    uint32_t G1_IO4 : 1;  ///< G1_IO4 channel mode, reset value: 0x0
    uint32_t G2_IO1 : 1;  ///< G2_IO1 channel mode, reset value: 0x0
    uint32_t G2_IO2 : 1;  ///< G2_IO2 channel mode, reset value: 0x0
    uint32_t G2_IO3 : 1;  ///< G2_IO3 channel mode, reset value: 0x0
    uint32_t G2_IO4 : 1;  ///< G2_IO4 channel mode, reset value: 0x0
    uint32_t G3_IO1 : 1;  ///< G3_IO1 channel mode, reset value: 0x0
    uint32_t G3_IO2 : 1;  ///< G3_IO2 channel mode, reset value: 0x0
    uint32_t G3_IO3 : 1;  ///< G3_IO3 channel mode, reset value: 0x0
    uint32_t G3_IO4 : 1;  ///< G3_IO4 channel mode, reset value: 0x0
    uint32_t G4_IO1 : 1;  ///< G4_IO1 channel mode, reset value: 0x0
    uint32_t G4_IO2 : 1;  ///< G4_IO2 channel mode, reset value: 0x0
    uint32_t G4_IO3 : 1;  ///< G4_IO3 channel mode, reset value: 0x0
    uint32_t G4_IO4 : 1;  ///< G4_IO4 channel mode, reset value: 0x0
    uint32_t G5_IO1 : 1;  ///< G5_IO1 channel mode, reset value: 0x0
    uint32_t G5_IO2 : 1;  ///< G5_IO2 channel mode, reset value: 0x0
    uint32_t G5_IO3 : 1;  ///< G5_IO3 channel mode, reset value: 0x0
    uint32_t G5_IO4 : 1;  ///< G5_IO4 channel mode, reset value: 0x0
    uint32_t G6_IO1 : 1;  ///< G6_IO1 channel mode, reset value: 0x0
    uint32_t G6_IO2 : 1;  ///< G6_IO2 channel mode, reset value: 0x0
    uint32_t G6_IO3 : 1;  ///< G6_IO3 channel mode, reset value: 0x0
    uint32_t G6_IO4 : 1;  ///< G6_IO4 channel mode, reset value: 0x0
    uint32_t G7_IO1 : 1;  ///< G7_IO1 channel mode, reset value: 0x0
    uint32_t G7_IO2 : 1;  ///< G7_IO2 channel mode, reset value: 0x0
    uint32_t G7_IO3 : 1;  ///< G7_IO3 channel mode, reset value: 0x0
    uint32_t G7_IO4 : 1;  ///< G7_IO4 channel mode, reset value: 0x0
    uint32_t G8_IO1 : 1;  ///< G8_IO1 channel mode, reset value: 0x0
    uint32_t G8_IO2 : 1;  ///< G8_IO2 channel mode, reset value: 0x0
    uint32_t G8_IO3 : 1;  ///< G8_IO3 channel mode, reset value: 0x0
    uint32_t G8_IO4 : 1;  ///< G8_IO4 channel mode, reset value: 0x0
  } IOCCR;

  /** 
  * name: IOGCSR
  * description: I/O group control status register
  * address: 0x40024030
  * offset: 0x30
  * reset value: 0x00000000
  * access: 
  */
  struct TSC_IOGCSR_t {
    uint32_t G1E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G2E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G3E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G4E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G5E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G6E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G7E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t G8E : 1;  ///< Analog I/O group x enable, reset value: 0x0
    uint32_t _RESERVED_365 : 8;
    uint32_t G1S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G2S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G3S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G4S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G5S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G6S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G7S : 1;  ///< Analog I/O group x status, reset value: 0x0
    uint32_t G8S : 1;  ///< Analog I/O group x status, reset value: 0x0
  } IOGCSR;

  /** 
  * name: IOG1CR
  * description: I/O group x counter register
  * address: 0x40024034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG1CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG1CR;

  /** 
  * name: IOG2CR
  * description: I/O group x counter register
  * address: 0x40024038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG2CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG2CR;

  /** 
  * name: IOG3CR
  * description: I/O group x counter register
  * address: 0x4002403C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG3CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG3CR;

  /** 
  * name: IOG4CR
  * description: I/O group x counter register
  * address: 0x40024040
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG4CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG4CR;

  /** 
  * name: IOG5CR
  * description: I/O group x counter register
  * address: 0x40024044
  * offset: 0x44
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG5CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG5CR;

  /** 
  * name: IOG6CR
  * description: I/O group x counter register
  * address: 0x40024048
  * offset: 0x48
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG6CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG6CR;

  /** 
  * name: IOG7CR
  * description: I/O group x counter register
  * address: 0x4002404C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG7CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG7CR;

  /** 
  * name: IOG8CR
  * description: I/O group x counter register
  * address: 0x40024050
  * offset: 0x50
  * reset value: 0x00000000
  * access: read-only
  */
  struct TSC_IOG8CR_t {
    uint32_t CNT : 14;  ///< Counter value, reset value: 0x0
  } IOG8CR;

} TSC_t;


/** 
*  name: GPIOA
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48000000
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48000000
  * offset: 0x0
  * reset value: 0x28000000
  * access: read-write
  */
  struct GPIOA_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x2
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x2
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48000004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48000008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800000C
  * offset: 0xC
  * reset value: 0x24000000
  * access: read-write
  */
  struct GPIOA_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x1
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x2
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48000010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOA_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48000014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48000018
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOA_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800001C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48000020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48000024
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOA_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48000028
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOA_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOA_t;


/** 
*  name: GPIOB
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48000400
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48000400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48000404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48000408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800040C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48000410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOB_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48000414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48000418
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOB_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800041C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48000420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48000424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOB_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48000428
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOB_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOB_t;


/** 
*  name: GPIOC
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48000800
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48000800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48000804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48000808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800080C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48000810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOC_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48000814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48000818
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOC_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800081C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48000820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48000824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOC_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48000828
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOC_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOC_t;


/** 
*  name: GPIOD
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48000C00
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48000C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48000C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48000C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x48000C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48000C10
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOD_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48000C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48000C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOD_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x48000C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48000C20
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48000C24
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOD_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48000C28
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOD_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOD_t;


/** 
*  name: GPIOE
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48001000
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48001000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48001004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48001008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800100C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48001010
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOE_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48001014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48001018
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOE_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800101C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48001020
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48001024
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOE_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48001028
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOE_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOE_t;


/** 
*  name: GPIOF
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48001400
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48001400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48001404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48001408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800140C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48001410
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOF_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48001414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48001418
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOF_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800141C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48001420
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48001424
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOF_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48001428
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOF_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOF_t;


/** 
*  name: GPIOG
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48001800
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48001800
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48001804
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48001808
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x4800180C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48001810
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOG_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48001814
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48001818
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOG_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x4800181C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48001820
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48001824
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOG_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48001828
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOG_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOG_t;


/** 
*  name: GPIOH
*  description: General-purpose I/Os
*  group: GPIO
*  address: 0x48001C00
*/
typedef struct{
  /** 
  * name: MODER
  * description: GPIO port mode register
  * address: 0x48001C00
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_MODER_t {
    uint32_t MODER0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t MODER15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } MODER;

  /** 
  * name: OTYPER
  * description: GPIO port output type register
  * address: 0x48001C04
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_OTYPER_t {
    uint32_t OT0 : 1;  ///< Port x configuration bit 0, reset value: 0x0
    uint32_t OT1 : 1;  ///< Port x configuration bit 1, reset value: 0x0
    uint32_t OT2 : 1;  ///< Port x configuration bit 2, reset value: 0x0
    uint32_t OT3 : 1;  ///< Port x configuration bit 3, reset value: 0x0
    uint32_t OT4 : 1;  ///< Port x configuration bit 4, reset value: 0x0
    uint32_t OT5 : 1;  ///< Port x configuration bit 5, reset value: 0x0
    uint32_t OT6 : 1;  ///< Port x configuration bit 6, reset value: 0x0
    uint32_t OT7 : 1;  ///< Port x configuration bit 7, reset value: 0x0
    uint32_t OT8 : 1;  ///< Port x configuration bit 8, reset value: 0x0
    uint32_t OT9 : 1;  ///< Port x configuration bit 9, reset value: 0x0
    uint32_t OT10 : 1;  ///< Port x configuration bit 10, reset value: 0x0
    uint32_t OT11 : 1;  ///< Port x configuration bit 11, reset value: 0x0
    uint32_t OT12 : 1;  ///< Port x configuration bit 12, reset value: 0x0
    uint32_t OT13 : 1;  ///< Port x configuration bit 13, reset value: 0x0
    uint32_t OT14 : 1;  ///< Port x configuration bit 14, reset value: 0x0
    uint32_t OT15 : 1;  ///< Port x configuration bit 15, reset value: 0x0
  } OTYPER;

  /** 
  * name: OSPEEDR
  * description: GPIO port output speed register
  * address: 0x48001C08
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_OSPEEDR_t {
    uint32_t OSPEEDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t OSPEEDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } OSPEEDR;

  /** 
  * name: PUPDR
  * description: GPIO port pull-up/pull-down register
  * address: 0x48001C0C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_PUPDR_t {
    uint32_t PUPDR0 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR1 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR2 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR3 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR4 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR5 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR6 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR7 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR8 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR9 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR10 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR11 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR12 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR13 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR14 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
    uint32_t PUPDR15 : 2;  ///< Port x configuration bits (y = 0..15), reset value: 0x0
  } PUPDR;

  /** 
  * name: IDR
  * description: GPIO port input data register
  * address: 0x48001C10
  * offset: 0x10
  * reset value: 0x00000000
  * access: read-only
  */
  struct GPIOH_IDR_t {
    uint32_t IDR0 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR1 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR2 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR3 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR4 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR5 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR6 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR7 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR8 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR9 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR10 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR11 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR12 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR13 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR14 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
    uint32_t IDR15 : 1;  ///< Port input data (y = 0..15), reset value: 0x0
  } IDR;

  /** 
  * name: ODR
  * description: GPIO port output data register
  * address: 0x48001C14
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_ODR_t {
    uint32_t ODR0 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR1 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR2 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR3 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR4 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR5 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR6 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR7 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR8 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR9 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR10 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR11 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR12 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR13 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR14 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
    uint32_t ODR15 : 1;  ///< Port output data (y = 0..15), reset value: 0x0
  } ODR;

  /** 
  * name: BSRR
  * description: GPIO port bit set/reset register
  * address: 0x48001C18
  * offset: 0x18
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOH_BSRR_t {
    uint32_t BS0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS1 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS2 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS3 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS4 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS5 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS6 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS7 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS8 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS9 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS10 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS11 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS12 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS13 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS14 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BS15 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR0 : 1;  ///< Port x set bit y (y= 0..15), reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x reset bit y (y = 0..15), reset value: 0x0
  } BSRR;

  /** 
  * name: LCKR
  * description: GPIO port configuration lock register
  * address: 0x48001C1C
  * offset: 0x1C
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_LCKR_t {
    uint32_t LCK0 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK1 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK2 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK3 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK4 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK5 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK6 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK7 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK8 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK9 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK10 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK11 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK12 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK13 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK14 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCK15 : 1;  ///< Port x lock bit y (y= 0..15), reset value: 0x0
    uint32_t LCKK : 1;  ///< Lok Key, reset value: 0x0
  } LCKR;

  /** 
  * name: AFRL
  * description: GPIO alternate function low register
  * address: 0x48001C20
  * offset: 0x20
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_AFRL_t {
    uint32_t AFRL0 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL1 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL2 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL3 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL4 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL5 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL6 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
    uint32_t AFRL7 : 4;  ///< Alternate function selection for port x bit y (y = 0..7), reset value: 0x0
  } AFRL;

  /** 
  * name: AFRH
  * description: GPIO alternate function high register
  * address: 0x48001C24
  * offset: 0x24
  * reset value: 0x00000000
  * access: read-write
  */
  struct GPIOH_AFRH_t {
    uint32_t AFRH8 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH9 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH10 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH11 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH12 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH13 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH14 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
    uint32_t AFRH15 : 4;  ///< Alternate function selection for port x bit y (y = 8..15), reset value: 0x0
  } AFRH;

  /** 
  * name: BRR
  * description: Port bit reset register
  * address: 0x48001C28
  * offset: 0x28
  * reset value: 0x00000000
  * access: write-only
  */
  struct GPIOH_BRR_t {
    uint32_t BR0 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR1 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR2 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR3 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR4 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR5 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR6 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR7 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR8 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR9 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR10 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR11 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR12 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR13 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR14 : 1;  ///< Port x Reset bit y, reset value: 0x0
    uint32_t BR15 : 1;  ///< Port x Reset bit y, reset value: 0x0
  } BRR;

} GPIOH_t;


/** 
*  name: ADC1
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000000
*/
typedef struct{
  /** 
  * name: ISR
  * description: interrupt and status register
  * address: 0x50000000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_ISR_t {
    uint32_t ADRDY : 1;  ///< ADRDY, reset value: 0x0
    uint32_t EOSMP : 1;  ///< EOSMP, reset value: 0x0
    uint32_t EOC : 1;  ///< EOC, reset value: 0x0
    uint32_t EOS : 1;  ///< EOS, reset value: 0x0
    uint32_t OVR : 1;  ///< OVR, reset value: 0x0
    uint32_t JEOC : 1;  ///< JEOC, reset value: 0x0
    uint32_t JEOS : 1;  ///< JEOS, reset value: 0x0
    uint32_t AWD1 : 1;  ///< AWD1, reset value: 0x0
    uint32_t AWD2 : 1;  ///< AWD2, reset value: 0x0
    uint32_t AWD3 : 1;  ///< AWD3, reset value: 0x0
    uint32_t JQOVF : 1;  ///< JQOVF, reset value: 0x0
  } ISR;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x50000004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_IER_t {
    uint32_t ADRDYIE : 1;  ///< ADRDYIE, reset value: 0x0
    uint32_t EOSMPIE : 1;  ///< EOSMPIE, reset value: 0x0
    uint32_t EOCIE : 1;  ///< EOCIE, reset value: 0x0
    uint32_t EOSIE : 1;  ///< EOSIE, reset value: 0x0
    uint32_t OVRIE : 1;  ///< OVRIE, reset value: 0x0
    uint32_t JEOCIE : 1;  ///< JEOCIE, reset value: 0x0
    uint32_t JEOSIE : 1;  ///< JEOSIE, reset value: 0x0
    uint32_t AWD1IE : 1;  ///< AWD1IE, reset value: 0x0
    uint32_t AWD2IE : 1;  ///< AWD2IE, reset value: 0x0
    uint32_t AWD3IE : 1;  ///< AWD3IE, reset value: 0x0
    uint32_t JQOVFIE : 1;  ///< JQOVFIE, reset value: 0x0
  } IER;

  /** 
  * name: CR
  * description: control register
  * address: 0x50000008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_CR_t {
    uint32_t ADEN : 1;  ///< ADEN, reset value: 0x0
    uint32_t ADDIS : 1;  ///< ADDIS, reset value: 0x0
    uint32_t ADSTART : 1;  ///< ADSTART, reset value: 0x0
    uint32_t JADSTART : 1;  ///< JADSTART, reset value: 0x0
    uint32_t ADSTP : 1;  ///< ADSTP, reset value: 0x0
    uint32_t JADSTP : 1;  ///< JADSTP, reset value: 0x0
    uint32_t _RESERVED_366 : 22;
    uint32_t ADVREGEN : 1;  ///< ADVREGEN, reset value: 0x0
    uint32_t DEEPPWD : 1;  ///< DEEPPWD, reset value: 0x0
    uint32_t ADCALDIF : 1;  ///< ADCALDIF, reset value: 0x0
    uint32_t ADCAL : 1;  ///< ADCAL, reset value: 0x0
  } CR;

  /** 
  * name: CFGR
  * description: configuration register
  * address: 0x5000000C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_CFGR_t {
    uint32_t DMAEN : 1;  ///< DMAEN, reset value: 0x0
    uint32_t DMACFG : 1;  ///< DMACFG, reset value: 0x0
    uint32_t _RESERVED_367 : 1;
    uint32_t RES : 2;  ///< RES, reset value: 0x0
    uint32_t ALIGN : 1;  ///< ALIGN, reset value: 0x0
    uint32_t EXTSEL : 4;  ///< EXTSEL, reset value: 0x0
    uint32_t EXTEN : 2;  ///< EXTEN, reset value: 0x0
    uint32_t OVRMOD : 1;  ///< OVRMOD, reset value: 0x0
    uint32_t CONT : 1;  ///< CONT, reset value: 0x0
    uint32_t AUTDLY : 1;  ///< AUTDLY, reset value: 0x0
    uint32_t AUTOFF : 1;  ///< AUTOFF, reset value: 0x0
    uint32_t DISCEN : 1;  ///< DISCEN, reset value: 0x0
    uint32_t DISCNUM : 3;  ///< DISCNUM, reset value: 0x0
    uint32_t JDISCEN : 1;  ///< JDISCEN, reset value: 0x0
    uint32_t JQM : 1;  ///< JQM, reset value: 0x0
    uint32_t AWD1SGL : 1;  ///< AWD1SGL, reset value: 0x0
    uint32_t AWD1EN : 1;  ///< AWD1EN, reset value: 0x0
    uint32_t JAWD1EN : 1;  ///< JAWD1EN, reset value: 0x0
    uint32_t JAUTO : 1;  ///< JAUTO, reset value: 0x0
    uint32_t AWDCH1CH : 5;  ///< AWDCH1CH, reset value: 0x0
  } CFGR;

  /** 
  * name: SMPR1
  * description: sample time register 1
  * address: 0x50000014
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SMPR1_t {
    uint32_t _RESERVED_368 : 3;
    uint32_t SMP1 : 3;  ///< SMP1, reset value: 0x0
    uint32_t SMP2 : 3;  ///< SMP2, reset value: 0x0
    uint32_t SMP3 : 3;  ///< SMP3, reset value: 0x0
    uint32_t SMP4 : 3;  ///< SMP4, reset value: 0x0
    uint32_t SMP5 : 3;  ///< SMP5, reset value: 0x0
    uint32_t SMP6 : 3;  ///< SMP6, reset value: 0x0
    uint32_t SMP7 : 3;  ///< SMP7, reset value: 0x0
    uint32_t SMP8 : 3;  ///< SMP8, reset value: 0x0
    uint32_t SMP9 : 3;  ///< SMP9, reset value: 0x0
  } SMPR1;

  /** 
  * name: SMPR2
  * description: sample time register 2
  * address: 0x50000018
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SMPR2_t {
    uint32_t SMP10 : 3;  ///< SMP10, reset value: 0x0
    uint32_t SMP11 : 3;  ///< SMP11, reset value: 0x0
    uint32_t SMP12 : 3;  ///< SMP12, reset value: 0x0
    uint32_t SMP13 : 3;  ///< SMP13, reset value: 0x0
    uint32_t SMP14 : 3;  ///< SMP14, reset value: 0x0
    uint32_t SMP15 : 3;  ///< SMP15, reset value: 0x0
    uint32_t SMP16 : 3;  ///< SMP16, reset value: 0x0
    uint32_t SMP17 : 3;  ///< SMP17, reset value: 0x0
    uint32_t SMP18 : 3;  ///< SMP18, reset value: 0x0
  } SMPR2;

  /** 
  * name: TR1
  * description: watchdog threshold register 1
  * address: 0x50000020
  * offset: 0x20
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC1_TR1_t {
    uint32_t LT1 : 12;  ///< LT1, reset value: 0x0
    uint32_t _RESERVED_369 : 4;
    uint32_t HT1 : 12;  ///< HT1, reset value: 0xFFF
  } TR1;

  /** 
  * name: TR2
  * description: watchdog threshold register
  * address: 0x50000024
  * offset: 0x24
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC1_TR2_t {
    uint32_t LT2 : 8;  ///< LT2, reset value: 0x0
    uint32_t _RESERVED_370 : 8;
    uint32_t HT2 : 8;  ///< HT2, reset value: 0xFF
  } TR2;

  /** 
  * name: TR3
  * description: watchdog threshold register 3
  * address: 0x50000028
  * offset: 0x28
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC1_TR3_t {
    uint32_t LT3 : 8;  ///< LT3, reset value: 0x0
    uint32_t _RESERVED_371 : 8;
    uint32_t HT3 : 8;  ///< HT3, reset value: 0xFF
  } TR3;

  /** 
  * name: SQR1
  * description: regular sequence register 1
  * address: 0x50000030
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SQR1_t {
    uint32_t L3 : 4;  ///< L3, reset value: 0x0
    uint32_t _RESERVED_372 : 2;
    uint32_t SQ1 : 5;  ///< SQ1, reset value: 0x0
    uint32_t _RESERVED_373 : 1;
    uint32_t SQ2 : 5;  ///< SQ2, reset value: 0x0
    uint32_t _RESERVED_374 : 1;
    uint32_t SQ3 : 5;  ///< SQ3, reset value: 0x0
    uint32_t _RESERVED_375 : 1;
    uint32_t SQ4 : 5;  ///< SQ4, reset value: 0x0
  } SQR1;

  /** 
  * name: SQR2
  * description: regular sequence register 2
  * address: 0x50000034
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SQR2_t {
    uint32_t SQ5 : 5;  ///< SQ5, reset value: 0x0
    uint32_t _RESERVED_376 : 1;
    uint32_t SQ6 : 5;  ///< SQ6, reset value: 0x0
    uint32_t _RESERVED_377 : 1;
    uint32_t SQ7 : 5;  ///< SQ7, reset value: 0x0
    uint32_t _RESERVED_378 : 1;
    uint32_t SQ8 : 5;  ///< SQ8, reset value: 0x0
    uint32_t _RESERVED_379 : 1;
    uint32_t SQ9 : 5;  ///< SQ9, reset value: 0x0
  } SQR2;

  /** 
  * name: SQR3
  * description: regular sequence register 3
  * address: 0x50000038
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SQR3_t {
    uint32_t SQ10 : 5;  ///< SQ10, reset value: 0x0
    uint32_t _RESERVED_380 : 1;
    uint32_t SQ11 : 5;  ///< SQ11, reset value: 0x0
    uint32_t _RESERVED_381 : 1;
    uint32_t SQ12 : 5;  ///< SQ12, reset value: 0x0
    uint32_t _RESERVED_382 : 1;
    uint32_t SQ13 : 5;  ///< SQ13, reset value: 0x0
    uint32_t _RESERVED_383 : 1;
    uint32_t SQ14 : 5;  ///< SQ14, reset value: 0x0
  } SQR3;

  /** 
  * name: SQR4
  * description: regular sequence register 4
  * address: 0x5000003C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_SQR4_t {
    uint32_t SQ15 : 5;  ///< SQ15, reset value: 0x0
    uint32_t _RESERVED_384 : 1;
    uint32_t SQ16 : 5;  ///< SQ16, reset value: 0x0
  } SQR4;

  /** 
  * name: DR
  * description: regular Data Register
  * address: 0x50000040
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_DR_t {
    uint32_t regularDATA : 16;  ///< regularDATA, reset value: 0x0
  } DR;

  /** 
  * name: JSQR
  * description: injected sequence register
  * address: 0x5000004C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_JSQR_t {
    uint32_t JL : 2;  ///< JL, reset value: 0x0
    uint32_t JEXTSEL : 4;  ///< JEXTSEL, reset value: 0x0
    uint32_t JEXTEN : 2;  ///< JEXTEN, reset value: 0x0
    uint32_t JSQ1 : 5;  ///< JSQ1, reset value: 0x0
    uint32_t _RESERVED_385 : 1;
    uint32_t JSQ2 : 5;  ///< JSQ2, reset value: 0x0
    uint32_t _RESERVED_386 : 1;
    uint32_t JSQ3 : 5;  ///< JSQ3, reset value: 0x0
    uint32_t _RESERVED_387 : 1;
    uint32_t JSQ4 : 5;  ///< JSQ4, reset value: 0x0
  } JSQR;

  /** 
  * name: OFR1
  * description: offset register 1
  * address: 0x50000060
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_OFR1_t {
    uint32_t OFFSET1 : 12;  ///< OFFSET1, reset value: 0x0
    uint32_t _RESERVED_388 : 14;
    uint32_t OFFSET1_CH : 5;  ///< OFFSET1_CH, reset value: 0x0
    uint32_t OFFSET1_EN : 1;  ///< OFFSET1_EN, reset value: 0x0
  } OFR1;

  /** 
  * name: OFR2
  * description: offset register 2
  * address: 0x50000064
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_OFR2_t {
    uint32_t OFFSET2 : 12;  ///< OFFSET2, reset value: 0x0
    uint32_t _RESERVED_389 : 14;
    uint32_t OFFSET2_CH : 5;  ///< OFFSET2_CH, reset value: 0x0
    uint32_t OFFSET2_EN : 1;  ///< OFFSET2_EN, reset value: 0x0
  } OFR2;

  /** 
  * name: OFR3
  * description: offset register 3
  * address: 0x50000068
  * offset: 0x68
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_OFR3_t {
    uint32_t OFFSET3 : 12;  ///< OFFSET3, reset value: 0x0
    uint32_t _RESERVED_390 : 14;
    uint32_t OFFSET3_CH : 5;  ///< OFFSET3_CH, reset value: 0x0
    uint32_t OFFSET3_EN : 1;  ///< OFFSET3_EN, reset value: 0x0
  } OFR3;

  /** 
  * name: OFR4
  * description: offset register 4
  * address: 0x5000006C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_OFR4_t {
    uint32_t OFFSET4 : 12;  ///< OFFSET4, reset value: 0x0
    uint32_t _RESERVED_391 : 14;
    uint32_t OFFSET4_CH : 5;  ///< OFFSET4_CH, reset value: 0x0
    uint32_t OFFSET4_EN : 1;  ///< OFFSET4_EN, reset value: 0x0
  } OFR4;

  /** 
  * name: JDR1
  * description: injected data register 1
  * address: 0x50000080
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_JDR1_t {
    uint32_t JDATA1 : 16;  ///< JDATA1, reset value: 0x0
  } JDR1;

  /** 
  * name: JDR2
  * description: injected data register 2
  * address: 0x50000084
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_JDR2_t {
    uint32_t JDATA2 : 16;  ///< JDATA2, reset value: 0x0
  } JDR2;

  /** 
  * name: JDR3
  * description: injected data register 3
  * address: 0x50000088
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_JDR3_t {
    uint32_t JDATA3 : 16;  ///< JDATA3, reset value: 0x0
  } JDR3;

  /** 
  * name: JDR4
  * description: injected data register 4
  * address: 0x5000008C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_JDR4_t {
    uint32_t JDATA4 : 16;  ///< JDATA4, reset value: 0x0
  } JDR4;

  /** 
  * name: AWD2CR
  * description: Analog Watchdog 2 Configuration Register
  * address: 0x500000A0
  * offset: 0xA0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_AWD2CR_t {
    uint32_t _RESERVED_392 : 1;
    uint32_t AWD2CH : 18;  ///< AWD2CH, reset value: 0x0
  } AWD2CR;

  /** 
  * name: AWD3CR
  * description: Analog Watchdog 3 Configuration Register
  * address: 0x500000A4
  * offset: 0xA4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_AWD3CR_t {
    uint32_t _RESERVED_393 : 1;
    uint32_t AWD3CH : 18;  ///< AWD3CH, reset value: 0x0
  } AWD3CR;

  /** 
  * name: DIFSEL
  * description: Differential Mode Selection Register 2
  * address: 0x500000B0
  * offset: 0xB0
  * reset value: 0x00000000
  * access: 
  */
  struct ADC1_DIFSEL_t {
    uint32_t _RESERVED_394 : 1;
    uint32_t DIFSEL_1_15 : 15;  ///< Differential mode for channels 15 to 1, reset value: 0x0
    uint32_t DIFSEL_16_18 : 3;  ///< Differential mode for channels 18 to 16, reset value: 0x0
  } DIFSEL;

  /** 
  * name: CALFACT
  * description: Calibration Factors
  * address: 0x500000B4
  * offset: 0xB4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_CALFACT_t {
    uint32_t CALFACT_S : 7;  ///< CALFACT_S, reset value: 0x0
    uint32_t _RESERVED_395 : 9;
    uint32_t CALFACT_D : 7;  ///< CALFACT_D, reset value: 0x0
  } CALFACT;

} ADC1_t;


/** 
*  name: ADC2
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000100
*/
typedef struct{
  /** 
  * name: ISR
  * description: interrupt and status register
  * address: 0x50000100
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_ISR_t {
    uint32_t ADRDY : 1;  ///< ADRDY, reset value: 0x0
    uint32_t EOSMP : 1;  ///< EOSMP, reset value: 0x0
    uint32_t EOC : 1;  ///< EOC, reset value: 0x0
    uint32_t EOS : 1;  ///< EOS, reset value: 0x0
    uint32_t OVR : 1;  ///< OVR, reset value: 0x0
    uint32_t JEOC : 1;  ///< JEOC, reset value: 0x0
    uint32_t JEOS : 1;  ///< JEOS, reset value: 0x0
    uint32_t AWD1 : 1;  ///< AWD1, reset value: 0x0
    uint32_t AWD2 : 1;  ///< AWD2, reset value: 0x0
    uint32_t AWD3 : 1;  ///< AWD3, reset value: 0x0
    uint32_t JQOVF : 1;  ///< JQOVF, reset value: 0x0
  } ISR;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x50000104
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_IER_t {
    uint32_t ADRDYIE : 1;  ///< ADRDYIE, reset value: 0x0
    uint32_t EOSMPIE : 1;  ///< EOSMPIE, reset value: 0x0
    uint32_t EOCIE : 1;  ///< EOCIE, reset value: 0x0
    uint32_t EOSIE : 1;  ///< EOSIE, reset value: 0x0
    uint32_t OVRIE : 1;  ///< OVRIE, reset value: 0x0
    uint32_t JEOCIE : 1;  ///< JEOCIE, reset value: 0x0
    uint32_t JEOSIE : 1;  ///< JEOSIE, reset value: 0x0
    uint32_t AWD1IE : 1;  ///< AWD1IE, reset value: 0x0
    uint32_t AWD2IE : 1;  ///< AWD2IE, reset value: 0x0
    uint32_t AWD3IE : 1;  ///< AWD3IE, reset value: 0x0
    uint32_t JQOVFIE : 1;  ///< JQOVFIE, reset value: 0x0
  } IER;

  /** 
  * name: CR
  * description: control register
  * address: 0x50000108
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_CR_t {
    uint32_t ADEN : 1;  ///< ADEN, reset value: 0x0
    uint32_t ADDIS : 1;  ///< ADDIS, reset value: 0x0
    uint32_t ADSTART : 1;  ///< ADSTART, reset value: 0x0
    uint32_t JADSTART : 1;  ///< JADSTART, reset value: 0x0
    uint32_t ADSTP : 1;  ///< ADSTP, reset value: 0x0
    uint32_t JADSTP : 1;  ///< JADSTP, reset value: 0x0
    uint32_t _RESERVED_396 : 22;
    uint32_t ADVREGEN : 1;  ///< ADVREGEN, reset value: 0x0
    uint32_t DEEPPWD : 1;  ///< DEEPPWD, reset value: 0x0
    uint32_t ADCALDIF : 1;  ///< ADCALDIF, reset value: 0x0
    uint32_t ADCAL : 1;  ///< ADCAL, reset value: 0x0
  } CR;

  /** 
  * name: CFGR
  * description: configuration register
  * address: 0x5000010C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_CFGR_t {
    uint32_t DMAEN : 1;  ///< DMAEN, reset value: 0x0
    uint32_t DMACFG : 1;  ///< DMACFG, reset value: 0x0
    uint32_t _RESERVED_397 : 1;
    uint32_t RES : 2;  ///< RES, reset value: 0x0
    uint32_t ALIGN : 1;  ///< ALIGN, reset value: 0x0
    uint32_t EXTSEL : 4;  ///< EXTSEL, reset value: 0x0
    uint32_t EXTEN : 2;  ///< EXTEN, reset value: 0x0
    uint32_t OVRMOD : 1;  ///< OVRMOD, reset value: 0x0
    uint32_t CONT : 1;  ///< CONT, reset value: 0x0
    uint32_t AUTDLY : 1;  ///< AUTDLY, reset value: 0x0
    uint32_t AUTOFF : 1;  ///< AUTOFF, reset value: 0x0
    uint32_t DISCEN : 1;  ///< DISCEN, reset value: 0x0
    uint32_t DISCNUM : 3;  ///< DISCNUM, reset value: 0x0
    uint32_t JDISCEN : 1;  ///< JDISCEN, reset value: 0x0
    uint32_t JQM : 1;  ///< JQM, reset value: 0x0
    uint32_t AWD1SGL : 1;  ///< AWD1SGL, reset value: 0x0
    uint32_t AWD1EN : 1;  ///< AWD1EN, reset value: 0x0
    uint32_t JAWD1EN : 1;  ///< JAWD1EN, reset value: 0x0
    uint32_t JAUTO : 1;  ///< JAUTO, reset value: 0x0
    uint32_t AWDCH1CH : 5;  ///< AWDCH1CH, reset value: 0x0
  } CFGR;

  /** 
  * name: SMPR1
  * description: sample time register 1
  * address: 0x50000114
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SMPR1_t {
    uint32_t _RESERVED_398 : 3;
    uint32_t SMP1 : 3;  ///< SMP1, reset value: 0x0
    uint32_t SMP2 : 3;  ///< SMP2, reset value: 0x0
    uint32_t SMP3 : 3;  ///< SMP3, reset value: 0x0
    uint32_t SMP4 : 3;  ///< SMP4, reset value: 0x0
    uint32_t SMP5 : 3;  ///< SMP5, reset value: 0x0
    uint32_t SMP6 : 3;  ///< SMP6, reset value: 0x0
    uint32_t SMP7 : 3;  ///< SMP7, reset value: 0x0
    uint32_t SMP8 : 3;  ///< SMP8, reset value: 0x0
    uint32_t SMP9 : 3;  ///< SMP9, reset value: 0x0
  } SMPR1;

  /** 
  * name: SMPR2
  * description: sample time register 2
  * address: 0x50000118
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SMPR2_t {
    uint32_t SMP10 : 3;  ///< SMP10, reset value: 0x0
    uint32_t SMP11 : 3;  ///< SMP11, reset value: 0x0
    uint32_t SMP12 : 3;  ///< SMP12, reset value: 0x0
    uint32_t SMP13 : 3;  ///< SMP13, reset value: 0x0
    uint32_t SMP14 : 3;  ///< SMP14, reset value: 0x0
    uint32_t SMP15 : 3;  ///< SMP15, reset value: 0x0
    uint32_t SMP16 : 3;  ///< SMP16, reset value: 0x0
    uint32_t SMP17 : 3;  ///< SMP17, reset value: 0x0
    uint32_t SMP18 : 3;  ///< SMP18, reset value: 0x0
  } SMPR2;

  /** 
  * name: TR1
  * description: watchdog threshold register 1
  * address: 0x50000120
  * offset: 0x20
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC2_TR1_t {
    uint32_t LT1 : 12;  ///< LT1, reset value: 0x0
    uint32_t _RESERVED_399 : 4;
    uint32_t HT1 : 12;  ///< HT1, reset value: 0xFFF
  } TR1;

  /** 
  * name: TR2
  * description: watchdog threshold register
  * address: 0x50000124
  * offset: 0x24
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC2_TR2_t {
    uint32_t LT2 : 8;  ///< LT2, reset value: 0x0
    uint32_t _RESERVED_400 : 8;
    uint32_t HT2 : 8;  ///< HT2, reset value: 0xFF
  } TR2;

  /** 
  * name: TR3
  * description: watchdog threshold register 3
  * address: 0x50000128
  * offset: 0x28
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC2_TR3_t {
    uint32_t LT3 : 8;  ///< LT3, reset value: 0x0
    uint32_t _RESERVED_401 : 8;
    uint32_t HT3 : 8;  ///< HT3, reset value: 0xFF
  } TR3;

  /** 
  * name: SQR1
  * description: regular sequence register 1
  * address: 0x50000130
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SQR1_t {
    uint32_t L3 : 4;  ///< L3, reset value: 0x0
    uint32_t _RESERVED_402 : 2;
    uint32_t SQ1 : 5;  ///< SQ1, reset value: 0x0
    uint32_t _RESERVED_403 : 1;
    uint32_t SQ2 : 5;  ///< SQ2, reset value: 0x0
    uint32_t _RESERVED_404 : 1;
    uint32_t SQ3 : 5;  ///< SQ3, reset value: 0x0
    uint32_t _RESERVED_405 : 1;
    uint32_t SQ4 : 5;  ///< SQ4, reset value: 0x0
  } SQR1;

  /** 
  * name: SQR2
  * description: regular sequence register 2
  * address: 0x50000134
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SQR2_t {
    uint32_t SQ5 : 5;  ///< SQ5, reset value: 0x0
    uint32_t _RESERVED_406 : 1;
    uint32_t SQ6 : 5;  ///< SQ6, reset value: 0x0
    uint32_t _RESERVED_407 : 1;
    uint32_t SQ7 : 5;  ///< SQ7, reset value: 0x0
    uint32_t _RESERVED_408 : 1;
    uint32_t SQ8 : 5;  ///< SQ8, reset value: 0x0
    uint32_t _RESERVED_409 : 1;
    uint32_t SQ9 : 5;  ///< SQ9, reset value: 0x0
  } SQR2;

  /** 
  * name: SQR3
  * description: regular sequence register 3
  * address: 0x50000138
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SQR3_t {
    uint32_t SQ10 : 5;  ///< SQ10, reset value: 0x0
    uint32_t _RESERVED_410 : 1;
    uint32_t SQ11 : 5;  ///< SQ11, reset value: 0x0
    uint32_t _RESERVED_411 : 1;
    uint32_t SQ12 : 5;  ///< SQ12, reset value: 0x0
    uint32_t _RESERVED_412 : 1;
    uint32_t SQ13 : 5;  ///< SQ13, reset value: 0x0
    uint32_t _RESERVED_413 : 1;
    uint32_t SQ14 : 5;  ///< SQ14, reset value: 0x0
  } SQR3;

  /** 
  * name: SQR4
  * description: regular sequence register 4
  * address: 0x5000013C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_SQR4_t {
    uint32_t SQ15 : 5;  ///< SQ15, reset value: 0x0
    uint32_t _RESERVED_414 : 1;
    uint32_t SQ16 : 5;  ///< SQ16, reset value: 0x0
  } SQR4;

  /** 
  * name: DR
  * description: regular Data Register
  * address: 0x50000140
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC2_DR_t {
    uint32_t regularDATA : 16;  ///< regularDATA, reset value: 0x0
  } DR;

  /** 
  * name: JSQR
  * description: injected sequence register
  * address: 0x5000014C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_JSQR_t {
    uint32_t JL : 2;  ///< JL, reset value: 0x0
    uint32_t JEXTSEL : 4;  ///< JEXTSEL, reset value: 0x0
    uint32_t JEXTEN : 2;  ///< JEXTEN, reset value: 0x0
    uint32_t JSQ1 : 5;  ///< JSQ1, reset value: 0x0
    uint32_t _RESERVED_415 : 1;
    uint32_t JSQ2 : 5;  ///< JSQ2, reset value: 0x0
    uint32_t _RESERVED_416 : 1;
    uint32_t JSQ3 : 5;  ///< JSQ3, reset value: 0x0
    uint32_t _RESERVED_417 : 1;
    uint32_t JSQ4 : 5;  ///< JSQ4, reset value: 0x0
  } JSQR;

  /** 
  * name: OFR1
  * description: offset register 1
  * address: 0x50000160
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_OFR1_t {
    uint32_t OFFSET1 : 12;  ///< OFFSET1, reset value: 0x0
    uint32_t _RESERVED_418 : 14;
    uint32_t OFFSET1_CH : 5;  ///< OFFSET1_CH, reset value: 0x0
    uint32_t OFFSET1_EN : 1;  ///< OFFSET1_EN, reset value: 0x0
  } OFR1;

  /** 
  * name: OFR2
  * description: offset register 2
  * address: 0x50000164
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_OFR2_t {
    uint32_t OFFSET2 : 12;  ///< OFFSET2, reset value: 0x0
    uint32_t _RESERVED_419 : 14;
    uint32_t OFFSET2_CH : 5;  ///< OFFSET2_CH, reset value: 0x0
    uint32_t OFFSET2_EN : 1;  ///< OFFSET2_EN, reset value: 0x0
  } OFR2;

  /** 
  * name: OFR3
  * description: offset register 3
  * address: 0x50000168
  * offset: 0x68
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_OFR3_t {
    uint32_t OFFSET3 : 12;  ///< OFFSET3, reset value: 0x0
    uint32_t _RESERVED_420 : 14;
    uint32_t OFFSET3_CH : 5;  ///< OFFSET3_CH, reset value: 0x0
    uint32_t OFFSET3_EN : 1;  ///< OFFSET3_EN, reset value: 0x0
  } OFR3;

  /** 
  * name: OFR4
  * description: offset register 4
  * address: 0x5000016C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_OFR4_t {
    uint32_t OFFSET4 : 12;  ///< OFFSET4, reset value: 0x0
    uint32_t _RESERVED_421 : 14;
    uint32_t OFFSET4_CH : 5;  ///< OFFSET4_CH, reset value: 0x0
    uint32_t OFFSET4_EN : 1;  ///< OFFSET4_EN, reset value: 0x0
  } OFR4;

  /** 
  * name: JDR1
  * description: injected data register 1
  * address: 0x50000180
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC2_JDR1_t {
    uint32_t JDATA1 : 16;  ///< JDATA1, reset value: 0x0
  } JDR1;

  /** 
  * name: JDR2
  * description: injected data register 2
  * address: 0x50000184
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC2_JDR2_t {
    uint32_t JDATA2 : 16;  ///< JDATA2, reset value: 0x0
  } JDR2;

  /** 
  * name: JDR3
  * description: injected data register 3
  * address: 0x50000188
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC2_JDR3_t {
    uint32_t JDATA3 : 16;  ///< JDATA3, reset value: 0x0
  } JDR3;

  /** 
  * name: JDR4
  * description: injected data register 4
  * address: 0x5000018C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC2_JDR4_t {
    uint32_t JDATA4 : 16;  ///< JDATA4, reset value: 0x0
  } JDR4;

  /** 
  * name: AWD2CR
  * description: Analog Watchdog 2 Configuration Register
  * address: 0x500001A0
  * offset: 0xA0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_AWD2CR_t {
    uint32_t _RESERVED_422 : 1;
    uint32_t AWD2CH : 18;  ///< AWD2CH, reset value: 0x0
  } AWD2CR;

  /** 
  * name: AWD3CR
  * description: Analog Watchdog 3 Configuration Register
  * address: 0x500001A4
  * offset: 0xA4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_AWD3CR_t {
    uint32_t _RESERVED_423 : 1;
    uint32_t AWD3CH : 18;  ///< AWD3CH, reset value: 0x0
  } AWD3CR;

  /** 
  * name: DIFSEL
  * description: Differential Mode Selection Register 2
  * address: 0x500001B0
  * offset: 0xB0
  * reset value: 0x00000000
  * access: 
  */
  struct ADC2_DIFSEL_t {
    uint32_t _RESERVED_424 : 1;
    uint32_t DIFSEL_1_15 : 15;  ///< Differential mode for channels 15 to 1, reset value: 0x0
    uint32_t DIFSEL_16_18 : 3;  ///< Differential mode for channels 18 to 16, reset value: 0x0
  } DIFSEL;

  /** 
  * name: CALFACT
  * description: Calibration Factors
  * address: 0x500001B4
  * offset: 0xB4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC2_CALFACT_t {
    uint32_t CALFACT_S : 7;  ///< CALFACT_S, reset value: 0x0
    uint32_t _RESERVED_425 : 9;
    uint32_t CALFACT_D : 7;  ///< CALFACT_D, reset value: 0x0
  } CALFACT;

} ADC2_t;


/** 
*  name: ADC1_2
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000300
*/
typedef struct{
  /** 
  * name: CSR
  * description: ADC Common status register
  * address: 0x50000300
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_2_CSR_t {
    uint32_t ADDRDY_MST : 1;  ///< ADDRDY_MST, reset value: 0x0
    uint32_t EOSMP_MST : 1;  ///< EOSMP_MST, reset value: 0x0
    uint32_t EOC_MST : 1;  ///< EOC_MST, reset value: 0x0
    uint32_t EOS_MST : 1;  ///< EOS_MST, reset value: 0x0
    uint32_t OVR_MST : 1;  ///< OVR_MST, reset value: 0x0
    uint32_t JEOC_MST : 1;  ///< JEOC_MST, reset value: 0x0
    uint32_t JEOS_MST : 1;  ///< JEOS_MST, reset value: 0x0
    uint32_t AWD1_MST : 1;  ///< AWD1_MST, reset value: 0x0
    uint32_t AWD2_MST : 1;  ///< AWD2_MST, reset value: 0x0
    uint32_t AWD3_MST : 1;  ///< AWD3_MST, reset value: 0x0
    uint32_t JQOVF_MST : 1;  ///< JQOVF_MST, reset value: 0x0
    uint32_t _RESERVED_426 : 5;
    uint32_t ADRDY_SLV : 1;  ///< ADRDY_SLV, reset value: 0x0
    uint32_t EOSMP_SLV : 1;  ///< EOSMP_SLV, reset value: 0x0
    uint32_t EOC_SLV : 1;  ///< End of regular conversion of the slave ADC, reset value: 0x0
    uint32_t EOS_SLV : 1;  ///< End of regular sequence flag of the slave ADC, reset value: 0x0
    uint32_t OVR_SLV : 1;  ///< Overrun flag of the slave ADC, reset value: 0x0
    uint32_t JEOC_SLV : 1;  ///< End of injected conversion flag of the slave ADC, reset value: 0x0
    uint32_t JEOS_SLV : 1;  ///< End of injected sequence flag of the slave ADC, reset value: 0x0
    uint32_t AWD1_SLV : 1;  ///< Analog watchdog 1 flag of the slave ADC, reset value: 0x0
    uint32_t AWD2_SLV : 1;  ///< Analog watchdog 2 flag of the slave ADC, reset value: 0x0
    uint32_t AWD3_SLV : 1;  ///< Analog watchdog 3 flag of the slave ADC, reset value: 0x0
    uint32_t JQOVF_SLV : 1;  ///< Injected Context Queue Overflow flag of the slave ADC, reset value: 0x0
  } CSR;

  /** 
  * name: CCR
  * description: ADC common control register
  * address: 0x50000308
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC1_2_CCR_t {
    uint32_t MULT : 5;  ///< Multi ADC mode selection, reset value: 0x0
    uint32_t _RESERVED_427 : 3;
    uint32_t DELAY : 4;  ///< Delay between 2 sampling phases, reset value: 0x0
    uint32_t _RESERVED_428 : 1;
    uint32_t DMACFG : 1;  ///< DMA configuration (for multi-ADC mode), reset value: 0x0
    uint32_t MDMA : 2;  ///< Direct memory access mode for multi ADC mode, reset value: 0x0
    uint32_t CKMODE : 2;  ///< ADC clock mode, reset value: 0x0
    uint32_t _RESERVED_429 : 4;
    uint32_t VREFEN : 1;  ///< VREFINT enable, reset value: 0x0
    uint32_t TSEN : 1;  ///< Temperature sensor enable, reset value: 0x0
    uint32_t VBATEN : 1;  ///< VBAT enable, reset value: 0x0
  } CCR;

  /** 
  * name: CDR
  * description: ADC common regular data register for dual and triple modes
  * address: 0x5000030C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC1_2_CDR_t {
    uint32_t RDATA_MST : 16;  ///< Regular data of the master ADC, reset value: 0x0
    uint32_t RDATA_SLV : 16;  ///< Regular data of the slave ADC, reset value: 0x0
  } CDR;

} ADC1_2_t;


/** 
*  name: ADC3
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000400
*/
typedef struct{
  /** 
  * name: ISR
  * description: interrupt and status register
  * address: 0x50000400
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_ISR_t {
    uint32_t ADRDY : 1;  ///< ADRDY, reset value: 0x0
    uint32_t EOSMP : 1;  ///< EOSMP, reset value: 0x0
    uint32_t EOC : 1;  ///< EOC, reset value: 0x0
    uint32_t EOS : 1;  ///< EOS, reset value: 0x0
    uint32_t OVR : 1;  ///< OVR, reset value: 0x0
    uint32_t JEOC : 1;  ///< JEOC, reset value: 0x0
    uint32_t JEOS : 1;  ///< JEOS, reset value: 0x0
    uint32_t AWD1 : 1;  ///< AWD1, reset value: 0x0
    uint32_t AWD2 : 1;  ///< AWD2, reset value: 0x0
    uint32_t AWD3 : 1;  ///< AWD3, reset value: 0x0
    uint32_t JQOVF : 1;  ///< JQOVF, reset value: 0x0
  } ISR;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x50000404
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_IER_t {
    uint32_t ADRDYIE : 1;  ///< ADRDYIE, reset value: 0x0
    uint32_t EOSMPIE : 1;  ///< EOSMPIE, reset value: 0x0
    uint32_t EOCIE : 1;  ///< EOCIE, reset value: 0x0
    uint32_t EOSIE : 1;  ///< EOSIE, reset value: 0x0
    uint32_t OVRIE : 1;  ///< OVRIE, reset value: 0x0
    uint32_t JEOCIE : 1;  ///< JEOCIE, reset value: 0x0
    uint32_t JEOSIE : 1;  ///< JEOSIE, reset value: 0x0
    uint32_t AWD1IE : 1;  ///< AWD1IE, reset value: 0x0
    uint32_t AWD2IE : 1;  ///< AWD2IE, reset value: 0x0
    uint32_t AWD3IE : 1;  ///< AWD3IE, reset value: 0x0
    uint32_t JQOVFIE : 1;  ///< JQOVFIE, reset value: 0x0
  } IER;

  /** 
  * name: CR
  * description: control register
  * address: 0x50000408
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_CR_t {
    uint32_t ADEN : 1;  ///< ADEN, reset value: 0x0
    uint32_t ADDIS : 1;  ///< ADDIS, reset value: 0x0
    uint32_t ADSTART : 1;  ///< ADSTART, reset value: 0x0
    uint32_t JADSTART : 1;  ///< JADSTART, reset value: 0x0
    uint32_t ADSTP : 1;  ///< ADSTP, reset value: 0x0
    uint32_t JADSTP : 1;  ///< JADSTP, reset value: 0x0
    uint32_t _RESERVED_430 : 22;
    uint32_t ADVREGEN : 1;  ///< ADVREGEN, reset value: 0x0
    uint32_t DEEPPWD : 1;  ///< DEEPPWD, reset value: 0x0
    uint32_t ADCALDIF : 1;  ///< ADCALDIF, reset value: 0x0
    uint32_t ADCAL : 1;  ///< ADCAL, reset value: 0x0
  } CR;

  /** 
  * name: CFGR
  * description: configuration register
  * address: 0x5000040C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_CFGR_t {
    uint32_t DMAEN : 1;  ///< DMAEN, reset value: 0x0
    uint32_t DMACFG : 1;  ///< DMACFG, reset value: 0x0
    uint32_t _RESERVED_431 : 1;
    uint32_t RES : 2;  ///< RES, reset value: 0x0
    uint32_t ALIGN : 1;  ///< ALIGN, reset value: 0x0
    uint32_t EXTSEL : 4;  ///< EXTSEL, reset value: 0x0
    uint32_t EXTEN : 2;  ///< EXTEN, reset value: 0x0
    uint32_t OVRMOD : 1;  ///< OVRMOD, reset value: 0x0
    uint32_t CONT : 1;  ///< CONT, reset value: 0x0
    uint32_t AUTDLY : 1;  ///< AUTDLY, reset value: 0x0
    uint32_t AUTOFF : 1;  ///< AUTOFF, reset value: 0x0
    uint32_t DISCEN : 1;  ///< DISCEN, reset value: 0x0
    uint32_t DISCNUM : 3;  ///< DISCNUM, reset value: 0x0
    uint32_t JDISCEN : 1;  ///< JDISCEN, reset value: 0x0
    uint32_t JQM : 1;  ///< JQM, reset value: 0x0
    uint32_t AWD1SGL : 1;  ///< AWD1SGL, reset value: 0x0
    uint32_t AWD1EN : 1;  ///< AWD1EN, reset value: 0x0
    uint32_t JAWD1EN : 1;  ///< JAWD1EN, reset value: 0x0
    uint32_t JAUTO : 1;  ///< JAUTO, reset value: 0x0
    uint32_t AWDCH1CH : 5;  ///< AWDCH1CH, reset value: 0x0
  } CFGR;

  /** 
  * name: SMPR1
  * description: sample time register 1
  * address: 0x50000414
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SMPR1_t {
    uint32_t _RESERVED_432 : 3;
    uint32_t SMP1 : 3;  ///< SMP1, reset value: 0x0
    uint32_t SMP2 : 3;  ///< SMP2, reset value: 0x0
    uint32_t SMP3 : 3;  ///< SMP3, reset value: 0x0
    uint32_t SMP4 : 3;  ///< SMP4, reset value: 0x0
    uint32_t SMP5 : 3;  ///< SMP5, reset value: 0x0
    uint32_t SMP6 : 3;  ///< SMP6, reset value: 0x0
    uint32_t SMP7 : 3;  ///< SMP7, reset value: 0x0
    uint32_t SMP8 : 3;  ///< SMP8, reset value: 0x0
    uint32_t SMP9 : 3;  ///< SMP9, reset value: 0x0
  } SMPR1;

  /** 
  * name: SMPR2
  * description: sample time register 2
  * address: 0x50000418
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SMPR2_t {
    uint32_t SMP10 : 3;  ///< SMP10, reset value: 0x0
    uint32_t SMP11 : 3;  ///< SMP11, reset value: 0x0
    uint32_t SMP12 : 3;  ///< SMP12, reset value: 0x0
    uint32_t SMP13 : 3;  ///< SMP13, reset value: 0x0
    uint32_t SMP14 : 3;  ///< SMP14, reset value: 0x0
    uint32_t SMP15 : 3;  ///< SMP15, reset value: 0x0
    uint32_t SMP16 : 3;  ///< SMP16, reset value: 0x0
    uint32_t SMP17 : 3;  ///< SMP17, reset value: 0x0
    uint32_t SMP18 : 3;  ///< SMP18, reset value: 0x0
  } SMPR2;

  /** 
  * name: TR1
  * description: watchdog threshold register 1
  * address: 0x50000420
  * offset: 0x20
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC3_TR1_t {
    uint32_t LT1 : 12;  ///< LT1, reset value: 0x0
    uint32_t _RESERVED_433 : 4;
    uint32_t HT1 : 12;  ///< HT1, reset value: 0xFFF
  } TR1;

  /** 
  * name: TR2
  * description: watchdog threshold register
  * address: 0x50000424
  * offset: 0x24
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC3_TR2_t {
    uint32_t LT2 : 8;  ///< LT2, reset value: 0x0
    uint32_t _RESERVED_434 : 8;
    uint32_t HT2 : 8;  ///< HT2, reset value: 0xFF
  } TR2;

  /** 
  * name: TR3
  * description: watchdog threshold register 3
  * address: 0x50000428
  * offset: 0x28
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC3_TR3_t {
    uint32_t LT3 : 8;  ///< LT3, reset value: 0x0
    uint32_t _RESERVED_435 : 8;
    uint32_t HT3 : 8;  ///< HT3, reset value: 0xFF
  } TR3;

  /** 
  * name: SQR1
  * description: regular sequence register 1
  * address: 0x50000430
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SQR1_t {
    uint32_t L3 : 4;  ///< L3, reset value: 0x0
    uint32_t _RESERVED_436 : 2;
    uint32_t SQ1 : 5;  ///< SQ1, reset value: 0x0
    uint32_t _RESERVED_437 : 1;
    uint32_t SQ2 : 5;  ///< SQ2, reset value: 0x0
    uint32_t _RESERVED_438 : 1;
    uint32_t SQ3 : 5;  ///< SQ3, reset value: 0x0
    uint32_t _RESERVED_439 : 1;
    uint32_t SQ4 : 5;  ///< SQ4, reset value: 0x0
  } SQR1;

  /** 
  * name: SQR2
  * description: regular sequence register 2
  * address: 0x50000434
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SQR2_t {
    uint32_t SQ5 : 5;  ///< SQ5, reset value: 0x0
    uint32_t _RESERVED_440 : 1;
    uint32_t SQ6 : 5;  ///< SQ6, reset value: 0x0
    uint32_t _RESERVED_441 : 1;
    uint32_t SQ7 : 5;  ///< SQ7, reset value: 0x0
    uint32_t _RESERVED_442 : 1;
    uint32_t SQ8 : 5;  ///< SQ8, reset value: 0x0
    uint32_t _RESERVED_443 : 1;
    uint32_t SQ9 : 5;  ///< SQ9, reset value: 0x0
  } SQR2;

  /** 
  * name: SQR3
  * description: regular sequence register 3
  * address: 0x50000438
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SQR3_t {
    uint32_t SQ10 : 5;  ///< SQ10, reset value: 0x0
    uint32_t _RESERVED_444 : 1;
    uint32_t SQ11 : 5;  ///< SQ11, reset value: 0x0
    uint32_t _RESERVED_445 : 1;
    uint32_t SQ12 : 5;  ///< SQ12, reset value: 0x0
    uint32_t _RESERVED_446 : 1;
    uint32_t SQ13 : 5;  ///< SQ13, reset value: 0x0
    uint32_t _RESERVED_447 : 1;
    uint32_t SQ14 : 5;  ///< SQ14, reset value: 0x0
  } SQR3;

  /** 
  * name: SQR4
  * description: regular sequence register 4
  * address: 0x5000043C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_SQR4_t {
    uint32_t SQ15 : 5;  ///< SQ15, reset value: 0x0
    uint32_t _RESERVED_448 : 1;
    uint32_t SQ16 : 5;  ///< SQ16, reset value: 0x0
  } SQR4;

  /** 
  * name: DR
  * description: regular Data Register
  * address: 0x50000440
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_DR_t {
    uint32_t regularDATA : 16;  ///< regularDATA, reset value: 0x0
  } DR;

  /** 
  * name: JSQR
  * description: injected sequence register
  * address: 0x5000044C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_JSQR_t {
    uint32_t JL : 2;  ///< JL, reset value: 0x0
    uint32_t JEXTSEL : 4;  ///< JEXTSEL, reset value: 0x0
    uint32_t JEXTEN : 2;  ///< JEXTEN, reset value: 0x0
    uint32_t JSQ1 : 5;  ///< JSQ1, reset value: 0x0
    uint32_t _RESERVED_449 : 1;
    uint32_t JSQ2 : 5;  ///< JSQ2, reset value: 0x0
    uint32_t _RESERVED_450 : 1;
    uint32_t JSQ3 : 5;  ///< JSQ3, reset value: 0x0
    uint32_t _RESERVED_451 : 1;
    uint32_t JSQ4 : 5;  ///< JSQ4, reset value: 0x0
  } JSQR;

  /** 
  * name: OFR1
  * description: offset register 1
  * address: 0x50000460
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_OFR1_t {
    uint32_t OFFSET1 : 12;  ///< OFFSET1, reset value: 0x0
    uint32_t _RESERVED_452 : 14;
    uint32_t OFFSET1_CH : 5;  ///< OFFSET1_CH, reset value: 0x0
    uint32_t OFFSET1_EN : 1;  ///< OFFSET1_EN, reset value: 0x0
  } OFR1;

  /** 
  * name: OFR2
  * description: offset register 2
  * address: 0x50000464
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_OFR2_t {
    uint32_t OFFSET2 : 12;  ///< OFFSET2, reset value: 0x0
    uint32_t _RESERVED_453 : 14;
    uint32_t OFFSET2_CH : 5;  ///< OFFSET2_CH, reset value: 0x0
    uint32_t OFFSET2_EN : 1;  ///< OFFSET2_EN, reset value: 0x0
  } OFR2;

  /** 
  * name: OFR3
  * description: offset register 3
  * address: 0x50000468
  * offset: 0x68
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_OFR3_t {
    uint32_t OFFSET3 : 12;  ///< OFFSET3, reset value: 0x0
    uint32_t _RESERVED_454 : 14;
    uint32_t OFFSET3_CH : 5;  ///< OFFSET3_CH, reset value: 0x0
    uint32_t OFFSET3_EN : 1;  ///< OFFSET3_EN, reset value: 0x0
  } OFR3;

  /** 
  * name: OFR4
  * description: offset register 4
  * address: 0x5000046C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_OFR4_t {
    uint32_t OFFSET4 : 12;  ///< OFFSET4, reset value: 0x0
    uint32_t _RESERVED_455 : 14;
    uint32_t OFFSET4_CH : 5;  ///< OFFSET4_CH, reset value: 0x0
    uint32_t OFFSET4_EN : 1;  ///< OFFSET4_EN, reset value: 0x0
  } OFR4;

  /** 
  * name: JDR1
  * description: injected data register 1
  * address: 0x50000480
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_JDR1_t {
    uint32_t JDATA1 : 16;  ///< JDATA1, reset value: 0x0
  } JDR1;

  /** 
  * name: JDR2
  * description: injected data register 2
  * address: 0x50000484
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_JDR2_t {
    uint32_t JDATA2 : 16;  ///< JDATA2, reset value: 0x0
  } JDR2;

  /** 
  * name: JDR3
  * description: injected data register 3
  * address: 0x50000488
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_JDR3_t {
    uint32_t JDATA3 : 16;  ///< JDATA3, reset value: 0x0
  } JDR3;

  /** 
  * name: JDR4
  * description: injected data register 4
  * address: 0x5000048C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_JDR4_t {
    uint32_t JDATA4 : 16;  ///< JDATA4, reset value: 0x0
  } JDR4;

  /** 
  * name: AWD2CR
  * description: Analog Watchdog 2 Configuration Register
  * address: 0x500004A0
  * offset: 0xA0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_AWD2CR_t {
    uint32_t _RESERVED_456 : 1;
    uint32_t AWD2CH : 18;  ///< AWD2CH, reset value: 0x0
  } AWD2CR;

  /** 
  * name: AWD3CR
  * description: Analog Watchdog 3 Configuration Register
  * address: 0x500004A4
  * offset: 0xA4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_AWD3CR_t {
    uint32_t _RESERVED_457 : 1;
    uint32_t AWD3CH : 18;  ///< AWD3CH, reset value: 0x0
  } AWD3CR;

  /** 
  * name: DIFSEL
  * description: Differential Mode Selection Register 2
  * address: 0x500004B0
  * offset: 0xB0
  * reset value: 0x00000000
  * access: 
  */
  struct ADC3_DIFSEL_t {
    uint32_t _RESERVED_458 : 1;
    uint32_t DIFSEL_1_15 : 15;  ///< Differential mode for channels 15 to 1, reset value: 0x0
    uint32_t DIFSEL_16_18 : 3;  ///< Differential mode for channels 18 to 16, reset value: 0x0
  } DIFSEL;

  /** 
  * name: CALFACT
  * description: Calibration Factors
  * address: 0x500004B4
  * offset: 0xB4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_CALFACT_t {
    uint32_t CALFACT_S : 7;  ///< CALFACT_S, reset value: 0x0
    uint32_t _RESERVED_459 : 9;
    uint32_t CALFACT_D : 7;  ///< CALFACT_D, reset value: 0x0
  } CALFACT;

} ADC3_t;


/** 
*  name: ADC4
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000500
*/
typedef struct{
  /** 
  * name: ISR
  * description: interrupt and status register
  * address: 0x50000500
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_ISR_t {
    uint32_t ADRDY : 1;  ///< ADRDY, reset value: 0x0
    uint32_t EOSMP : 1;  ///< EOSMP, reset value: 0x0
    uint32_t EOC : 1;  ///< EOC, reset value: 0x0
    uint32_t EOS : 1;  ///< EOS, reset value: 0x0
    uint32_t OVR : 1;  ///< OVR, reset value: 0x0
    uint32_t JEOC : 1;  ///< JEOC, reset value: 0x0
    uint32_t JEOS : 1;  ///< JEOS, reset value: 0x0
    uint32_t AWD1 : 1;  ///< AWD1, reset value: 0x0
    uint32_t AWD2 : 1;  ///< AWD2, reset value: 0x0
    uint32_t AWD3 : 1;  ///< AWD3, reset value: 0x0
    uint32_t JQOVF : 1;  ///< JQOVF, reset value: 0x0
  } ISR;

  /** 
  * name: IER
  * description: interrupt enable register
  * address: 0x50000504
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_IER_t {
    uint32_t ADRDYIE : 1;  ///< ADRDYIE, reset value: 0x0
    uint32_t EOSMPIE : 1;  ///< EOSMPIE, reset value: 0x0
    uint32_t EOCIE : 1;  ///< EOCIE, reset value: 0x0
    uint32_t EOSIE : 1;  ///< EOSIE, reset value: 0x0
    uint32_t OVRIE : 1;  ///< OVRIE, reset value: 0x0
    uint32_t JEOCIE : 1;  ///< JEOCIE, reset value: 0x0
    uint32_t JEOSIE : 1;  ///< JEOSIE, reset value: 0x0
    uint32_t AWD1IE : 1;  ///< AWD1IE, reset value: 0x0
    uint32_t AWD2IE : 1;  ///< AWD2IE, reset value: 0x0
    uint32_t AWD3IE : 1;  ///< AWD3IE, reset value: 0x0
    uint32_t JQOVFIE : 1;  ///< JQOVFIE, reset value: 0x0
  } IER;

  /** 
  * name: CR
  * description: control register
  * address: 0x50000508
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_CR_t {
    uint32_t ADEN : 1;  ///< ADEN, reset value: 0x0
    uint32_t ADDIS : 1;  ///< ADDIS, reset value: 0x0
    uint32_t ADSTART : 1;  ///< ADSTART, reset value: 0x0
    uint32_t JADSTART : 1;  ///< JADSTART, reset value: 0x0
    uint32_t ADSTP : 1;  ///< ADSTP, reset value: 0x0
    uint32_t JADSTP : 1;  ///< JADSTP, reset value: 0x0
    uint32_t _RESERVED_460 : 22;
    uint32_t ADVREGEN : 1;  ///< ADVREGEN, reset value: 0x0
    uint32_t DEEPPWD : 1;  ///< DEEPPWD, reset value: 0x0
    uint32_t ADCALDIF : 1;  ///< ADCALDIF, reset value: 0x0
    uint32_t ADCAL : 1;  ///< ADCAL, reset value: 0x0
  } CR;

  /** 
  * name: CFGR
  * description: configuration register
  * address: 0x5000050C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_CFGR_t {
    uint32_t DMAEN : 1;  ///< DMAEN, reset value: 0x0
    uint32_t DMACFG : 1;  ///< DMACFG, reset value: 0x0
    uint32_t _RESERVED_461 : 1;
    uint32_t RES : 2;  ///< RES, reset value: 0x0
    uint32_t ALIGN : 1;  ///< ALIGN, reset value: 0x0
    uint32_t EXTSEL : 4;  ///< EXTSEL, reset value: 0x0
    uint32_t EXTEN : 2;  ///< EXTEN, reset value: 0x0
    uint32_t OVRMOD : 1;  ///< OVRMOD, reset value: 0x0
    uint32_t CONT : 1;  ///< CONT, reset value: 0x0
    uint32_t AUTDLY : 1;  ///< AUTDLY, reset value: 0x0
    uint32_t AUTOFF : 1;  ///< AUTOFF, reset value: 0x0
    uint32_t DISCEN : 1;  ///< DISCEN, reset value: 0x0
    uint32_t DISCNUM : 3;  ///< DISCNUM, reset value: 0x0
    uint32_t JDISCEN : 1;  ///< JDISCEN, reset value: 0x0
    uint32_t JQM : 1;  ///< JQM, reset value: 0x0
    uint32_t AWD1SGL : 1;  ///< AWD1SGL, reset value: 0x0
    uint32_t AWD1EN : 1;  ///< AWD1EN, reset value: 0x0
    uint32_t JAWD1EN : 1;  ///< JAWD1EN, reset value: 0x0
    uint32_t JAUTO : 1;  ///< JAUTO, reset value: 0x0
    uint32_t AWDCH1CH : 5;  ///< AWDCH1CH, reset value: 0x0
  } CFGR;

  /** 
  * name: SMPR1
  * description: sample time register 1
  * address: 0x50000514
  * offset: 0x14
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SMPR1_t {
    uint32_t _RESERVED_462 : 3;
    uint32_t SMP1 : 3;  ///< SMP1, reset value: 0x0
    uint32_t SMP2 : 3;  ///< SMP2, reset value: 0x0
    uint32_t SMP3 : 3;  ///< SMP3, reset value: 0x0
    uint32_t SMP4 : 3;  ///< SMP4, reset value: 0x0
    uint32_t SMP5 : 3;  ///< SMP5, reset value: 0x0
    uint32_t SMP6 : 3;  ///< SMP6, reset value: 0x0
    uint32_t SMP7 : 3;  ///< SMP7, reset value: 0x0
    uint32_t SMP8 : 3;  ///< SMP8, reset value: 0x0
    uint32_t SMP9 : 3;  ///< SMP9, reset value: 0x0
  } SMPR1;

  /** 
  * name: SMPR2
  * description: sample time register 2
  * address: 0x50000518
  * offset: 0x18
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SMPR2_t {
    uint32_t SMP10 : 3;  ///< SMP10, reset value: 0x0
    uint32_t SMP11 : 3;  ///< SMP11, reset value: 0x0
    uint32_t SMP12 : 3;  ///< SMP12, reset value: 0x0
    uint32_t SMP13 : 3;  ///< SMP13, reset value: 0x0
    uint32_t SMP14 : 3;  ///< SMP14, reset value: 0x0
    uint32_t SMP15 : 3;  ///< SMP15, reset value: 0x0
    uint32_t SMP16 : 3;  ///< SMP16, reset value: 0x0
    uint32_t SMP17 : 3;  ///< SMP17, reset value: 0x0
    uint32_t SMP18 : 3;  ///< SMP18, reset value: 0x0
  } SMPR2;

  /** 
  * name: TR1
  * description: watchdog threshold register 1
  * address: 0x50000520
  * offset: 0x20
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC4_TR1_t {
    uint32_t LT1 : 12;  ///< LT1, reset value: 0x0
    uint32_t _RESERVED_463 : 4;
    uint32_t HT1 : 12;  ///< HT1, reset value: 0xFFF
  } TR1;

  /** 
  * name: TR2
  * description: watchdog threshold register
  * address: 0x50000524
  * offset: 0x24
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC4_TR2_t {
    uint32_t LT2 : 8;  ///< LT2, reset value: 0x0
    uint32_t _RESERVED_464 : 8;
    uint32_t HT2 : 8;  ///< HT2, reset value: 0xFF
  } TR2;

  /** 
  * name: TR3
  * description: watchdog threshold register 3
  * address: 0x50000528
  * offset: 0x28
  * reset value: 0x0FFF0000
  * access: read-write
  */
  struct ADC4_TR3_t {
    uint32_t LT3 : 8;  ///< LT3, reset value: 0x0
    uint32_t _RESERVED_465 : 8;
    uint32_t HT3 : 8;  ///< HT3, reset value: 0xFF
  } TR3;

  /** 
  * name: SQR1
  * description: regular sequence register 1
  * address: 0x50000530
  * offset: 0x30
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SQR1_t {
    uint32_t L3 : 4;  ///< L3, reset value: 0x0
    uint32_t _RESERVED_466 : 2;
    uint32_t SQ1 : 5;  ///< SQ1, reset value: 0x0
    uint32_t _RESERVED_467 : 1;
    uint32_t SQ2 : 5;  ///< SQ2, reset value: 0x0
    uint32_t _RESERVED_468 : 1;
    uint32_t SQ3 : 5;  ///< SQ3, reset value: 0x0
    uint32_t _RESERVED_469 : 1;
    uint32_t SQ4 : 5;  ///< SQ4, reset value: 0x0
  } SQR1;

  /** 
  * name: SQR2
  * description: regular sequence register 2
  * address: 0x50000534
  * offset: 0x34
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SQR2_t {
    uint32_t SQ5 : 5;  ///< SQ5, reset value: 0x0
    uint32_t _RESERVED_470 : 1;
    uint32_t SQ6 : 5;  ///< SQ6, reset value: 0x0
    uint32_t _RESERVED_471 : 1;
    uint32_t SQ7 : 5;  ///< SQ7, reset value: 0x0
    uint32_t _RESERVED_472 : 1;
    uint32_t SQ8 : 5;  ///< SQ8, reset value: 0x0
    uint32_t _RESERVED_473 : 1;
    uint32_t SQ9 : 5;  ///< SQ9, reset value: 0x0
  } SQR2;

  /** 
  * name: SQR3
  * description: regular sequence register 3
  * address: 0x50000538
  * offset: 0x38
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SQR3_t {
    uint32_t SQ10 : 5;  ///< SQ10, reset value: 0x0
    uint32_t _RESERVED_474 : 1;
    uint32_t SQ11 : 5;  ///< SQ11, reset value: 0x0
    uint32_t _RESERVED_475 : 1;
    uint32_t SQ12 : 5;  ///< SQ12, reset value: 0x0
    uint32_t _RESERVED_476 : 1;
    uint32_t SQ13 : 5;  ///< SQ13, reset value: 0x0
    uint32_t _RESERVED_477 : 1;
    uint32_t SQ14 : 5;  ///< SQ14, reset value: 0x0
  } SQR3;

  /** 
  * name: SQR4
  * description: regular sequence register 4
  * address: 0x5000053C
  * offset: 0x3C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_SQR4_t {
    uint32_t SQ15 : 5;  ///< SQ15, reset value: 0x0
    uint32_t _RESERVED_478 : 1;
    uint32_t SQ16 : 5;  ///< SQ16, reset value: 0x0
  } SQR4;

  /** 
  * name: DR
  * description: regular Data Register
  * address: 0x50000540
  * offset: 0x40
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC4_DR_t {
    uint32_t regularDATA : 16;  ///< regularDATA, reset value: 0x0
  } DR;

  /** 
  * name: JSQR
  * description: injected sequence register
  * address: 0x5000054C
  * offset: 0x4C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_JSQR_t {
    uint32_t JL : 2;  ///< JL, reset value: 0x0
    uint32_t JEXTSEL : 4;  ///< JEXTSEL, reset value: 0x0
    uint32_t JEXTEN : 2;  ///< JEXTEN, reset value: 0x0
    uint32_t JSQ1 : 5;  ///< JSQ1, reset value: 0x0
    uint32_t _RESERVED_479 : 1;
    uint32_t JSQ2 : 5;  ///< JSQ2, reset value: 0x0
    uint32_t _RESERVED_480 : 1;
    uint32_t JSQ3 : 5;  ///< JSQ3, reset value: 0x0
    uint32_t _RESERVED_481 : 1;
    uint32_t JSQ4 : 5;  ///< JSQ4, reset value: 0x0
  } JSQR;

  /** 
  * name: OFR1
  * description: offset register 1
  * address: 0x50000560
  * offset: 0x60
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_OFR1_t {
    uint32_t OFFSET1 : 12;  ///< OFFSET1, reset value: 0x0
    uint32_t _RESERVED_482 : 14;
    uint32_t OFFSET1_CH : 5;  ///< OFFSET1_CH, reset value: 0x0
    uint32_t OFFSET1_EN : 1;  ///< OFFSET1_EN, reset value: 0x0
  } OFR1;

  /** 
  * name: OFR2
  * description: offset register 2
  * address: 0x50000564
  * offset: 0x64
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_OFR2_t {
    uint32_t OFFSET2 : 12;  ///< OFFSET2, reset value: 0x0
    uint32_t _RESERVED_483 : 14;
    uint32_t OFFSET2_CH : 5;  ///< OFFSET2_CH, reset value: 0x0
    uint32_t OFFSET2_EN : 1;  ///< OFFSET2_EN, reset value: 0x0
  } OFR2;

  /** 
  * name: OFR3
  * description: offset register 3
  * address: 0x50000568
  * offset: 0x68
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_OFR3_t {
    uint32_t OFFSET3 : 12;  ///< OFFSET3, reset value: 0x0
    uint32_t _RESERVED_484 : 14;
    uint32_t OFFSET3_CH : 5;  ///< OFFSET3_CH, reset value: 0x0
    uint32_t OFFSET3_EN : 1;  ///< OFFSET3_EN, reset value: 0x0
  } OFR3;

  /** 
  * name: OFR4
  * description: offset register 4
  * address: 0x5000056C
  * offset: 0x6C
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_OFR4_t {
    uint32_t OFFSET4 : 12;  ///< OFFSET4, reset value: 0x0
    uint32_t _RESERVED_485 : 14;
    uint32_t OFFSET4_CH : 5;  ///< OFFSET4_CH, reset value: 0x0
    uint32_t OFFSET4_EN : 1;  ///< OFFSET4_EN, reset value: 0x0
  } OFR4;

  /** 
  * name: JDR1
  * description: injected data register 1
  * address: 0x50000580
  * offset: 0x80
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC4_JDR1_t {
    uint32_t JDATA1 : 16;  ///< JDATA1, reset value: 0x0
  } JDR1;

  /** 
  * name: JDR2
  * description: injected data register 2
  * address: 0x50000584
  * offset: 0x84
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC4_JDR2_t {
    uint32_t JDATA2 : 16;  ///< JDATA2, reset value: 0x0
  } JDR2;

  /** 
  * name: JDR3
  * description: injected data register 3
  * address: 0x50000588
  * offset: 0x88
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC4_JDR3_t {
    uint32_t JDATA3 : 16;  ///< JDATA3, reset value: 0x0
  } JDR3;

  /** 
  * name: JDR4
  * description: injected data register 4
  * address: 0x5000058C
  * offset: 0x8C
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC4_JDR4_t {
    uint32_t JDATA4 : 16;  ///< JDATA4, reset value: 0x0
  } JDR4;

  /** 
  * name: AWD2CR
  * description: Analog Watchdog 2 Configuration Register
  * address: 0x500005A0
  * offset: 0xA0
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_AWD2CR_t {
    uint32_t _RESERVED_486 : 1;
    uint32_t AWD2CH : 18;  ///< AWD2CH, reset value: 0x0
  } AWD2CR;

  /** 
  * name: AWD3CR
  * description: Analog Watchdog 3 Configuration Register
  * address: 0x500005A4
  * offset: 0xA4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_AWD3CR_t {
    uint32_t _RESERVED_487 : 1;
    uint32_t AWD3CH : 18;  ///< AWD3CH, reset value: 0x0
  } AWD3CR;

  /** 
  * name: DIFSEL
  * description: Differential Mode Selection Register 2
  * address: 0x500005B0
  * offset: 0xB0
  * reset value: 0x00000000
  * access: 
  */
  struct ADC4_DIFSEL_t {
    uint32_t _RESERVED_488 : 1;
    uint32_t DIFSEL_1_15 : 15;  ///< Differential mode for channels 15 to 1, reset value: 0x0
    uint32_t DIFSEL_16_18 : 3;  ///< Differential mode for channels 18 to 16, reset value: 0x0
  } DIFSEL;

  /** 
  * name: CALFACT
  * description: Calibration Factors
  * address: 0x500005B4
  * offset: 0xB4
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC4_CALFACT_t {
    uint32_t CALFACT_S : 7;  ///< CALFACT_S, reset value: 0x0
    uint32_t _RESERVED_489 : 9;
    uint32_t CALFACT_D : 7;  ///< CALFACT_D, reset value: 0x0
  } CALFACT;

} ADC4_t;


/** 
*  name: ADC3_4
*  description: Analog-to-Digital Converter
*  group: ADC
*  address: 0x50000700
*/
typedef struct{
  /** 
  * name: CSR
  * description: ADC Common status register
  * address: 0x50000700
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_4_CSR_t {
    uint32_t ADDRDY_MST : 1;  ///< ADDRDY_MST, reset value: 0x0
    uint32_t EOSMP_MST : 1;  ///< EOSMP_MST, reset value: 0x0
    uint32_t EOC_MST : 1;  ///< EOC_MST, reset value: 0x0
    uint32_t EOS_MST : 1;  ///< EOS_MST, reset value: 0x0
    uint32_t OVR_MST : 1;  ///< OVR_MST, reset value: 0x0
    uint32_t JEOC_MST : 1;  ///< JEOC_MST, reset value: 0x0
    uint32_t JEOS_MST : 1;  ///< JEOS_MST, reset value: 0x0
    uint32_t AWD1_MST : 1;  ///< AWD1_MST, reset value: 0x0
    uint32_t AWD2_MST : 1;  ///< AWD2_MST, reset value: 0x0
    uint32_t AWD3_MST : 1;  ///< AWD3_MST, reset value: 0x0
    uint32_t JQOVF_MST : 1;  ///< JQOVF_MST, reset value: 0x0
    uint32_t _RESERVED_490 : 5;
    uint32_t ADRDY_SLV : 1;  ///< ADRDY_SLV, reset value: 0x0
    uint32_t EOSMP_SLV : 1;  ///< EOSMP_SLV, reset value: 0x0
    uint32_t EOC_SLV : 1;  ///< End of regular conversion of the slave ADC, reset value: 0x0
    uint32_t EOS_SLV : 1;  ///< End of regular sequence flag of the slave ADC, reset value: 0x0
    uint32_t OVR_SLV : 1;  ///< Overrun flag of the slave ADC, reset value: 0x0
    uint32_t JEOC_SLV : 1;  ///< End of injected conversion flag of the slave ADC, reset value: 0x0
    uint32_t JEOS_SLV : 1;  ///< End of injected sequence flag of the slave ADC, reset value: 0x0
    uint32_t AWD1_SLV : 1;  ///< Analog watchdog 1 flag of the slave ADC, reset value: 0x0
    uint32_t AWD2_SLV : 1;  ///< Analog watchdog 2 flag of the slave ADC, reset value: 0x0
    uint32_t AWD3_SLV : 1;  ///< Analog watchdog 3 flag of the slave ADC, reset value: 0x0
    uint32_t JQOVF_SLV : 1;  ///< Injected Context Queue Overflow flag of the slave ADC, reset value: 0x0
  } CSR;

  /** 
  * name: CCR
  * description: ADC common control register
  * address: 0x50000708
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct ADC3_4_CCR_t {
    uint32_t MULT : 5;  ///< Multi ADC mode selection, reset value: 0x0
    uint32_t _RESERVED_491 : 3;
    uint32_t DELAY : 4;  ///< Delay between 2 sampling phases, reset value: 0x0
    uint32_t _RESERVED_492 : 1;
    uint32_t DMACFG : 1;  ///< DMA configuration (for multi-ADC mode), reset value: 0x0
    uint32_t MDMA : 2;  ///< Direct memory access mode for multi ADC mode, reset value: 0x0
    uint32_t CKMODE : 2;  ///< ADC clock mode, reset value: 0x0
    uint32_t _RESERVED_493 : 4;
    uint32_t VREFEN : 1;  ///< VREFINT enable, reset value: 0x0
    uint32_t TSEN : 1;  ///< Temperature sensor enable, reset value: 0x0
    uint32_t VBATEN : 1;  ///< VBAT enable, reset value: 0x0
  } CCR;

  /** 
  * name: CDR
  * description: ADC common regular data register for dual and triple modes
  * address: 0x5000070C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-only
  */
  struct ADC3_4_CDR_t {
    uint32_t RDATA_MST : 16;  ///< Regular data of the master ADC, reset value: 0x0
    uint32_t RDATA_SLV : 16;  ///< Regular data of the slave ADC, reset value: 0x0
  } CDR;

} ADC3_4_t;


/** 
*  name: FMC
*  description: Flexible memory controller
*  group: FMC
*  address: 0xA0000400
*/
typedef struct{
  /** 
  * name: BCR1
  * description: SRAM/NOR-Flash chip-select control register 1
  * address: 0xA0000400
  * offset: 0x0
  * reset value: 0x000030D0
  * access: read-write
  */
  struct FMC_BCR1_t {
    uint32_t MBKEN : 1;  ///< MBKEN, reset value: 0x0
    uint32_t MUXEN : 1;  ///< MUXEN, reset value: 0x0
    uint32_t MTYP : 2;  ///< MTYP, reset value: 0x0
    uint32_t MWID : 2;  ///< MWID, reset value: 0x1
    uint32_t FACCEN : 1;  ///< FACCEN, reset value: 0x1
    uint32_t _RESERVED_494 : 1;
    uint32_t BURSTEN : 1;  ///< BURSTEN, reset value: 0x0
    uint32_t WAITPOL : 1;  ///< WAITPOL, reset value: 0x0
    uint32_t _RESERVED_495 : 1;
    uint32_t WAITCFG : 1;  ///< WAITCFG, reset value: 0x0
    uint32_t WREN : 1;  ///< WREN, reset value: 0x1
    uint32_t WAITEN : 1;  ///< WAITEN, reset value: 0x1
    uint32_t EXTMOD : 1;  ///< EXTMOD, reset value: 0x0
    uint32_t ASYNCWAIT : 1;  ///< ASYNCWAIT, reset value: 0x0
    uint32_t _RESERVED_496 : 3;
    uint32_t CBURSTRW : 1;  ///< CBURSTRW, reset value: 0x0
    uint32_t CCLKEN : 1;  ///< CCLKEN, reset value: 0x0
  } BCR1;

  /** 
  * name: BTR1
  * description: SRAM/NOR-Flash chip-select timing register 1
  * address: 0xA0000404
  * offset: 0x4
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct FMC_BTR1_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< BUSTURN, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x3
  } BTR1;

  /** 
  * name: BCR2
  * description: SRAM/NOR-Flash chip-select control register 2
  * address: 0xA0000408
  * offset: 0x8
  * reset value: 0x000030D0
  * access: read-write
  */
  struct FMC_BCR2_t {
    uint32_t MBKEN : 1;  ///< MBKEN, reset value: 0x0
    uint32_t MUXEN : 1;  ///< MUXEN, reset value: 0x0
    uint32_t MTYP : 2;  ///< MTYP, reset value: 0x0
    uint32_t MWID : 2;  ///< MWID, reset value: 0x1
    uint32_t FACCEN : 1;  ///< FACCEN, reset value: 0x1
    uint32_t _RESERVED_497 : 1;
    uint32_t BURSTEN : 1;  ///< BURSTEN, reset value: 0x0
    uint32_t WAITPOL : 1;  ///< WAITPOL, reset value: 0x0
    uint32_t WRAPMOD : 1;  ///< WRAPMOD, reset value: 0x0
    uint32_t WAITCFG : 1;  ///< WAITCFG, reset value: 0x0
    uint32_t WREN : 1;  ///< WREN, reset value: 0x1
    uint32_t WAITEN : 1;  ///< WAITEN, reset value: 0x1
    uint32_t EXTMOD : 1;  ///< EXTMOD, reset value: 0x0
    uint32_t ASYNCWAIT : 1;  ///< ASYNCWAIT, reset value: 0x0
    uint32_t _RESERVED_498 : 3;
    uint32_t CBURSTRW : 1;  ///< CBURSTRW, reset value: 0x0
  } BCR2;

  /** 
  * name: BTR2
  * description: SRAM/NOR-Flash chip-select timing register 2
  * address: 0xA000040C
  * offset: 0xC
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct FMC_BTR2_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< BUSTURN, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x3
  } BTR2;

  /** 
  * name: BCR3
  * description: SRAM/NOR-Flash chip-select control register 3
  * address: 0xA0000410
  * offset: 0x10
  * reset value: 0x000030D0
  * access: read-write
  */
  struct FMC_BCR3_t {
    uint32_t MBKEN : 1;  ///< MBKEN, reset value: 0x0
    uint32_t MUXEN : 1;  ///< MUXEN, reset value: 0x0
    uint32_t MTYP : 2;  ///< MTYP, reset value: 0x0
    uint32_t MWID : 2;  ///< MWID, reset value: 0x1
    uint32_t FACCEN : 1;  ///< FACCEN, reset value: 0x1
    uint32_t _RESERVED_499 : 1;
    uint32_t BURSTEN : 1;  ///< BURSTEN, reset value: 0x0
    uint32_t WAITPOL : 1;  ///< WAITPOL, reset value: 0x0
    uint32_t WRAPMOD : 1;  ///< WRAPMOD, reset value: 0x0
    uint32_t WAITCFG : 1;  ///< WAITCFG, reset value: 0x0
    uint32_t WREN : 1;  ///< WREN, reset value: 0x1
    uint32_t WAITEN : 1;  ///< WAITEN, reset value: 0x1
    uint32_t EXTMOD : 1;  ///< EXTMOD, reset value: 0x0
    uint32_t ASYNCWAIT : 1;  ///< ASYNCWAIT, reset value: 0x0
    uint32_t _RESERVED_500 : 3;
    uint32_t CBURSTRW : 1;  ///< CBURSTRW, reset value: 0x0
  } BCR3;

  /** 
  * name: BTR3
  * description: SRAM/NOR-Flash chip-select timing register 3
  * address: 0xA0000414
  * offset: 0x14
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct FMC_BTR3_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< BUSTURN, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x3
  } BTR3;

  /** 
  * name: BCR4
  * description: SRAM/NOR-Flash chip-select control register 4
  * address: 0xA0000418
  * offset: 0x18
  * reset value: 0x000030D0
  * access: read-write
  */
  struct FMC_BCR4_t {
    uint32_t MBKEN : 1;  ///< MBKEN, reset value: 0x0
    uint32_t MUXEN : 1;  ///< MUXEN, reset value: 0x0
    uint32_t MTYP : 2;  ///< MTYP, reset value: 0x0
    uint32_t MWID : 2;  ///< MWID, reset value: 0x1
    uint32_t FACCEN : 1;  ///< FACCEN, reset value: 0x1
    uint32_t _RESERVED_501 : 1;
    uint32_t BURSTEN : 1;  ///< BURSTEN, reset value: 0x0
    uint32_t WAITPOL : 1;  ///< WAITPOL, reset value: 0x0
    uint32_t WRAPMOD : 1;  ///< WRAPMOD, reset value: 0x0
    uint32_t WAITCFG : 1;  ///< WAITCFG, reset value: 0x0
    uint32_t WREN : 1;  ///< WREN, reset value: 0x1
    uint32_t WAITEN : 1;  ///< WAITEN, reset value: 0x1
    uint32_t EXTMOD : 1;  ///< EXTMOD, reset value: 0x0
    uint32_t ASYNCWAIT : 1;  ///< ASYNCWAIT, reset value: 0x0
    uint32_t _RESERVED_502 : 3;
    uint32_t CBURSTRW : 1;  ///< CBURSTRW, reset value: 0x0
  } BCR4;

  /** 
  * name: BTR4
  * description: SRAM/NOR-Flash chip-select timing register 4
  * address: 0xA000041C
  * offset: 0x1C
  * reset value: 0xFFFFFFFF
  * access: read-write
  */
  struct FMC_BTR4_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< BUSTURN, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x3
  } BTR4;

  const uint8_t _RESERVED_503[36];
  /** 
  * name: PCR2
  * description: PC Card/NAND Flash control register 2
  * address: 0xA0000460
  * offset: 0x60
  * reset value: 0x00000018
  * access: read-write
  */
  struct FMC_PCR2_t {
    uint32_t _RESERVED_504 : 1;
    uint32_t PWAITEN : 1;  ///< PWAITEN, reset value: 0x0
    uint32_t PBKEN : 1;  ///< PBKEN, reset value: 0x0
    uint32_t PTYP : 1;  ///< PTYP, reset value: 0x1
    uint32_t PWID : 2;  ///< PWID, reset value: 0x1
    uint32_t ECCEN : 1;  ///< ECCEN, reset value: 0x0
    uint32_t _RESERVED_505 : 2;
    uint32_t TCLR : 4;  ///< TCLR, reset value: 0x0
    uint32_t TAR : 4;  ///< TAR, reset value: 0x0
    uint32_t ECCPS : 3;  ///< ECCPS, reset value: 0x0
  } PCR2;

  /** 
  * name: SR2
  * description: FIFO status and interrupt register 2
  * address: 0xA0000464
  * offset: 0x64
  * reset value: 0x00000040
  * access: 
  */
  struct FMC_SR2_t {
    uint32_t IRS : 1;  ///< IRS, reset value: 0x0
    uint32_t ILS : 1;  ///< ILS, reset value: 0x0
    uint32_t IFS : 1;  ///< IFS, reset value: 0x0
    uint32_t IREN : 1;  ///< IREN, reset value: 0x0
    uint32_t ILEN : 1;  ///< ILEN, reset value: 0x0
    uint32_t IFEN : 1;  ///< IFEN, reset value: 0x0
    uint32_t FEMPT : 1;  ///< FEMPT, reset value: 0x1
  } SR2;

  /** 
  * name: PMEM2
  * description: Common memory space timing register 2
  * address: 0xA0000468
  * offset: 0x68
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PMEM2_t {
    uint32_t MEMSETx : 8;  ///< MEMSETx, reset value: 0xFC
    uint32_t MEMWAITx : 8;  ///< MEMWAITx, reset value: 0xFC
    uint32_t MEMHOLDx : 8;  ///< MEMHOLDx, reset value: 0xFC
    uint32_t MEMHIZx : 8;  ///< MEMHIZx, reset value: 0xFC
  } PMEM2;

  /** 
  * name: PATT2
  * description: Attribute memory space timing register 2
  * address: 0xA000046C
  * offset: 0x6C
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PATT2_t {
    uint32_t ATTSETx : 8;  ///< ATTSETx, reset value: 0xFC
    uint32_t ATTWAITx : 8;  ///< ATTWAITx, reset value: 0xFC
    uint32_t ATTHOLDx : 8;  ///< ATTHOLDx, reset value: 0xFC
    uint32_t ATTHIZx : 8;  ///< ATTHIZx, reset value: 0xFC
  } PATT2;

  /** 
  * name: ECCR2
  * description: ECC result register 2
  * address: 0xA0000474
  * offset: 0x74
  * reset value: 0x00000000
  * access: read-only
  */
  struct FMC_ECCR2_t {
    uint32_t ECCx : 32;  ///< ECCx, reset value: 0x0
  } ECCR2;

  /** 
  * name: PCR3
  * description: PC Card/NAND Flash control register 3
  * address: 0xA0000480
  * offset: 0x80
  * reset value: 0x00000018
  * access: read-write
  */
  struct FMC_PCR3_t {
    uint32_t _RESERVED_506 : 1;
    uint32_t PWAITEN : 1;  ///< PWAITEN, reset value: 0x0
    uint32_t PBKEN : 1;  ///< PBKEN, reset value: 0x0
    uint32_t PTYP : 1;  ///< PTYP, reset value: 0x1
    uint32_t PWID : 2;  ///< PWID, reset value: 0x1
    uint32_t ECCEN : 1;  ///< ECCEN, reset value: 0x0
    uint32_t _RESERVED_507 : 2;
    uint32_t TCLR : 4;  ///< TCLR, reset value: 0x0
    uint32_t TAR : 4;  ///< TAR, reset value: 0x0
    uint32_t ECCPS : 3;  ///< ECCPS, reset value: 0x0
  } PCR3;

  /** 
  * name: SR3
  * description: FIFO status and interrupt register 3
  * address: 0xA0000484
  * offset: 0x84
  * reset value: 0x00000040
  * access: 
  */
  struct FMC_SR3_t {
    uint32_t IRS : 1;  ///< IRS, reset value: 0x0
    uint32_t ILS : 1;  ///< ILS, reset value: 0x0
    uint32_t IFS : 1;  ///< IFS, reset value: 0x0
    uint32_t IREN : 1;  ///< IREN, reset value: 0x0
    uint32_t ILEN : 1;  ///< ILEN, reset value: 0x0
    uint32_t IFEN : 1;  ///< IFEN, reset value: 0x0
    uint32_t FEMPT : 1;  ///< FEMPT, reset value: 0x1
  } SR3;

  /** 
  * name: PMEM3
  * description: Common memory space timing register 3
  * address: 0xA0000488
  * offset: 0x88
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PMEM3_t {
    uint32_t MEMSETx : 8;  ///< MEMSETx, reset value: 0xFC
    uint32_t MEMWAITx : 8;  ///< MEMWAITx, reset value: 0xFC
    uint32_t MEMHOLDx : 8;  ///< MEMHOLDx, reset value: 0xFC
    uint32_t MEMHIZx : 8;  ///< MEMHIZx, reset value: 0xFC
  } PMEM3;

  /** 
  * name: PATT3
  * description: Attribute memory space timing register 3
  * address: 0xA000048C
  * offset: 0x8C
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PATT3_t {
    uint32_t ATTSETx : 8;  ///< ATTSETx, reset value: 0xFC
    uint32_t ATTWAITx : 8;  ///< ATTWAITx, reset value: 0xFC
    uint32_t ATTHOLDx : 8;  ///< ATTHOLDx, reset value: 0xFC
    uint32_t ATTHIZx : 8;  ///< ATTHIZx, reset value: 0xFC
  } PATT3;

  /** 
  * name: ECCR3
  * description: ECC result register 3
  * address: 0xA0000494
  * offset: 0x94
  * reset value: 0x00000000
  * access: read-only
  */
  struct FMC_ECCR3_t {
    uint32_t ECCx : 32;  ///< ECCx, reset value: 0x0
  } ECCR3;

  /** 
  * name: PCR4
  * description: PC Card/NAND Flash control register 4
  * address: 0xA00004A0
  * offset: 0xA0
  * reset value: 0x00000018
  * access: read-write
  */
  struct FMC_PCR4_t {
    uint32_t _RESERVED_508 : 1;
    uint32_t PWAITEN : 1;  ///< PWAITEN, reset value: 0x0
    uint32_t PBKEN : 1;  ///< PBKEN, reset value: 0x0
    uint32_t PTYP : 1;  ///< PTYP, reset value: 0x1
    uint32_t PWID : 2;  ///< PWID, reset value: 0x1
    uint32_t ECCEN : 1;  ///< ECCEN, reset value: 0x0
    uint32_t _RESERVED_509 : 2;
    uint32_t TCLR : 4;  ///< TCLR, reset value: 0x0
    uint32_t TAR : 4;  ///< TAR, reset value: 0x0
    uint32_t ECCPS : 3;  ///< ECCPS, reset value: 0x0
  } PCR4;

  /** 
  * name: SR4
  * description: FIFO status and interrupt register 4
  * address: 0xA00004A4
  * offset: 0xA4
  * reset value: 0x00000040
  * access: 
  */
  struct FMC_SR4_t {
    uint32_t IRS : 1;  ///< IRS, reset value: 0x0
    uint32_t ILS : 1;  ///< ILS, reset value: 0x0
    uint32_t IFS : 1;  ///< IFS, reset value: 0x0
    uint32_t IREN : 1;  ///< IREN, reset value: 0x0
    uint32_t ILEN : 1;  ///< ILEN, reset value: 0x0
    uint32_t IFEN : 1;  ///< IFEN, reset value: 0x0
    uint32_t FEMPT : 1;  ///< FEMPT, reset value: 0x1
  } SR4;

  /** 
  * name: PMEM4
  * description: Common memory space timing register 4
  * address: 0xA00004A8
  * offset: 0xA8
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PMEM4_t {
    uint32_t MEMSETx : 8;  ///< MEMSETx, reset value: 0xFC
    uint32_t MEMWAITx : 8;  ///< MEMWAITx, reset value: 0xFC
    uint32_t MEMHOLDx : 8;  ///< MEMHOLDx, reset value: 0xFC
    uint32_t MEMHIZx : 8;  ///< MEMHIZx, reset value: 0xFC
  } PMEM4;

  /** 
  * name: PATT4
  * description: Attribute memory space timing register 4
  * address: 0xA00004AC
  * offset: 0xAC
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PATT4_t {
    uint32_t ATTSETx : 8;  ///< ATTSETx, reset value: 0xFC
    uint32_t ATTWAITx : 8;  ///< ATTWAITx, reset value: 0xFC
    uint32_t ATTHOLDx : 8;  ///< ATTHOLDx, reset value: 0xFC
    uint32_t ATTHIZx : 8;  ///< ATTHIZx, reset value: 0xFC
  } PATT4;

  /** 
  * name: PIO4
  * description: I/O space timing register 4
  * address: 0xA00004B0
  * offset: 0xB0
  * reset value: 0xFCFCFCFC
  * access: read-write
  */
  struct FMC_PIO4_t {
    uint32_t IOSETx : 8;  ///< IOSETx, reset value: 0xFC
    uint32_t IOWAITx : 8;  ///< IOWAITx, reset value: 0xFC
    uint32_t IOHOLDx : 8;  ///< IOHOLDx, reset value: 0xFC
    uint32_t IOHIZx : 8;  ///< IOHIZx, reset value: 0xFC
  } PIO4;

  const uint8_t _RESERVED_510[52];
  /** 
  * name: BWTR1
  * description: SRAM/NOR-Flash write timing registers 1
  * address: 0xA0000504
  * offset: 0x104
  * reset value: 0x0FFFFFFF
  * access: read-write
  */
  struct FMC_BWTR1_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< Bus turnaround phase duration, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x0
  } BWTR1;

  /** 
  * name: BWTR2
  * description: SRAM/NOR-Flash write timing registers 2
  * address: 0xA000050C
  * offset: 0x10C
  * reset value: 0x0FFFFFFF
  * access: read-write
  */
  struct FMC_BWTR2_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< Bus turnaround phase duration, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x0
  } BWTR2;

  /** 
  * name: BWTR3
  * description: SRAM/NOR-Flash write timing registers 3
  * address: 0xA0000514
  * offset: 0x114
  * reset value: 0x0FFFFFFF
  * access: read-write
  */
  struct FMC_BWTR3_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< Bus turnaround phase duration, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x0
  } BWTR3;

  /** 
  * name: BWTR4
  * description: SRAM/NOR-Flash write timing registers 4
  * address: 0xA000051C
  * offset: 0x11C
  * reset value: 0x0FFFFFFF
  * access: read-write
  */
  struct FMC_BWTR4_t {
    uint32_t ADDSET : 4;  ///< ADDSET, reset value: 0xF
    uint32_t ADDHLD : 4;  ///< ADDHLD, reset value: 0xF
    uint32_t DATAST : 8;  ///< DATAST, reset value: 0xFF
    uint32_t BUSTURN : 4;  ///< Bus turnaround phase duration, reset value: 0xF
    uint32_t CLKDIV : 4;  ///< CLKDIV, reset value: 0xF
    uint32_t DATLAT : 4;  ///< DATLAT, reset value: 0xF
    uint32_t ACCMOD : 2;  ///< ACCMOD, reset value: 0x0
  } BWTR4;

} FMC_t;


/** 
*  name: NVIC
*  description: Nested Vectored Interrupt Controller
*  group: NVIC
*  address: 0xE000E000
*/
typedef struct{
  const uint8_t _RESERVED_511[4];
  /** 
  * name: ICTR
  * description: Interrupt Controller Type Register
  * address: 0xE000E004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-only
  */
  struct NVIC_ICTR_t {
    uint32_t INTLINESNUM : 4;  ///< Total number of interrupt lines in groups, reset value: 0x0
  } ICTR;

  const uint8_t _RESERVED_512[220];
  /** 
  * name: ISER0
  * description: Interrupt Set-Enable Register
  * address: 0xE000E100
  * offset: 0x100
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISER0_t {
    uint32_t SETENA : 32;  ///< SETENA, reset value: 0x0
  } ISER0;

  /** 
  * name: ISER1
  * description: Interrupt Set-Enable Register
  * address: 0xE000E104
  * offset: 0x104
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISER1_t {
    uint32_t SETENA : 32;  ///< SETENA, reset value: 0x0
  } ISER1;

  /** 
  * name: ISER2
  * description: Interrupt Set-Enable Register
  * address: 0xE000E108
  * offset: 0x108
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISER2_t {
    uint32_t SETENA : 32;  ///< SETENA, reset value: 0x0
  } ISER2;

  const uint8_t _RESERVED_513[88];
  /** 
  * name: ICER0
  * description: Interrupt Clear-Enable Register
  * address: 0xE000E180
  * offset: 0x180
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICER0_t {
    uint32_t CLRENA : 32;  ///< CLRENA, reset value: 0x0
  } ICER0;

  /** 
  * name: ICER1
  * description: Interrupt Clear-Enable Register
  * address: 0xE000E184
  * offset: 0x184
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICER1_t {
    uint32_t CLRENA : 32;  ///< CLRENA, reset value: 0x0
  } ICER1;

  /** 
  * name: ICER2
  * description: Interrupt Clear-Enable Register
  * address: 0xE000E188
  * offset: 0x188
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICER2_t {
    uint32_t CLRENA : 32;  ///< CLRENA, reset value: 0x0
  } ICER2;

  const uint8_t _RESERVED_514[88];
  /** 
  * name: ISPR0
  * description: Interrupt Set-Pending Register
  * address: 0xE000E200
  * offset: 0x200
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISPR0_t {
    uint32_t SETPEND : 32;  ///< SETPEND, reset value: 0x0
  } ISPR0;

  /** 
  * name: ISPR1
  * description: Interrupt Set-Pending Register
  * address: 0xE000E204
  * offset: 0x204
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISPR1_t {
    uint32_t SETPEND : 32;  ///< SETPEND, reset value: 0x0
  } ISPR1;

  /** 
  * name: ISPR2
  * description: Interrupt Set-Pending Register
  * address: 0xE000E208
  * offset: 0x208
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ISPR2_t {
    uint32_t SETPEND : 32;  ///< SETPEND, reset value: 0x0
  } ISPR2;

  const uint8_t _RESERVED_515[88];
  /** 
  * name: ICPR0
  * description: Interrupt Clear-Pending Register
  * address: 0xE000E280
  * offset: 0x280
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICPR0_t {
    uint32_t CLRPEND : 32;  ///< CLRPEND, reset value: 0x0
  } ICPR0;

  /** 
  * name: ICPR1
  * description: Interrupt Clear-Pending Register
  * address: 0xE000E284
  * offset: 0x284
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICPR1_t {
    uint32_t CLRPEND : 32;  ///< CLRPEND, reset value: 0x0
  } ICPR1;

  /** 
  * name: ICPR2
  * description: Interrupt Clear-Pending Register
  * address: 0xE000E288
  * offset: 0x288
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_ICPR2_t {
    uint32_t CLRPEND : 32;  ///< CLRPEND, reset value: 0x0
  } ICPR2;

  const uint8_t _RESERVED_516[88];
  /** 
  * name: IABR0
  * description: Interrupt Active Bit Register
  * address: 0xE000E300
  * offset: 0x300
  * reset value: 0x00000000
  * access: read-only
  */
  struct NVIC_IABR0_t {
    uint32_t ACTIVE : 32;  ///< ACTIVE, reset value: 0x0
  } IABR0;

  /** 
  * name: IABR1
  * description: Interrupt Active Bit Register
  * address: 0xE000E304
  * offset: 0x304
  * reset value: 0x00000000
  * access: read-only
  */
  struct NVIC_IABR1_t {
    uint32_t ACTIVE : 32;  ///< ACTIVE, reset value: 0x0
  } IABR1;

  /** 
  * name: IABR2
  * description: Interrupt Active Bit Register
  * address: 0xE000E308
  * offset: 0x308
  * reset value: 0x00000000
  * access: read-only
  */
  struct NVIC_IABR2_t {
    uint32_t ACTIVE : 32;  ///< ACTIVE, reset value: 0x0
  } IABR2;

  const uint8_t _RESERVED_517[216];
  /** 
  * name: IPR0
  * description: Interrupt Priority Register
  * address: 0xE000E400
  * offset: 0x400
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR0_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR0;

  /** 
  * name: IPR1
  * description: Interrupt Priority Register
  * address: 0xE000E404
  * offset: 0x404
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR1_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR1;

  /** 
  * name: IPR2
  * description: Interrupt Priority Register
  * address: 0xE000E408
  * offset: 0x408
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR2_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR2;

  /** 
  * name: IPR3
  * description: Interrupt Priority Register
  * address: 0xE000E40C
  * offset: 0x40C
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR3_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR3;

  /** 
  * name: IPR4
  * description: Interrupt Priority Register
  * address: 0xE000E410
  * offset: 0x410
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR4_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR4;

  /** 
  * name: IPR5
  * description: Interrupt Priority Register
  * address: 0xE000E414
  * offset: 0x414
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR5_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR5;

  /** 
  * name: IPR6
  * description: Interrupt Priority Register
  * address: 0xE000E418
  * offset: 0x418
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR6_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR6;

  /** 
  * name: IPR7
  * description: Interrupt Priority Register
  * address: 0xE000E41C
  * offset: 0x41C
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR7_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR7;

  /** 
  * name: IPR8
  * description: Interrupt Priority Register
  * address: 0xE000E420
  * offset: 0x420
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR8_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR8;

  /** 
  * name: IPR9
  * description: Interrupt Priority Register
  * address: 0xE000E424
  * offset: 0x424
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR9_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR9;

  /** 
  * name: IPR10
  * description: Interrupt Priority Register
  * address: 0xE000E428
  * offset: 0x428
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR10_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR10;

  /** 
  * name: IPR11
  * description: Interrupt Priority Register
  * address: 0xE000E42C
  * offset: 0x42C
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR11_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR11;

  /** 
  * name: IPR12
  * description: Interrupt Priority Register
  * address: 0xE000E430
  * offset: 0x430
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR12_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR12;

  /** 
  * name: IPR13
  * description: Interrupt Priority Register
  * address: 0xE000E434
  * offset: 0x434
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR13_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR13;

  /** 
  * name: IPR14
  * description: Interrupt Priority Register
  * address: 0xE000E438
  * offset: 0x438
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR14_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR14;

  /** 
  * name: IPR15
  * description: Interrupt Priority Register
  * address: 0xE000E43C
  * offset: 0x43C
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR15_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR15;

  /** 
  * name: IPR16
  * description: Interrupt Priority Register
  * address: 0xE000E440
  * offset: 0x440
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR16_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR16;

  /** 
  * name: IPR17
  * description: Interrupt Priority Register
  * address: 0xE000E444
  * offset: 0x444
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR17_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR17;

  /** 
  * name: IPR18
  * description: Interrupt Priority Register
  * address: 0xE000E448
  * offset: 0x448
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR18_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR18;

  /** 
  * name: IPR19
  * description: Interrupt Priority Register
  * address: 0xE000E44C
  * offset: 0x44C
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR19_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR19;

  /** 
  * name: IPR20
  * description: Interrupt Priority Register
  * address: 0xE000E450
  * offset: 0x450
  * reset value: 0x00000000
  * access: read-write
  */
  struct NVIC_IPR20_t {
    uint32_t IPR_N0 : 8;  ///< IPR_N0, reset value: 0x0
    uint32_t IPR_N1 : 8;  ///< IPR_N1, reset value: 0x0
    uint32_t IPR_N2 : 8;  ///< IPR_N2, reset value: 0x0
    uint32_t IPR_N3 : 8;  ///< IPR_N3, reset value: 0x0
  } IPR20;

} NVIC_t;


/** 
*  name: FPU
*  description: Floting point unit
*  group: FPU
*  address: 0xE000ED88
*/
typedef struct{
  /** 
  * name: CPACR
  * description: Coprocessor Access Control Register
  * address: 0xE000ED88
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-write
  */
  struct FPU_CPACR_t {
    uint32_t CP0 : 1;  ///< Access privileges for coprocessor 0, reset value: 0x0
    uint32_t _RESERVED_518 : 1;
    uint32_t CP1 : 1;  ///< Access privileges for coprocessor 1, reset value: 0x0
    uint32_t _RESERVED_519 : 1;
    uint32_t CP2 : 1;  ///< Access privileges for coprocessor 2, reset value: 0x0
    uint32_t _RESERVED_520 : 1;
    uint32_t CP3 : 1;  ///< Access privileges for coprocessor 3, reset value: 0x0
    uint32_t _RESERVED_521 : 1;
    uint32_t CP4 : 1;  ///< Access privileges for coprocessor 4, reset value: 0x0
    uint32_t _RESERVED_522 : 1;
    uint32_t CP5 : 1;  ///< Access privileges for coprocessor 5, reset value: 0x0
    uint32_t _RESERVED_523 : 1;
    uint32_t CP6 : 2;  ///< Access privileges for coprocessor 6, reset value: 0x0
    uint32_t CP7 : 1;  ///< Access privileges for coprocessor 7, reset value: 0x0
    uint32_t _RESERVED_524 : 5;
    uint32_t CP10 : 1;  ///< Access privileges for coprocessor 10, reset value: 0x0
    uint32_t _RESERVED_525 : 1;
    uint32_t CP11 : 1;  ///< Access privileges for coprocessor 11, reset value: 0x0
  } CPACR;

  const uint8_t _RESERVED_526[396];
  /** 
  * name: FPCCR
  * description: FP Context Control Register
  * address: 0xE000EF34
  * offset: 0x1AC
  * reset value: 0xC0000000
  * access: read-write
  */
  struct FPU_FPCCR_t {
    uint32_t LSPACT : 1;  ///< LSPACT, reset value: 0x0
    uint32_t USER : 1;  ///< USER, reset value: 0x0
    uint32_t _RESERVED_527 : 1;
    uint32_t THREAD : 1;  ///< THREAD, reset value: 0x0
    uint32_t HFRDY : 1;  ///< HFRDY, reset value: 0x0
    uint32_t MMRDY : 1;  ///< MMRDY, reset value: 0x0
    uint32_t BFRDY : 1;  ///< BFRDY, reset value: 0x0
    uint32_t _RESERVED_528 : 1;
    uint32_t MONRDY : 1;  ///< MONRDY, reset value: 0x0
    uint32_t _RESERVED_529 : 21;
    uint32_t LSPEN : 1;  ///< LSPEN, reset value: 0x1
    uint32_t ASPEN : 1;  ///< ASPEN, reset value: 0x1
  } FPCCR;

  /** 
  * name: FPCAR
  * description: FP Context Address Register
  * address: 0xE000EF38
  * offset: 0x1B0
  * reset value: 0x00000000
  * access: read-write
  */
  struct FPU_FPCAR_t {
    uint32_t _RESERVED_530 : 3;
    uint32_t ADDRESS : 29;  ///< ADDRESS, reset value: 0x0
  } FPCAR;

  /** 
  * name: FPDSCR
  * description: FP Default Status Control Register
  * address: 0xE000EF3C
  * offset: 0x1B4
  * reset value: 0x00000000
  * access: read-write
  */
  struct FPU_FPDSCR_t {
    uint32_t _RESERVED_531 : 22;
    uint32_t RMode : 2;  ///< RMode, reset value: 0x0
    uint32_t FZ : 1;  ///< FZ, reset value: 0x0
    uint32_t DN : 1;  ///< DN, reset value: 0x0
    uint32_t AHP : 1;  ///< AHP, reset value: 0x0
  } FPDSCR;

  /** 
  * name: MVFR0
  * description: Media and VFP Feature Register 0
  * address: 0xE000EF40
  * offset: 0x1B8
  * reset value: 0x10110021
  * access: read-only
  */
  struct FPU_MVFR0_t {
    uint32_t A_SIMD : 4;  ///< A_SIMD registers, reset value: 0x1
    uint32_t Single_precision : 4;  ///< Single_precision, reset value: 0x2
    uint32_t Double_precision : 4;  ///< Double_precision, reset value: 0x0
    uint32_t FP_exception_trapping : 4;  ///< FP exception trapping, reset value: 0x0
    uint32_t Divide : 4;  ///< Divide, reset value: 0x1
    uint32_t Square_root : 4;  ///< Square root, reset value: 0x1
    uint32_t Short_vectors : 4;  ///< Short vectors, reset value: 0x0
    uint32_t FP_rounding_modes : 4;  ///< FP rounding modes, reset value: 0x1
  } MVFR0;

  /** 
  * name: MVFR1
  * description: Media and VFP Feature Register 1
  * address: 0xE000EF44
  * offset: 0x1BC
  * reset value: 0x11000011
  * access: read-only
  */
  struct FPU_MVFR1_t {
    uint32_t FtZ_mode : 4;  ///< FtZ mode, reset value: 0x1
    uint32_t D_NaN_mode : 4;  ///< D_NaN mode, reset value: 0x1
    uint32_t _RESERVED_532 : 16;
    uint32_t FP_HPFP : 4;  ///< FP HPFP, reset value: 0x1
    uint32_t FP_fused_MAC : 4;  ///< FP fused MAC, reset value: 0x1
  } MVFR1;

} FPU_t;


/** 
*  name: DBGMCU
*  description: Debug support
*  group: DBGMCU
*  address: 0xE0042000
*/
typedef struct{
  /** 
  * name: IDCODE
  * description: MCU Device ID Code Register
  * address: 0xE0042000
  * offset: 0x0
  * reset value: 0x00000000
  * access: read-only
  */
  struct DBGMCU_IDCODE_t {
    uint32_t DEV_ID : 12;  ///< Device Identifier, reset value: 0x0
    uint32_t _RESERVED_533 : 4;
    uint32_t REV_ID : 16;  ///< Revision Identifier, reset value: 0x0
  } IDCODE;

  /** 
  * name: CR
  * description: Debug MCU Configuration Register
  * address: 0xE0042004
  * offset: 0x4
  * reset value: 0x00000000
  * access: read-write
  */
  struct DBGMCU_CR_t {
    uint32_t DBG_SLEEP : 1;  ///< Debug Sleep mode, reset value: 0x0
    uint32_t DBG_STOP : 1;  ///< Debug Stop Mode, reset value: 0x0
    uint32_t DBG_STANDBY : 1;  ///< Debug Standby Mode, reset value: 0x0
    uint32_t _RESERVED_534 : 2;
    uint32_t TRACE_IOEN : 1;  ///< Trace pin assignment control, reset value: 0x0
    uint32_t TRACE_MODE : 2;  ///< Trace pin assignment control, reset value: 0x0
  } CR;

  /** 
  * name: APB1FZ
  * description: APB Low Freeze Register
  * address: 0xE0042008
  * offset: 0x8
  * reset value: 0x00000000
  * access: read-write
  */
  struct DBGMCU_APB1FZ_t {
    uint32_t DBG_TIM2_STOP : 1;  ///< Debug Timer 2 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM3_STOP : 1;  ///< Debug Timer 3 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM4_STOP : 1;  ///< Debug Timer 4 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM5_STOP : 1;  ///< Debug Timer 5 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM6_STOP : 1;  ///< Debug Timer 6 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM7_STOP : 1;  ///< Debug Timer 7 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM12_STOP : 1;  ///< Debug Timer 12 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM13_STOP : 1;  ///< Debug Timer 13 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIMER14_STOP : 1;  ///< Debug Timer 14 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM18_STOP : 1;  ///< Debug Timer 18 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_RTC_STOP : 1;  ///< Debug RTC stopped when Core is halted, reset value: 0x0
    uint32_t DBG_WWDG_STOP : 1;  ///< Debug Window Wachdog stopped when Core is halted, reset value: 0x0
    uint32_t DBG_IWDG_STOP : 1;  ///< Debug Independent Wachdog stopped when Core is halted, reset value: 0x0
    uint32_t _RESERVED_535 : 8;
    uint32_t I2C1_SMBUS_TIMEOUT : 1;  ///< SMBUS timeout mode stopped when Core is halted, reset value: 0x0
    uint32_t I2C2_SMBUS_TIMEOUT : 1;  ///< SMBUS timeout mode stopped when Core is halted, reset value: 0x0
    uint32_t _RESERVED_536 : 2;
    uint32_t DBG_CAN_STOP : 1;  ///< Debug CAN stopped when core is halted, reset value: 0x0
  } APB1FZ;

  /** 
  * name: APB2FZ
  * description: APB High Freeze Register
  * address: 0xE004200C
  * offset: 0xC
  * reset value: 0x00000000
  * access: read-write
  */
  struct DBGMCU_APB2FZ_t {
    uint32_t _RESERVED_537 : 2;
    uint32_t DBG_TIM15_STOP : 1;  ///< Debug Timer 15 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM16_STOP : 1;  ///< Debug Timer 16 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM17_STO : 1;  ///< Debug Timer 17 stopped when Core is halted, reset value: 0x0
    uint32_t DBG_TIM19_STOP : 1;  ///< Debug Timer 19 stopped when Core is halted, reset value: 0x0
  } APB2FZ;

} DBGMCU_t;


#define TIM2 ((volatile TIM2_t * ) 0x40000000)
#define TIM3 ((volatile TIM3_t * ) 0x40000400)
#define TIM4 ((volatile TIM4_t * ) 0x40000800)
#define TIM6 ((volatile TIM6_t * ) 0x40001000)
#define TIM7 ((volatile TIM7_t * ) 0x40001400)
#define RTC ((volatile RTC_t * ) 0x40002800)
#define WWDG ((volatile WWDG_t * ) 0x40002C00)
#define IWDG ((volatile IWDG_t * ) 0x40003000)
#define I2S2ext ((volatile I2S2ext_t * ) 0x40003400)
#define SPI2 ((volatile SPI2_t * ) 0x40003800)
#define SPI3 ((volatile SPI3_t * ) 0x40003C00)
#define I2S3ext ((volatile I2S3ext_t * ) 0x40004000)
#define USART2 ((volatile USART2_t * ) 0x40004400)
#define USART3 ((volatile USART3_t * ) 0x40004800)
#define UART4 ((volatile UART4_t * ) 0x40004C00)
#define UART5 ((volatile UART5_t * ) 0x40005000)
#define I2C1 ((volatile I2C1_t * ) 0x40005400)
#define I2C2 ((volatile I2C2_t * ) 0x40005800)
#define USB_FS ((volatile USB_FS_t * ) 0x40005C00)
#define CAN ((volatile CAN_t * ) 0x40006400)
#define PWR ((volatile PWR_t * ) 0x40007000)
#define DAC ((volatile DAC_t * ) 0x40007400)
#define I2C3 ((volatile I2C3_t * ) 0x40007800)
#define SYSCFG_COMP_OPAMP ((volatile SYSCFG_COMP_OPAMP_t * ) 0x40010000)
#define EXTI ((volatile EXTI_t * ) 0x40010400)
#define TIM1 ((volatile TIM1_t * ) 0x40012C00)
#define SPI1 ((volatile SPI1_t * ) 0x40013000)
#define TIM8 ((volatile TIM8_t * ) 0x40013400)
#define USART1 ((volatile USART1_t * ) 0x40013800)
#define SPI4 ((volatile SPI4_t * ) 0x40013C00)
#define TIM15 ((volatile TIM15_t * ) 0x40014000)
#define TIM16 ((volatile TIM16_t * ) 0x40014400)
#define TIM17 ((volatile TIM17_t * ) 0x40014800)
#define TIM20 ((volatile TIM20_t * ) 0x40015000)
#define DMA1 ((volatile DMA1_t * ) 0x40020000)
#define DMA2 ((volatile DMA2_t * ) 0x40020400)
#define RCC ((volatile RCC_t * ) 0x40021000)
#define Flash ((volatile Flash_t * ) 0x40022000)
#define CRC ((volatile CRC_t * ) 0x40023000)
#define TSC ((volatile TSC_t * ) 0x40024000)
#define GPIOA ((volatile GPIOA_t * ) 0x48000000)
#define GPIOB ((volatile GPIOB_t * ) 0x48000400)
#define GPIOC ((volatile GPIOC_t * ) 0x48000800)
#define GPIOD ((volatile GPIOD_t * ) 0x48000C00)
#define GPIOE ((volatile GPIOE_t * ) 0x48001000)
#define GPIOF ((volatile GPIOF_t * ) 0x48001400)
#define GPIOG ((volatile GPIOG_t * ) 0x48001800)
#define GPIOH ((volatile GPIOH_t * ) 0x48001C00)
#define ADC1 ((volatile ADC1_t * ) 0x50000000)
#define ADC2 ((volatile ADC2_t * ) 0x50000100)
#define ADC1_2 ((volatile ADC1_2_t * ) 0x50000300)
#define ADC3 ((volatile ADC3_t * ) 0x50000400)
#define ADC4 ((volatile ADC4_t * ) 0x50000500)
#define ADC3_4 ((volatile ADC3_4_t * ) 0x50000700)
#define FMC ((volatile FMC_t * ) 0xA0000400)
#define NVIC ((volatile NVIC_t * ) 0xE000E000)
#define FPU ((volatile FPU_t * ) 0xE000ED88)
#define DBGMCU ((volatile DBGMCU_t * ) 0xE0042000)


typedef enum{
/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
  NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
  MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
  BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
  UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
  SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
  DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
  PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
  SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  STM32F303 specific Interrupt Numbers *******************************************************************/
  WWDG_IRQn = 0, ///< Window Watchdog interrupt
  PVD_IRQn = 1, ///< PVD through EXTI line detection interrupt
  TAMP_STAMP_IRQn = 2, ///< Tamper and TimeStamp interrupts
  RTC_WKUP_IRQn = 3, ///< RTC Wakeup interrupt through the EXTI line
  FLASH_IRQn = 4, ///< Flash global interrupt
  RCC_IRQn = 5, ///< RCC global interrupt
  EXTI0_IRQn = 6, ///< EXTI Line0 interrupt
  EXTI1_IRQn = 7, ///< EXTI Line3 interrupt
  EXTI2_TSC_IRQn = 8, ///< EXTI Line2 and Touch sensing interrupts
  EXTI3_IRQn = 9, ///< EXTI Line3 interrupt
  EXTI4_IRQn = 10, ///< EXTI Line4 interrupt
  DMA1_CH1_IRQn = 11, ///< DMA1 channel 1 interrupt
  DMA1_CH2_IRQn = 12, ///< DMA1 channel 2 interrupt
  DMA1_CH3_IRQn = 13, ///< DMA1 channel 3 interrupt
  DMA1_CH4_IRQn = 14, ///< DMA1 channel 4 interrupt
  DMA1_CH5_IRQn = 15, ///< DMA1 channel 5 interrupt
  DMA1_CH6_IRQn = 16, ///< DMA1 channel 6 interrupt
  DMA1_CH7_IRQn = 17, ///< DMA1 channel 7interrupt
  ADC1_2_IRQn = 18, ///< ADC1 and ADC2 global interrupt
  USB_HP_CAN_TX_IRQn = 19, ///< USB High Priority/CAN_TX interrupts
  USB_LP_CAN_RX0_IRQn = 20, ///< USB Low Priority/CAN_RX0 interrupts
  CAN_RX1_IRQn = 21, ///< CAN_RX1 interrupt
  CAN_SCE_IRQn = 22, ///< CAN_SCE interrupt
  EXTI9_5_IRQn = 23, ///< EXTI Line5 to Line9 interrupts
  TIM1_BRK_TIM15_IRQn = 24, ///< TIM1 Break/TIM15 global interruts
  TIM1_UP_TIM16_IRQn = 25, ///< TIM1 Update/TIM16 global interrupts
  TIM1_TRG_COM_TIM17_IRQn = 26, ///< TIM1 trigger and commutation/TIM17 interrupts
  TIM1_CC_IRQn = 27, ///< TIM1 capture compare interrupt
  TIM2_IRQn = 28, ///< TIM2 global interrupt
  TIM3_IRQn = 29, ///< TIM3 global interrupt
  TIM4_IRQn = 30, ///< TIM4 global interrupt
  I2C1_EV_EXTI23_IRQn = 31, ///< I2C1 event interrupt and EXTI Line23 interrupt
  I2C1_ER_IRQn = 32, ///< I2C1 error interrupt
  I2C2_EV_EXTI24_IRQn = 33, ///< I2C2 event interrupt & EXTI Line24 interrupt
  I2C2_ER_IRQn = 34, ///< I2C2 error interrupt
  SPI1_IRQn = 35, ///< SPI1 global interrupt
  SPI2_IRQn = 36, ///< SPI2 global interrupt
  USART1_EXTI25_IRQn = 37, ///< USART1 global interrupt and EXTI Line 25 interrupt
  USART2_EXTI26_IRQn = 38, ///< USART2 global interrupt and EXTI Line 26 interrupt
  USART3_EXTI28_IRQn = 39, ///< USART3 global interrupt and EXTI Line 28 interrupt
  EXTI15_10_IRQn = 40, ///< EXTI Line15 to Line10 interrupts
  RTCAlarm_IRQn = 41, ///< RTC alarm interrupt
  USB_WKUP_IRQn = 42, ///< USB wakeup from Suspend
  TIM8_BRK_IRQn = 43, ///< TIM8 break interrupt
  TIM8_UP_IRQn = 44, ///< TIM8 update interrupt
  TIM8_TRG_COM_IRQn = 45, ///< TIM8 Trigger and commutation interrupts
  TIM8_CC_IRQn = 46, ///< TIM8 capture compare interrupt
  ADC3_IRQn = 47, ///< ADC3 global interrupt
  FMC_IRQn = 48, ///< FSMC global interrupt
  SPI3_IRQn = 51, ///< SPI3 global interrupt
  UART4_EXTI34_IRQn = 52, ///< UART4 global and EXTI Line 34 interrupts
  UART5_EXTI35_IRQn = 53, ///< UART5 global and EXTI Line 35 interrupts
  TIM6_DACUNDER_IRQn = 54, ///< TIM6 global and DAC12 underrun interrupts
  TIM7_IRQn = 55, ///< TIM7 global interrupt
  DMA2_CH1_IRQn = 56, ///< DMA2 channel1 global interrupt
  DMA2_CH2_IRQn = 57, ///< DMA2 channel2 global interrupt
  DMA2_CH3_IRQn = 58, ///< DMA2 channel3 global interrupt
  DMA2_CH4_IRQn = 59, ///< DMA2 channel4 global interrupt
  DMA2_CH5_IRQn = 60, ///< DMA2 channel5 global interrupt
  ADC4_IRQn = 61, ///< ADC4 global interrupt
  COMP123_IRQn = 64, ///< COMP1 & COMP2 & COMP3 interrupts combined with EXTI Lines 21, 22 and 29 interrupts
  COMP456_IRQn = 65, ///< COMP4 & COMP5 & COMP6 interrupts combined with EXTI Lines 30, 31 and 32 interrupts
  COMP7_IRQn = 66, ///< COMP7 interrupt combined with EXTI Line 33 interrupt
  I2C3_EV_IRQn = 72, ///< I2C3 Event interrupt
  I2C3_ER_IRQn = 73, ///< I2C3 Error interrupt
  USB_HP_IRQn = 74, ///< USB High priority interrupt
  USB_LP_IRQn = 75, ///< USB Low priority interrupt
  USB_WKUP_EXTI_IRQn = 76, ///< USB wakeup from Suspend and EXTI Line 18
  TIM20_BRK_IRQn = 77, ///< TIM20 Break interrupt
  TIM20_UP_IRQn = 78, ///< TIM20 Upgrade interrupt
  TIM20_TRG_COM_IRQn = 79, ///< TIM20 Trigger and Commutation interrupt
  TIM20_CC_IRQn = 80, ///< TIM20 Capture Compare interrupt
  FPU_IRQn = 81, ///< Floating point interrupt
  SPI4_IRQn = 84, ///< SPI4 Global interrupt
} IRQn_Type;
