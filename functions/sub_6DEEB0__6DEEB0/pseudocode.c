NiTimeController *__thiscall sub_6DEEB0(_WORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6deed7*/
  v4 = (int)v3; /*0x6deedc*/
  if ( v3 ) /*0x6deeef*/
  {
    sub_6ECC00(v3); /*0x6deef3*/
    *(_DWORD *)v4 = &NiMaterialColorController::`vftable'; /*0x6deef8*/
    *(_WORD *)(v4 + 0x40) = 0; /*0x6deefe*/
  }
  else
  {
    v4 = 0; /*0x6def06*/
  }
  j_NiSingleInterpController_CopyMembers(this, v4, a2); /*0x6def18*/
  *(_WORD *)(v4 + 0x40) = *(this + 0x20); /*0x6def21*/
  return (NiTimeController *)v4; /*0x6def27*/
}
