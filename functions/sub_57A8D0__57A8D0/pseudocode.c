void (__thiscall ***__usercall sub_57A8D0@<eax>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        char a5,
        char a6,
        char a7))(void *, signed int)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57a92a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return ContainerMenu_Create(st5_0, st7_0, st6_0, a4, a5, a6, a7); /*0x57a92c*/
  }
  else
  {
    return 0; /*0x57a931*/
  }
}
