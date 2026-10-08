NiTimeController *__thiscall sub_757D50(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757d56*/
  v4 = v3; /*0x757d5b*/
  if ( v3 ) /*0x757d62*/
  {
    sub_75F510(v3); /*0x757d66*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterPlanarAngleVarCtlr::`vftable'; /*0x757d73*/
    sub_75F5A0(this, (int)v4, a2); /*0x757d79*/
    return v4; /*0x757d7f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757d8f*/
    return 0; /*0x757d95*/
  }
}
