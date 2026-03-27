BSStringT *__usercall sub_5D39A0@<eax>(
        double a1@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v14; // esi
  TileMenu *v15; // eax
  _DWORD *v16; // ebx
  double Float; // st7
  int v18; // edx
  int *v19; // esi
  int v20; // ebp
  signed int v21; // edi
  int *v22; // eax
  Menu *v24; // [esp+18h] [ebp-13Ch]
  BSStringT *v25; // [esp+1Ch] [ebp-138h]
  float a3; // [esp+20h] [ebp-134h]
  char v27[300]; // [esp+24h] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40F);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a8);
  a3 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a6, a7, Depth, "Data\\Menus\\Options\\save_menu.xml");
  v25 = XML;
  ParentMenu = Tile_GetParentMenu(XML);
  v14 = (Menu *)ParentMenu;
  v24 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40F )
  {
    if ( v14->members.tile )
      v14->__vftable->Destructor(v14, 1);
    return 0;
  }
  v15 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v14, a7, Depth, v15);
  v16 = OblivionDynamicCast(
          v14,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SaveMenu `RTTI Type Descriptor',
          0);
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
    || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
  {
    Float = a3;
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, a3);
  }
  sub_45E6A0();
  sub_5D3650(v16, a1, a2, st2_0, a4, a5, a6, a7, Float, (char *)dword_B38708, 0, 0, 0);
  sub_45D450(SaveLoad_CurrentSavegame, v18);
  v19 = (int *)SaveLoad_CurrentSavegame[1].unk01C[0];
  v20 = 0;
  v16[0x13] = v19;
  v21 = 1;
  v22 = v19;
  if ( v19 )
  {
    do
    {
      if ( *v22 )
        ++v20;
      v22 = (int *)v22[1];
    }
    while ( v22 );
    do
    {
      if ( !*v19 )
        break;
      sub_5D3650(v16, a1, a2, st2_0, a4, a5, a6, a7, Float, v27, v21, *v19, v20);
      v19 = (int *)v19[1];
      ++v21;
    }
    while ( v19 );
  }
  EnableMenu(v24, a6, a7, Float, 0);
  return v25;
}
