void sub_57A850()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a854*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a86c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a87e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a888*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57a8aa*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57a8b1*/
          if ( OpenMenuTile ) /*0x57a8bb*/
          {
            ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x57a8bf*/
            if ( ParentMenu ) /*0x57a8c6*/
              sub_5DCEF0(ParentMenu); /*0x57a8ca*/
          }
        }
      }
    }
  }
}
