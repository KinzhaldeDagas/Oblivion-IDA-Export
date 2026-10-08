void __cdecl sub_57AF10()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v3; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57af14*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57af30*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57af42*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57af4c*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57af6e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x57af83*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57af8d*/
          v3 = (float *)OblivionDynamicCast( /*0x57af93*/
                          ParentMenu,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                          &HUDSubtitleMenu `RTTI Type Descriptor',
                          0);
          if ( v3 ) /*0x57af9d*/
            sub_5A8F30(v3); /*0x57afa1*/
        }
      }
    }
  }
}
