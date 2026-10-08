void __thiscall SettingCollectionMap_AddSetting(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi

  v2 = a2; /*0x412e21*/
  if ( a2 ) /*0x412e27*/
  {
    v3 = *(_DWORD *)(a2 + 4); /*0x412e29*/
    if ( v3 ) /*0x412e2e*/
    {
      v4 = this + 0x43; /*0x412e31*/
      if ( NiTMap_GetAt(this + 0x43, v3, &a2) ) /*0x412e3f*/
        PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", *(const char **)(v2 + 4)); /*0x412e51*/
      else
        sub_412D30(v4, *(_DWORD *)(v2 + 4), (TESForm *)v2); /*0x412e65*/
    }
  }
}
