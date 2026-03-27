bool sub_57BAC0()
{
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1;
}
