double __usercall sub_57A0D0@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int v6; // eax

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
            if ( Tile_GetParentMenu(OpenMenuTile) )
            {
              v6 = sub_5B91E0(a1, a2);
              if ( v6 )
              {
                byte_B3B0A2 = 1;
                sub_58FBA0(v6, a1, a2, result, 0);
                byte_B3B0A2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
