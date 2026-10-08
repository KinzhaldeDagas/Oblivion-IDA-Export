bool sub_57BAC0()
{
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57badc*/
    return 0; /*0x57bb15*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x57bae7*/
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1; /*0x57bb11*/
}
