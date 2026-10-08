char __usercall sub_5BDA90@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>, double a4@<st3>)
{
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebx
  int ParentMenu; // eax
  Menu *v14; // esi
  TileMenu *v15; // eax
  Tile **v16; // eax
  Tile **v17; // edi
  double Float; // st7
  float v20; // [esp+18h] [ebp-4h]

  v5 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD); /*0x5bda9f*/
  if ( !v5 ) /*0x5bdaa7*/
  {
LABEL_9:
    OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F5); /*0x5bdafb*/
    if ( OpenMenuTile ) /*0x5bdb0a*/
      (**OpenMenuTile)(OpenMenuTile, 1); /*0x5bdb14*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bdb23*/
    Depth = InterfaceManager_GetDepth(a3); /*0x5bdb25*/
    v20 = a4; /*0x5bdb2a*/
    File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\pause_menu.xml"); /*0x5bdb3b*/
    ParentMenu = Tile_GetParentMenu(File); /*0x5bdb3f*/
    v14 = (Menu *)ParentMenu; /*0x5bdb44*/
    if ( ParentMenu ) /*0x5bdb48*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x3F5 ) /*0x5bdb5c*/
      {
        sub_57DE50(2); /*0x5bdb64*/
        v15 = (TileMenu *)OblivionDynamicCast( /*0x5bdb78*/
                            File,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(v14, a2, Depth, v15); /*0x5bdb83*/
        v16 = (Tile **)OblivionDynamicCast( /*0x5bdb97*/
                         v14,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &PauseMenu `RTTI Type Descriptor',
                         0);
        v17 = v16; /*0x5bdb9c*/
        if ( v16[0xA] && v16[0xC] && v16[0xB] && v16[0xD] && v16[0xE] ) /*0x5bdbb9*/
        {
          if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 /*0x5bdc09*/
            || (Float = Tile_GetFloat(File, 0xFA5), Float == fXMLI_NoClickPast) )
          {
            Float = v20; /*0x5bdc0b*/
            Tile_SetFloat(File, 0xFABu, v20); /*0x5bdc1a*/
          }
          if ( !sub_452330() ) /*0x5bdc25*/
          {
            Float = 1.0; /*0x5bdc2e*/
            Tile_SetFloat(v17[0xB], 0xFC9u, 1.0); /*0x5bdc3c*/
          }
          if ( GetOpenedMenuCode() == 0x40E ) /*0x5bdc4b*/
          {
            Float = 1.0; /*0x5bdc4d*/
            Tile_SetFloat(v17[0xC], 0xFC9u, 1.0); /*0x5bdc5b*/
          }
          if ( !reference || reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x5bdc74*/
          {
            Float = 1.0; /*0x5bdc7a*/
            Tile_SetFloat(v17[0xA], 0xFAFu, 1.0); /*0x5bdc88*/
          }
          if ( unk_B3B43D ) /*0x5bdc8d*/
            sub_5C1000(a2); /*0x5bdc96*/
          EnableMenu(v14, a1, a2, Float, 0); /*0x5bdc9f*/
          return 1; /*0x5bdca6*/
        }
        else
        {
          PrintError("Pause Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5bdbc4*/
          return 0; /*0x5bdbce*/
        }
      }
      if ( v14->members.tile ) /*0x5bdcab*/
        v14->__vftable->Destructor(v14, 1); /*0x5bdcb9*/
    }
    return 0; /*0x5bdcbd*/
  }
  while ( 1 ) /*0x5bdab0*/
  {
    v6 = (_DWORD *)v5[2]; /*0x5bdab0*/
    v5 = (_DWORD *)*v5; /*0x5bdab8*/
    if ( v6 ) /*0x5bdaba*/
    {
      v7 = Tile_GetParentMenu(v6); /*0x5bdabe*/
      if ( v7 ) /*0x5bdac5*/
      {
        if ( *(_DWORD *)(v7 + 4) ) /*0x5bdac7*/
        {
          v8 = *(_DWORD *)(v7 + 0x24); /*0x5bdacd*/
          if ( v8 == 8 || v8 == 2 ) /*0x5bdad8*/
          {
            a4 = Tile_GetFloat(v6, 0xFA5); /*0x5bdae1*/
            if ( a4 != flt_A6A040 ) /*0x5bdaf1*/
              return 0; /*0x5bdbcd*/
          }
        }
      }
    }
    if ( !v5 ) /*0x5bdaf9*/
      goto LABEL_9; /*0x5bdaf9*/
  }
}
