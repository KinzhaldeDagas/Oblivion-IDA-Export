TESHair *__thiscall TESHair::TESHair(TESHair *this)
{
  TESForm_constr((TESForm *)this); /*0x52011b*/
  *((_DWORD *)this + 6) = &TESFullName::`vftable'; /*0x520122*/
  *((_DWORD *)this + 7) = 0; /*0x52012d*/
  *((_WORD *)this + 0x10) = 0; /*0x520130*/
  *((_WORD *)this + 0x11) = 0; /*0x520134*/
  TESModel::TESModel((TESModel *)((char *)this + 0x24)); /*0x520142*/
  TESTexture_constr((TESTexture *)this + 5); /*0x520151*/
  *(_DWORD *)this = &TESHair::`vftable'{for `TESHair'}; /*0x52015d*/
  *((_DWORD *)this + 6) = &TESHair::`vftable'{for `TESFullName'}; /*0x520163*/
  *((_DWORD *)this + 9) = &TESHair::`vftable'{for `TESModel'}; /*0x52016a*/
  *((_DWORD *)this + 0xF) = &TESHair::`vftable'{for `TESTexture'}; /*0x520170*/
  *((_BYTE *)this + 4) = 7; /*0x520177*/
  *((_BYTE *)this + 0x48) = 0; /*0x52017b*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x52017e*/
  return this; /*0x520185*/
}
