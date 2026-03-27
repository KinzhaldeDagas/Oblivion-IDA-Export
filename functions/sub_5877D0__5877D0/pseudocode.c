int sub_5877D0()
{
  int v3; // ebx
  _DWORD *i; // edi
  _DWORD *v5; // ecx
  int ParentMenu; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  float Float; // [esp+8h] [ebp-4h]

  Float = flt_A6A044;
  v3 = 0;
  for ( i = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD); i; i = (_DWORD *)*i )
  {
    InterfaceManager_GetSingleton(0, 1);
    v5 = (_DWORD *)i[2];
    if ( v5 )
    {
      ParentMenu = Tile_GetParentMenu(v5);
      v7 = ParentMenu;
      if ( ParentMenu )
      {
        v8 = *(_DWORD **)(ParentMenu + 4);
        if ( v8 )
        {
          if ( Tile_GetFloat(v8, 0xFA1) != fConstant_1
            && Float < Tile_GetFloat((_DWORD *)*(_DWORD *)(v7 + 4), 0xFAB)
            && Tile_GetFloat((_DWORD *)*(_DWORD *)(v7 + 4), 0xFA5) != flt_A6A040
            && *(_DWORD *)(v7 + 0x24) != 2 )
          {
            Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(v7 + 4), 0xFAB);
            v3 = v7;
          }
        }
      }
    }
    InterfaceManager_GetSingleton(0, 1);
  }
  return v3;
}
