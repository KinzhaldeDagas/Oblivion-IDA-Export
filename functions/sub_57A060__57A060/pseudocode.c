double __usercall sub_57A060@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v7; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
          if ( OpenMenuTile )
          {
            ParentMenu = Tile_GetParentMenu(OpenMenuTile);
            Tile_GetFloat(*(_DWORD **)(ParentMenu + 0x28), 0xFAE);
            v7 = Double_To_SInt32(result);
            switch ( v7 )
            {
              case 3:
              case 4:
              case 5:
                sub_5BACB0(a1, a2, 0);
                break;
              case 2:
                sub_5B91E0(a1, a2);
                break;
              case 1:
                sub_5BA4D0(a1, a2, result, 1);
                break;
            }
          }
        }
      }
    }
  }
  return result;
}
