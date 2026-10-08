void __usercall sub_57AA90(double a1@<st2>, double a2@<st1>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57aa94*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57aaac*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57aabe*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57aac8*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57aaea*/
          sub_5982A0(a1, a2); /*0x57aaec*/
      }
    }
  }
}
