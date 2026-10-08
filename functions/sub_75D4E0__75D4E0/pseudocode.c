NiTimeController *__thiscall sub_75D4E0(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75d4e6*/
  v4 = v3; /*0x75d4eb*/
  if ( v3 ) /*0x75d4f2*/
  {
    sub_75F510(v3); /*0x75d4f6*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldAirFrictionCtlr::`vftable'; /*0x75d503*/
    sub_75F5A0(this, (int)v4, a2); /*0x75d509*/
    return v4; /*0x75d50f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75d51f*/
    return 0; /*0x75d525*/
  }
}
