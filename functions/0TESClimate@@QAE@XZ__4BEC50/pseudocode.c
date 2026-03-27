TESClimate *__thiscall TESClimate::TESClimate(TESClimate *this)
{
  TESForm_constr((TESForm *)this);
  *(_DWORD *)this = &TESClimate::`vftable';
  TESModel::TESModel((TESModel *)this + 1);
  sub_4EED50((_DWORD *)this + 0xC);
  ArrayConstructor((char *)this + 0x38, 0xCu, 2, (int)TESTexture_constr, (void (__thiscall *)(void *))TESTexture_destr);
  *((_BYTE *)this + 4) = 0x2E;
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *((_BYTE *)this + 0x55) = *((_BYTE *)this + 0x55) & 0xC0 | 3;
  return this;
}
