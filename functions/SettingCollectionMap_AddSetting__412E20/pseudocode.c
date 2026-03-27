void __thiscall SettingCollectionMap_AddSetting(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi

  v2 = a2;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 )
    {
      v4 = this + 0x43;
      if ( NiTMap_GetAt(this + 0x43, v3, &a2) )
        PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", *(const char **)(v2 + 4));
      else
        sub_412D30(v4, *(_DWORD *)(v2 + 4), (TESForm *)v2);
    }
  }
}
