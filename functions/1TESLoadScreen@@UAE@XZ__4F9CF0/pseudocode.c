void __thiscall TESLoadScreen::~TESLoadScreen(TESLoadScreen *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)((char *)this + 0x18);
  *(_DWORD *)this = &TESLoadScreen::`vftable'{for `TESLoadScreen'};
  *((_DWORD *)this + 6) = &TESLoadScreen::`vftable'{for `TESTexture'};
  *((_DWORD *)this + 9) = &TESLoadScreen::`vftable'{for `TESDescription'};
  sub_4F99C0(this);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  FormHeapFree(*((_DWORD *)this + 0xD));
  *((_DWORD *)this + 0xD) = 0;
  *((_WORD *)this + 0x1D) = 0;
  *((_WORD *)this + 0x1C) = 0;
  TESTexture_destr(v2);
  TESForm_destr((TESForm *)this);
}
