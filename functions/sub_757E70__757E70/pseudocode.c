NiTimeController *__thiscall sub_757E70(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757e76*/
  v4 = v3; /*0x757e7b*/
  if ( v3 ) /*0x757e82*/
  {
    sub_75F510(v3); /*0x757e86*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterPlanarAngleCtlr::`vftable'; /*0x757e93*/
    sub_75F5A0(this, (int)v4, a2); /*0x757e99*/
    return v4; /*0x757e9f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757eaf*/
    return 0; /*0x757eb5*/
  }
}
