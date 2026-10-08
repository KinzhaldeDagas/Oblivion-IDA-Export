// Creates the shared SkillsMenu. In class-skill mode (mode 0), associates the open ClassMenu, sets selectionCap=7 at SkillsMenu+0x44, populates all 21 native skills, and preselects the seven staged ClassMenu major AVs.
void __usercall SkillsMenu_Create(double a1@<st2>, double a2@<st0>, int a3)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  BSStringT *v4; // ebp
  InterfaceManager *Singleton; // esi
  double Depth; // st6
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  int v9; // edi
  TileMenu *v10; // eax
  _DWORD *v11; // eax
  int v12; // esi
  _DWORD *v13; // eax
  void *v14; // eax
  void *v15; // eax
  double v16; // st7
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  char *v20; // eax
  BSStringT *SkillRow; // eax
  void (__thiscall **v22)(int, int, BSStringT *); // edi
  double Float; // st7
  int v24; // eax
  float v25; // [esp+2Ch] [ebp-Ch]
  int v26; // [esp+2Ch] [ebp-Ch]
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x408); /*0x5d639c*/
  v4 = 0; /*0x5d63a1*/
  if ( OpenMenuTile ) /*0x5d63a8*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5d63b2*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d63bf*/
  Depth = InterfaceManager_GetDepth(a2); /*0x5d63c1*/
  v25 = a2; /*0x5d63c6*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, a1, Depth, a2, "Data\\Menus\\CharGen\\skills_menu.xml"); /*0x5d63d7*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5d63df*/
  v9 = ParentMenu; /*0x5d63e4*/
  if ( !ParentMenu ) /*0x5d63ec*/
    goto LABEL_49; /*0x5d63ec*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x408 ) /*0x5d6400*/
  {
    if ( *(_DWORD *)(v9 + 4) ) /*0x5d684d*/
    {
      sub_5D6856(**(void (__thiscall ***)(int, int))v9, v9); /*0x5d6855*/
      return; /*0x5d6855*/
    }
LABEL_49:
    JUMPOUT(0x5D685C); /*0x5d685c*/
  }
  v10 = (TileMenu *)OblivionDynamicCast( /*0x5d6413*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu((Menu *)v9, Depth, a2, v10); /*0x5d641e*/
  v11 = OblivionDynamicCast( /*0x5d6430*/
          (void *)v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &SkillsMenu `RTTI Type Descriptor',
          0);
  v12 = (int)v11; /*0x5d6435*/
  if ( v11[0xA] && v11[0xB] && v11[0xC] && v11[0xD] && v11[0xE] ) /*0x5d644e*/
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5d649a*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v25); /*0x5d64ab*/
    v13 = (_DWORD *)Menu_GetOpenMenuTile(0x406); /*0x5d64b5*/
    if ( v13 ) /*0x5d64bf*/
    {
      v14 = (void *)Tile_GetParentMenu(v13); /*0x5d64cf*/
      v15 = OblivionDynamicCast( /*0x5d64d5*/
              v14,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &ClassMenu `RTTI Type Descriptor',
              0);
    }
    else
    {
      v15 = 0; /*0x5d64df*/
    }
    *(_DWORD *)(v12 + 0x4C) = v15; /*0x5d64e4*/
    if ( v15 ) /*0x5d64e9*/
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, fConstant_2); /*0x5d64f9*/
      Tile_SetString(*(_DWORD **)(v12 + 0x34), (_DWORD *)0xFAE, (char *)MEMORY[0xB38CF0]); /*0x5d6505*/
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, 1.0); /*0x5d6511*/
      Tile_SetString(*(_DWORD **)(v12 + 0x34), (_DWORD *)0xFAE, (char *)MEMORY[0xB38D38]); /*0x5d6525*/
    }
    *(_DWORD *)(v12 + 0x40) = retaddr; /*0x5d652e*/
    *(_DWORD *)(v12 + 0x3C) = a3; /*0x5d6537*/
    if ( a3 ) /*0x5d653a*/
    {
      if ( a3 != 1 ) /*0x5d6649*/
      {
        if ( a3 == 2 ) /*0x5d6712*/
        {
          v16 = fConstant_2; /*0x5d6714*/
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, fConstant_2); /*0x5d6725*/
          Tile_SetString(XML, (_DWORD *)0xFB3, (char *)g_sSpecialization); /*0x5d6737*/
          SkillsMenu_CreateSkillRow(v12, v16, (char *)stru_B385D8, 0); /*0x5d6746*/
          SkillsMenu_CreateSkillRow(v12, v16, (char *)stru_B385E0, 1); /*0x5d6756*/
          SkillsMenu_CreateSkillRow(v12, v16, (char *)stru_B385E8, 2); /*0x5d6765*/
          SkillsMenu_PreselectClassMenuValues((_DWORD *)v12); /*0x5d676c*/
        }
        else if ( a3 == 3 ) /*0x5d6779*/
        {
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, *(float *)&dword_A46C30); /*0x5d6790*/
          Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, 1.0); /*0x5d67a2*/
          v17 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_9A)(reference); /*0x5d67b5*/
          v18 = (_DWORD *)(g_TESDataHandler + 0x8C); /*0x5d67bd*/
          v26 = v17; /*0x5d67c3*/
          if ( g_TESDataHandler != 0xFFFFFF74 ) /*0x5d67c7*/
          {
            do /*0x5d680a*/
            {
              if ( !v18[1] && !*v18 ) /*0x5d67d6*/
                break; /*0x5d67d9*/
              v19 = *v18; /*0x5d67db*/
              v20 = *(char **)(*v18 + 0x1C); /*0x5d67dd*/
              if ( !v20 ) /*0x5d67e5*/
                v20 = EmptyString; /*0x5d67e7*/
              SkillRow = SkillsMenu_CreateSkillRow(v12, 1.0, v20, *(_DWORD *)(*v18 + 0xC)); /*0x5d67f0*/
              if ( !v4 || v26 == v19 ) /*0x5d67fd*/
                v4 = SkillRow; /*0x5d67ff*/
              v18 = (_DWORD *)v18[1]; /*0x5d6801*/
            }
            while ( v18 ); /*0x5d680a*/
            if ( v4 ) /*0x5d680e*/
            {
              v22 = (void (__thiscall **)(int, int, BSStringT *))(*(_DWORD *)v12 + 0xC); /*0x5d681e*/
              Float = Tile_GetFloat(v4, 0xFA8); /*0x5d6821*/
              v24 = Double_To_SInt32(Float); /*0x5d6826*/
              (*v22)(v12, v24, v4); /*0x5d6830*/
              Tile_SetFloat((Tile *)v4, (_DWORD *)0xFF0, fConstant_2); /*0x5d6843*/
            }
          }
          JUMPOUT(0x5D6626); /*0x5d6626*/
        }
        JUMPOUT(0x5D662A); /*0x5d662a*/
      }
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, 1.0); /*0x5d665c*/
      if ( *(_DWORD *)(v12 + 0x4C) ) /*0x5d6661*/
      {
        Tile_SetString(XML, (_DWORD *)0xFB3, (char *)stru_B38638); /*0x5d6673*/
        *(_DWORD *)(v12 + 0x44) = 2; /*0x5d6678*/
      }
      else
      {
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, 1.0); /*0x5d668e*/
      }
      SkillsMenu_PopulateAttributeRows((_DWORD *)v12, 1.0); /*0x5d667f*/
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, 0.0); /*0x5d654d*/
      if ( *(_DWORD *)(v12 + 0x4C) ) /*0x5d6552*/
      {
        Tile_SetString(XML, (_DWORD *)0xFB3, (char *)g_sMajorSkills); /*0x5d6565*/
        *(_DWORD *)(v12 + 0x44) = 7;            // Native custom-class skill picker sets selectionCap to exactly 7. This is a single major-skill selection phase; Oblivion has no native minor-skill picker phase. /*0x5d656a*/
        JUMPOUT(0x5D6585); /*0x5d6585*/
      }
      SkillsMenu_PopulateSkillRows((Tile *)XML, 0, (_DWORD *)v12, a1, Depth); /*0x5d6555*/
    }
  }
  else
  {
    PrintError("Attribute Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5d6458*/
  }
}
