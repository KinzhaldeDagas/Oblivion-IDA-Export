void __cdecl sub_57AF10()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v3; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v3 = (float *)OblivionDynamicCast(
                          ParentMenu,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                          &HUDSubtitleMenu `RTTI Type Descriptor',
                          0);
          if ( v3 )
            sub_5A8F30(v3);
        }
      }
    }
  }
}
