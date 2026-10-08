NiTimeController *__thiscall sub_757A90(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757a96*/
  v4 = v3; /*0x757a9b*/
  if ( v3 ) /*0x757aa2*/
  {
    sub_75F510(v3); /*0x757aa6*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldMagnitudeCtlr::`vftable'; /*0x757ab3*/
    sub_75F5A0(this, (int)v4, a2); /*0x757ab9*/
    return v4; /*0x757abf*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757acf*/
    return 0; /*0x757ad5*/
  }
}
