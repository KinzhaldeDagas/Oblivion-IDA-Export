BSStringT *__usercall sub_5D5200@<eax>(double st5_0@<st2>, double a2@<st0>, double a3@<st1>, int a4)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebx
  Menu *ParentMenu; // edi
  TileMenu *v9; // eax
  _DWORD *v10; // esi
  EffectSetting *v11; // ebp
  _DWORD *v12; // ecx
  int *v13; // eax
  char *v14; // eax
  const char *v15; // eax
  double v16; // st7
  double v17; // st7
  float v19; // [esp+4h] [ebp-124h]
  char v20; // [esp+8h] [ebp-120h]
  char v21; // [esp+Ch] [ebp-11Ch]
  float v22; // [esp+1Ch] [ebp-10Ch]
  char v23[260]; // [esp+20h] [ebp-108h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x418);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  v22 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, a3, Depth, "Data\\Menus\\dialog\\SigilStone.xml");
  ParentMenu = (Menu *)Tile_GetParentMenu(XML);
  byte_B3B720 = InterfaceManager_GetSingleton(0, 1)->unk008[0];
  if ( !ParentMenu )
    return 0;
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x418 )
  {
    if ( ParentMenu->members.tile )
      ParentMenu->__vftable->Destructor(ParentMenu, 1);
    return 0;
  }
  v9 = (TileMenu *)OblivionDynamicCast(
                     XML,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, a3, Depth, v9);
  v10 = OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SigilStoneMenu `RTTI Type Descriptor',
          0);
  v10[0xA] = a4;
  if ( !sub_5D3F70(v10) )
  {
    PrintError("SigilStone Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v22);
  dword_B3B718 = 0;
  v11 = EffectSetting_Create();
  v11->effectFlags |= 0x201000u;
  v12 = (_DWORD *)v10[0x1B];
  if ( v12 )
  {
    BSSimpleList_Clear(v12);
    FormHeapFree(v10[0x1B]);
  }
  v13 = (int *)EffectSettingCollection_FilteredEffectList(0, 0, 0, 1, v20, v21);
  v10[0x1B] = v13;
  sub_663AA0((int *)TESDataHandler_g_PlayerRef, v13);
  v14 = *(char **)(a4 + 0x28);
  if ( !v14 )
    v14 = EmptyString;
  Tile_SetString((_DWORD *)v10[0x18], (_DWORD *)0xFAE, v14);
  if ( EffectItemList_GetStrongestItem(3, 0) )
  {
    v15 = *(const char **)(v10[0xA] + 0x4C);
    if ( !v15 )
      v15 = EmptyString;
    _sprintf(v23, "%s\\%s\\%s", "Menus", "Icons", v15);
    Tile_SetString((_DWORD *)v10[0x19], (_DWORD *)0xFE6, v23);
    v16 = fConstant_2;
  }
  else
  {
    v16 = 1.0;
  }
  v19 = v16;
  Tile_SetFloat((Tile *)v10[0x19], (_DWORD *)0xFA1, v19);
  v17 = ((double (__thiscall *)(EffectSetting *, int))v11->super.vtbl->Destroy)(v11, 1);
  sub_5D4900(v10, st5_0, a3, v17);
  EnableMenu(ParentMenu, st5_0, a3, v17, 0);
  return XML;
}
