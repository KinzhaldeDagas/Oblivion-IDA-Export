double __usercall CloseAllMenus@<st0>(double a1@<st1>, char a2@<bpl>, double a3@<st2>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  int *v5; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          v5 = (int *)InterfaceManager_GetSingleton(0, 1);
          sub_57CEE0(v5, a1, result, a2, a3);
        }
      }
    }
  }
  return result;
}
