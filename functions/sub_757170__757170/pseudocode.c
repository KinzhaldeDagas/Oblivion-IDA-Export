NiTimeController *sub_757170()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757173*/
  v1 = v0; /*0x757178*/
  if ( !v0 ) /*0x75717f*/
    return 0; /*0x757192*/
  sub_75F510(v0); /*0x757183*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysGravityStrengthCtlr::`vftable'; /*0x757188*/
  return v1; /*0x757190*/
}
