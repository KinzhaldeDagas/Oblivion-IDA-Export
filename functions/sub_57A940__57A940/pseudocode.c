unsigned int *__usercall sub_57A940@<eax>(int a1@<ebp>, double a2@<st2>, double a3@<st1>, void *a4)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2) )
  {
    return sub_5DD4B0(a1, a2, a3, a4);
  }
  else
  {
    return 0;
  }
}
