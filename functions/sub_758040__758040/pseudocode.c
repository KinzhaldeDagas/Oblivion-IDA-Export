NiTimeController *sub_758040()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x758043*/
  v1 = v0; /*0x758048*/
  if ( !v0 ) /*0x75804f*/
    return 0; /*0x758062*/
  sub_75F510(v0); /*0x758053*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterInitialRadiusCtlr::`vftable'; /*0x758058*/
  return v1; /*0x758060*/
}
