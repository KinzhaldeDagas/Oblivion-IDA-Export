NiTimeController *__thiscall sub_6E0870(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6e0897*/
  v4 = v3; /*0x6e089c*/
  if ( v3 ) /*0x6e08af*/
  {
    sub_6EC180(v3); /*0x6e08b3*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiLightDimmerController::`vftable'; /*0x6e08b8*/
  }
  else
  {
    v4 = 0; /*0x6e08c0*/
  }
  j_NiSingleInterpController_CopyMembers(this, (int)v4, a2); /*0x6e08d2*/
  return v4; /*0x6e08d9*/
}
