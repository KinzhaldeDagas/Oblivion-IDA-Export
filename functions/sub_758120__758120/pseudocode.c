NiTimeController *sub_758120()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x758123*/
  v1 = v0; /*0x758128*/
  if ( !v0 ) /*0x75812f*/
    return 0; /*0x758142*/
  sub_75F510(v0); /*0x758133*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterDeclinationVarCtlr::`vftable'; /*0x758138*/
  return v1; /*0x758140*/
}
