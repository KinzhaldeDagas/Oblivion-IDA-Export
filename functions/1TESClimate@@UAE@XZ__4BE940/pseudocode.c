void __thiscall TESClimate::~TESClimate(TESClimate *this)
{
  *(_DWORD *)this = &TESClimate::`vftable';
  j_TESForm_ClearComponentReferences((TESForm *)this);
  _LN21((char *)this + 0x38, 0xCu, 2, (void (__thiscall *)(void *))TESTexture_destr);
  sub_4EED70((char *)this + 0x30);
  TESModel::~TESModel((TESModel *)this + 1);
  TESForm_destr((TESForm *)this);
}
