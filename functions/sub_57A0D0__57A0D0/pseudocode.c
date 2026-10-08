double __usercall sub_57A0D0@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int v5; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a0d4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a0f0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a102*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a10c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57a12e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57a135*/
          if ( OpenMenuTile ) /*0x57a13f*/
          {
            if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x57a143*/
            {
              v5 = TravelPath_DebugRouteToPoint(a1); /*0x57a14c*/
              if ( v5 ) /*0x57a153*/
              {
                unk_B3B0A2 = 1; /*0x57a159*/
                sub_58FBA0(v5, a1, a2, result, 0); /*0x57a160*/
                unk_B3B0A2 = 0; /*0x57a165*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x57a16e*/
}
