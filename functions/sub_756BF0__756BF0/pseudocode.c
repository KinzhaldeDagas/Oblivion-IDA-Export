NiTimeController *__thiscall sub_756BF0(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756bf6*/
  v4 = v3; /*0x756bfb*/
  if ( v3 ) /*0x756c02*/
  {
    sub_75F510(v3); /*0x756c06*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotAngleCtlr::`vftable'; /*0x756c13*/
    sub_75F5A0(this, (int)v4, a2); /*0x756c19*/
    return v4; /*0x756c1f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x756c2f*/
    return 0; /*0x756c35*/
  }
}
