bool sub_57A650()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57a654*/
    return 0; /*0x57a654*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a66c*/
    return 0; /*0x57a66c*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a67e*/
    return 0; /*0x57a67e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a688*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57a6aa*/
    return 0; /*0x57a6df*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57a6b1*/
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1; /*0x57a6db*/
}
