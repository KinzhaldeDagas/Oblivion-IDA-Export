void __usercall sub_57A260(double a1@<st2>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st6

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a264*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a27c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a28e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a298*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57a2aa*/
        if ( Float == fConstant_2 ) /*0x57a2ba*/
          sub_5B2B70(a1, Float); /*0x57a2bc*/
      }
    }
  }
}
