signed int sub_578FE0()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  v1 = InterfaceManager_GetSingleton(0, 1);
  return InterfaceManager::GetTopVisibleMenuID(v1);
}
