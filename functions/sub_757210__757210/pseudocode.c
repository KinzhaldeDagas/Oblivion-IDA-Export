NiTimeController *__thiscall sub_757210(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757216*/
  v4 = v3; /*0x75721b*/
  if ( v3 ) /*0x757222*/
  {
    sub_75F510(v3); /*0x757226*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysGravityStrengthCtlr::`vftable'; /*0x757233*/
    sub_75F5A0(this, (int)v4, a2); /*0x757239*/
    return v4; /*0x75723f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75724f*/
    return 0; /*0x757255*/
  }
}
