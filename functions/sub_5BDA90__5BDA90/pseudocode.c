char __usercall sub_5BDA90@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // eax
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v13; // esi
  TileMenu *v14; // eax
  Tile **v15; // eax
  Tile **v16; // edi
  double Float; // st7
  float v19; // [esp+18h] [ebp-4h]

  v4 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD);
  if ( !v4 )
  {
LABEL_9:
    OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F5);
    if ( OpenMenuTile )
      (**OpenMenuTile)(OpenMenuTile, 1);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    Depth = InterfaceManager_GetDepth(a4);
    v19 = Depth;
    XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a2, a3, Depth, "Data\\Menus\\Options\\pause_menu.xml");
    ParentMenu = Tile_GetParentMenu(XML);
    v13 = (Menu *)ParentMenu;
    if ( ParentMenu )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x3F5 )
      {
        sub_57DE50(2);
        v14 = (TileMenu *)OblivionDynamicCast(
                            XML,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(v13, a3, Depth, v14);
        v15 = (Tile **)OblivionDynamicCast(
                         v13,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &PauseMenu `RTTI Type Descriptor',
                         0);
        v16 = v15;
        if ( v15[0xA] && v15[0xC] && v15[0xB] && v15[0xD] && v15[0xE] )
        {
          if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
            || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
          {
            Float = v19;
            Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v19);
          }
          if ( !sub_452330(a1, a2, a3, Float) )
          {
            Float = 1.0;
            Tile_SetFloat(v16[0xB], (_DWORD *)0xFC9, 1.0);
          }
          if ( GetOpenedMenuCode() == 0x40E )
          {
            Float = 1.0;
            Tile_SetFloat(v16[0xC], (_DWORD *)0xFC9, 1.0);
          }
          if ( !TESDataHandler_g_PlayerRef
            || TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead(
                 (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                 0) )
          {
            Float = 1.0;
            Tile_SetFloat(v16[0xA], (_DWORD *)0xFAF, 1.0);
          }
          if ( byte_B3B43D )
            sub_5C1000(a2, a3, a1);
          EnableMenu(v13, a2, a3, Float, 0);
          return 1;
        }
        else
        {
          PrintError("Pause Menu Creation Failed... Are your menu and art resources up to date?");
          return 0;
        }
      }
      if ( v13->members.tile )
        v13->__vftable->Destructor(v13, 1);
    }
    return 0;
  }
  while ( 1 )
  {
    v5 = (_DWORD *)v4[2];
    v4 = (_DWORD *)*v4;
    if ( v5 )
    {
      v6 = Tile_GetParentMenu(v5);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 4) )
        {
          v7 = *(_DWORD *)(v6 + 0x24);
          if ( v7 == 8 || v7 == 2 )
          {
            a2 = Tile_GetFloat(v5, 0xFA5);
            if ( a2 != flt_A6A040 )
              return 0;
          }
        }
      }
    }
    if ( !v4 )
      goto LABEL_9;
  }
}
