bool __cdecl sub_57B050(_DWORD *a1)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2)
    && (OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2),
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile),
        (v4 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &HUDSubtitleMenu `RTTI Type Descriptor',
                0)) != 0) )
  {
    return sub_5A8F80(v4, a1);
  }
  else
  {
    return 0;
  }
}
