TESEyes *__thiscall TESEyes::TESEyes(TESEyes *this)
{
  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x11) = 0;
  TESTexture_constr((TESTexture *)this + 3);
  *(_DWORD *)this = &TESEyes::`vftable'{for `TESEyes'};
  *((_DWORD *)this + 6) = &TESEyes::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESEyes::`vftable'{for `TESTexture'};
  *((_BYTE *)this + 4) = 8;
  *((_BYTE *)this + 0x30) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
