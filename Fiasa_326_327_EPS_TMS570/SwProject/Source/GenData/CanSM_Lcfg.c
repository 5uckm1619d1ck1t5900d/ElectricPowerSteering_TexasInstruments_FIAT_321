/* -----------------------------------------------------------------------------
  Filename:    CanSM_Lcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: CanSM
               
               Configuration   : C:\SynergyProjects\Fiasa_326_327_EPS_TMS570-nzx5jd\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-06-09  12:59:38
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#define CANSM_LCFG_SOURCE
/* PRQA S 0857 NumberOfMacroDefinitions */ /* MD_MSR_1.1 */
#include "CanXcp.h"
#include "CanSM_EcuM.h"
#define CANSM_START_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */
CONST(uint8, CANSM_CONST) CanSMCountOfCanNetworks = 1u;
CONST(uint8, CANSM_CONST) CanSMNwSmMaxRepetitions = 5u;
CONST(uint8, CANSM_CONST) CanSMNetworkHandle[1] = 
{
  0u
};
CONST(uint8, CANSM_CONST) CanSMControllerId[1] = 
{
  0u
};
CONST(uint8, CANSM_CONST) CanSMTransceiverId[1] = 
{
  0u
};
CONST(boolean, CANSM_CONST) CanSMNetworkTransceiverHandling[1] = 
{
  FALSE
};
CONST(boolean, CANSM_CONST) CanSMBusOffRxDM[1] = 
{
  FALSE
};
/* END of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */

#define CANSM_STOP_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (CANSM_CRC_CHECK == STD_ON)
#define CANSM_START_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(uint32, CANSM_CONST) CanSM_LinktimeCRC = (uint32) 0x228C0BA8u;
#define CANSM_STOP_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif

#define CANSM_START_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */
VAR(uint8, CANSM_VAR_ZERO_INIT) CanSM_EnableSetBusSleep[1] = 
{
  0
};
/* END of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */

#define CANSM_STOP_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define CANSM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */
VAR(CanSM_LocalClusterDataType, CANSM_VAR_NOINIT) CanSM_ClusterState[1];
/* END of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */

#define CANSM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define CANSM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */
FUNC(void, CANSM_CODE) CanSm_SwitchIpduGroup(uint8 CanSm_CanNetworkIdx, uint8 RxTxStartStop)
{
  switch(CanSm_CanNetworkIdx)
  {
    default:
    {
      break;
    }
  }
}


FUNC(void, CANSM_CODE) CanSm_EnableReceptionDM(uint8 CanSm_CanNetworkIdx)
{
  switch(CanSm_CanNetworkIdx)
  {
    default:
    {
      break;
    }
  }
}


FUNC(void, CANSM_CODE) CanSm_DisableReceptionDM(uint8 CanSm_CanNetworkIdx)
{
  switch(CanSm_CanNetworkIdx)
  {
    default:
    {
      break;
    }
  }
}


/* -----------------------------------------------------------------------------
    &&&~ Postbuild configuration
 ----------------------------------------------------------------------------- */

FUNC(void, CANSM_CODE) CanSM_Xcp_SetPduMode(uint8 CanSm_CanNetworkIdx, uint8 OnOffLine)
{
  if(0 == CanSm_CanNetworkIdx)
  {
    CanXcp_SetPduMode(0, (CanXcp_PduSetModeType) OnOffLine);
  }
}




/* END of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */

/* START of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */
FUNC(void, CANSM_CODE) CanSm_Dem_ReportErrorEvent(uint8 CanSm_CanNetworkIdx, uint8 CanSm_EventId, Dem_EventStatusType CanSm_EventStatus)
{
  switch(CanSm_CanNetworkIdx)
  {
    case 0:
    {
      if(CanSm_EventId == 0)
      {
        (void)Dem_ReportErrorStatus( CANSM_E_MODE_CHANGE_NETWORK_0, CanSm_EventStatus );
      }
      else
      {
        if(CanSm_EventId == 1)
        {
          (void)Dem_ReportErrorStatus( CANSM_E_BUSOFF_NETWORK_0, CanSm_EventStatus );
        }
      }
      break;
    }
    default:
    {
      break;
    }
  }
}


/* END of Checksum include for
  - Ccl_AsrSmCanLinktimeCRC */

#define CANSM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* PRQA L:NumberOfMacroDefinitions */ /* MD_MSR_1.1 */

