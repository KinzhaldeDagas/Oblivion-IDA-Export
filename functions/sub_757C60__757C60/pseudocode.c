NiTimeController *__thiscall sub_757C60(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x757c66*/
  v4 = v3; /*0x757c6b*/
  if ( v3 ) /*0x757c72*/
  {
    sub_75F510(v3); /*0x757c76*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiPSysEmitterSpeedCtlr::`vftable'; /*0x757c83*/
    sub_75F5A0(this, (int)v4, a2); /*0x757c89*/
    return v4; /*0x757c8f*/
  }
  else
  {
    sub_75F5A0(this, 0, a2); /*0x757c9f*/
    return 0; /*0x757ca5*/
  }
}
