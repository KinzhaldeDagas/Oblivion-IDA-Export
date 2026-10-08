TESAmmo *__thiscall TESAmmo::TESAmmo(TESAmmo *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4a945b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4a9462*/
  *((_DWORD *)this + 0xA) = 0; /*0x4a946d*/
  *((_WORD *)this + 0x16) = 0; /*0x4a9470*/
  *((_WORD *)this + 0x17) = 0; /*0x4a9474*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4a9482*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4a9491*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4a9496*/
  TESEnchantableForm_constr((_DWORD *)this + 0x15); /*0x4a94a6*/
  TESValueForm_constr((_DWORD *)this + 0x19); /*0x4a94ae*/
  TESWeightForm_constr((float *)this + 0x1B); /*0x4a94bb*/
  TESAttackDamageForm_constr((_WORD *)this + 0x3A); /*0x4a94c8*/
  *(_DWORD *)this = &TESAmmo::`vftable'{for `TESAmmo'}; /*0x4a94cf*/
  *((_DWORD *)this + 9) = &TESAmmo::`vftable'{for `TESFullName'}; /*0x4a94d5*/
  *((_DWORD *)this + 0xC) = &TESAmmo::`vftable'{for `TESModel'}; /*0x4a94dc*/
  *((_DWORD *)this + 0x12) = &TESAmmo::`vftable'{for `TESIcon'}; /*0x4a94e3*/
  *((_DWORD *)this + 0x15) = &TESAmmo::`vftable'{for `TESEnchantableForm'}; /*0x4a94e9*/
  *((_DWORD *)this + 0x19) = &TESAmmo::`vftable'{for `TESValueForm'}; /*0x4a94ef*/
  *((_DWORD *)this + 0x1B) = &TESAmmo::`vftable'{for `TESWeightForm'}; /*0x4a94f6*/
  *((_DWORD *)this + 0x1D) = &TESAmmo::`vftable'{for `TESAttackDamageForm'}; /*0x4a94fd*/
  *((_BYTE *)this + 4) = 0x22; /*0x4a9504*/
  *((_DWORD *)this + 0x1F) = 0; /*0x4a9508*/
  *((_DWORD *)this + 0x20) = 0; /*0x4a9512*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4a9518*/
  *((_DWORD *)this + 0x18) = 2; /*0x4a951d*/
  return this; /*0x4a9526*/
}
