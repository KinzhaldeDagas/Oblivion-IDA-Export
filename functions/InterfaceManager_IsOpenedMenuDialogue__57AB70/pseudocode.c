bool InterfaceManager::IsOpenedMenuDialogue()
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v3; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57ab74*/
    return 0; /*0x57ab74*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57ab90*/
    return 0; /*0x57ab90*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57aba2*/
    return 0; /*0x57aba2*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57abac*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57abce*/
    return 0; /*0x57ac0e*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x57abe3*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57abed*/
  v3 = OblivionDynamicCast( /*0x57abf3*/
         ParentMenu,
         0,
         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
         &DialogMenu `RTTI Type Descriptor',
         0);
  return v3 && v3[0x64]; /*0x57ac0a*/
}
