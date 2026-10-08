NiTimeController *sub_754E40()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x754e43*/
  v1 = v0; /*0x754e48*/
  if ( !v0 ) /*0x754e4f*/
    return 0; /*0x754e6d*/
  NiTimeController::NiTimeController(v0); /*0x754e53*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysResetOnLoopCtlr::`vftable'; /*0x754e58*/
  *(float *)&v1[1].vtbl = -flt_A7DEB4; /*0x754e68*/
  return v1; /*0x754e6b*/
}
