NiTimeController *__thiscall sub_757B80(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757b86*/
  v4 = v3; /*0x757b8b*/
  if ( v3 ) /*0x757b92*/
  {
    sub_75F510(v3); /*0x757b96*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldAttenuationCtlr::`vftable'; /*0x757ba3*/
    sub_75F5A0(this, (int)v4, a2); /*0x757ba9*/
    return v4; /*0x757baf*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757bbf*/
    return 0; /*0x757bc5*/
  }
}
