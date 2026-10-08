double __usercall sub_579F80@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  int v4; // ecx
  void (__thiscall ***OpenMenuTile)(_DWORD, int, int); // eax
  InterfaceManager *Singleton; // esi
  BSStringT *XML; // edi
  Menu *ParentMenu; // esi
  TileMenu *v9; // eax
  _DWORD *v10; // ebx
  float v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579f84*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579f9c*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->unk054[3] ) /*0x579fae*/
      {
        v12 = v4; /*0x5bb6c0*/
        OpenMenuTile = (void (__thiscall ***)(_DWORD, int, int))Menu_GetOpenMenuTile(0x3FF); /*0x5bb6c6*/
        if ( OpenMenuTile ) /*0x5bb6d0*/
          (**OpenMenuTile)(OpenMenuTile, 1, v12); /*0x5bb6da*/
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bb6ea*/
        result = InterfaceManager_GetDepth(result); /*0x5bb6ec*/
        v11 = result; /*0x5bb6f1*/
        XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, a2, result, "Data\\Menus\\Main\\map_menu.xml"); /*0x5bb702*/
        ParentMenu = (Menu *)Tile_GetParentMenu(XML); /*0x5bb70b*/
        sub_584670("Data\\Menus\\Main\\map_menu.xml", (int)ParentMenu); /*0x5bb713*/
        if ( ParentMenu ) /*0x5bb71d*/
        {
          if ( ParentMenu->__vftable->GetID(ParentMenu) == 0x3FF ) /*0x5bb731*/
          {
            v9 = (TileMenu *)OblivionDynamicCast( /*0x5bb747*/
                               XML,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                               &TileMenu `RTTI Type Descriptor',
                               0);
            Menu_SetTileMenu(ParentMenu, a2, result, v9); /*0x5bb752*/
            v10 = OblivionDynamicCast( /*0x5bb76b*/
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &MapMenu `RTTI Type Descriptor',
                    0);
            if ( sub_5B65F0(v10) ) /*0x5bb772*/
            {
              if ( Tile_GetFloat(XML, 0xFA5) != fXMLI_StackingType6006 && Tile_GetFloat(XML, 0xFA5) != fXMLI_NoClickPast ) /*0x5bb7bf*/
                JUMPOUT(0x5BB7D5); /*0x5bb7d5*/
              sub_5BB7D0((Tile *)XML, (int)v10, (int)XML, ParentMenu, a1, a2); /*0x5bb7cf*/
              return v11; /*0x5bb7c1*/
            }
            else
            {
              PrintError("Map Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5bb780*/
            }
          }
          else if ( ParentMenu->members.tile ) /*0x5bb860*/
          {
            ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5bb86e*/
          }
        }
      }
    }
  }
  return result; /*0x579fbb*/
}
