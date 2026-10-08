NiTimeController *sub_7569E0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x7569e3*/
  v1 = v0; /*0x7569e8*/
  if ( !v0 ) /*0x7569ef*/
    return 0; /*0x756a02*/
  sub_75F510(v0); /*0x7569f3*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotSpeedCtlr::`vftable'; /*0x7569f8*/
  return v1; /*0x756a00*/
}
