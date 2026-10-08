TESEyes *__thiscall TESEyes::TESEyes(TESEyes *this)
{
  TESForm_constr((TESForm *)this); /*0x51effa*/
  *((_DWORD *)this + 6) = &TESFullName::`vftable'; /*0x51f001*/
  *((_DWORD *)this + 7) = 0; /*0x51f00c*/
  *((_WORD *)this + 0x10) = 0; /*0x51f00f*/
  *((_WORD *)this + 0x11) = 0; /*0x51f013*/
  TESTexture_constr((TESTexture *)this + 3); /*0x51f021*/
  *(_DWORD *)this = &TESEyes::`vftable'{for `TESEyes'}; /*0x51f02d*/
  *((_DWORD *)this + 6) = &TESEyes::`vftable'{for `TESFullName'}; /*0x51f033*/
  *((_DWORD *)this + 9) = &TESEyes::`vftable'{for `TESTexture'}; /*0x51f03a*/
  *((_BYTE *)this + 4) = 8; /*0x51f040*/
  *((_BYTE *)this + 0x30) = 0; /*0x51f044*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x51f047*/
  return this; /*0x51f04e*/
}
