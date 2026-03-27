bool __cdecl sub_5790E0(int a1, int a2)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  _DWORD *v4; // esi

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(a1);
  v4 = OpenMenuTile;
  if ( !OpenMenuTile )
    return 0;
  if ( !a2 || (a2 & *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x24)) != 0 )
    return Tile_GetFloat(v4, 0xFA1) != fConstant_1;
  return 0;
}
