NiTimeController *__thiscall sub_758160(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x758166*/
  v4 = v3; /*0x75816b*/
  if ( v3 ) /*0x758172*/
  {
    sub_75F510(v3); /*0x758176*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterDeclinationVarCtlr::`vftable'; /*0x758183*/
    sub_75F5A0(this, (int)v4, a2); /*0x758189*/
    return v4; /*0x75818f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75819f*/
    return 0; /*0x7581a5*/
  }
}
