NiTimeController *sub_75D450()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75d453*/
  v1 = v0; /*0x75d458*/
  if ( !v0 ) /*0x75d45f*/
    return 0; /*0x75d472*/
  sub_75F510(v0); /*0x75d463*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldAirFrictionCtlr::`vftable'; /*0x75d468*/
  return v1; /*0x75d470*/
}
