TESLoadScreen *__thiscall TESLoadScreen::TESLoadScreen(TESLoadScreen *this)
{
  TESForm_constr((TESForm *)this); /*0x4f9a6b*/
  TESTexture_constr((TESTexture *)this + 2); /*0x4f9a7b*/
  TESDescription_constr((_DWORD *)this + 9); /*0x4f9a8a*/
  *(_DWORD *)this = &TESLoadScreen::`vftable'{for `TESLoadScreen'}; /*0x4f9a8f*/
  *((_DWORD *)this + 6) = &TESLoadScreen::`vftable'{for `TESTexture'}; /*0x4f9a95*/
  *((_DWORD *)this + 9) = &TESLoadScreen::`vftable'{for `TESDescription'}; /*0x4f9a9b*/
  *((_DWORD *)this + 0xB) = 0; /*0x4f9aa1*/
  *((_DWORD *)this + 0xC) = 0; /*0x4f9aa4*/
  *((_DWORD *)this + 0xD) = 0; /*0x4f9aa7*/
  *((_WORD *)this + 0x1C) = 0; /*0x4f9aaa*/
  *((_WORD *)this + 0x1D) = 0; /*0x4f9aae*/
  *((_BYTE *)this + 4) = 0x3F; /*0x4f9abb*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4f9abf*/
  return this; /*0x4f9ac6*/
}
