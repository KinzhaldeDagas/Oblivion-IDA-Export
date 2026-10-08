NiTimeController *sub_757F40()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757f43*/
  v1 = v0; /*0x757f48*/
  if ( !v0 ) /*0x757f4f*/
    return 0; /*0x757f62*/
  sub_75F510(v0); /*0x757f53*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterLifeSpanCtlr::`vftable'; /*0x757f58*/
  return v1; /*0x757f60*/
}
