void __thiscall TESLoadScreen::~TESLoadScreen(TESLoadScreen *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)((char *)this + 0x18); /*0x4f9d1b*/
  *(_DWORD *)this = &TESLoadScreen::`vftable'{for `TESLoadScreen'}; /*0x4f9d1e*/
  *((_DWORD *)this + 6) = &TESLoadScreen::`vftable'{for `TESTexture'}; /*0x4f9d24*/
  *((_DWORD *)this + 9) = &TESLoadScreen::`vftable'{for `TESDescription'}; /*0x4f9d2a*/
  sub_4F99C0(this); /*0x4f9d39*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4f9d40*/
  FormHeapFree(*((_DWORD *)this + 0xD)); /*0x4f9d49*/
  *((_DWORD *)this + 0xD) = 0; /*0x4f9d55*/
  *((_WORD *)this + 0x1D) = 0; /*0x4f9d58*/
  *((_WORD *)this + 0x1C) = 0; /*0x4f9d5c*/
  TESTexture_destr(v2); /*0x4f9d64*/
  TESForm_destr((TESForm *)this); /*0x4f9d73*/
}
