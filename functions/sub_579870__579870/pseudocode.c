void __usercall sub_579870(double a1@<st1>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  InterfaceManager *v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579874*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57988c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57989e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5798a8*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x5798ba*/
        if ( Float == fConstant_2 ) /*0x5798ca*/
        {
          if ( InterfaceManager_IsMenuMode() ) /*0x5798cc*/
          {
            v4 = InterfaceManager_GetSingleton(0, 1); /*0x5798d9*/
            sub_57ECB0(v4, Float, a1); /*0x5798e3*/
          }
        }
      }
    }
  }
}
