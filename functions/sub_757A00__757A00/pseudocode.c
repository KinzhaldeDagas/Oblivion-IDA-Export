NiTimeController *sub_757A00()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757a03*/
  v1 = v0; /*0x757a08*/
  if ( !v0 ) /*0x757a0f*/
    return 0; /*0x757a22*/
  sub_75F510(v0); /*0x757a13*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldMagnitudeCtlr::`vftable'; /*0x757a18*/
  return v1; /*0x757a20*/
}
