UInt32 InterfaceManager_GetTargetREFR_()
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57961a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return InterfaceManager_GetSingleton(0, 1)->unk0C0[3]; /*0x579625*/
  }
  else
  {
    return 0; /*0x57962f*/
  }
}
