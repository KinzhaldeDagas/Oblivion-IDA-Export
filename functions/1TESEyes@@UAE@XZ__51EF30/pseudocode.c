void __thiscall TESEyes::~TESEyes(TESEyes *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)((char *)this + 0x24); /*0x51ef5b*/
  *(_DWORD *)this = &TESEyes::`vftable'{for `TESEyes'}; /*0x51ef5e*/
  *((_DWORD *)this + 6) = &TESEyes::`vftable'{for `TESFullName'}; /*0x51ef64*/
  *((_DWORD *)this + 9) = &TESEyes::`vftable'{for `TESTexture'}; /*0x51ef6b*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x51ef79*/
  TESTexture_destr(v2); /*0x51ef85*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x51ef8e*/
  *((_DWORD *)this + 7) = 0; /*0x51ef9a*/
  *((_WORD *)this + 0x11) = 0; /*0x51ef9d*/
  *((_WORD *)this + 0x10) = 0; /*0x51efa1*/
  TESForm_destr((TESForm *)this); /*0x51efad*/
}
