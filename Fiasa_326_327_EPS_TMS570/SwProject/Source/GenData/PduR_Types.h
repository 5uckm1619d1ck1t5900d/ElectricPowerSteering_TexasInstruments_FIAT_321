/* -----------------------------------------------------------------------------
  Filename:    PduR_Types.h
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: PduR
               
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

#if !defined(PDUR_TYPES_H)
#define PDUR_TYPES_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

/*lint -save -e621 -e760 */ /* Identifier clash caused by other communication stack module(s) */
/*lint -save -e451 */ /* Repeated header include caused by other communication stack module(s) */
/*lint -save -esym(960, 20.2) */ /* Warnings caused by other communication stack module(s) */
#include "ComStack_Types.h"
/*lint -restore */
#include "v_cfg.h"
/*lint -save -e537 */ /* Repeated include caused by other communication stack module(s) */
/*lint -save -e553 */ /* Undefined preprocessor variable(s) caused by other communication stack module(s) */
/*lint -save -e652 */ /* Definition of a previously declared symbol caused by other communication stack module(s) */
/*lint -save -e762 */ /* Redundant declaration of symbol caused caused by other communication stack module(s) */
/*lint -save -e828 */ /* Semanctic violation caused by by other communication stack module(s) */
/*lint -save -e937 */ /* Old-style function declaration violated by other communication stack module(s) */
/*lint -save -e950 */ /* Non-ANSI reserved word or construct violated by other communication stack module(s) */
/*lint -save -e960 -e793 -e960 */ /* MISRA required string rule violated by other communication stack module(s) */
/*lint -save -e961 */ /* MISRA advisory string rule violated by other communication stack module(s) */
/*lint -save -e970 */ /* Use of modifier or type outside of a typedef violated by other communication stack module(s) */
/*lint -estring(451, vrm.h) */ /* Warnings caused by other communication stack module(s) */
#include "v_def.h"
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */
/*lint -restore */


/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA TYPES AND STRUCTURES
 ----------------------------------------------------------------------------- */

typedef VAR(vbittype, PDUR_VAR_NOINIT) PduR_Core_BitType; /* Type for bit fields */
typedef P2VAR(PduInfoType, TYPEDEF, PDUR_APPL_DATA) PduInfoTypeApplPtr; /* Helper type for compiler abstraction */
typedef VAR(uint8, PDUR_VAR_NOINIT) PduR_Core_PortIdType;
typedef struct PduR_Core_DestInfoTypeTag
{
  PduR_Core_PortIdType destPort;
  PduIdType destPduId;
} PduR_Core_DestInfoType;
typedef P2CONST(PduR_Core_DestInfoType, TYPEDEF, PDUR_CONST) PduR_Core_DestITypePtr;
typedef enum
{
  PDUR_UNINIT = 0,
  PDUR_ONLINE = 1,
  PDUR_REDUCED = 2
} PduR_Core_StateType;
typedef P2CONST(uint8, TYPEDEF, PDUR_CONST) PduR_Uint8PbPtr;
typedef P2CONST(uint16, TYPEDEF, PDUR_CONST) PduR_Uint16PbPtr;
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_Core_TransmitFctPtrType) (PduIdType txPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);
/* PRQA S 1334 PARAMRXPDUID_1334 */ /* MD_PduR_1334 */
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_UpIfRxIndicationFctPtrType) (PduIdType UpRxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_UpIfTriggerTransmitFctPtrType) (PduIdType UpTxPduId, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_UpIfTxConfirmationFctPtrType) (PduIdType UpTxPduId);

typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_UpTpProvideTxBufferFctPtrType) (PduIdType UpTxPduId, P2VAR(PduInfoTypeApplPtr, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr, uint16 Length);
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_UpTpProvideRxBufferFctPtrType) (PduIdType UpRxPduId, PduLengthType TpSduLength, P2VAR(PduInfoTypeApplPtr, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_UpTpTxConfirmationFctPtrType) (PduIdType UpTxPduId, NotifResultType Result);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_UpTpRxIndicationFctPtrType) (PduIdType UpRxPduId, NotifResultType Result);
/* PRQA L:PARAMRXPDUID_1334 */

typedef struct PduR_PBConfigTypeTag
{
  PduIdType RxCanIf2UpCnt;
  PduR_Core_DestITypePtr RxCanIf2Up;
  PduIdType TxCanIf2UpCnt;
  PduR_Core_DestITypePtr TxCanIf2Up;
  PduIdType RxCanTp2UpCnt;
  PduR_Core_DestITypePtr RxCanTp2Up;
  PduIdType TxCanTp2UpCnt;
  PduR_Core_DestITypePtr TxCanTp2Up;
  PduIdType TxCom2LoCnt;
  PduR_Core_DestITypePtr TxCom2Lo;
  PduIdType TxDcm2LoCnt;
  PduR_Core_DestITypePtr TxDcm2Lo;
} PduR_PBConfigType;



#endif /* PDUR_TYPES_H */
