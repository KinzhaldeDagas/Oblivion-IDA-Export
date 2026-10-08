double __usercall sub_57A060@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v6; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a064*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a07c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a08e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a098*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57a0ba*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x5bb1b5*/
          if ( OpenMenuTile ) /*0x5bb1bf*/
          {
            ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5bb1c3*/
            Tile_GetFloat(*(_DWORD **)(ParentMenu + 0x28), 0xFAE); /*0x5bb1d0*/
            v6 = Double_To_SInt32(result); /*0x5bb1d5*/
            switch ( v6 ) /*0x5bb1e7*/
            {
              case 3: /*0x5bb1e7*/
              case 4: /*0x5bb1e7*/
              case 5: /*0x5bb1e7*/
                sub_5BACB0(a1, a2, result, 0); /*0x5bb204*/
                break;
              case 2: /*0x5bb1e7*/
                TravelPath_DebugRouteToPoint(a1); /*0x5bb1ee*/
                break;
              case 1: /*0x5bb1e7*/
                sub_5BA4D0(a1, a2, 1); /*0x5bb1f9*/
                break;
            }
          }
        }
      }
    }
  }
  return result; /*0x57a0c1*/
}
