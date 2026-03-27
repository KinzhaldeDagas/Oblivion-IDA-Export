void __usercall sub_5D6390(double a1@<st2>, double a2@<st0>, int a3, int a4, int a5, char a6, int a7, int a8, int a9)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  BSStringT *v11; // ebp
  InterfaceManager *Singleton; // esi
  double Depth; // st6
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v16; // edi
  int v17; // ecx
  TileMenu *v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  _DWORD *v21; // eax
  void *v22; // eax
  void *v23; // eax
  double v24; // st7
  int v25; // eax
  _DWORD *v26; // edi
  int v27; // ebx
  char *v28; // eax
  BSStringT *v29; // eax
  void (__thiscall **v30)(int, int, BSStringT *); // edi
  double Float; // st7
  int v32; // eax
  float v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+2Ch] [ebp-Ch]
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x408);
  v11 = 0;
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a2);
  v33 = a2;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a1, Depth, a2, "Data\\Menus\\CharGen\\skills_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v16 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    goto LABEL_49;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x408 )
  {
    if ( v16->members.tile )
    {
      sub_5D6856(v17, v16->__vftable->Destructor);
      return;
    }
LABEL_49:
    JUMPOUT(0x5D685C);
  }
  v18 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v16, Depth, a2, v18);
  v19 = OblivionDynamicCast(
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SkillsMenu `RTTI Type Descriptor',
          0);
  v20 = (int)v19;
  if ( v19[0xA] && v19[0xB] && v19[0xC] && v19[0xD] && v19[0xE] )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v33);
    v21 = (_DWORD *)Menu_GetOpenMenuTile(0x406);
    if ( v21 )
    {
      v22 = (void *)Tile_GetParentMenu(v21);
      v23 = OblivionDynamicCast(
              v22,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &ClassMenu `RTTI Type Descriptor',
              0);
    }
    else
    {
      v23 = 0;
    }
    *(_DWORD *)(v20 + 0x4C) = v23;
    if ( v23 )
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, fConstant_2);
      Tile_SetString(*(_DWORD **)(v20 + 0x34), (_DWORD *)0xFAE, (char *)sOk);
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, 1.0);
      Tile_SetString(*(_DWORD **)(v20 + 0x34), (_DWORD *)0xFAE, (char *)sDone);
    }
    *(_DWORD *)(v20 + 0x40) = retaddr;
    *(_DWORD *)(v20 + 0x3C) = a3;
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        if ( a3 == 2 )
        {
          v24 = fConstant_2;
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, fConstant_2);
          Tile_SetString(XML, (_DWORD *)0xFB3, (char *)dword_B38640);
          sub_5D6270(v20, a1, Depth, v24, (char *)dword_B385D8, 0);
          sub_5D6270(v20, a1, Depth, v24, (char *)dword_B385E0, 1);
          sub_5D6270(v20, a1, Depth, v24, (char *)dword_B385E8, 2);
          sub_5D5D40((_DWORD *)v20);
        }
        else if ( a3 == 3 )
        {
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, *(float *)&dword_A46C30);
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, 1.0);
          v25 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef);
          v26 = (_DWORD *)(TESDataHandler + 0x8C);
          v34 = v25;
          if ( TESDataHandler != 0xFFFFFF74 )
          {
            do
            {
              if ( !v26[1] && !*v26 )
                break;
              v27 = *v26;
              v28 = *(char **)(*v26 + 0x1C);
              if ( !v28 )
                v28 = EmptyString;
              v29 = sub_5D6270(v20, a1, Depth, 1.0, v28, *(_DWORD *)(*v26 + 0xC));
              if ( !v11 || v34 == v27 )
                v11 = v29;
              v26 = (_DWORD *)v26[1];
            }
            while ( v26 );
            if ( v11 )
            {
              v30 = (void (__thiscall **)(int, int, BSStringT *))(*(_DWORD *)v20 + 0xC);
              Float = Tile_GetFloat(v11, 0xFA8);
              v32 = Double_To_SInt32(Float);
              (*v30)(v20, v32, v11);
              Tile_SetFloat((Tile *)v11, (_DWORD *)0xFF0, fConstant_2);
            }
          }
          JUMPOUT(0x5D6626);
        }
        JUMPOUT(0x5D662A);
      }
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, 1.0);
      if ( *(_DWORD *)(v20 + 0x4C) )
      {
        Tile_SetString(XML, (_DWORD *)0xFB3, (char *)dword_B38638);
        *(_DWORD *)(v20 + 0x44) = 2;
      }
      else
      {
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, 1.0);
      }
      sub_5D6693((_DWORD *)v20, a1, Depth, 1.0);
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, 0.0);
      if ( *(_DWORD *)(v20 + 0x4C) )
      {
        Tile_SetString(XML, (_DWORD *)0xFB3, (char *)dword_B38630);
        *(_DWORD *)(v20 + 0x44) = 7;
        JUMPOUT(0x5D6585);
      }
      sub_5D6573(0, a4, a5, a6, a7, a8, a9);
    }
  }
  else
  {
    PrintError("Attribute Menu Creation Failed... Are your menu and art resources up to date?");
  }
}
