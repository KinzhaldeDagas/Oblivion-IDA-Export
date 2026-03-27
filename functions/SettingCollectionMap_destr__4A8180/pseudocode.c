void __thiscall SettingCollectionMap_destr(_DWORD *this)
{
  _DWORD *v2; // edi

  *this = &SettingCollectionMap<Setting>::`vftable';
  v2 = this + 0x43;
  NiTMap_Clear(this + 0x43);
  *v2 = &BSTCaseInsensitiveStringMap<Setting *>::`vftable';
  NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(v2);
  *this = &SettingCollection<Setting>::`vftable';
}
