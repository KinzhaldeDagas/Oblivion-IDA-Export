void __usercall sub_57A3B0(double a1@<st2>, double st6_0@<st1>, char a3)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
          if ( OpenMenuTile )
          {
            if ( a3 || sub_5893B0(OpenMenuTile) )
              InventoryMenu_InitializeOrUpdate(a1, st6_0);
          }
        }
      }
    }
  }
}
