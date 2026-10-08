BSStringT *__usercall RepairMenu_Create@<eax>(
        double st7_0@<st0>,
        double a2@<st2>,
        signed int a3,
        int a4,
        int a5,
        int a6)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st6
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v12; // ebx
  TileMenu *v13; // eax
  void *v14; // eax
  int v15; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  double v17; // st7
  int v18; // eax
  _DWORD *v19; // eax
  void *v20; // eax
  _DWORD *v21; // eax
  float v23; // [esp+8h] [ebp-18h]
  float v24; // [esp+8h] [ebp-18h]
  float v25; // [esp+8h] [ebp-18h]
  float v26; // [esp+1Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40B); /*0x5d2076*/
  if ( OpenMenuTile ) /*0x5d2080*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d208a*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d209b*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5d209d*/
  v26 = st7_0; /*0x5d20a2*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a2, Depth, st7_0, "Data\\Menus\\repair_menu.xml"); /*0x5d20b3*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5d20b7*/
  v12 = (Menu *)ParentMenu; /*0x5d20bc*/
  if ( !ParentMenu ) /*0x5d20c0*/
    return 0; /*0x5d20c0*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40B ) /*0x5d20d4*/
  {
    if ( v12->members.tile ) /*0x5d22a2*/
      v12->__vftable->Destructor(v12, 1); /*0x5d22b0*/
    return 0; /*0x5d22b4*/
  }
  v13 = (TileMenu *)OblivionDynamicCast( /*0x5d20ea*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v12, Depth, st7_0, v13); /*0x5d20f5*/
  v14 = OblivionDynamicCast( /*0x5d2109*/
          v12,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &RepairMenu `RTTI Type Descriptor',
          0);
  v23 = (float)a3; /*0x5d2117*/
  v15 = (int)v14; /*0x5d211f*/
  Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v23); /*0x5d2121*/
  ContainerChanges = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d212f*/
  *(_DWORD *)(v15 + 0x54) = ContainerExtraData_GetItemCount(ContainerChanges, (TESForm *)MEMORY[0xB35ED0]); /*0x5d214a*/
  *(_DWORD *)(v15 + 0x58) = a3; /*0x5d2158*/
  *(_DWORD *)(v15 + 0x60) = a6; /*0x5d215b*/
  *(_DWORD *)(v15 + 0x5C) = a5; /*0x5d215e*/
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5d218a*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v26); /*0x5d219b*/
  v17 = (double)*(int *)(v15 + 0x54); /*0x5d21a0*/
  v24 = v17; /*0x5d21a7*/
  Tile_SetFloat(*(Tile **)(v15 + 0x34), (_DWORD *)0xFAE, v24); /*0x5d21af*/
  if ( a3 == 2 ) /*0x5d21bb*/
  {
    v17 = (double)sub_5E4420((Actor *)reference); /*0x5d21cc*/
    v25 = v17; /*0x5d21d4*/
    Tile_SetFloat(*(Tile **)(v15 + 0x34), (_DWORD *)0xFAE, v25); /*0x5d21dc*/
    sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5d21ea*/
    v18 = TESTopic::GetTopic(5, 3); /*0x5d21f3*/
    (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)a6 + 0xDC))( /*0x5d2214*/
      a6,
      v18,
      reference,
      1,
      1,
      0);
  }
  else if ( a3 == 3 ) /*0x5d221d*/
  {
    sub_57DE50(1); /*0x5d2226*/
    v19 = (_DWORD *)Menu_GetOpenMenuTile(0x410); /*0x5d2241*/
    v20 = (void *)Tile_GetParentMenu(v19); /*0x5d224b*/
    v21 = OblivionDynamicCast( /*0x5d2251*/
            v20,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &AlchemyMenu `RTTI Type Descriptor',
            0);
    if ( v21 ) /*0x5d225b*/
    {
      if ( v21[dword_B3B0B4[0x6F] + 0x2C] ) /*0x5d2263*/
      {
        v17 = fConstant_2; /*0x5d226d*/
        Tile_SetFloat(*(Tile **)(v15 + 0x4C), (_DWORD *)0xFA1, fConstant_2); /*0x5d227f*/
      }
    }
    *(_BYTE *)(v15 + 0x65) = 1; /*0x5d2284*/
  }
  sub_5D1080(v15, (int)v12, v17, a2, Depth, 1); /*0x5d228c*/
  EnableMenu(v12, a2, Depth, v17, 0); /*0x5d2295*/
  return XML; /*0x5d22a1*/
}
