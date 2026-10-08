NiTimeController *__thiscall sub_756B10(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x756b16*/
  v4 = v3; /*0x756b1b*/
  if ( v3 ) /*0x756b22*/
  {
    sub_75F510(v3); /*0x756b26*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysInitialRotAngleVarCtlr::`vftable'; /*0x756b33*/
    sub_75F5A0(this, (int)v4, a2); /*0x756b39*/
    return v4; /*0x756b3f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x756b4f*/
    return 0; /*0x756b55*/
  }
}
