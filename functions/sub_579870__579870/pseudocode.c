void __usercall sub_579870(double a1@<st2>, double a2@<st1>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          if ( InterfaceManager_IsMenuMode() )
          {
            v5 = InterfaceManager_GetSingleton(0, 1);
            sub_57ECB0(v5, a1, a2);
          }
        }
      }
    }
  }
}
