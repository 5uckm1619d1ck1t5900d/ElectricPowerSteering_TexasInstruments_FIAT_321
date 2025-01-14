/**********************************************************************************************************************
*  COPYRIGHT
*  ********************************************************************************************************************
*  Copyright (c) by Vector Informatik GmbH.                                                        All rights reserved.
*
*                This software is copyright protected and proprietary to Vector Informatik GmbH.
*                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
*                All other rights remain with Vector Informatik GmbH.
*
***********************************************************************************************************************


***********************************************************************************************************************
*  FILE DESCRIPTION
*  ********************************************************************************************************************
*  File:       Mcu_PBcfg.c
*  Project:    DrvMcu_Tms570Tigcm01Asr
*  Module:     Mcu
**********************************************************************************************************************/

/**********************************************************************************************************************
*  Project  :  EPS.ecuc
*  Generated:  2014-01-14 11:03 am
*  Licensee :  Nexteer Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
**********************************************************************************************************************/

#define MCU_PBCFG_SOURCE

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Std_Types.h"
#include "Mcu.h"

/***********************************************************************************************************************
 * VERSION CHECK
 **********************************************************************************************************************/

#if (!defined (V_SUPPRESS_EXTENDED_VERSION_CHECK))
# if (                                                            \
       (DRVMCU_TMS570TIGCM01ASR_GENTOOL_MAJOR_VERSION != (2u)) || \
       (DRVMCU_TMS570TIGCM01ASR_GENTOOL_MINOR_VERSION != (3u))    \
     )
#  error "Configurator version numbers of Mcu_PBcfg.c and Mcu_Cfg.h are inconsistent!"
# endif
#else
# if (                                    \
       (MCU_CFG_MAJOR_VERSION != (2u)) || \
       (MCU_CFG_MINOR_VERSION != (3u))    \
     )
#  error "Configurator version numbers of Mcu_PBcfg.c and Mcu_Cfg.h are inconsistent!"
# endif
#endif

#if (                                   \
      (MCU_SW_MAJOR_VERSION != (1u)) || \
      (MCU_SW_MINOR_VERSION != (4u))    \
    )
# error "Software version numbers of Mcu.c and Mcu.h are inconsistent!"
#endif

/***********************************************************************************************************************
 * CONFIGURATION DATA
 **********************************************************************************************************************/

#define MCU_START_SEC_PBCFG
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*<MCU_CFG_MEMORY>*/
static CONST(Mcu_ConfigMemoryType, MCU_PBCFG) McuModuleConfiguration_MemorySetup_t =
{
    0xA000E0E0u,  /* Peripheral Memory Power-Down Set Register 0 (PCSPWRDWNCLR0) */
    0x000001CCu,  /* Peripheral Memory Power-Down Set Register 1 (PCSPWRDWNCLR1) */
    0xFF000FFFu,  /* Peripheral Select Quadrant Clock Power-Down Register0 (PSPWRDWNCLR0) */
    0xF0FF0F0Fu,  /* Peripheral Select Quadrant Clock Power-Down Register1 (PSPWRDWNCLR1) */
    0xFF0000FFu,  /* Peripheral Select Quadrant Clock Power-Down Register2 (PSPWRDWNCLR2) */
    0x00000000u,  /* Peripheral Select Quadrant Clock Power-Down Register3 (PSPWRDWNCLR3) */
    0x0001FDFAu,  /* MBIST Controller/ Memomory Initialization Enable Register (MSINENA) */
    0x0000C00Fu,  /* Bank Fallback Power Register (FBFALLBACK) */
    0x00000311u   /* Read Control Register (FRDCNTL) */
};
/*</MCU_CFG_MEMORY>*/

#if(STD_ON == MCU_CFG_USE_INIT_RAM_API)
/*<MCU_CFG_RAMSECTION>*/
static CONST(Mcu_ConfigRamSectionType, MCU_PBCFG) McuModuleConfiguration_RamSection_t[1] =
{
     {
        (uint32 *)0x08000000u,  /* RAM section base address (destination) */ /* PRQA S 306 */ /* MD_Mcu_306 */
        (uint32 *)NULL_PTR,  /* ROM section base address (source) */ /* PRQA S 306 */ /* MD_Mcu_306 */
        (uint32)0x00014000u,  /* section size */
        (uint32)0x00000000u   /* default value */
    }
};
/*</MCU_CFG_RAMSECTION>*/
#endif

/*<MCU_CFG_CLOCK>*/
static CONST(Mcu_ConfigClockType, MCU_PBCFG) McuModuleConfiguration_Clock_t[1] =
{
     {
        0x00000033u,  /* Clock Source Disable Clear Register (CSDISCLR) */
        0x0000097Fu,  /* Clock Domaine  Disable Clear Register (CDDISCLR) */
        0x01010001u,  /* GCLK, HCLK, VCLK and VCLK2 Source Register after Wakeup (GHVSRC) */
        0x00000808u,  /* Peripheral Asynchronous Clock Source Register (VCLKASRC) */
        0x00080000u,  /* Peripheral Asynchronous Clock Configuration 1 Register (VCLKACON1) */
        0x00000008u,  /* RTI Clock Source Register (RCLKSRC) */
        0x01010100u,  /* Clock Control Register (CLKCNTL) */
        0x00000001u,  /* Clock 2 Control Register (CLK2CNTL) */
        0x80855F00u,  /* PLL Control Register 1 (PLLCTL1) */
        0x00007200u,  /* PLL Control Register 2 (PLLCTL2) */
        0x80046300u,  /* PLL Control Register 3 (PLLCTL3) */
        0x01001010u,  /* LPO/Clock Monitor Control Register (LPOMONCTL) */
        0x00800000u   /* ECP Control Register (ECPCNTL) */
    }
};
/*</MCU_CFG_CLOCK>*/

/*<MCU_CFG_MODE>*/
static CONST(Mcu_ConfigModeType, MCU_PBCFG) McuModuleConfiguration_Mode_t[1] =
{
     MCU_MODE_DOZE /* low-power mode 0 */
};
/*</MCU_CFG_MODE>*/

#define MCU_STOP_SEC_PBCFG
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define MCU_START_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*<MCU_CFG_CONFIG>*/
CONST(Mcu_ConfigType, MCU_PBCFG) McuModuleConfiguration = /* PRQA S 3408 */ /* MD_Mcu_3408 */
{
    1u,    /* number of entries in the RAM sections list */
    1u,    /* number of entries in the clock settings list */
    1u,    /* number of entries in the modes list */
    (uint16)MCU_E_OTP_NOT_PROGRAMMED,    /* DEM OTP not programmed */
#if (!defined (V_SUPPRESS_EXTENDED_VERSION_CHECK))    /* generator version */
    (((uint32)DRVMCU_TMS570TIGCM01ASR_GENTOOL_MAJOR_VERSION << 16u) | \
    ((uint32)DRVMCU_TMS570TIGCM01ASR_GENTOOL_MINOR_VERSION << 8u)  | \
    ((uint32)DRVMCU_TMS570TIGCM01ASR_GENTOOL_PATCH_VERSION)),
#endif
    &McuModuleConfiguration_MemorySetup_t,    /* power control for peripherals */
    NULL_PTR,    /* RAM sections list */
    McuModuleConfiguration_Clock_t,    /* clock configurations list */
    McuModuleConfiguration_Mode_t    /* modes list */
};
/*</MCU_CFG_CONFIG>*/

#define  MCU_STOP_SEC_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 * END OF FILE: Mcu_PBcfg.c
 **********************************************************************************************************************/
