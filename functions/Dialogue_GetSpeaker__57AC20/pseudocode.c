int Dialogue_GetSpeaker()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v3; // eax

  if ( InterfaceManager_GetSingleton(0, 1)
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1), Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2)
    && (OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1),
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile),
        (v3 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &DialogMenu `RTTI Type Descriptor',
                0)) != 0) )
  {
    return v3[0x18];
  }
  else
  {
    return 0;
  }
}
