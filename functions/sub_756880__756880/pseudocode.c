NiTimeController *sub_756880()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756883*/
  v1 = v0; /*0x756888*/
  if ( !v0 ) /*0x75688f*/
    return 0; /*0x7568a2*/
  sub_75F510(v0); /*0x756893*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotSpeedVarCtlr::`vftable'; /*0x756898*/
  return v1; /*0x7568a0*/
}
