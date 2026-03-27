UInt32 sub_579540()
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return InterfaceManager_GetSingleton(0, 1)->unk0C0[2];
  }
  else
  {
    return 0;
  }
}
