void (__thiscall ***__usercall sub_57A8D0@<eax>(
        char a1@<dil>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a5,
        char a6,
        char a7,
        char a8))(void *, signed int)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return sub_599EE0(a1, st5_0, st7_0, st6_0, a5, a6, a7, a8);
  }
  else
  {
    return 0;
  }
}
