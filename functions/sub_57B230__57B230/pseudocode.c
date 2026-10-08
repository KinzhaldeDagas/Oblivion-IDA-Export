void sub_57B230()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v3; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b234*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b250*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b262*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b26c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b28e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x57b2a3*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b2ad*/
          v3 = OblivionDynamicCast( /*0x57b2b3*/
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &HUDMainMenu `RTTI Type Descriptor',
                 0);
          if ( v3 ) /*0x57b2bd*/
            sub_5A6220(v3, 1); /*0x57b2c3*/
        }
      }
    }
  }
}
