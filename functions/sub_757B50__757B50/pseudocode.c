NiTimeController *sub_757B50()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757b53*/
  v1 = v0; /*0x757b58*/
  if ( !v0 ) /*0x757b5f*/
    return 0; /*0x757b72*/
  sub_75F510(v0); /*0x757b63*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldAttenuationCtlr::`vftable'; /*0x757b68*/
  return v1; /*0x757b70*/
}
