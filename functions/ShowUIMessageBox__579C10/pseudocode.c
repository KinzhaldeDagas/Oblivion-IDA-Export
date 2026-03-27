char __usercall ShowUIMessageBox@<al>(
        char *a1@<ecx>,
        char a2@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        const char *a6,
        int a7,
        char a8,
        const char *a9,
        char a10)
{
  InterfaceManager *Singleton; // eax
  char *v12; // [esp+0h] [ebp-4h] BYREF

  v12 = a1;
  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  v12 = &a10;
  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return sub_5BC8B0(a2, st5_0, st6_0, st7_0, a6, a7, a8, a9, &v12);
  }
  else
  {
    return sub_5BCC00(a2, st5_0, st6_0, st7_0, a6, a7, a8, a9, &v12);
  }
}
