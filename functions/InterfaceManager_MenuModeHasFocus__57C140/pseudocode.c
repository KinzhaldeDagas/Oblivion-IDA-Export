bool __cdecl InterfaceManager_MenuModeHasFocus(int a1)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v6; // eax
  signed int TopVisibleMenuID; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  v6 = InterfaceManager_GetSingleton(0, 1);
  TopVisibleMenuID = InterfaceManager::GetTopVisibleMenuID(v6);
  if ( TopVisibleMenuID == 1 && (a1 == 0x3EB || a1 == 0x3EA || a1 == 0x3FE || a1 == 0x3FF) )
    return sub_5790E0(a1, 0);
  else
    return TopVisibleMenuID == a1;
}
