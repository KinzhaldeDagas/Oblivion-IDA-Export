int GetOpenedMenuCode()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x579064*/
    return 0; /*0x579064*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57907c*/
    return 0; /*0x57907c*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57908e*/
    return 0; /*0x57908e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579098*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x5790ba*/
    return 0; /*0x5790d2*/
  v1 = InterfaceManager_GetSingleton(0, 1); /*0x5790c2*/
  return sub_57CFA0(v1, 0); /*0x5790d1*/
}
