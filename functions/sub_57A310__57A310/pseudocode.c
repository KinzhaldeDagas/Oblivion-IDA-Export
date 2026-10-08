bool sub_57A310()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57a314*/
    return 0; /*0x57a314*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a32c*/
    return 0; /*0x57a32c*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a33e*/
    return 0; /*0x57a33e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a348*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57a36a*/
    return 0; /*0x57a39f*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57a371*/
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1; /*0x57a39b*/
}
