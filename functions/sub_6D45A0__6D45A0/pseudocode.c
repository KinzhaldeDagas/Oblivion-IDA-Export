NiTimeController *__thiscall sub_6D45A0(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d45c7*/
  v4 = v3; /*0x6d45cc*/
  if ( v3 ) /*0x6d45df*/
  {
    sub_6EC630(v3); /*0x6d45e3*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiVisController::`vftable'; /*0x6d45e8*/
  }
  else
  {
    v4 = 0; /*0x6d45f0*/
  }
  j_NiSingleInterpController_CopyMembers(this, (int)v4, a2); /*0x6d4602*/
  return v4; /*0x6d4609*/
}
