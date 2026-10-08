NiTimeController *sub_757D10()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757d13*/
  v1 = v0; /*0x757d18*/
  if ( !v0 ) /*0x757d1f*/
    return 0; /*0x757d32*/
  sub_75F510(v0); /*0x757d23*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterPlanarAngleVarCtlr::`vftable'; /*0x757d28*/
  return v1; /*0x757d30*/
}
