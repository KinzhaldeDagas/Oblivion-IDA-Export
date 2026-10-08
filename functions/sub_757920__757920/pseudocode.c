NiTimeController *sub_757920()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757923*/
  v1 = v0; /*0x757928*/
  if ( !v0 ) /*0x75792f*/
    return 0; /*0x757942*/
  sub_75F510(v0); /*0x757933*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldMaxDistanceCtlr::`vftable'; /*0x757938*/
  return v1; /*0x757940*/
}
