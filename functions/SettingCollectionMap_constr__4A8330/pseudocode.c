_DWORD *__thiscall SettingCollectionMap_constr(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // edi

  *(this + 0x42) = 0; /*0x4a835c*/
  *((_BYTE *)this + 4) = 0; /*0x4a8362*/
  v3 = this + 0x43; /*0x4a8369*/
  *this = &SettingCollectionMap<Setting>::`vftable'; /*0x4a8376*/
  NiTMap<char const *,Setting *>::NiTMap<char const *,Setting *>((NiTMap<char const *,Setting *> *)(this + 0x43), a2); /*0x4a837c*/
  *((_BYTE *)v3 + 0x10) = 0; /*0x4a8381*/
  *v3 = &BSTCaseInsensitiveStringMap<Setting *>::`vftable'; /*0x4a8384*/
  return this; /*0x4a838c*/
}
