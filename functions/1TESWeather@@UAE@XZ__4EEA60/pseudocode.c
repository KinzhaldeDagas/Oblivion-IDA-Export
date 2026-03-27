void __thiscall TESWeather::~TESWeather(TESWeather *this)
{
  *(_DWORD *)this = &TESWeather::`vftable';
  sub_4EE770((unsigned int *)this + 0x42);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESModel::~TESModel((TESModel *)this + 2);
  _LN21((char *)this + 0x18, 0xCu, 2, (void (__thiscall *)(void *))TESTexture_destr);
  TESForm_destr((TESForm *)this);
}
