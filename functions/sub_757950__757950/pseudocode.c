NiTimeController *__thiscall sub_757950(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757956*/
  v4 = v3; /*0x75795b*/
  if ( v3 ) /*0x757962*/
  {
    sub_75F510(v3); /*0x757966*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysFieldMaxDistanceCtlr::`vftable'; /*0x757973*/
    sub_75F5A0(this, (int)v4, a2); /*0x757979*/
    return v4; /*0x75797f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x75798f*/
    return 0; /*0x757995*/
  }
}
