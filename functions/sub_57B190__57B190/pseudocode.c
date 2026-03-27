void __cdecl sub_57B190(unsigned __int8 *a1)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD **v8; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v8 = (_DWORD **)OblivionDynamicCast(
                            ParentMenu,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                            &HUDMainMenu `RTTI Type Descriptor',
                            0);
          if ( v8 )
            sub_5A6A40(v8, a1);
        }
      }
    }
  }
}
