TESObjectBOOK *__thiscall TESObjectBOOK::TESObjectBOOK(TESObjectBOOK *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b5a1b*/
  *((_DWORD *)this + 9) = &TESFullName::`vftable'; /*0x4b5a22*/
  *((_DWORD *)this + 0xA) = 0; /*0x4b5a2d*/
  *((_WORD *)this + 0x16) = 0; /*0x4b5a30*/
  *((_WORD *)this + 0x17) = 0; /*0x4b5a34*/
  TESModel::TESModel((TESModel *)this + 2); /*0x4b5a42*/
  TESTexture_constr((TESTexture *)this + 6); /*0x4b5a51*/
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable'; /*0x4b5a56*/
  TESScriptableForm_constr((_DWORD *)this + 0x15); /*0x4b5a66*/
  TESEnchantableForm_constr((_DWORD *)this + 0x18); /*0x4b5a6e*/
  TESValueForm_constr((_DWORD *)this + 0x1C); /*0x4b5a76*/
  TESWeightForm_constr((float *)this + 0x1E); /*0x4b5a83*/
  TESDescription_constr((_DWORD *)this + 0x20); /*0x4b5a93*/
  *((_DWORD *)this + 0x12) = &TESObjectBOOK::`vftable'{for `TESIcon'}; /*0x4b5a98*/
  *(_DWORD *)this = &TESObjectBOOK::`vftable'{for `TESObjectBOOK'}; /*0x4b5aa0*/
  *((_DWORD *)this + 9) = &TESObjectBOOK::`vftable'{for `TESFullName'}; /*0x4b5aa6*/
  *((_DWORD *)this + 0xC) = &TESObjectBOOK::`vftable'{for `TESModel'}; /*0x4b5aad*/
  *((_DWORD *)this + 0x15) = &TESObjectBOOK::`vftable'{for `TESScriptableForm'}; /*0x4b5ab3*/
  *((_DWORD *)this + 0x18) = &TESObjectBOOK::`vftable'{for `TESEnchantableForm'}; /*0x4b5aba*/
  *((_DWORD *)this + 0x1C) = &TESObjectBOOK::`vftable'{for `TESValueForm'}; /*0x4b5ac1*/
  *((_DWORD *)this + 0x1E) = &TESObjectBOOK::`vftable'{for `TESWeightForm'}; /*0x4b5ac8*/
  *((_DWORD *)this + 0x20) = &TESObjectBOOK::`vftable'{for `TESDescription'}; /*0x4b5acf*/
  *((_BYTE *)this + 4) = 0x15; /*0x4b5ad9*/
  *((_WORD *)this + 0x44) = 0; /*0x4b5add*/
  *((_BYTE *)this + 0x89) = 0xFF; /*0x4b5ae6*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b5aed*/
  *((_DWORD *)this + 0x1B) = 0; /*0x4b5af2*/
  return this; /*0x4b5af7*/
}
