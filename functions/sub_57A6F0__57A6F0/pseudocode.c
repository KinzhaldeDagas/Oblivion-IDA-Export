int __cdecl sub_57A6F0(int a2)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  Tile **v4; // eax
  _DWORD *v5; // eax
  void *v6; // eax
  Tile **v7; // eax

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return nullsub_2(a2);
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return nullsub_2(a2);
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return nullsub_2(a2);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return nullsub_2(a2);
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v4 = (Tile **)OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &StatsMenu `RTTI Type Descriptor',
                  0);
  if ( v4 )
    sub_5DA1A0(v4, (_DWORD *)a2);
  v5 = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v6 = (void *)Tile_GetParentMenu(v5);
  v7 = (Tile **)OblivionDynamicCast(
                  v6,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &HUDMainMenu `RTTI Type Descriptor',
                  0);
  if ( v7 )
    sub_5A5B50(v7, a2);
  return nullsub_2(a2);
}
