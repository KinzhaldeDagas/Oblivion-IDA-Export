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

  v5 = (TileMenu *)OblivionDynamicCast(v10, v11, v12, v13, v14); /*0x5ab627*/
  Menu_SetTileMenu(a1, a4, a5, v5); /*0x5ab632*/
  v6 = (int *)OblivionDynamicCast( /*0x5ab646*/
                a1,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &InventoryMenu `RTTI Type Descriptor',
                0);
  v7 = v6; /*0x5ab64b*/
  if ( v6[0xB] && v6[0xA] && v6[0xC] && v6[0xD] && v6[0xE] ) /*0x5ab668*/
  {
    if ( Tile_GetFloat(a2, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(a2, 0xFA5) == fXMLI_NoClickPast ) /*0x5ab6b2*/
      Tile_SetFloat(a2, 0xFABu, v15); /*0x5ab6c3*/
    Tile_SetFloat(a2, 0xFAFu, flt_A53954); /*0x5ab6d9*/
    Tile_SetFloat(a2, 0xFB0u, flt_A53954); /*0x5ab6ef*/
    Tile_SetFloat(a2, 0xFB1u, flt_A53954); /*0x5ab705*/
    Tile_SetFloat(a2, 0xFB2u, flt_A53954); /*0x5ab71b*/
    Tile_SetFloat(a2, 0xFB3u, 0.0); /*0x5ab72d*/
    Tile_SetFloat(a2, 0xFB4u, 0.0); /*0x5ab73f*/
    Tile_SetFloat(a2, 0xFB5u, 0.0); /*0x5ab751*/
    Tile_SetFloat(a2, 0xFB6u, 0.0); /*0x5ab763*/
    Tile_SetFloat(a2, 0xFB7u, 0.0); /*0x5ab775*/
    InventoryMenu_InitializeOrUpdate(a3, a4); /*0x5ab77a*/
    BYTE1(dword_B3B0B4[0xC9]) = 0; /*0x5ab783*/
    v9 = HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]); /*0x5ab78f*/
    if ( v9 != (char)0xFF ) /*0x5ab797*/
      sub_5AACF0(v7, 0.0, v9, 0); /*0x5ab7a1*/
    Tile_SetFloat((Tile *)v7[0xC], 0xFB3u, flt_A6906C); /*0x5ab7b8*/
    Tile_SetFloat((Tile *)v7[0xC], 0xFB3u, 0.0); /*0x5ab7cb*/
    EnableMenu(a1, a3, a4, 0.0, 1); /*0x5ab7d4*/
    return a2; /*0x5ab7db*/
  }
  else
  {
    PrintError("Inventory Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5ab673*/
    return 0; /*0x5ab67d*/
  }
}
