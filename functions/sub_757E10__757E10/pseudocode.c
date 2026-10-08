NiTimeController *sub_757E10()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757e13*/
  v1 = v0; /*0x757e18*/
  if ( !v0 ) /*0x757e1f*/
    return 0; /*0x757e32*/
  sub_75F510(v0); /*0x757e23*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterPlanarAngleCtlr::`vftable'; /*0x757e28*/
  return v1; /*0x757e30*/
}
