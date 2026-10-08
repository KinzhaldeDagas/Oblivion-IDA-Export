NiTimeController *sub_75D300()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75d303*/
  v1 = v0; /*0x75d308*/
  if ( !v0 ) /*0x75d30f*/
    return 0; /*0x75d322*/
  sub_75F510(v0); /*0x75d313*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldInheritVelocityCtlr::`vftable'; /*0x75d318*/
  return v1; /*0x75d320*/
}
