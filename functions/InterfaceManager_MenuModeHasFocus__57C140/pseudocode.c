bool __cdecl InterfaceManager_MenuModeHasFocus(int a1)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v2; // eax
  signed int TopVisibleMenuID; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57c144*/
    return 0; /*0x57c144*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57c160*/
    return 0; /*0x57c160*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57c176*/
    return 0; /*0x57c176*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c180*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57c1a2*/
    return 0; /*0x57c1f6*/
  v2 = InterfaceManager_GetSingleton(0, 1); /*0x57c1a8*/
  TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(v2); /*0x57c1b2*/
  if ( TopVisibleMenuID == 1 && (a1 == 0x3EB || a1 == 0x3EA || a1 == 0x3FE || a1 == 0x3FF) ) /*0x57c1de*/
    return InterfaceManager_IsMenuVisibleByID(a1, 0); /*0x57c1e3*/
  else
    return TopVisibleMenuID == a1; /*0x57c1f3*/
}
