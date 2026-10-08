NiTimeController *__thiscall sub_7567B0(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x7567b6*/
  v4 = v3; /*0x7567bb*/
  if ( v3 ) /*0x7567c2*/
  {
    sub_75F2C0(v3); /*0x7567c6*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierActiveCtlr::`vftable'; /*0x7567d3*/
    sub_75F5A0(this, (int)v4, a2); /*0x7567d9*/
    return v4; /*0x7567df*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x7567ef*/
    return 0; /*0x7567f5*/
  }
}
