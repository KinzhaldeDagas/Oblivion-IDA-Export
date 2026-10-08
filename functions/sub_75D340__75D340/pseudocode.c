NiTimeController *__thiscall sub_75D340(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x75d346*/
  v4 = v3; /*0x75d34b*/
  if ( v3 ) /*0x75d352*/
  {
    sub_75F510(v3); /*0x75d356*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysAirFieldInheritVelocityCtlr::`vftable'; /*0x75d363*/
    sub_75F5A0(this, (int)v4, a2); /*0x75d369*/
    return v4; /*0x75d36f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75d37f*/
    return 0; /*0x75d385*/
  }
}
