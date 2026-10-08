NiTimeController *__thiscall sub_75C120(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75c126*/
  v4 = v3; /*0x75c12b*/
  if ( v3 ) /*0x75c132*/
  {
    sub_75F510(v3); /*0x75c136*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldSpreadCtlr::`vftable'; /*0x75c143*/
    sub_75F5A0(this, (int)v4, a2); /*0x75c149*/
    return v4; /*0x75c14f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75c15f*/
    return 0; /*0x75c165*/
  }
}
