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
  Menu *v15; // esi
  TileMenu *v16; // eax
  Tile **v17; // ebx
  double Float; // st7
  signed int v19; // ebp
  BSStringT *v20; // edi
  int v21; // edx
  int *v22; // esi
  int v23; // ebx
  int *v24; // eax
  BSStringT *v25; // eax
  float *v26; // eax
  char v28; // [esp+1Bh] [ebp-141h]
  int v29; // [esp+1Ch] [ebp-140h]
  float v30; // [esp+20h] [ebp-13Ch]
  Menu *v31; // [esp+24h] [ebp-138h]
  int v32; // [esp+28h] [ebp-134h]
  char v33[300]; // [esp+2Ch] [ebp-130h] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x40E);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a8);
  v30 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a6, a7, Depth, "Data\\Menus\\Options\\load_menu.xml");
  v32 = (int)XML;
  ParentMenu = Tile_GetParentMenu(XML);
  v15 = (Menu *)ParentMenu;
  v31 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x40E )
  {
    if ( v15->members.tile )
      v15->__vftable->Destructor(v15, 1);
    return 0;
  }
  v16 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v15, a7, Depth, v16);
  v17 = (Tile **)OblivionDynamicCast(
                   v15,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &LoadgameMenu `RTTI Type Descriptor',
                   0);
  v29 = (int)v17;
  if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006
    || (Float = Tile_GetFloat(XML, 0xFA5), Float == fXMLI_NoClickPast) )
  {
    Float = v30;
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v30);
  }
  if ( a9 )
  {
    Float = 1.0;
    Tile_SetFloat(v17[0xA], (_DWORD *)0xFA1, 1.0);
  }
  v28 = sub_45E6A0();
  v19 = 0;
  v20 = 0;
  if ( !Menu_GetOpenMenuTile(0x414) || v28 )
    sub_45D450(SaveLoad_CurrentSavegame, v21);
  v22 = (int *)SaveLoad_CurrentSavegame[1].unk01C[0];
  v17[0x15] = (Tile *)v22;
  v23 = 0;
  v24 = v22;
  if ( !v22 )
    goto LABEL_18;
  do
  {
    if ( *v24 )
      ++v23;
    v24 = (int *)v24[1];
  }
  while ( v24 );
  if ( !v23 )
LABEL_18:
    v20 = sub_5AE6D0(v29, a1, a2, a3, a4, a5, a6, a7, Float, v33, 0, 0, 0);
  for ( ; v22; ++v19 )
  {
    if ( !*v22 )
      break;
    v25 = sub_5AE6D0(v29, a1, a2, a3, a4, a5, a6, a7, Float, v33, v19, *v22, v23);
    if ( !v20 )
      v20 = v25;
    v22 = (int *)v22[1];
  }
  sub_58FBA0(v32, a6, a7, Float, 0);
  EnableMenu(v31, a6, a7, Float, 0);
  v26 = (float *)InterfaceManager_GetSingleton(0, 1);
  sub_57F9F0(v26, a6, Float, a7, *(float *)&v20, (_DWORD *)0xFDD, 0);
  return v32;
}
