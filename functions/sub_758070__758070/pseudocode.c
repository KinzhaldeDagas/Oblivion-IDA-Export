NiTimeController *__thiscall sub_758070(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x758076*/
  v4 = v3; /*0x75807b*/
  if ( v3 ) /*0x758082*/
  {
    sub_75F510(v3); /*0x758086*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterInitialRadiusCtlr::`vftable'; /*0x758093*/
    sub_75F5A0(this, (int)v4, a2); /*0x758099*/
    return v4; /*0x75809f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x7580af*/
    return 0; /*0x7580b5*/
  }
}
