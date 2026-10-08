TESObjectREFR *sub_579440()
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57949a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return InterfaceManager_GetSingleton(0, 1)->debugSelection; /*0x5794a5*/
  }
  else
  {
    return 0; /*0x5794af*/
  }
}
