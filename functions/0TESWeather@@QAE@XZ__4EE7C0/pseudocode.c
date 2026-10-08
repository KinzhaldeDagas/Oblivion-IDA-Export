TESWeather *__thiscall TESWeather::TESWeather(TESWeather *this)
{
  TESForm_constr((TESForm *)this); /*0x4ee7e8*/
  *(_DWORD *)this = &TESWeather::`vftable'; /*0x4ee807*/
  ArrayConstructor( /*0x4ee80d*/
    (char *)this + 0x18,
    0xCu,
    2,
    (void (__thiscall *)(char *))TESTexture_constr,
    (void (__thiscall *)(void *))TESTexture_destr);
  TESModel::TESModel((TESModel *)this + 2); /*0x4ee81a*/
  *((_DWORD *)this + 0x42) = 0; /*0x4ee829*/
  *((_DWORD *)this + 0x43) = 0; /*0x4ee833*/
  *((_BYTE *)this + 4) = 0x2D; /*0x4ee843*/
  _memset((int)this + 0x68, 0, 0xA0u); /*0x4ee847*/
  *((_DWORD *)this + 0x12) = 0; /*0x4ee84e*/
  *((_DWORD *)this + 0x13) = 0; /*0x4ee851*/
  *((_DWORD *)this + 0x14) = 0; /*0x4ee854*/
  *((_WORD *)this + 0x2A) = 0; /*0x4ee857*/
  *((_BYTE *)this + 0x56) = 0; /*0x4ee85b*/
  *((_DWORD *)this + 0x16) = 0; /*0x4ee85e*/
  *((_DWORD *)this + 0x17) = 0; /*0x4ee863*/
  *((_DWORD *)this + 0x18) = 0; /*0x4ee86d*/
  *((_DWORD *)this + 0x19) = 0; /*0x4ee871*/
  _memset((int)this + 0x110, 0, 0x38u); /*0x4ee874*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4ee87e*/
  return this; /*0x4ee885*/
}
