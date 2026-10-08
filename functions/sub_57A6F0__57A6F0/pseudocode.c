// UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
void __cdecl UI_UpdateActorValueDisplays(unsigned int actorValue)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  Tile **v4; // eax
  _DWORD *v5; // eax
  void *v6; // eax
  Tile **v7; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a6f4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a710*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a726*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a734*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57a756*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57a76c*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57a776*/
          v4 = (Tile **)OblivionDynamicCast( /*0x57a77c*/
                          ParentMenu,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                          &StatsMenu `RTTI Type Descriptor',
                          0);
          if ( v4 ) /*0x57a78a*/
            StatsMenu_UpdateAttributesAndSkills(v4, (_DWORD *)actorValue); /*0x57a78f*/
          v5 = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x57a7a7*/
          v6 = (void *)Tile_GetParentMenu(v5); /*0x57a7b1*/
          v7 = (Tile **)OblivionDynamicCast( /*0x57a7b7*/
                          v6,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                          &HUDMainMenu `RTTI Type Descriptor',
                          0);
          if ( v7 ) /*0x57a7c1*/
            sub_5A5B50(v7, actorValue); /*0x57a7c6*/
        }
      }
    }
  }
  nullsub_2(); /*0x57a6fe*/
}
