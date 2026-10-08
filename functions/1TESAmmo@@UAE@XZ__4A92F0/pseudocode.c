void __thiscall TESAmmo::~TESAmmo(TESAmmo *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4a931d*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4a9320*/
  v4 = (TESTexture *)((char *)this + 0x64); /*0x4a9323*/
  *(_DWORD *)this = &TESAmmo::`vftable'{for `TESAmmo'}; /*0x4a9326*/
  *((_DWORD *)this + 9) = &TESAmmo::`vftable'{for `TESFullName'}; /*0x4a932c*/
  *((_DWORD *)this + 0xC) = &TESAmmo::`vftable'{for `TESModel'}; /*0x4a9333*/
  *((_DWORD *)this + 0x12) = &TESAmmo::`vftable'{for `TESIcon'}; /*0x4a9339*/
  *((_DWORD *)this + 0x15) = &TESAmmo::`vftable'{for `TESEnchantableForm'}; /*0x4a933f*/
  *((_DWORD *)this + 0x19) = &TESAmmo::`vftable'{for `TESValueForm'}; /*0x4a9346*/
  *((_DWORD *)this + 0x1B) = &TESAmmo::`vftable'{for `TESWeightForm'}; /*0x4a934d*/
  *((_DWORD *)this + 0x1D) = &TESAmmo::`vftable'{for `TESAttackDamageForm'}; /*0x4a9354*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4a9363*/
  TESAttackDamageForm_destr((_DWORD *)this + 0x1D); /*0x4a9370*/
  TESWeightForm_destr((_DWORD *)this + 0x1B); /*0x4a937d*/
  TESValueForm_destr(v4); /*0x4a9389*/
  TESTexture_destr(v3); /*0x4a9395*/
  TESModel::~TESModel(v2); /*0x4a93a1*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4a93aa*/
  *((_DWORD *)this + 0xA) = 0; /*0x4a93b6*/
  *((_WORD *)this + 0x17) = 0; /*0x4a93b9*/
  *((_WORD *)this + 0x16) = 0; /*0x4a93bd*/
  TESObject_destr((TESForm *)this); /*0x4a93c9*/
}
