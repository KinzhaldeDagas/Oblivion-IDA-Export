NiTimeController *__thiscall sub_7582B0(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x7582b6*/
  v4 = v3; /*0x7582bb*/
  if ( v3 ) /*0x7582c2*/
  {
    sub_75F510(v3); /*0x7582c6*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterDeclinationCtlr::`vftable'; /*0x7582d3*/
    sub_75F5A0(this, (int)v4, a2); /*0x7582d9*/
    return v4; /*0x7582df*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x7582ef*/
    return 0; /*0x7582f5*/
  }
}
