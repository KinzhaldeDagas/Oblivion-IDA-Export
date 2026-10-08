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
  Tile *File; // ebp
  int ParentMenu; // eax
  Menu *v11; // esi
  TileMenu *v12; // eax
  _DWORD *v13; // eax
  int v14; // esi
  double v15; // st7
  int v16; // eax
  Tile *v17; // ecx
  double v18; // st6
  int v19; // ebx
  double v20; // st7
  int v21; // ebp
  UInt32 unk11C; // eax
  int v23; // ebx
  int v24; // ebp
  CHAR *v25; // eax
  CHAR *v26; // eax
  SInt32 v27; // eax
  SkillMasteryLevel v28; // eax
  CHAR *v29; // eax
  char *Name; // eax
  CHAR *v31; // eax
  float v33; // [esp+4h] [ebp-14Ch]
  float v34; // [esp+4h] [ebp-14Ch]
  float v35; // [esp+4h] [ebp-14Ch]
  CHAR *v36; // [esp+4h] [ebp-14Ch]
  CHAR *v37; // [esp+4h] [ebp-14Ch]
  const char *MasteryName; // [esp+4h] [ebp-14Ch]
  _DWORD *v39; // [esp+4h] [ebp-14Ch]
  float v40; // [esp+18h] [ebp-138h]
  _DWORD *v41; // [esp+18h] [ebp-138h]
  Menu *v42; // [esp+1Ch] [ebp-134h]
  char v43[300]; // [esp+20h] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x401); /*0x5bd0ab*/
  if ( OpenMenuTile ) /*0x5bd0b5*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5bd0bf*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bd0cd*/
  Depth = InterfaceManager_GetDepth(a3); /*0x5bd0cf*/
  v40 = Depth; /*0x5bd0d4*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\negotiate_menu.xml"); /*0x5bd0e5*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5bd0e9*/
  v11 = (Menu *)ParentMenu; /*0x5bd0ee*/
  v42 = (Menu *)ParentMenu; /*0x5bd0f2*/
  if ( !ParentMenu ) /*0x5bd0f6*/
    return 0; /*0x5bd0f6*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x401 ) /*0x5bd10a*/
  {
    if ( v11->members.tile ) /*0x5bd413*/
      v11->__vftable->Destructor(v11, 1); /*0x5bd421*/
    return 0; /*0x5bd421*/
  }
  v12 = (TileMenu *)OblivionDynamicCast( /*0x5bd11f*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v11, a2, Depth, v12); /*0x5bd12a*/
  v13 = OblivionDynamicCast( /*0x5bd13e*/
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &NegotiateMenu `RTTI Type Descriptor',
          0);
  v14 = (int)v13; /*0x5bd143*/
  if ( !v13[0xB] || !v13[0xA] || !v13[0xC] || !v13[0xD] || !v13[0xE] || !v13[0xF] ) /*0x5bd166*/
  {
    PrintError("Negotiate Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5bd171*/
    return 0; /*0x5bd423*/
  }
  if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5bd1ae*/
    Tile_SetFloat(File, 0xFABu, v40); /*0x5bd1bf*/
  *(_DWORD *)(v14 + 0x54) = *a4; /*0x5bd1cd*/
  *(_BYTE *)(v14 + 0x5C) = a6; /*0x5bd1d0*/
  v15 = MEMORY[0xB375C8]; /*0x5bd1d3*/
  unk_B3B410 = *a4; /*0x5bd1db*/
  v16 = Double_To_SInt32(v15); /*0x5bd1e0*/
  v17 = *(Tile **)(v14 + 0x34); /*0x5bd1ec*/
  v33 = flt_A6B1F0; /*0x5bd1ef*/
  v41 = (_DWORD *)v16; /*0x5bd1f7*/
  *(_DWORD *)(v14 + 0x50) = a5; /*0x5bd1fb*/
  Tile_SetFloat(v17, 0xFB7u, v33); /*0x5bd1fe*/
  Tile_SetFloat(*(Tile **)(v14 + 0x34), 0xFB7u, 0.0); /*0x5bd211*/
  Tile_SetFloat(*(Tile **)(v14 + 0x30), 0xFAFu, 0.0); /*0x5bd224*/
  v34 = (float)(int)v41; /*0x5bd231*/
  Tile_SetFloat(*(Tile **)(v14 + 0x30), 0xFB0u, v34); /*0x5bd239*/
  Tile_SetFloat(*(Tile **)(v14 + 0x30), 0xFB2u, flt_A379CC); /*0x5bd250*/
  v35 = (float)(int)*a4; /*0x5bd25b*/
  Tile_SetFloat(*(Tile **)(v14 + 0x30), 0xFB3u, v35); /*0x5bd263*/
  Tile_SetFloat(*(Tile **)(v14 + 0x30), 0xFB3u, 0.0); /*0x5bd276*/
  Player_GetActorBarterFactor_(a5); /*0x5bd282*/
  v18 = a2 * fCostant_100; /*0x5bd287*/
  v19 = Double_To_SInt32(0.0); /*0x5bd299*/
  calculateItemMultiplicationFromDisposition((TESObjectREFR *)reference, (Actor *)a5); /*0x5bd29b*/
  v20 = 0.0 * fCostant_100; /*0x5bd2a0*/
  v21 = Double_To_SInt32(v20); /*0x5bd2b1*/
  unk11C = reference->unk11C; /*0x5bd2b3*/
  v23 = v19 - unk11C; /*0x5bd2b9*/
  v24 = unk11C + v21; /*0x5bd2bb*/
  if ( v23 < 0x64 ) /*0x5bd2c0*/
    v23 = 0x64; /*0x5bd2c2*/
  if ( v24 > 0x64 ) /*0x5bd2ca*/
    v24 = 0x64; /*0x5bd2cc*/
  v36 = sub_588C10(*(_DWORD **)(v14 + 0x40), 0xFB0); /*0x5bd2e1*/
  v25 = sub_588C10(*(_DWORD **)(v14 + 0x40), 0xFAF); /*0x5bd2e8*/
  _sprintf(v43, "%s %i %s", v25, v23, v36); /*0x5bd2f8*/
  Tile_SetString(*(_DWORD **)(v14 + 0x40), (_DWORD *)0xFDE, v43); /*0x5bd30d*/
  v37 = sub_588C10(*(_DWORD **)(v14 + 0x44), 0xFB0); /*0x5bd322*/
  v26 = sub_588C10(*(_DWORD **)(v14 + 0x44), 0xFAF); /*0x5bd329*/
  _sprintf(v43, "%s %i %s", v26, v24, v37); /*0x5bd339*/
  Tile_SetString(*(_DWORD **)(v14 + 0x44), (_DWORD *)0xFDE, v43); /*0x5bd34e*/
  v27 = (*((int (__thiscall **)(TESChildCELL *, int))a5->vtbl + 0xA1))(a5, 0x1D); /*0x5bd35f*/
  v28 = Calc_MasteryFromSkill(v27); /*0x5bd362*/
  MasteryName = ActorValue_GetMasteryName(v28); /*0x5bd373*/
  v29 = sub_588C10(*(_DWORD **)(v14 + 0x48), 0xFDE); /*0x5bd379*/
  _sprintf(v43, "%s %s", v29, MasteryName); /*0x5bd389*/
  Tile_SetString(*(_DWORD **)(v14 + 0x48), (_DWORD *)0xFDE, v43); /*0x5bd39e*/
  Name = TESObjectREFR_GetName((TESObjectREFR *)a5); /*0x5bd3a5*/
  Tile_SetString(*(_DWORD **)(v14 + 0x2C), (_DWORD *)0xFDE, Name); /*0x5bd3b3*/
  v39 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *, PlayerCharacter *))a5->vtbl + 0x89))(a5, reference); /*0x5bd3cd*/
  v31 = sub_588C10(*(_DWORD **)(v14 + 0x4C), 0xFDE); /*0x5bd3d3*/
  _sprintf(v43, "%s %i", v31, v39); /*0x5bd3e3*/
  Tile_SetString(*(_DWORD **)(v14 + 0x4C), (_DWORD *)0xFDE, v43); /*0x5bd3f8*/
  sub_5BCF20(v14, v20); /*0x5bd3ff*/
  EnableMenu(v42, a1, v18, v20, 0); /*0x5bd40a*/
  return 1; /*0x5bd425*/
}
