void __thiscall TESWeather::~TESWeather(TESWeather *this)
{
  *(_DWORD *)this = &TESWeather::`vftable'; /*0x4eea88*/
  sub_4EE770((unsigned int *)this + 0x42); /*0x4eea9c*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4eeaa3*/
  TESModel::~TESModel((TESModel *)this + 2); /*0x4eeab0*/
  _LN21((char *)this + 0x18, 0xCu, 2, (void (__thiscall *)(void *))TESTexture_destr); /*0x4eeac7*/
  TESForm_destr((TESForm *)this); /*0x4eead6*/
}
