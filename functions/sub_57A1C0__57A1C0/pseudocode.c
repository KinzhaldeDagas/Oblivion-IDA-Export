bool sub_57A1C0()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57a1c4*/
    return 0; /*0x57a1c4*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a1dc*/
    return 0; /*0x57a1dc*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a1ee*/
    return 0; /*0x57a1ee*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a1f8*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57a21a*/
    return 0; /*0x57a24f*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x57a221*/
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1; /*0x57a24b*/
}
