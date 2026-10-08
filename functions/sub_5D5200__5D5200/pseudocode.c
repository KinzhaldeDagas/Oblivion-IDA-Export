BSStringT *__usercall sub_5D5200@<eax>(double st5_0@<st2>, double a2@<st0>, double a3@<st1>, int a4)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebx
  Menu *ParentMenu; // edi
  TileMenu *v9; // eax
  Menu *v10; // esi
  EffectSetting *v11; // ebp
  _DWORD *v12; // ecx
  int *v13; // eax
  char *v14; // eax
  const char *HandleMouseover; // eax
  double v16; // st7
  float v18; // [esp+4h] [ebp-124h]
  char v19; // [esp+8h] [ebp-120h]
  int v20; // [esp+8h] [ebp-120h]
  char v21; // [esp+Ch] [ebp-11Ch]
  int v22; // [esp+Ch] [ebp-11Ch]
  int v23; // [esp+10h] [ebp-118h]
  int v24; // [esp+14h] [ebp-114h]
  float v25; // [esp+1Ch] [ebp-10Ch]
  char v26[260]; // [esp+20h] [ebp-108h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x418); /*0x5d5228*/
  if ( OpenMenuTile ) /*0x5d5232*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d523c*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d524a*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5d524c*/
  v25 = Depth; /*0x5d5251*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\dialog\\SigilStone.xml"); /*0x5d5262*/
  ParentMenu = (Menu *)Tile_GetParentMenu(File); /*0x5d526f*/
  unk_B3B720 = InterfaceManager_GetSingleton(0, 1)->unk008[0]; /*0x5d527e*/
  if ( !ParentMenu ) /*0x5d5284*/
    return 0; /*0x5d5284*/
  if ( ParentMenu->__vftable->GetID(ParentMenu) != 0x418 ) /*0x5d5298*/
  {
    if ( ParentMenu->members.tile ) /*0x5d5438*/
      ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5d5446*/
    return 0; /*0x5d5446*/
  }
  v9 = (TileMenu *)OblivionDynamicCast( /*0x5d52ad*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(ParentMenu, a3, Depth, v9); /*0x5d52b8*/
  v10 = (Menu *)OblivionDynamicCast( /*0x5d52d1*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &SigilStoneMenu `RTTI Type Descriptor',
                  0);
  v10[1].__vftable = (MenuVtbl *)a4; /*0x5d52d8*/
  if ( !sub_5D3F70(v10) ) /*0x5d52db*/
  {
    PrintError("SigilStone Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5d52e9*/
    return 0; /*0x5d5448*/
  }
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5d5326*/
    Tile_SetFloat(File, 0xFABu, v25); /*0x5d5337*/
  unk_B3B718 = 0; /*0x5d533c*/
  v11 = EffectSetting_Create(); /*0x5d534b*/
  v11->effectFlags |= 0x201000u; /*0x5d534d*/
  v12 = *(_DWORD **)&v10[2].members.ownsTemplates; /*0x5d5354*/
  if ( v12 ) /*0x5d5359*/
  {
    BSSimpleList_Clear(v12); /*0x5d535b*/
    FormHeapFree(*(_DWORD *)&v10[2].members.ownsTemplates); /*0x5d5364*/
  }
  v13 = (int *)EffectSettingCollection_FilteredEffectList(0, 0, 0, 1, v19, v21); /*0x5d5374*/
  *(_DWORD *)&v10[2].members.ownsTemplates = v13; /*0x5d537c*/
  sub_663AA0((Actor *)reference, v13); /*0x5d5386*/
  v14 = *(char **)(a4 + 0x28); /*0x5d538f*/
  if ( !v14 ) /*0x5d5394*/
    v14 = EmptyString; /*0x5d5396*/
  Tile_SetString((_DWORD *)v10[2].members.templateContextTile, (_DWORD *)0xFAE, v14); /*0x5d53a4*/
  if ( EffectItemList_GetStrongestItem(&v10[1].__vftable[2].Destructor, 3, 0, v20, v22, v23, v24, a4) ) /*0x5d53b3*/
  {
    HandleMouseover = (const char *)v10[1].__vftable[1].HandleMouseover; /*0x5d53c2*/
    if ( !HandleMouseover ) /*0x5d53c7*/
      HandleMouseover = EmptyString; /*0x5d53c9*/
    _sprintf(v26, "%s\\%s\\%s", "Menus", "Icons", HandleMouseover); /*0x5d53e3*/
    Tile_SetString((_DWORD *)v10[2].members.unk14, (_DWORD *)0xFE6, v26); /*0x5d53f8*/
    v16 = fConstant_2; /*0x5d53fd*/
  }
  else
  {
    v16 = 1.0; /*0x5d5405*/
  }
  v18 = v16; /*0x5d540b*/
  Tile_SetFloat((Tile *)v10[2].members.unk14, 0xFA1u, v18); /*0x5d5413*/
  v11->super.vtbl->Destroy(&v11->super, 1); /*0x5d5422*/
  sub_5D4900(v10); /*0x5d5426*/
  EnableMenu(ParentMenu, st5_0, a3, v16, 0); /*0x5d542f*/
  return (BSStringT *)File; /*0x5d544a*/
}
