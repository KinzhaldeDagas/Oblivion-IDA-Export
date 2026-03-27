double __usercall sub_579F80@<st0>(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  int v5; // ecx
  void (__thiscall ***OpenMenuTile)(_DWORD, int, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  unsigned int *XML; // edi
  _DWORD *ParentMenu; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  int v13; // [esp+14h] [ebp-4h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->unk054[3] )
      {
        v13 = v5;
        OpenMenuTile = (void (__thiscall ***)(_DWORD, int, int))Menu_GetOpenMenuTile(0x3FF);
        if ( OpenMenuTile )
          (**OpenMenuTile)(OpenMenuTile, 1, v13);
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Depth = InterfaceManager_GetDepth(a1, a2, a3);
        XML = Menu_LoadXML(Singleton->menuRoot, a2, a3, Depth, "Data\\Menus\\Main\\map_menu.xml");
        ParentMenu = (_DWORD *)Tile_GetParentMenu(XML);
        sub_584670("Data\\Menus\\Main\\map_menu.xml", (int)ParentMenu);
        if ( ParentMenu )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*ParentMenu + 0x34))(ParentMenu) == 0x3FF )
          {
            v11 = OblivionDynamicCast(
                    XML,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                    &TileMenu `RTTI Type Descriptor',
                    0);
            Menu_SetTileMenu(ParentMenu, a1, a2, a3, v11);
            v12 = OblivionDynamicCast(
                    ParentMenu,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &MapMenu `RTTI Type Descriptor',
                    0);
            if ( sub_5B65F0(v12) )
            {
              if ( Tile_GetFloat(XML, 0xFA5) != fXMLI_StackingType6006 && Tile_GetFloat(XML, 0xFA5) != fXMLI_NoClickPast )
                JUMPOUT(0x5BB7D5);
              return sub_5BB7D0(XML);
            }
            else
            {
              PrintError("Map Menu Creation Failed... Are your menu and art resources up to date?");
            }
          }
          else if ( ParentMenu[1] )
          {
            (*(void (__thiscall **)(_DWORD *, int))*ParentMenu)(ParentMenu, 1);
          }
        }
      }
    }
  }
  return Depth;
}
