// positive sp value has been detected, the output may be wrong!
Tile *__usercall sub_5AB626@<eax>(Menu *a1@<edi>, Tile *a2@<esi>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  TileMenu *v5; // eax
  int *v6; // eax
  int *v7; // ebx
  char v9; // al
  void *v10; // [esp-20h] [ebp-24h]
  int v11; // [esp-1Ch] [ebp-20h]
  struct _s_RTTICompleteObjectLocator *v12; // [esp-18h] [ebp-1Ch]
  struct TypeDescriptor *v13; // [esp-14h] [ebp-18h]
  int v14; // [esp-10h] [ebp-14h]
  float v15; // [esp+0h] [ebp-4h]

  v5 = (TileMenu *)OblivionDynamicCast(v10, v11, v12, v13, v14);
  Menu_SetTileMenu(a1, a4, a5, v5);
  v6 = (int *)OblivionDynamicCast(
                a1,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &InventoryMenu `RTTI Type Descriptor',
                0);
  v7 = v6;
  if ( v6[0xB] && v6[0xA] && v6[0xC] && v6[0xD] && v6[0xE] )
  {
    if ( Tile_GetFloat(a2, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(a2, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat(a2, (_DWORD *)0xFAB, v15);
    Tile_SetFloat(a2, (_DWORD *)0xFAF, flt_A53954);
    Tile_SetFloat(a2, (_DWORD *)0xFB0, flt_A53954);
    Tile_SetFloat(a2, (_DWORD *)0xFB1, flt_A53954);
    Tile_SetFloat(a2, (_DWORD *)0xFB2, flt_A53954);
    Tile_SetFloat(a2, (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat(a2, (_DWORD *)0xFB4, 0.0);
    Tile_SetFloat(a2, (_DWORD *)0xFB5, 0.0);
    Tile_SetFloat(a2, (_DWORD *)0xFB6, 0.0);
    Tile_SetFloat(a2, (_DWORD *)0xFB7, 0.0);
    InventoryMenu_InitializeOrUpdate(a3, a4);
    byte_B3B3D9 = 0;
    v9 = HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]);
    if ( v9 != (char)0xFF )
      sub_5AACF0(v7, 0.0, v9, 0);
    Tile_SetFloat((Tile *)v7[0xC], (_DWORD *)0xFB3, flt_A6906C);
    Tile_SetFloat((Tile *)v7[0xC], (_DWORD *)0xFB3, 0.0);
    EnableMenu(a1, a3, a4, 0.0, 1);
    return a2;
  }
  else
  {
    PrintError("Inventory Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
