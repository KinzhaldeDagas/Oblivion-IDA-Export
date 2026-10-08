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
  Menu *v10; // esi
  TileMenu *v11; // eax
  void *v12; // ebx
  EffectSetting *v13; // edi
  _DWORD *v14; // ecx
  int *v15; // eax
  double v16; // st7
  float a3; // [esp+8h] [ebp-18h]
  float v21; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x411); /*0x5d86c6*/
  if ( OpenMenuTile ) /*0x5d86d0*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d86da*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d86ea*/
  Depth = InterfaceManager_GetDepth(a5); /*0x5d86ec*/
  v21 = Depth; /*0x5d86f1*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, st5_0, a4, Depth, "Data\\Menus\\dialog\\Spellmaking.xml"); /*0x5d8702*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5d8706*/
  v10 = (Menu *)ParentMenu; /*0x5d870b*/
  if ( !ParentMenu ) /*0x5d870f*/
    return 0; /*0x5d870f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x411 ) /*0x5d8723*/
  {
    if ( v10->members.tile ) /*0x5d883b*/
      v10->__vftable->Destructor(v10, 1); /*0x5d8849*/
    return 0; /*0x5d884c*/
  }
  sub_57DE50(0xF); /*0x5d872d*/
  v11 = (TileMenu *)OblivionDynamicCast( /*0x5d8741*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, a4, Depth, v11); /*0x5d874c*/
  v12 = OblivionDynamicCast( /*0x5d876f*/
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SpellMakingMenu `RTTI Type Descriptor',
          0);
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5d879a*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v21); /*0x5d87ab*/
  v13 = EffectSetting_Create(); /*0x5d87b5*/
  v13->effectFlags |= 0x200800u; /*0x5d87b7*/
  v14 = *((_DWORD **)v12 + 0x16); /*0x5d87be*/
  if ( v14 ) /*0x5d87c3*/
  {
    BSSimpleList_Clear(v14); /*0x5d87c5*/
    FormHeapFree(*((_DWORD *)v12 + 0x16)); /*0x5d87ce*/
  }
  v15 = (int *)EffectSettingCollection_FilteredEffectList((int)v13, 0, 0, 1, a2, a1); /*0x5d87dd*/
  *((_DWORD *)v12 + 0x16) = v15; /*0x5d87e5*/
  sub_663AA0((Actor *)reference, v15); /*0x5d87ef*/
  v13->super.vtbl->Destroy(&v13->super, 1); /*0x5d87fd*/
  v16 = (double)sub_5E4420((Actor *)reference); /*0x5d880e*/
  a3 = v16; /*0x5d8816*/
  Tile_SetFloat(*((Tile **)v12 + 1), (_DWORD *)0xFB5, a3); /*0x5d881e*/
  sub_5D8180((int)v12, st5_0, a4, v16); /*0x5d8825*/
  EnableMenu(v10, st5_0, a4, v16, 0); /*0x5d882e*/
  return XML; /*0x5d883a*/
}
