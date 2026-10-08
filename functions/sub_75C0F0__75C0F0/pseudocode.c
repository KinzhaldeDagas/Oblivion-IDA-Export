NiTimeController *sub_75C0F0()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75c0f3*/
  v1 = v0; /*0x75c0f8*/
  if ( !v0 ) /*0x75c0ff*/
    return 0; /*0x75c112*/
  sub_75F510(v0); /*0x75c103*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldSpreadCtlr::`vftable'; /*0x75c108*/
  return v1; /*0x75c110*/
}
