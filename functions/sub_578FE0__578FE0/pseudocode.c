signed int sub_578FE0()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x578fe4*/
    return 0; /*0x578fe4*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x578ffc*/
    return 0; /*0x578ffc*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57900e*/
    return 0; /*0x57900e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579018*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57903a*/
    return 0; /*0x57904f*/
  v1 = InterfaceManager_GetSingleton(0, 1); /*0x579040*/
  return InterfaceManager::GetTopVisibleMenuID(v1); /*0x579051*/
}
