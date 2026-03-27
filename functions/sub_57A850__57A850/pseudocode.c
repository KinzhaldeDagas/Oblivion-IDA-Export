void sub_57A850()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB);
          if ( OpenMenuTile )
          {
            ParentMenu = Tile_GetParentMenu(OpenMenuTile);
            if ( ParentMenu )
              sub_5DCEF0(ParentMenu);
          }
        }
      }
    }
  }
}
