char __usercall sub_59D680@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // ebx
  double Depth; // st7
  BSStringT *XML; // edi
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  float *v12; // esi
  Tile *v14; // eax
  _DWORD *v15; // eax
  void *v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  float v21; // [esp+8h] [ebp-20h]
  float v22; // [esp+18h] [ebp-10h]
  float v23; // [esp+1Ch] [ebp-Ch]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x417);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a3);
  v22 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, a2, Depth, "Data\\Menus\\Options\\credits_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x417 )
  {
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
    return 0;
  }
  v11 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v10, a2, Depth, v11);
  v12 = (float *)OblivionDynamicCast(
                   v10,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &CreditsMenu `RTTI Type Descriptor',
                   0);
  if ( *((_DWORD *)v12 + 0xA) )
  {
    if ( byte_B3B290 )
    {
      v14 = (Tile *)sub_589930(XML, "background");
      if ( v14 )
        Tile_SetFloat(v14, (_DWORD *)0xFA7, 0.0);
      v15 = (_DWORD *)Menu_GetOpenMenuTile(0x414);
      if ( v15 )
      {
        v16 = (void *)Tile_GetParentMenu(v15);
        v17 = OblivionDynamicCast(
                v16,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &MainMenu `RTTI Type Descriptor',
                0);
        if ( v17 )
          sub_5B5A80(v17);
      }
    }
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v22);
    v21 = (float)(LOBYTE(Singleton->unk008[0]) != 1);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v21);
    sub_59D030(v12);
    if ( (double)nHeight / (double)nWidth != dbl_A31C70 )
    {
      v18 = *(_DWORD *)(*((_DWORD *)v12 + 0xA) + 0x24);
      v19 = *(_DWORD *)(v18 + 0x5C);
      v20 = *(_DWORD *)(v18 + 0x58);
      v23 = *(float *)(v18 + 0x54) + dbl_A6B808;
      *(float *)(v18 + 0x54) = v23;
      *(_DWORD *)(v18 + 0x58) = v20;
      *(_DWORD *)(v18 + 0x5C) = v19;
      NiAVObject_UpdateNiAVObject((NiAVObject *)v18, 0.0, 0);
    }
    return 1;
  }
  else
  {
    PrintError("Credits Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
