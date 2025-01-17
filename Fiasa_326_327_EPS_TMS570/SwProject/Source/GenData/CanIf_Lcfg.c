/* -----------------------------------------------------------------------------
  Filename:    CanIf_Lcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.02.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: CanIf
               
               Configuration   : C:\Users\mzjphh\Desktop\Fiasa_326_327_05.01.00\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2017-03-06  13:15:29
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

#define CANIF_LCFG_SOURCE

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - If_AsrIfCanLinktimeCRC */
#include "CanIf_Cfg.h"
#include "Can_Cfg.h"
/* END of Checksum exclude for
  - If_AsrIfCanLinktimeCRC */


#define CANIF_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Prototypes for Callback functions
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - If_AsrIfCanLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ Tx Confirmation Functions
 ----------------------------------------------------------------------------- */

FUNC(void, CANIF_APPL_CODE) CanNm_TxConfirmation(PduIdType CanTxPduId); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) CanTp_TxConfirmation(PduIdType CanTxPduId); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) PduR_CanIfTxConfirmation(PduIdType CanTxPduId); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) CanXcp_TxConfirmation(PduIdType CanTxPduId); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */


/* -----------------------------------------------------------------------------
    &&&~ Rx Indication Functions
 ----------------------------------------------------------------------------- */

FUNC(void, CANIF_APPL_CODE) CanNm_RxIndication(PduIdType CanRxPduId, P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_VAR) PduInfoPtr); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) CanTp_RxIndication(PduIdType CanRxPduId, P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_VAR) PduInfoPtr); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) PduR_CanIfRxIndication(PduIdType CanRxPduId, P2CONST(PduInfoType, AUTOMATIC, CANIF_APPL_VAR) PduInfoPtr); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) CanXcp_RxIndication(PduIdType CanRxPduId, P2CONST(uint8, AUTOMATIC, CANIF_APPL_VAR) CanSduPtr); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
FUNC(void, CANIF_APPL_CODE) GliwaT1_MsgProcess_RxT1HostToTarget(PduIdType CanRxPduId, P2CONST(uint8, AUTOMATIC, CANIF_APPL_VAR) CanSduPtr); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */


/* -----------------------------------------------------------------------------
    &&&~ BusOff Indication Functions
 ----------------------------------------------------------------------------- */

FUNC(void, CANIF_APPL_CODE) CanSM_ControllerBusOff(uint8 Controller); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */


/* -----------------------------------------------------------------------------
    &&&~ WakeupEvent Functions
 ----------------------------------------------------------------------------- */

#ifndef ECUM_SET_WAKEUP_EVENT_DECLARATION
FUNC(void, CANIF_APPL_CODE) EcuM_SetWakeupEvent(EcuM_WakeupSourceType CanWakeupEvents); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */
#define ECUM_SET_WAKEUP_EVENT_DECLARATION
#endif



/* -----------------------------------------------------------------------------
    &&&~ WakeupValidation Functions
 ----------------------------------------------------------------------------- */

FUNC(void, CANIF_APPL_CODE) CanIfWakeupValidNotification(EcuM_WakeupSourceType CanWakeupEvents); /* PRQA S 3408 */ /* MD_CanIf_8.8_CanIf_Lcfg.c */


/* END of Checksum include for
  - If_AsrIfCanLinktimeCRC */


#define CANIF_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ variable declaration (initialized)
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - If_AsrIfCanLinktimeCRC */
VAR(CanIf_ControllerModeType, CANIF_VAR_ZERO_INIT) CanIf_ControllerMode[CANIF_MAX_CONTROLLER_TABLESIZE] = 
{
  CANIF_CS_UNINIT
};
/* END of Checksum include for
  - If_AsrIfCanLinktimeCRC */


#define CANIF_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ variable declaration
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - If_AsrIfCanLinktimeCRC */
VAR(CanIf_WakeUpValidationStateType, CANIF_VAR_NOINIT) CanIf_WakeUpValidationState[CANIF_MAX_CONTROLLER_TABLESIZE];
VAR(CanIf_PduGetModeType, CANIF_VAR_NOINIT) CanIf_ChannelMode[CANIF_MAX_CONTROLLER_TABLESIZE];
VAR(CanIf_TxBitQueueType, CANIF_VAR_NOINIT) CanIf_TxQueue[CANIF_MAX_NORMALTXPDUHANDLE_TABLESIZE];
VAR(CanIf_TxQueueFlagType, CANIF_VAR_NOINIT) canIf_TxQueueFlags[CANIF_MAX_TXQUEUESIZE];
VAR(boolean, CANIF_VAR_NOINIT) CanIf_ControllerSleepRequestPassed[CANIF_MAX_CONTROLLER_TABLESIZE];
/* END of Checksum include for
  - If_AsrIfCanLinktimeCRC */


#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - If_AsrIfCanLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ Callback function tables
 ----------------------------------------------------------------------------- */

CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[CANIF_MAX_TXCONFIRMATION_LIST] = 
{
  NULL_PTR, 
  CanNm_TxConfirmation, 
  CanTp_TxConfirmation, 
  PduR_CanIfTxConfirmation, 
  CanXcp_TxConfirmation
};
CONST(CanIf_RxIndicationFctStructType, CANIF_CONST) CanIf_RxIndicationFctList[CANIF_MAX_RXINDICATION_LIST] = 
{
  { { (CanIf_SimpleRxIndicationFctType) NULL_PTR }, CanIf_SimpleRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */, 
  { { (CanIf_SimpleRxIndicationFctType) CanNm_RxIndication }, CanIf_AdvancedRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */, 
  { { (CanIf_SimpleRxIndicationFctType) CanTp_RxIndication }, CanIf_AdvancedRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */, 
  { { (CanIf_SimpleRxIndicationFctType) PduR_CanIfRxIndication }, CanIf_AdvancedRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */, 
  { { (CanIf_SimpleRxIndicationFctType) CanXcp_RxIndication }, CanIf_SimpleRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */, 
  { { (CanIf_SimpleRxIndicationFctType) GliwaT1_MsgProcess_RxT1HostToTarget }, CanIf_SimpleRxIndicationLayout } /* PRQA S 313 */ /* MD_CanIf_11.1 */
};


/* -----------------------------------------------------------------------------
    &&&~ BusOffIndicationFct
 ----------------------------------------------------------------------------- */

CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFct = CanSM_ControllerBusOff;


/* -----------------------------------------------------------------------------
    &&&~ WakeUpEventFct
 ----------------------------------------------------------------------------- */

CONST(CanIf_WakeUpEventFctType, CANIF_CONST) CanIf_WakeUpEventFct = EcuM_SetWakeupEvent;


/* -----------------------------------------------------------------------------
    &&&~ WakeUpValidationFct
 ----------------------------------------------------------------------------- */

CONST(CanIf_WakeUpValidationFctType, CANIF_CONST) CanIf_WakeUpValidationFct = NULL_PTR; /* NEXTEER MANUAL EDIT */


/* -----------------------------------------------------------------------------
    &&&~ DlcErrorNotificationFct
 ----------------------------------------------------------------------------- */

CONST(CanIf_DlcErrorNotifictionFctType, CANIF_CONST) CanIf_DlcErrorNotificationFct = NULL_PTR;


/* END of Checksum include for
  - If_AsrIfCanLinktimeCRC */

#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Postbuild configuration
 ----------------------------------------------------------------------------- */

CONST(CanIf_ConfigType, CANIF_PBCFG_ROOT) CanIf_Config = 
{
  0x032101u /* Generator version */, 
  CanIf_ControllerConfig /* Controller config pointer */, 
  CanIf_RxPduConfig /* RxPdu config pointer */, 
  CanIf_RxPduId /* RxPduId table pointer */, 
  CanIf_RxPduMask /* RxPduMask table pointer */, 
  CanIf_TxPduConfig /* Tx Pdu config pointer */, 
  CanIf_TxPduQueueIndex /* TxQueue config pointer */, 
  CanIf_MailBoxConfig /* Mailbox config pointer */, 
  CanIf_WakeUpConfig /* Wakeup config pointer */, 
  (CanIf_TransceiverMapPtrType) 0 /* Transceiver mapping table pointer */, 
  (CanIf_PduIdPtrType) 0 /* NPB conversion table pointer */, 
  CanControllerConfig /* CanControllerConfig pointer */, 
  CanIf_TxQueueStartIndex /* TxQueueStartIndex */, 
  CanIf_TxQueuePadBits /* TxQueuePadBits */, 
  CanIf_MagicNumber /* MagicNumber pointer */, 
  12u /* Number of Rx PDUs + Ranges */, 
  7u /* Number of Tx PDUs */, 
  0u /* Number of NPB Tx messages */, 
  1u /* Number of channels */, 
  22u /* Number of CAN Hw objects */, 
  5u /* Number of Tx Confirmation functions */, 
  6u /* Number of Rx Confirmation functions */, 
  1u /* MaxNrOfWakeupSources */, 
  0u /* MaxNrOfTransceiver */, 
  0x0600u /* Generator compatibility version */, 
  0xDEAFu
};



#define CANIF_STOP_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Postbuild configuration
 ----------------------------------------------------------------------------- */

CONST(CanIf_ControllerConfigType, CANIF_PBCFG) CanIf_ControllerConfig[CANIF_MAX_CONTROLLER] = 
{
  
  {
    0u /* TxBCStartIndex */, 
    0u /* TxBCStopIndex */
  }
};
CONST(CanIf_RxPduConfigType, CANIF_PBCFG) CanIf_RxPduConfig[CANIF_MAX_RXPDUHANDLE] = 
{
  
  {
    0u /* UpperLayer PduID - PduId(Index): 0 */, 
    2u /* Minimum message length */, 
    (uint8) 1u /* CanNm_RxIndication */
  }, 
  
  {
    0u /* UpperLayer PduID - PduId(Index): 1 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 5u /* GliwaT1_MsgProcess_RxT1HostToTarget */
  }, 
  
  {
    0u /* UpperLayer PduID - PduId(Index): 2 */, 
    6u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    0u /* UpperLayer PduID - PduId(Index): 3 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 4u /* CanXcp_RxIndication */
  }, 
  
  {
    0u /* UpperLayer PduID - PduId(Index): 4 */, 
    0u /* Data Length Code NOT optimized */, 
    (uint8) 2u /* CanTp_RxIndication */
  }, 
  
  {
    1u /* UpperLayer PduID - PduId(Index): 5 */, 
    0u /* Data Length Code NOT optimized */, 
    (uint8) 2u /* CanTp_RxIndication */
  }, 
  
  {
    1u /* UpperLayer PduID - PduId(Index): 6 */, 
    5u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    2u /* UpperLayer PduID - PduId(Index): 7 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    3u /* UpperLayer PduID - PduId(Index): 8 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    4u /* UpperLayer PduID - PduId(Index): 9 */, 
    5u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    5u /* UpperLayer PduID - PduId(Index): 10 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }, 
  
  {
    6u /* UpperLayer PduID - PduId(Index): 11 */, 
    8u /* Data Length Code NOT optimized */, 
    (uint8) 3u /* PduR_CanIfRxIndication */
  }
};
CONST(Can_IdType, CANIF_PBCFG) CanIf_RxPduId[CANIF_MAX_RXPDUHANDLE] = 
{
  0x9E340000u /* Range0_High (Index: 0) */, 
  0x07F0u /* GliwaMaster__CCAN CanId: 0x7f0 (Index: 1) */, 
  0x9E114000u /* CFG_DATA_CODE_REQUEST__CCAN CanId: 0x1e114000 (Index: 2) */, 
  0x0695u /* XcpMaster__CCAN CanId: 0x695 (Index: 3) */, 
  0x98DBFEF4u /* DIAGNOSTIC_REQUEST_FUNCTIONAL_Tp__CCAN CanId: 0x18dbfef4 (Index: 4) */, 
  0x98DA30F4u /* DIAGNOSTIC_REQUEST_EPS_Tp__CCAN CanId: 0x18da30f4 (Index: 5) */, 
  0x04B4u /* STATUS_C_BCM2__CCAN CanId: 0x4b4 (Index: 6) */, 
  0x0419u /* STATUS_C_IPC__CCAN CanId: 0x419 (Index: 7) */, 
  0x02EEu /* MOT3__CCAN CanId: 0x2ee (Index: 8) */, 
  0xFAu /* BCM_COMMAND__CCAN CanId: 0xfa (Index: 9) */, 
  0xF2u /* BSM1__CCAN CanId: 0xf2 (Index: 10) */, 
  0xE6u /* MOT1__CCAN CanId: 0xe6 (Index: 11) */
};
CONST(Can_IdType, CANIF_PBCFG) CanIf_RxPduMask[CANIF_MAX_RXPDUHANDLE] = 
{
  0xFFFFFF00u /* Range0_High (Index: 0) */, 
  0xDFFFFFFFu /* GliwaMaster__CCAN (Index: 1) */, 
  0xDFFFFFFFu /* CFG_DATA_CODE_REQUEST__CCAN (Index: 2) */, 
  0xDFFFFFFFu /* XcpMaster__CCAN (Index: 3) */, 
  0xDFFFFFFFu /* DIAGNOSTIC_REQUEST_FUNCTIONAL_Tp__CCAN (Index: 4) */, 
  0xDFFFFFFFu /* DIAGNOSTIC_REQUEST_EPS_Tp__CCAN (Index: 5) */, 
  0xDFFFFFFFu /* STATUS_C_BCM2__CCAN (Index: 6) */, 
  0xDFFFFFFFu /* STATUS_C_IPC__CCAN (Index: 7) */, 
  0xDFFFFFFFu /* MOT3__CCAN (Index: 8) */, 
  0xDFFFFFFFu /* BCM_COMMAND__CCAN (Index: 9) */, 
  0xDFFFFFFFu /* BSM1__CCAN (Index: 10) */, 
  0xDFFFFFFFu /* MOT1__CCAN (Index: 11) */
};
CONST(CanIf_TxPduConfigType, CANIF_PBCFG) CanIf_TxPduConfig[CANIF_MAX_TXPDUHANDLE] = 
{
  
  {
    0x07F1u /* CanId: 0x7f1 (PduId/Index: 0) */, 
    0u /* Controller */, 
    6u /* Hardware Transmit Handle */, 
    8u /* Data Length Code */, 
    (uint8) 0u /* NULL_PTR */
  }, 
  
  {
    0x9E360002u /* CanId: 0x1e360002 (PduId/Index: 1) */, 
    0u /* Controller */, 
    5u /* Hardware Transmit Handle */, 
    3u /* Data Length Code */, 
    (uint8) 3u /* PduR_CanIfTxConfirmation */
  }, 
  
  {
    0x9E340002u /* CanId: 0x1e340002 (PduId/Index: 2) */, 
    0u /* Controller */, 
    4u /* Hardware Transmit Handle */, 
    2u /* Data Length Code */, 
    (uint8) 1u /* CanNm_TxConfirmation */
  }, 
  
  {
    0x9E114002u /* CanId: 0x1e114002 (PduId/Index: 3) */, 
    0u /* Controller */, 
    3u /* Hardware Transmit Handle */, 
    6u /* Data Length Code */, 
    (uint8) 3u /* PduR_CanIfTxConfirmation */
  }, 
  
  {
    0x06E5u /* CanId: 0x6e5 (PduId/Index: 4) */, 
    0u /* Controller */, 
    2u /* Hardware Transmit Handle */, 
    8u /* Data Length Code */, 
    (uint8) 4u /* CanXcp_TxConfirmation */
  }, 
  
  {
    0x98DAF430u /* CanId: 0x18daf430 (PduId/Index: 5) */, 
    0u /* Controller */, 
    1u /* Hardware Transmit Handle */, 
    8u /* Data Length Code */, 
    (uint8) 2u /* CanTp_TxConfirmation */
  }, 
  
  {
    0xDEu /* CanId: 0xde (PduId/Index: 6) */, 
    0u /* Controller */, 
    0u /* Hardware Transmit Handle */, 
    6u /* Data Length Code */, 
    (uint8) 3u /* PduR_CanIfTxConfirmation */
  }
};
CONST(PduIdType, CANIF_PBCFG) CanIf_TxPduQueueIndex[CANIF_MAX_TXPDUHANDLE] = 
{
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 0, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 1, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 2, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 3, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 4, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 5, FullCAN */, 
  (PduIdType) 0xFFFFFFFFu /* PDU Id: 6, FullCAN */
};

CONST(CanIf_MailBoxConfigType, CANIF_PBCFG) CanIf_MailBoxConfig[CANIF_MAX_MAILBOX] = 
{
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 3u /* CANIF_TxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused for Tx message objects */, 
    0u /* Unused for Tx message objects */, 
    (CanIf_MailBoxTypeType) 2u /* CANIF_TxBasicCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* Unused object */, 
    0u /* Unused object */, 
    (CanIf_MailBoxTypeType) 4u /* CANIF_UnusedCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    49u /* RxPduIdIndex (First) */, 
    1u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    50u /* RxPduIdIndex (First) */, 
    2u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    51u /* RxPduIdIndex (First) */, 
    3u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    52u /* RxPduIdIndex (First) */, 
    4u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    53u /* RxPduIdIndex (First) */, 
    5u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    54u /* RxPduIdIndex (First) */, 
    6u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    55u /* RxPduIdIndex (First) */, 
    7u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    56u /* RxPduIdIndex (First) */, 
    8u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    57u /* RxPduIdIndex (First) */, 
    9u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    58u /* RxPduIdIndex (First) */, 
    10u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    59u /* RxPduIdIndex (First) */, 
    11u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 1u /* CANIF_RxFullCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* RxPduIdIndex (First) */, 
    0u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 0u /* CANIF_RxBasicCANMailbox */, 
    0u /* Controller */
  }, 
  
  {
    0u /* RxPduIdIndex (First) */, 
    0u /* RxPduIdIndex (Last) */, 
    (CanIf_MailBoxTypeType) 0u /* CANIF_RxBasicCANMailbox */, 
    0u /* Controller */
  }
};

CONST(CanIf_WakeUpConfigType, CANIF_PBCFG) CanIf_WakeUpConfig[CANIF_MAX_WAKEUPSOURCES] = 
{
  
  {
    32u /* Wakeup Source */, 
    (CanIf_WakeUpTargetType) 1u /* CANIF_WAKEUPREQUEST_CAN */, 
    0u /* Target Index (Controller/TrcvIndex) */, 
    0u /* Controller */
  }
};

CONST(uint16, CANIF_PBCFG) CanIf_MagicNumber[1] = 
{
  0xDEAFu
};
/* -----------------------------------------------------------------------------
    &&&~ TxQueue
 ----------------------------------------------------------------------------- */

CONST(PduIdType, CANIF_PBCFG) CanIf_TxQueuePadBits[CANIF_MAX_CONTROLLER_TABLESIZE] = 
{
  0u
};
CONST(uint8, CANIF_PBCFG) CanIf_TxQueueStartIndex[CANIF_MAX_CONTROLLER_TABLESIZE+1u] = 
{
  0u, 
  1u
};




#define CANIF_STOP_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANIF_START_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#define CANIF_STOP_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



