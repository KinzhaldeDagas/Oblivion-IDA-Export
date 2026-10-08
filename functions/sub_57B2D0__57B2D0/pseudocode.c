void __cdecl sub_57B2D0(char *a1)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD **v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b2d4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b2f0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b302*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b30c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b32e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x57b343*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b34d*/
          v4 = (_DWORD **)OblivionDynamicCast( /*0x57b353*/
                            ParentMenu,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                            &HUDMainMenu `RTTI Type Descriptor',
                            0);
          if ( v4 ) /*0x57b35d*/
            sub_5A62B0(v4, a1); /*0x57b366*/
        }
      }
    }
  }
}
