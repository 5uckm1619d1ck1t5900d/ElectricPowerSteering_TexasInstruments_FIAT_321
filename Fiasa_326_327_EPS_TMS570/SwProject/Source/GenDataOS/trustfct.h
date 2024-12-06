/* MISRA RULE 19.15 not violated: The QAC-Tool states a violation of rule 19.15 with
 * message 0883 below. Anyhow, there is a double include prevention and therefore,
 * the message is considered to be wrong. */
/* double include preventer */
#ifndef _TRUSTCFT_H      /* PRQA S 0883 EOF */ /* see MISRA comment above */
#define _TRUSTCFT_H
/* file: trustfct.h, automatically generated by genTMS570SafeCtxAS.exe, Version: 5.06 */
/* configuration read from: C:\Users\jzh87w\AppData\Local\Temp\~cfg4_314_EPS.ecuc.arxml.oil */
/* generation at  : Wed May 27 11:38:19 2015 */
/* Unlimited license CBD1010124 for Nexteer Automotive */
/* Implementation: TMS570LS3x */
/* Version of general code: 5.23c */

#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif
#define osdVrmGenMajRelNum 5
#define osdVrmGenMinRelNum 6
#if defined USE_QUOTE_INCLUDES
 #include "vrm.h"
#else
 #include <vrm.h>
#endif

#ifndef _OS_TRUSTFCT_H_
#define _OS_TRUSTFCT_H_

/* Trusted Functions */

#define TWrapS_XcpWriteAp0 0
void TRUSTED_TWrapS_XcpWriteAp0(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_CallFblStart 1
void TRUSTED_TWrapS_CallFblStart(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Adc_Init 2
void TRUSTED_TWrapS_Adc_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Adc2_Init1 3
void TRUSTED_TWrapS_Adc2_Init1(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_PwmCdd_Init 4
void TRUSTED_TWrapS_PwmCdd_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_StaMd_Init0 5
void TRUSTED_TWrapS_StaMd_Init0(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Wdg_TMS570LS3x_Init 6
void TRUSTED_TWrapS_Wdg_TMS570LS3x_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_WdgM_Init 7
void TRUSTED_TWrapS_WdgM_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_NvMProxy_Init 8
void TRUSTED_TWrapS_NvMProxy_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_FeeIf_Init 9
void TRUSTED_TWrapS_FeeIf_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_MainFunction 10
void TRUSTED_TWrapS_Fee_MainFunction(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_Read 11
void TRUSTED_TWrapS_Fee_Read(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint16 os_arg_BlockNumber;
   uint16 os_arg_BlockOffset;
   uint8* os_arg_DataBufferPtr;
   uint16 os_arg_Length;
   Std_ReturnType os_result;
} osTFArgType_TWrapS_Fee_Read;

#define TWrapS_Fee_Write 12
void TRUSTED_TWrapS_Fee_Write(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint16 os_arg_BlockNumber;
   uint8* os_arg_DataBufferPtr;
   Std_ReturnType os_result;
} osTFArgType_TWrapS_Fee_Write;

#define TWrapS_Fee_EraseImmediateBlock 13
void TRUSTED_TWrapS_Fee_EraseImmediateBlock(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint16 os_arg_BlockNumber;
   Std_ReturnType os_result;
} osTFArgType_TWrapS_Fee_EraseImmediateBlock;

#define TWrapS_Fee_InvalidateBlock 14
void TRUSTED_TWrapS_Fee_InvalidateBlock(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint16 os_arg_BlockNumber;
   Std_ReturnType os_result;
} osTFArgType_TWrapS_Fee_InvalidateBlock;

#define TWrapS_Fee_Cancel 15
void TRUSTED_TWrapS_Fee_Cancel(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_GetStatus 16
void TRUSTED_TWrapS_Fee_GetStatus(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint8 os_result;
} osTFArgType_TWrapS_Fee_GetStatus;

#define TWrapS_Fee_GetJobResult 17
void TRUSTED_TWrapS_Fee_GetJobResult(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint8 os_result;
} osTFArgType_TWrapS_Fee_GetJobResult;

#define TWrapS_uDiagVIM_RednRpdShtdn 18
void TRUSTED_TWrapS_uDiagVIM_RednRpdShtdn(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_uDiagECC_RednRpdShtdn 19
void TRUSTED_TWrapS_uDiagECC_RednRpdShtdn(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Dma_InvalidateSlowADCGroup 20
void TRUSTED_TWrapS_Dma_InvalidateSlowADCGroup(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_ProcessF0FF 21
void TRUSTED_TWrapS_ProcessF0FF(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_TI_Fee_SuspendResumeErase 22
void TRUSTED_TWrapS_TI_Fee_SuspendResumeErase(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);

typedef struct
{
   uint8 os_arg_Command;
} osTFArgType_TWrapS_TI_Fee_SuspendResumeErase;



typedef union
{
   osTFArgType_TWrapS_Fee_Read TWrapS_Fee_Read_args;
   osTFArgType_TWrapS_Fee_Write TWrapS_Fee_Write_args;
   osTFArgType_TWrapS_Fee_EraseImmediateBlock TWrapS_Fee_EraseImmediateBlock_args;
   osTFArgType_TWrapS_Fee_InvalidateBlock TWrapS_Fee_InvalidateBlock_args;
   osTFArgType_TWrapS_Fee_GetStatus TWrapS_Fee_GetStatus_args;
   osTFArgType_TWrapS_Fee_GetJobResult TWrapS_Fee_GetJobResult_args;
   osTFArgType_TWrapS_TI_Fee_SuspendResumeErase TWrapS_TI_Fee_SuspendResumeErase_args;
} TrustedFunctionParameterType;

/* Non-trusted Functions */

#define NtWrapS_XcpWriteAp8 0
void NONTRUSTED_NtWrapS_XcpWriteAp8(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp9 1
void NONTRUSTED_NtWrapS_XcpWriteAp9(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp10 2
void NONTRUSTED_NtWrapS_XcpWriteAp10(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_CustClrTrim 3
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustClrTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_CustSetTrim 4
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_NxtClearTrim 5
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtClearTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_NxtSetTrim 6
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AstLmt_Scom_ManualTrqCmd 7
void NONTRUSTED_NtWrapS_AstLmt_Scom_ManualTrqCmd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_CalGain 8
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalGain(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_CalOffset 9
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalOffset(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals 10
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim 11
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_ClrTrqTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim 12
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_SetTrqTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigHwTrqSENT_SCom_WriteData 13
void NONTRUSTED_NtWrapS_DigHwTrqSENT_SCom_WriteData(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_Polarity_SCom_SetPolarity 14
void NONTRUSTED_NtWrapS_Polarity_SCom_SetPolarity(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SCom_EOLNomMtrParam_Set 15
void NONTRUSTED_NtWrapS_SCom_EOLNomMtrParam_Set(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_TrqCanc_Scom_SetCogTrqCal 16
void NONTRUSTED_NtWrapS_TrqCanc_Scom_SetCogTrqCal(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_TrqCmdScl_SCom_Set 17
void NONTRUSTED_NtWrapS_TrqCmdScl_SCom_Set(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_VehDyn_SCom_ResetCenter 18
void NONTRUSTED_NtWrapS_VehDyn_SCom_ResetCenter(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigColPs_SCom_CustSetTrim 19
void NONTRUSTED_NtWrapS_DigColPs_SCom_CustSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigColPs_SCom_CustClearTrim 20
void NONTRUSTED_NtWrapS_DigColPs_SCom_CustClearTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigColPs_SCom_NxtSetTrim 21
void NONTRUSTED_NtWrapS_DigColPs_SCom_NxtSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_DigColPs_SCom_NxtClearTrim 22
void NONTRUSTED_NtWrapS_DigColPs_SCom_NxtClearTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);



#endif /* _OS_TRUSTFCT_H_  End of File */

/* END OF C:\cmsynergy\My_Fiasa\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\..\..\SwProject\Source\GenData\\..\GenDataOS\trustfct.h */

#endif /* _TRUSTCFT_H double include preventer */
