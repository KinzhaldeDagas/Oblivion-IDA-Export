NiTimeController *__thiscall sub_756910(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756916*/
  v4 = v3; /*0x75691b*/
  if ( v3 ) /*0x756922*/
  {
    sub_75F510(v3); /*0x756926*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotSpeedVarCtlr::`vftable'; /*0x756933*/
    sub_75F5A0(this, (int)v4, a2); /*0x756939*/
    return v4; /*0x75693f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75694f*/
    return 0; /*0x756955*/
  }
}
