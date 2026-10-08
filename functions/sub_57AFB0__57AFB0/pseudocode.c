void sub_57AFB0()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57afb4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57afd0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57afe2*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57afec*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57b00e*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x57b023*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b02d*/
          v4 = OblivionDynamicCast( /*0x57b033*/
                 ParentMenu,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                 &HUDSubtitleMenu `RTTI Type Descriptor',
                 0);
          if ( v4 ) /*0x57b03d*/
            sub_5A9280((int)v4); /*0x57b041*/
        }
      }
    }
  }
}
