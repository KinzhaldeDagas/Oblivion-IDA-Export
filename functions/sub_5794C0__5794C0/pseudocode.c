void __cdecl sub_5794C0(UInt32 a1)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5794c4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x5794dc*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x5794ee*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5794f8*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57951a*/
          InterfaceManager_GetSingleton(0, 1)->unk0C0[1] = a1; /*0x57952c*/
      }
    }
  }
}
