int GetOpenedMenuCode()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  v5 = InterfaceManager_GetSingleton(0, 1);
  return sub_57CFA0(v5, 0);
}
