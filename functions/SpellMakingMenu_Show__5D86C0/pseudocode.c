BSStringT *__usercall SpellMakingMenu_Show@<eax>(
        char a1@<bl>,
        char a2@<dil>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v11; // esi
  TileMenu *v12; // eax
  void *v13; // ebx
  EffectSetting *v14; // edi
  _DWORD *v15; // ecx
  int *v16; // eax
  double v17; // st7
  float a3; // [esp+8h] [ebp-18h]
  float v22; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x411);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a5);
  v22 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, a4, Depth, "Data\\Menus\\dialog\\Spellmaking.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v11 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x411 )
  {
    if ( v11->members.tile )
      v11->__vftable->Destructor(v11, 1);
    return 0;
  }
  sub_57DE50(0xF);
  v12 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v11, a4, Depth, v12);
  v13 = OblivionDynamicCast(
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SpellMakingMenu `RTTI Type Descriptor',
          0);
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v22);
  v14 = EffectSetting_Create();
  v14->effectFlags |= 0x200800u;
  v15 = *((_DWORD **)v13 + 0x16);
  if ( v15 )
  {
    BSSimpleList_Clear(v15);
    FormHeapFree(*((_DWORD *)v13 + 0x16));
  }
  v16 = (int *)EffectSettingCollection_FilteredEffectList((int)v14, 0, 0, 1, a2, a1);
  *((_DWORD *)v13 + 0x16) = v16;
  sub_663AA0((int *)TESDataHandler_g_PlayerRef, v16);
  v14->super.vtbl->Destroy(&v14->super, 1);
  v17 = (double)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
  a3 = v17;
  Tile_SetFloat(*((Tile **)v13 + 1), (_DWORD *)0xFB5, a3);
  sub_5D8180((int)v13, st5_0, a4, v17);
  EnableMenu(v11, st5_0, a4, v17, 0);
  return XML;
}
