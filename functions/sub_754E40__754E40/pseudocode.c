NiTimeController *sub_754E40()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x40u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiTimeController::NiTimeController(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysResetOnLoopCtlr::`vftable';
  *(float *)&v1[1].vtbl = -flt_A7DEB4;
  return v1;
}
