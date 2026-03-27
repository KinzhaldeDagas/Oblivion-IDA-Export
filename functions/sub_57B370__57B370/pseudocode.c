char __usercall sub_57B370@<al>(
        char *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        const char *a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        int a9,
        char a10)
{
  InterfaceManager *Singleton; // eax
  char *v13; // [esp+0h] [ebp-4h] BYREF

  v13 = a1;
  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  v13 = &a10;
  return sub_5A3FF0(a2, a4, a3, a5, a6, a7, a8, a9, &v13);
}
