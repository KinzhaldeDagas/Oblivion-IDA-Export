unsigned int *__usercall sub_57AA20@<eax>(char a1@<bpl>, double a2@<st2>, double st6_0@<st1>, int a4)
{
  InterfaceManager *Singleton; // eax
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *v9; // esi
  double Depth; // st7
  unsigned int *XML; // ebx
  int ParentMenu; // eax
  Menu *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  double Float; // st7
  float a3; // [esp+14h] [ebp-4h]

  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 )
    return 0;
  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x406);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  v9 = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a1, a2, st6_0);
  a3 = Depth;
  XML = Menu_LoadXML(v9->menuRoot, a2, st6_0, Depth, "Data\\Menus\\Chargen\\class_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v13 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x406 )
  {
    if ( v13->members.tile )
      v13->__vftable->Destructor(v13, 1);
    return 0;
  }
  v14 = OblivionDynamicCast(
          XML,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
          &TileMenu `RTTI Type Descriptor',
          0);
  Menu_SetTileMenu(v13, a1, a2, st6_0, v14);
  v15 = OblivionDynamicCast(
          v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ClassMenu `RTTI Type Descriptor',
          0);
  v16 = (int)v15;
  if ( v15[0xA] && v15[0xB] && v15[0xC] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
      || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
    {
      Float = a3;
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
    }
    if ( !TESClass_IsPlayable(*(_BYTE **)(v16 + 0x40)) )
      BSStringT_Set((BSStringT *)(*(_DWORD *)(v16 + 0x40) + 0x1C), (const char *)dword_B38628, 0);
    *(_DWORD *)(v16 + 0x3C) = a4;
    sub_597340(v16, a2, st6_0, Float, 1);
    sub_596CF0(v16, a1, a2, 0);
    EnableMenu(v13, a2, a1, st6_0, Float, 0);
    return XML;
  }
  else
  {
    PrintError("Class Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
