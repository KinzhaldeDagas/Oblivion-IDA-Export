NiTimeController *__thiscall sub_6E0D90(_WORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6e0db7*/
  v4 = (int)v3; /*0x6e0dbc*/
  if ( v3 ) /*0x6e0dcf*/
  {
    sub_6ECC00(v3); /*0x6e0dd3*/
    *(_DWORD *)v4 = &NiLightColorController::`vftable'; /*0x6e0dd8*/
    *(_WORD *)(v4 + 0x40) = 0; /*0x6e0dde*/
  }
  else
  {
    v4 = 0; /*0x6e0de6*/
  }
  j_NiSingleInterpController_CopyMembers(this, v4, a2); /*0x6e0df8*/
  *(_WORD *)(v4 + 0x40) = *(this + 0x20); /*0x6e0e01*/
  return (NiTimeController *)v4; /*0x6e0e07*/
}
