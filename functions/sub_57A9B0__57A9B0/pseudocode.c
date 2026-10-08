void __usercall sub_57A9B0(double a1@<st0>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a9b4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a9cc*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a9de*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a9e8*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57a9fa*/
        if ( Float == fConstant_2 ) /*0x57aa0a*/
          SkillsMenu_Create(Float, a1, 0); /*0x57aa10*/
      }
    }
  }
}
