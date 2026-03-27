_DWORD *__thiscall SettingCollectionMap_constr(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // edi

  *(this + 0x42) = 0;
  *((_BYTE *)this + 4) = 0;
  v3 = this + 0x43;
  *this = &SettingCollectionMap<Setting>::`vftable';
  NiTMap<char const *,Setting *>::NiTMap<char const *,Setting *>((NiTMap<char const *,Setting *> *)(this + 0x43), a2);
  *((_BYTE *)v3 + 0x10) = 0;
  *v3 = &BSTCaseInsensitiveStringMap<Setting *>::`vftable';
  return this;
}
