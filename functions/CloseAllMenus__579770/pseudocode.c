double __usercall CloseAllMenus@<st0>(double a1@<st1>, char a2@<bpl>, double a3@<st2>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  int *v5; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579774*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57978c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57979e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5797a8*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x5797ca*/
        {
          v5 = (int *)InterfaceManager_GetSingleton(0, 1); /*0x5797d0*/
          sub_57CEE0(v5, a1, result, a2, a3); /*0x5797da*/
        }
      }
    }
  }
  return result; /*0x5797df*/
}
