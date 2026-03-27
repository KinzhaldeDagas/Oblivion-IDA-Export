char __usercall sub_5BD080@<al>(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        _DWORD *a4,
        TESChildCELL *a5,
        char a6)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebp
  int ParentMenu; // eax
  Menu *v12; // esi
  TileMenu *v13; // eax
  _DWORD *v14; // eax
  int v15; // esi
  double v16; // st7
  int v17; // eax
  Tile *v18; // ecx
  double v19; // st6
  int v20; // ebx
  double v21; // st7
  int v22; // ebp
  UInt32 unk11C; // eax
  int v24; // ebx
  int v25; // ebp
  CHAR *v26; // eax
  CHAR *v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  CHAR *v30; // eax
  char *Name; // eax
  CHAR *v32; // eax
  float v34; // [esp+4h] [ebp-14Ch]
  float v35; // [esp+4h] [ebp-14Ch]
  float v36; // [esp+4h] [ebp-14Ch]
  CHAR *v37; // [esp+4h] [ebp-14Ch]
  CHAR *v38; // [esp+4h] [ebp-14Ch]
  const char *MasteryName; // [esp+4h] [ebp-14Ch]
  _DWORD *v40; // [esp+4h] [ebp-14Ch]
  float v41; // [esp+18h] [ebp-138h]
  _DWORD *v42; // [esp+18h] [ebp-138h]
  Menu *v43; // [esp+1Ch] [ebp-134h]
  char v44[300]; // [esp+20h] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x401);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v41 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\negotiate_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v12 = (Menu *)ParentMenu;
  v43 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x401 )
  {
    if ( v12->members.tile )
      v12->__vftable->Destructor(v12, 1);
    return 0;
  }
  v13 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v12, a2, Depth, v13);
  v14 = OblivionDynamicCast(
          v12,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &NegotiateMenu `RTTI Type Descriptor',
          0);
  v15 = (int)v14;
  if ( !v14[0xB] || !v14[0xA] || !v14[0xC] || !v14[0xD] || !v14[0xE] || !v14[0xF] )
  {
    PrintError("Negotiate Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v41);
  *(_DWORD *)(v15 + 0x54) = *a4;
  *(_BYTE *)(v15 + 0x5C) = a6;
  v16 = fBarterHaggleMax;
  dword_B3B410 = *a4;
  v17 = Double_To_SInt32(v16);
  v18 = *(Tile **)(v15 + 0x34);
  v34 = flt_A6B1F0;
  v42 = (_DWORD *)v17;
  *(_DWORD *)(v15 + 0x50) = a5;
  Tile_SetFloat(v18, (_DWORD *)0xFB7, v34);
  Tile_SetFloat(*(Tile **)(v15 + 0x34), (_DWORD *)0xFB7, 0.0);
  Tile_SetFloat(*(Tile **)(v15 + 0x30), (_DWORD *)0xFAF, 0.0);
  v35 = (float)(int)v42;
  Tile_SetFloat(*(Tile **)(v15 + 0x30), (_DWORD *)0xFB0, v35);
  Tile_SetFloat(*(Tile **)(v15 + 0x30), (_DWORD *)0xFB2, flt_A379CC);
  v36 = (float)(int)*a4;
  Tile_SetFloat(*(Tile **)(v15 + 0x30), (_DWORD *)0xFB3, v36);
  Tile_SetFloat(*(Tile **)(v15 + 0x30), (_DWORD *)0xFB3, 0.0);
  Player_GetActorBarterFactor_(*(float *)&a5);
  v19 = a2 * fCostant_100;
  v20 = Double_To_SInt32(0.0);
  calculateItemMultiplicationFromDisposition((TESObjectREFR *)TESDataHandler_g_PlayerRef, (Actor *)a5);
  v21 = 0.0 * fCostant_100;
  v22 = Double_To_SInt32(v21);
  unk11C = TESDataHandler_g_PlayerRef->unk11C;
  v24 = v20 - unk11C;
  v25 = unk11C + v22;
  if ( v24 < 0x64 )
    v24 = 0x64;
  if ( v25 > 0x64 )
    v25 = 0x64;
  v37 = sub_588C10(*(_DWORD **)(v15 + 0x40), 0xFB0);
  v26 = sub_588C10(*(_DWORD **)(v15 + 0x40), 0xFAF);
  _sprintf(v44, "%s %i %s", v26, v24, v37);
  Tile_SetString(*(_DWORD **)(v15 + 0x40), (_DWORD *)0xFDE, v44);
  v38 = sub_588C10(*(_DWORD **)(v15 + 0x44), 0xFB0);
  v27 = sub_588C10(*(_DWORD **)(v15 + 0x44), 0xFAF);
  _sprintf(v44, "%s %i %s", v27, v25, v38);
  Tile_SetString(*(_DWORD **)(v15 + 0x44), (_DWORD *)0xFDE, v44);
  v28 = (*((int (__thiscall **)(TESChildCELL *, int))a5->vtbl + 0xA1))(a5, 0x1D);
  v29 = Calc_MasteryFromSkill(v28);
  MasteryName = (const char *)ActorValue_GetMasteryName(v29);
  v30 = sub_588C10(*(_DWORD **)(v15 + 0x48), 0xFDE);
  _sprintf(v44, "%s %s", v30, MasteryName);
  Tile_SetString(*(_DWORD **)(v15 + 0x48), (_DWORD *)0xFDE, v44);
  Name = TESObjectREFR_GetName((TESObjectREFR *)a5);
  Tile_SetString(*(_DWORD **)(v15 + 0x2C), (_DWORD *)0xFDE, Name);
  v40 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *, PlayerCharacter *))a5->vtbl + 0x89))(
                    a5,
                    TESDataHandler_g_PlayerRef);
  v32 = sub_588C10(*(_DWORD **)(v15 + 0x4C), 0xFDE);
  _sprintf(v44, "%s %i", v32, v40);
  Tile_SetString(*(_DWORD **)(v15 + 0x4C), (_DWORD *)0xFDE, v44);
  sub_5BCF20(v15, v21);
  EnableMenu(v43, a1, v19, v21, 0);
  return 1;
}
