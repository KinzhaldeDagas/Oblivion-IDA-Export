NiTimeController *__thiscall sub_756A10(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756a16*/
  v4 = v3; /*0x756a1b*/
  if ( v3 ) /*0x756a22*/
  {
    sub_75F510(v3); /*0x756a26*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotSpeedCtlr::`vftable'; /*0x756a33*/
    sub_75F5A0(this, (int)v4, a2); /*0x756a39*/
    return v4; /*0x756a3f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x756a4f*/
    return 0; /*0x756a55*/
  }
}
