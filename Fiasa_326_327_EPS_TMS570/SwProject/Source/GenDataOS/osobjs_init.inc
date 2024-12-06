/* file: osobjs_init.inc, automatically generated by genTMS570SafeCtxAS.exe, Version: 5.06 */
/* configuration read from: C:\Users\nzdx8v\AppData\Local\Temp\~cfg4_314_EPS.ecuc.arxml.oil */
/* generation at  : Fri Mar 04 10:39:50 2016 */
/* Unlimited license CBD1010124 for Nexteer Automotive */
/* Implementation: TMS570LS3x */
/* Version of general code: 5.23c */

     . = align(16384);   /* align to region size 16384 */
    _ossAppliDataStartAp_9=.;
     /* Nexteer patch to add *.data allocation to Ap_9 */
     *(.ossDataAp_9:init)
	 *(.data)
     _ossAppliDataEndAp_9=.;
	 _ossAppliDataSizeAp_9 = _ossAppliDataEndAp_9 - _ossAppliDataStartAp_9 +1;
     . = . + 1;
     . = align(16384); /* Use 8 subregions with size 2048*/

     . = align(8192);   /* align to region size 8192 */
     *(.ossDataAp_10:init) {START(_ossAppliDataStartAp_10), SIZE(_ossAppliDataSizeAp_10)}
     _ossAppliDataEndAp_10=.;
     . = . + 1;
     . = align(8192); /* Use 8 subregions with size 1024*/

     . = align(1024);   /* align to region size 1024 */
     *(.ossDataAp_8:init) {START(_ossAppliDataStartAp_8), SIZE(_ossAppliDataSizeAp_8)}
     _ossAppliDataEndAp_8=.;
     . = . + 1;
     . = align(1024); /* Use 8 subregions with size 128*/

     . = align(0);   /* align to region size 0 */
     *(.ossDataAp_0:init) {START(_ossAppliDataStartAp_0), SIZE(_ossAppliDataSizeAp_0)}
     _ossAppliDataEndAp_0=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_4ms_0:init) {START(_ossTaskiDataStartTask_SchM_4ms_0), SIZE(_ossTaskiDataSizeTask_SchM_4ms_0)}
     _ossTaskiDataEndTask_SchM_4ms_0=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Init_10:init) {START(_ossTaskiDataStartTask_Init_10), SIZE(_ossTaskiDataSizeTask_Init_10)}
     _ossTaskiDataEndTask_Init_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Init_8:init) {START(_ossTaskiDataStartTask_Init_8), SIZE(_ossTaskiDataSizeTask_Init_8)}
     _ossTaskiDataEndTask_Init_8=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Init_9:init) {START(_ossTaskiDataStartTask_Init_9), SIZE(_ossTaskiDataSizeTask_Init_9)}
     _ossTaskiDataEndTask_Init_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_2ms_10:init) {START(_ossTaskiDataStartTask_2ms_10), SIZE(_ossTaskiDataSizeTask_2ms_10)}
     _ossTaskiDataEndTask_2ms_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_2ms_8:init) {START(_ossTaskiDataStartTask_2ms_8), SIZE(_ossTaskiDataSizeTask_2ms_8)}
     _ossTaskiDataEndTask_2ms_8=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_2ms_9:init) {START(_ossTaskiDataStartTask_2ms_9), SIZE(_ossTaskiDataSizeTask_2ms_9)}
     _ossTaskiDataEndTask_2ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_4ms_10:init) {START(_ossTaskiDataStartTask_4ms_10), SIZE(_ossTaskiDataSizeTask_4ms_10)}
     _ossTaskiDataEndTask_4ms_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_4ms_9:init) {START(_ossTaskiDataStartTask_4ms_9), SIZE(_ossTaskiDataSizeTask_4ms_9)}
     _ossTaskiDataEndTask_4ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_10ms_10:init) {START(_ossTaskiDataStartTask_10ms_10), SIZE(_ossTaskiDataSizeTask_10ms_10)}
     _ossTaskiDataEndTask_10ms_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_10ms_9:init) {START(_ossTaskiDataStartTask_10ms_9), SIZE(_ossTaskiDataSizeTask_10ms_9)}
     _ossTaskiDataEndTask_10ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_10ms_9:init) {START(_ossTaskiDataStartTask_SchM_10ms_9), SIZE(_ossTaskiDataSizeTask_SchM_10ms_9)}
     _ossTaskiDataEndTask_SchM_10ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_100ms_10:init) {START(_ossTaskiDataStartTask_100ms_10), SIZE(_ossTaskiDataSizeTask_100ms_10)}
     _ossTaskiDataEndTask_100ms_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_100ms_8:init) {START(_ossTaskiDataStartTask_100ms_8), SIZE(_ossTaskiDataSizeTask_100ms_8)}
     _ossTaskiDataEndTask_100ms_8=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_100ms_9:init) {START(_ossTaskiDataStartTask_100ms_9), SIZE(_ossTaskiDataSizeTask_100ms_9)}
     _ossTaskiDataEndTask_100ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_Trns_9:init) {START(_ossTaskiDataStartTask_SchM_Trns_9), SIZE(_ossTaskiDataSizeTask_SchM_Trns_9)}
     _ossTaskiDataEndTask_SchM_Trns_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Trns_10:init) {START(_ossTaskiDataStartTask_Trns_10), SIZE(_ossTaskiDataSizeTask_Trns_10)}
     _ossTaskiDataEndTask_Trns_10=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Trns_8:init) {START(_ossTaskiDataStartTask_Trns_8), SIZE(_ossTaskiDataSizeTask_Trns_8)}
     _ossTaskiDataEndTask_Trns_8=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Trns_9:init) {START(_ossTaskiDataStartTask_Trns_9), SIZE(_ossTaskiDataSizeTask_Trns_9)}
     _ossTaskiDataEndTask_Trns_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_100ms_9:init) {START(_ossTaskiDataStartTask_SchM_100ms_9), SIZE(_ossTaskiDataSizeTask_SchM_100ms_9)}
     _ossTaskiDataEndTask_SchM_100ms_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_100ms_0:init) {START(_ossTaskiDataStartTask_SchM_100ms_0), SIZE(_ossTaskiDataSizeTask_SchM_100ms_0)}
     _ossTaskiDataEndTask_SchM_100ms_0=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_SchM_Init_9:init) {START(_ossTaskiDataStartTask_SchM_Init_9), SIZE(_ossTaskiDataSizeTask_SchM_Init_9)}
     _ossTaskiDataEndTask_SchM_Init_9=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataTask_Bkgnd:init) {START(_ossTaskiDataStartTask_Bkgnd), SIZE(_ossTaskiDataSizeTask_Bkgnd)}
     _ossTaskiDataEndTask_Bkgnd=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataIsr_MtrCtrl:init) {START(_ossISRiDataStartIsr_MtrCtrl), SIZE(_ossISRiDataSizeIsr_MtrCtrl)}
     _ossISRiDataEndIsr_MtrCtrl=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataCanIsr_0:init) {START(_ossISRiDataStartCanIsr_0), SIZE(_ossISRiDataSizeCanIsr_0)}
     _ossISRiDataEndCanIsr_0=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataIsr_ESMH:init) {START(_ossISRiDataStartIsr_ESMH), SIZE(_ossISRiDataSizeIsr_ESMH)}
     _ossISRiDataEndIsr_ESMH=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataGpt_IsrInt0:init) {START(_ossISRiDataStartGpt_IsrInt0), SIZE(_ossISRiDataSizeGpt_IsrInt0)}
     _ossISRiDataEndGpt_IsrInt0=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataIsr_ESML:init) {START(_ossISRiDataStartIsr_ESML), SIZE(_ossISRiDataSizeIsr_ESML)}
     _ossISRiDataEndIsr_ESML=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataFlsTst_CrcIrq:init) {START(_ossISRiDataStartFlsTst_CrcIrq), SIZE(_ossISRiDataSizeFlsTst_CrcIrq)}
     _ossISRiDataEndFlsTst_CrcIrq=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataIsr_OvervoltThresh:init) {START(_ossISRiDataStartIsr_OvervoltThresh), SIZE(_ossISRiDataSizeIsr_OvervoltThresh)}
     _ossISRiDataEndIsr_OvervoltThresh=.;
     . = . + 1;
     . = align(0); /* Use no subregions */

     . = align(0);   /* align to region size 0 */
     *(.ossDataIsr_I2c:init) {START(_ossISRiDataStartIsr_I2c), SIZE(_ossISRiDataSizeIsr_I2c)}
     _ossISRiDataEndIsr_I2c=.;
     . = . + 1;
     . = align(0); /* Use no subregions */
