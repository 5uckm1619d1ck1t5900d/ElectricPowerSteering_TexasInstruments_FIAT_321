/* -----------------------------------------------------------------------------
  Filename:    CanTp_Cfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: CanTp
               
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

  Generated by , 2015-05-29  15:06:43
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

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */
#include "CanTp_Types.h"
#include "CanTp.h"
/* END of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dispatcher for RxNsdus (ROM)
 ----------------------------------------------------------------------------- */

#define CANTP_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
FUNC(uint8, CANTP_CODE) GetAddressingType(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  if (CANTP_RX__RXNPDU_ID == rxPduId)
  {
    return CANTP_RX__ADDRESSING_FORMAT;
  }
  else
  {
    return CANTP_TX__ADDRESSING_FORMAT;
  }
}

FUNC(PduIdType, CANTP_CODE) GetRxSdu(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  VAR(PduIdType, AUTOMATIC) rxSduId;
  
  if (CANTP_RX__RXNPDU_ID == rxPduId)
  {
    rxSduId = CANTP_RX__RXNSDU_ID;
  }
#if (CANTP_NUM_RXSDUS > 1)
  else if (CANTP_RX__RXNPDU_ID_FUNC == rxPduId)
  {
    rxSduId = CANTP_RX__RXNSDU_ID_FUNC;
  }
#endif
  else
  {
    rxSduId = CANTP_INVALID_HDL;
  }
  return rxSduId;
}

FUNC(PduIdType, CANTP_CODE) GetRxSduExt(VAR(PduIdType, AUTOMATIC) rxPduId, VAR(uint8, AUTOMATIC) ta)
{
  VAR(PduIdType, AUTOMATIC) rxSduId;
  
  if ( (CANTP_RX__RXNPDU_ID == rxPduId)
    && (CANTP_RX__RX_NTA == ta) )
  {
    rxSduId = CANTP_RX__RXNSDU_ID;
  }
#if (CANTP_NUM_RXSDUS > 1)
  else if ( (CANTP_RX__RXNPDU_ID_FUNC == rxPduId)
    && (CANTP_RX__RX_NTA_FUNC == ta) )
  {
    rxSduId = CANTP_RX__RXNSDU_ID_FUNC;
  }
#endif
  else
  {
    rxSduId = CANTP_INVALID_HDL;
  }
  return rxSduId;
}

FUNC(PduIdType, CANTP_CODE) GetTxSdu(VAR(PduIdType, AUTOMATIC) rxPduId)
{
  VAR(PduIdType, AUTOMATIC) txSduId;

  if (CANTP_TX__RXFC_NPDU_ID != rxPduId)
  {
    txSduId = CANTP_INVALID_HDL;
  }
  else
  {
    txSduId = CANTP_TX__TXNSDU_ID;
  }
  
  return txSduId;
}

FUNC(PduIdType, CANTP_CODE) GetTxSduExt(VAR(PduIdType, AUTOMATIC) rxPduId, VAR(uint8, AUTOMATIC) ta)
{
  VAR(PduIdType, AUTOMATIC) txSduId;

  if ( (CANTP_TX__RXFC_NPDU_ID != rxPduId)
       || (CANTP_TX__RXFC_NTA != ta) )
  {
    txSduId = CANTP_INVALID_HDL;
  }
  else
  {
    txSduId = CANTP_TX__TXNSDU_ID;
  }

  return txSduId;
}

/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




