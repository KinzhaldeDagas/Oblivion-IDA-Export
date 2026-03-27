bool sub_579FC0()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1;
}
