Tile *__usercall sub_57AA20@<eax>(double st6_0@<st1>, double a2@<st0>, int a3)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *v9; // esi
  double Depth; // st7
  Tile *File; // ebx
  int ParentMenu; // eax
  Menu *v13; // esi
  TileMenu *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  double v17; // st7
  float v18; // [esp+14h] [ebp-4h]

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57aa24*/
    return 0; /*0x57aa24*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57aa3c*/
    return 0; /*0x57aa3c*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57aa4e*/
    return 0; /*0x57aa4e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57aa58*/
  Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57aa6a*/
  if ( Float != fConstant_2 ) /*0x57aa7a*/
    return 0; /*0x57aa83*/
  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x406); /*0x597546*/
  if ( OpenMenuTile ) /*0x597550*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x59755a*/
  v9 = InterfaceManager_GetSingleton(0, 1); /*0x59756a*/
  Depth = InterfaceManager_GetDepth(a2); /*0x59756c*/
  v18 = Depth; /*0x597571*/
  File = Tile::ReadFile(v9->menuRoot, "Data\\Menus\\Chargen\\class_menu.xml"); /*0x597582*/
  ParentMenu = Tile_GetParentMenu(File); /*0x597586*/
  v13 = (Menu *)ParentMenu; /*0x59758b*/
  if ( !ParentMenu ) /*0x59758f*/
    return 0; /*0x59758f*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x406 ) /*0x5975a3*/
  {
    if ( v13->members.tile ) /*0x597697*/
      v13->__vftable->Destructor(v13, 1); /*0x5976a5*/
    return 0; /*0x5976a8*/
  }
  v14 = (TileMenu *)OblivionDynamicCast( /*0x5975b9*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v13, st6_0, Depth, v14); /*0x5975c4*/
  v15 = OblivionDynamicCast( /*0x5975d8*/
          v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ClassMenu `RTTI Type Descriptor',
          0);
  v16 = (int)v15; /*0x5975dd*/
  if ( v15[0xA] && v15[0xB] && v15[0xC] ) /*0x5975ee*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 /*0x597638*/
      || (v17 = Tile_GetFloat(File, 0xFA5), v17 == fXMLI_NoClickPast) )
    {
      v17 = v18; /*0x59763a*/
      Tile_SetFloat(File, 0xFABu, v18); /*0x597649*/
    }
    if ( !TESClass_IsPlayable(*(_BYTE **)(v16 + 0x40)) ) /*0x597651*/
      BSStringT_Set((BSStringT *)(*(_DWORD *)(v16 + 0x40) + 0x1C), stru_B38628.value, 0); /*0x597669*/
    *(_DWORD *)(v16 + 0x3C) = a3; /*0x597676*/
    ClassMenu_RebuildClassList(v16, Float, st6_0, v17, 1); /*0x597679*/
    ClassMenu_RefreshClassDetails((TESChildCELL **)v16, 0);// Morrowind Leveling hook: refresh extended ClassMenu minor skill traits after class menu selection update. /*0x597682*/
    EnableMenu(v13, Float, st6_0, v17, 0); /*0x59768b*/
    return File; /*0x597692*/
  }
  else
  {
    PrintError("Class Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5975f9*/
    return 0; /*0x597603*/
  }
}
