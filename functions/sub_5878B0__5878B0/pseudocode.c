bool __stdcall sub_5878B0(int a1)
{
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  _DWORD *ParentMenu; // eax
  _DWORD *v8; // edi

  v5 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    InterfaceManager_GetSingleton(0, 1);
    v6 = (_DWORD *)v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6 )
    {
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v6);
      v8 = ParentMenu;
      if ( ParentMenu )
      {
        if ( ParentMenu[1] && (*(int (__thiscall **)(_DWORD *))(*ParentMenu + 0x34))(ParentMenu) == a1 )
          break;
      }
    }
    if ( !v5 )
      return 0;
  }
  return Tile_GetFloat((_DWORD *)v8[1], 0xFA1) != fConstant_1 && v8[9] != 2;
}
