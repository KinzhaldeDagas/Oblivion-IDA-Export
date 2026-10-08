void __cdecl UI_RefreshStatsMenuActorValues()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  _DWORD **ParentMenu; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a7d4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a7ec*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a7fe*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a808*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57a82a*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57a831*/
          if ( OpenMenuTile ) /*0x57a83b*/
          {
            ParentMenu = (_DWORD **)Tile_GetParentMenu(OpenMenuTile); /*0x57a83f*/
            if ( ParentMenu ) /*0x57a846*/
              sub_5D9CB0(ParentMenu); /*0x57a84a*/
          }
        }
      }
    }
  }
}
