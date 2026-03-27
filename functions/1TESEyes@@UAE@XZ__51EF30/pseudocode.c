void __thiscall TESEyes::~TESEyes(TESEyes *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)((char *)this + 0x24);
  *(_DWORD *)this = &TESEyes::`vftable'{for `TESEyes'};
  *((_DWORD *)this + 6) = &TESEyes::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESEyes::`vftable'{for `TESTexture'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESTexture_destr(v2);
  FormHeapFree(*((_DWORD *)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  TESForm_destr((TESForm *)this);
}
