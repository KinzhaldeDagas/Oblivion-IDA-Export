void __usercall sub_57CC00(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v9; // esi
  double v10; // st7

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57cc04*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57cc20*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57cc36*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57cc40*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57cc62*/
        {
          v9 = InterfaceManager_GetSingleton(0, 1); /*0x57cc72*/
          sub_57C420(a2, a3, a1, a4, 0, 1); /*0x57cc74*/
          sub_57C5F0(a2, a3, a1, a4, 0, 1); /*0x57cc7d*/
          sub_57C7C0(a3, a2, a1, a4, 0, 1); /*0x57cc86*/
          sub_57A480(a2, a3, a1, a4, 0, 1); /*0x57cc8f*/
          sub_57ECB0(v9, a2, a3); /*0x57cc99*/
          sub_57AA90(a2, a3); /*0x57cc9e*/
          v10 = sub_57B600(a1, a2, a3, a4, a5, a6, a7, a8); /*0x57cca3*/
          HideEquipment((TESObjectREFR *)reference, a2, a3, v10, 0, 1); /*0x57ccb2*/
        }
      }
    }
  }
}
