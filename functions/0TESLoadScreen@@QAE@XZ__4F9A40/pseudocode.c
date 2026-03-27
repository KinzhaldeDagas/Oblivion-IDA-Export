TESLoadScreen *__thiscall TESLoadScreen::TESLoadScreen(TESLoadScreen *this)
{
  TESForm_constr((TESForm *)this);
  TESTexture_constr((TESTexture *)this + 2);
  TESDescription_constr((_DWORD *)this + 9);
  *(_DWORD *)this = &TESLoadScreen::`vftable'{for `TESLoadScreen'};
  *((_DWORD *)this + 6) = &TESLoadScreen::`vftable'{for `TESTexture'};
  *((_DWORD *)this + 9) = &TESLoadScreen::`vftable'{for `TESDescription'};
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_WORD *)this + 0x1C) = 0;
  *((_WORD *)this + 0x1D) = 0;
  *((_BYTE *)this + 4) = 0x3F;
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
