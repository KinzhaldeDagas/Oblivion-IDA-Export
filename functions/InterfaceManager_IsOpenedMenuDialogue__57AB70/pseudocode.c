bool InterfaceManager::IsOpenedMenuDialogue()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v3; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v3 = OblivionDynamicCast(
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &DialogMenu `RTTI Type Descriptor',
         0);
  return v3 && v3[0x64];
}
