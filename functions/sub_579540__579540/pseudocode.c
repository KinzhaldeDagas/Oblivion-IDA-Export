// Interface/menu cursor state helper used by Player_OnInput jump/acrobatic branch. Player-only climb activation should avoid triggering while this UI mode is active.
UInt32 sub_579540()
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57959a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return InterfaceManager_GetSingleton(0, 1)->unk0C0[2]; /*0x5795a5*/
  }
  else
  {
    return 0; /*0x5795af*/
  }
}
