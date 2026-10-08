NiTimeController *__thiscall sub_6D2350(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d2377*/
  v4 = v3; /*0x6d237c*/
  if ( v3 ) /*0x6d238f*/
  {
    sub_6EC180(v3); /*0x6d2393*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiAlphaController::`vftable'; /*0x6d2398*/
  }
  else
  {
    v4 = 0; /*0x6d23a0*/
  }
  j_NiSingleInterpController_CopyMembers(this, (int)v4, a2); /*0x6d23b2*/
  return v4; /*0x6d23b9*/
}
