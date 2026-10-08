NiTimeController *__thiscall sub_757F70(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757f76*/
  v4 = v3; /*0x757f7b*/
  if ( v3 ) /*0x757f82*/
  {
    sub_75F510(v3); /*0x757f86*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterLifeSpanCtlr::`vftable'; /*0x757f93*/
    sub_75F5A0(this, (int)v4, a2); /*0x757f99*/
    return v4; /*0x757f9f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757faf*/
    return 0; /*0x757fb5*/
  }
}
