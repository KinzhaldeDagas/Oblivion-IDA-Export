TESObjectCLOT *__thiscall TESObjectCLOT::TESObjectCLOT(TESObjectCLOT *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b617b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b6182*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b618d*/
  *((_WORD *)this + 0x16) = 0; /*0x4b6190*/
  *((_WORD *)this + 0x17) = 0; /*0x4b6194*/
  TESScriptableForm_constr((_DWORD *)this + 0xC); /*0x4b61a2*/
  TESEnchantableForm_constr((_DWORD *)this + 0xF); /*0x4b61ac*/
  TESValueForm_constr((_DWORD *)this + 0x13); /*0x4b61b6*/
  TESWeightForm_constr((float *)this + 0x15); /*0x4b61c3*/
  TESBipedModelForm_constr((char *)this + 0x5C); /*0x4b61d0*/
  *(_DWORD *)this = &TESObjectCLOT::`vftable'{for `TESObjectCLOT'}; /*0x4b61dc*/
  *((_DWORD *)this + 9) = &TESObjectCLOT::`vftable'{for `TESFullName'}; /*0x4b61e2*/
  *((_DWORD *)this + 0xC) = &TESObjectCLOT::`vftable'{for `TESScriptableForm'}; /*0x4b61e9*/
  *((_DWORD *)this + 0xF) = &TESObjectCLOT::`vftable'{for `TESEnchantableForm'}; /*0x4b61ef*/
  *((_DWORD *)this + 0x13) = &TESObjectCLOT::`vftable'{for `TESValueForm'}; /*0x4b61f6*/
  *((_DWORD *)this + 0x15) = &TESObjectCLOT::`vftable'{for `TESWeightForm'}; /*0x4b61fc*/
  *((_DWORD *)this + 0x17) = &TESObjectCLOT::`vftable'{for `TESBipedModelForm'}; /*0x4b6203*/
  *((_BYTE *)this + 4) = 0x16; /*0x4b620a*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b620e*/
  *((_DWORD *)this + 0x12) = 3; /*0x4b6213*/
  return this; /*0x4b621c*/
}
