// CharacterSpecificSaves v5 hooks all callers. Its wrapper resets to the character overview, pre-enumerates *g_createdBaseObjList, and prepares exact-name grouping before native menu construction; this covers the native branch that can skip 0x005AEBB6.
int __usercall sub_5AEA60@<eax>(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        char a9)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v14; // esi
  TileMenu *v15; // eax
  Tile **v16; // ebx
  double Float; // st7
  signed int v18; // ebp
  BSStringT *v19; // edi
  int v20; // edx
  int *v21; // esi
  int v22; // ebx
  int *v23; // eax
  BSStringT *v24; // eax
  float *v25; // eax
  char v27; // [esp+1Bh] [ebp-141h]
  int v28; // [esp+1Ch] [ebp-140h]
  float v29; // [esp+20h] [ebp-13Ch]
  Menu *v30; // [esp+24h] [ebp-138h]
  int v31; // [esp+28h] [ebp-134h]
  char v32[300]; // [esp+2Ch] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40E); /*0x5aea79*/
  if ( OpenMenuTile ) /*0x5aea83*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5aea8d*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5aea9d*/
  Depth = InterfaceManager_GetDepth(a8); /*0x5aea9f*/
  v29 = Depth; /*0x5aeaa4*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a6, a7, Depth, "Data\\Menus\\Options\\load_menu.xml");// CharacterSpecificSaves v9 forwards the active installed Load-menu XML unchanged. Post-load structural detection adapts vanilla, DarNified UI, NorthernUIAway, NorthernUI themed, and DarN+Northern hybrid layouts; optional instruction headers are not required. /*0x5aeab5*/
  v31 = (int)XML; /*0x5aeab9*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5aeabd*/
  v14 = (Menu *)ParentMenu; /*0x5aeac2*/
  v30 = (Menu *)ParentMenu; /*0x5aeac6*/
  if ( !ParentMenu ) /*0x5aeaca*/
    return 0; /*0x5aeaca*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40E ) /*0x5aeade*/
  {
    if ( v14->members.tile ) /*0x5aec75*/
      v14->__vftable->Destructor(v14, 1); /*0x5aec83*/
    return 0; /*0x5aec90*/
  }
  v15 = (TileMenu *)OblivionDynamicCast( /*0x5aeaf5*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v14, a7, Depth, v15); /*0x5aeb00*/
  v16 = (Tile **)OblivionDynamicCast( /*0x5aeb1c*/
                   v14,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &LoadgameMenu `RTTI Type Descriptor',
                   0);
  v28 = (int)v16; /*0x5aeb25*/
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 /*0x5aeb52*/
    || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
  {
    Float = v29; /*0x5aeb54*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v29); /*0x5aeb63*/
  }
  if ( a9 ) /*0x5aeb70*/
  {
    Float = 1.0; /*0x5aeb72*/
    Tile_SetFloat(v16[0xA], (_DWORD *)0xFA1, 1.0); /*0x5aeb80*/
  }
  v27 = sub_45E6A0(); /*0x5aeb95*/
  v18 = 0; /*0x5aeb99*/
  v19 = 0; /*0x5aeb9b*/
  if ( !Menu_GetOpenMenuTile(0x414) || v27 ) /*0x5aebae*/
    TESSaveLoadGame_EnumerateSaveFiles(g_TESSaveLoadGame, v20);// CharacterSpecificSaves v9 enumeration builds exact-name counts, sorts saves, and compacts overview rows before native tile creation. Native user0 list indices preserve DarN 48px/9-row, NorthernUIAway 82px/6-row, and Northern themed 64px/dynamic geometry. /*0x5aebb6*/
  v21 = (int *)g_TESSaveLoadGame[1].unk01C[0]; /*0x5aebc1*/
  v16[0x15] = (Tile *)v21; /*0x5aebc4*/
  v22 = 0; /*0x5aebc7*/
  v23 = v21; /*0x5aebcb*/
  if ( !v21 ) /*0x5aebcd*/
    goto LABEL_18; /*0x5aebcd*/
  do /*0x5aebdc*/
  {
    if ( *v23 ) /*0x5aebd0*/
      ++v22; /*0x5aebd4*/
    v23 = (int *)v23[1]; /*0x5aebd7*/
  }
  while ( v23 ); /*0x5aebdc*/
  if ( !v22 ) /*0x5aebe0*/
LABEL_18:
    v19 = LoadgameMenu_AddSaveRow(v28, a1, a2, a3, a4, a5, a6, a7, Float, v32, 0, 0, 0); /*0x5aebf6*/
  for ( ; v21; ++v18 ) /*0x5aebfa*/
  {
    if ( !*v21 ) /*0x5aec00*/
      break; /*0x5aec04*/
    v24 = LoadgameMenu_AddSaveRow(v28, a1, a2, a3, a4, a5, a6, a7, Float, v32, v18, *v21, v22);// Creates one load row. user1/0xFAE stores the original save-list index, so filtered/omitted rows can retain correct click selection. /*0x5aec12*/
    if ( !v19 ) /*0x5aec19*/
      v19 = v24; /*0x5aec1b*/
    v21 = (int *)v21[1]; /*0x5aec1d*/
  }
  sub_58FBA0(v31, a6, a7, Float, 0); /*0x5aec2f*/
  EnableMenu(v30, a6, a7, Float, 0); /*0x5aec3a*/
  v25 = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5aec4b*/
  InterfaceManager::SetCurrentFocusTarget(v25, a6, Float, a7, *(float *)&v19, (_DWORD *)0xFDD, 0); /*0x5aec55*/
  return v31; /*0x5aec60*/
}
