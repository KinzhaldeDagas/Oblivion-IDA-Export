void __thiscall SettingCollectionMap_destr(_DWORD *this)
{
  _DWORD *v2; // edi

  *this = &SettingCollectionMap<Setting>::`vftable'; /*0x4a81a9*/
  v2 = this + 0x43; /*0x4a81af*/
  NiTMap_Clear(this + 0x43); /*0x4a81bf*/
  *v2 = &BSTCaseInsensitiveStringMap<Setting *>::`vftable'; /*0x4a81cb*/
  NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(v2); /*0x4a81d1*/
  *this = &SettingCollection<Setting>::`vftable'; /*0x4a81d6*/
}
