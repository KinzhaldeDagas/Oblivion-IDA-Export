char __usercall sub_59D680@<al>(double a1@<st1>, double a2@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // ebx
  Tile *File; // edi
  int ParentMenu; // eax
  Menu *v7; // esi
  TileMenu *v8; // eax
  float *v9; // esi
  Tile *DescendantByName; // eax
  _DWORD *v12; // eax
  void *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  float v18; // [esp+8h] [ebp-20h]
  float v19; // [esp+18h] [ebp-10h]
  float v20; // [esp+1Ch] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x417); /*0x59d688*/
  if ( OpenMenuTile ) /*0x59d692*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x59d69c*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x59d6ad*/
  InterfaceManager_GetDepth(a2); /*0x59d6af*/
  v19 = a2; /*0x59d6b4*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\Options\\credits_menu.xml"); /*0x59d6c5*/
  ParentMenu = Tile_GetParentMenu(File); /*0x59d6c9*/
  v7 = (Menu *)ParentMenu; /*0x59d6ce*/
  if ( !ParentMenu ) /*0x59d6d2*/
    return 0; /*0x59d6d2*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x417 ) /*0x59d6e6*/
  {
    if ( v7->members.tile ) /*0x59d870*/
      v7->__vftable->Destructor(v7, 1); /*0x59d87e*/
    return 0; /*0x59d882*/
  }
  v8 = (TileMenu *)OblivionDynamicCast( /*0x59d6fb*/
                     File,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                     &TileMenu `RTTI Type Descriptor',
                     0);
  Menu_SetTileMenu(v7, a1, a2, v8); /*0x59d706*/
  v9 = (float *)OblivionDynamicCast( /*0x59d71f*/
                  v7,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &CreditsMenu `RTTI Type Descriptor',
                  0);
  if ( *((_DWORD *)v9 + 0xA) ) /*0x59d724*/
  {
    if ( LOBYTE(dword_B3B0B4[0x77]) ) /*0x59d740*/
    {
      DescendantByName = Tile_FindDescendantByName(File, "background"); /*0x59d750*/
      if ( DescendantByName ) /*0x59d757*/
        Tile_SetFloat(DescendantByName, 0xFA7u, 0.0); /*0x59d766*/
      v12 = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x59d770*/
      if ( v12 ) /*0x59d77a*/
      {
        v13 = (void *)Tile_GetParentMenu(v12); /*0x59d78c*/
        v14 = OblivionDynamicCast( /*0x59d792*/
                v13,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &MainMenu `RTTI Type Descriptor',
                0);
        if ( v14 ) /*0x59d79c*/
          sub_5B5A80(v14); /*0x59d7a0*/
      }
    }
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x59d7d5*/
      Tile_SetFloat(File, 0xFABu, v19); /*0x59d7e6*/
    v18 = (float)(LOBYTE(Singleton->unk008[0]) != 1); /*0x59d7ff*/
    Tile_SetFloat(File, 0xFAEu, v18); /*0x59d807*/
    sub_59D030(v9); /*0x59d80e*/
    if ( (double)nHeight / (double)nWidth != dbl_A31C70 ) /*0x59d82a*/
    {
      v15 = *(_DWORD *)(*((_DWORD *)v9 + 0xA) + 0x24); /*0x59d82f*/
      v16 = *(_DWORD *)(v15 + 0x5C); /*0x59d835*/
      v17 = *(_DWORD *)(v15 + 0x58); /*0x59d846*/
      v20 = *(float *)(v15 + 0x54) + dbl_A6B808; /*0x59d84c*/
      *(float *)(v15 + 0x54) = v20; /*0x59d856*/
      *(_DWORD *)(v15 + 0x58) = v17; /*0x59d859*/
      *(_DWORD *)(v15 + 0x5C) = v16; /*0x59d85f*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)v15, 0.0, 0); /*0x59d862*/
    }
    return 1; /*0x59d869*/
  }
  else
  {
    PrintError("Credits Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59d72f*/
    return 0; /*0x59d739*/
  }
}
