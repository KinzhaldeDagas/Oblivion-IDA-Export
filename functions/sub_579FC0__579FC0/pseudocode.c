bool sub_579FC0()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x579fc4*/
    return 0; /*0x579fc4*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579fdc*/
    return 0; /*0x579fdc*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x579fee*/
    return 0; /*0x579fee*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579ff8*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57a01a*/
    return 0; /*0x57a04f*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57a021*/
  return OpenMenuTile && Tile_GetFloat(OpenMenuTile, 0xFA1) != fConstant_1; /*0x57a04b*/
}
