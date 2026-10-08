void (__thiscall ***__usercall sub_599EE0@<eax>(
        double st5_0@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a4,
        char a5,
        char a6,
        char a7))(void *, signed int)
{
  int type; // eax
  void *v9; // eax
  void **data; // eax
  int *sound; // ecx
  int *v12; // eax
  int *v13; // esi
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  bool v17; // zf
  float *ContainerChanges; // eax
  BSStringT *XML; // esi
  int ParentMenu; // eax
  Menu *v22; // edi
  TileMenu *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // edi
  double v26; // st7
  void *v27; // ebx
  BOOL v28; // eax
  double v29; // st7
  float v30; // [esp+8h] [ebp-18h]
  float v31; // [esp+8h] [ebp-18h]
  Menu *v32; // [esp+1Ch] [ebp-4h]
  float v33; // [esp+24h] [ebp+4h]
  TESChildCELL *v34; // [esp+24h] [ebp+4h]

  if ( a4 ) /*0x599ee9*/
  {
    type = a4->vtbl->GetBaseForm(a4)->member.type; /*0x599efc*/
    if ( type == 0x17 ) /*0x599f03*/
    {
      data = (void **)a4->vtbl->GetBaseForm(a4)[4].member.modlist.data; /*0x599f57*/
LABEL_7:
      if ( data ) /*0x599f5c*/
      {
        sound = (int *)MEMORY[0xB33398]->sound; /*0x599f64*/
        if ( sound ) /*0x599f69*/
        {
          v12 = OSGLobals_PlaySound(sound, data[3], 0x121, 0); /*0x599f76*/
          v13 = v12; /*0x599f7b*/
          if ( v12 ) /*0x599f7f*/
          {
            sub_6B7190(v12, 0); /*0x599f85*/
            sub_6B73E0(v13); /*0x599f8c*/
            FormHeapFree((unsigned int)v13); /*0x599f92*/
          }
        }
      }
      goto LABEL_11; /*0x599f92*/
    }
    if ( (unsigned int)(type - 0x23) <= 1 && a4->vtbl->IsDead(a4, 0) ) /*0x599f1e*/
    {
      v9 = (void *)sub_46B280("DRSBodyOpen"); /*0x599f37*/
      data = (void **)OblivionDynamicCast( /*0x599f40*/
                        v9,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESSound `RTTI Type Descriptor',
                        0);
      goto LABEL_7; /*0x599f48*/
    }
  }
LABEL_11:
  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F0); /*0x599f9a*/
  if ( OpenMenuTile ) /*0x599fa9*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x599fb3*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x599fc1*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x599fc3*/
  v33 = Depth; /*0x599fc8*/
  v17 = a4 == (TESObjectREFR *)MEMORY[0xB3BAD4]; /*0x599fcc*/
  MEMORY[0xB3B27A] = 0; /*0x599fd2*/
  if ( v17 ) /*0x599fd9*/
  {
    MEMORY[0xB3B279] = 0; /*0x599fde*/
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList); /*0x599fe5*/
    if ( ContainerChanges ) /*0x599fec*/
      sub_492E70( /*0x59a004*/
        ContainerChanges,
        st5_0,
        Depth,
        st6_0,
        a4,
        (TESForm *)reference,
        (unsigned __int8)MEMORY[0xB3B279],
        0,
        0);
    sub_57DE50(0x1D); /*0x59a00d*/
    GameUI_QueueMessage((const char *)stru_B38B10, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x59a025*/
    MEMORY[0xB3BAD4] = 0; /*0x59a02e*/
    return 0; /*0x59a03c*/
  }
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\container_menu.xml"); /*0x59a04b*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x59a04f*/
  v22 = (Menu *)ParentMenu; /*0x59a054*/
  v32 = (Menu *)ParentMenu; /*0x59a058*/
  if ( !ParentMenu ) /*0x59a05c*/
    return 0; /*0x59a3f7*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F0 ) /*0x59a070*/
  {
    if ( v22->members.tile ) /*0x59a3e5*/
      v22->__vftable->Destructor(v22, 1); /*0x59a3f3*/
    return 0; /*0x59a3f3*/
  }
  v23 = (TileMenu *)OblivionDynamicCast( /*0x59a085*/
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v22, st6_0, Depth, v23); /*0x59a090*/
  v24 = OblivionDynamicCast( /*0x59a0a4*/
          v22,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &ContainerMenu `RTTI Type Descriptor',
          0);
  v25 = v24; /*0x59a0a9*/
  if ( v24[0xA] && v24[0xB] && v24[0xC] && v24[0xD] && v24[0xE] ) /*0x59a0c6*/
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x59a11e*/
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v33); /*0x59a12f*/
    InputGlobals::PollAndUpdateInputState(MEMORY[0xB33398]->input); /*0x59a13e*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAF, flt_A53954); /*0x59a154*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB0, flt_A53954); /*0x59a16a*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB1, flt_A53954); /*0x59a180*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB2, flt_A53954); /*0x59a196*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB3, 0.0); /*0x59a1a8*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB4, 0.0); /*0x59a1ba*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB5, fConstant_2); /*0x59a1d0*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, fConstant_2); /*0x59a1e6*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB7, fConstant_2); /*0x59a1fc*/
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, flt_A6906C); /*0x59a213*/
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, 0.0); /*0x59a226*/
    *((_BYTE *)v25 + 0x61) = a5; /*0x59a235*/
    *((_BYTE *)v25 + 0x63) = a7; /*0x59a238*/
    byte_B13E90 = 1; /*0x59a23b*/
    MEMORY[0xB3B279] = !a5 && a4->vtbl->IsActor(a4) && Actor_IsNPC((Actor *)a4) && !a4->vtbl->IsDead(a4, 0) /*0x59a2ab*/
                    || TESObjectREFR_GetOwner(a4)
                    && !TESObjectREFR_IsOwnedBy(a4, (TESObjectREFR *)reference, 1)
                    && !a4->vtbl->IsActor(a4);
    v26 = 1.0; /*0x59a2b7*/
    if ( a7 ) /*0x59a2b9*/
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, 1.0); /*0x59a2c6*/
      v26 = 1.0; /*0x59a2cb*/
    }
    v30 = v26; /*0x59a2d0*/
    if ( a5 ) /*0x59a2d5*/
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB6, v30); /*0x59a2e0*/
      sub_448F40((_DWORD *)g_TESDataHandler, st6_0, v26, a4); /*0x59a2ec*/
      LOBYTE(reference->unk124) = 1; /*0x59a2fd*/
      *((_BYTE *)v25 + 0x62) = a6; /*0x59a306*/
      v34 = (TESChildCELL *)TESTopic::GetTopic(5, 1); /*0x59a31d*/
      v27 = OblivionDynamicCast( /*0x59a326*/
              a4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
              &Actor `RTTI Type Descriptor',
              0);
      if ( v27 ) /*0x59a32d*/
      {
        sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59a337*/
        (*(void (__thiscall **)(void *, TESChildCELL *, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v27 + 0xDC))( /*0x59a357*/
          v27,
          v34,
          reference,
          1,
          1,
          0);
      }
    }
    else
    {
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB7, v30); /*0x59a362*/
    }
    v28 = *((_BYTE *)v25 + 0x64) != 0; /*0x59a36d*/
    v25[0x11] = a4; /*0x59a372*/
    v31 = (float)(v28 + 1); /*0x59a380*/
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFB5, v31); /*0x59a388*/
    v29 = 0.0; /*0x59a38d*/
    Tile_SetFloat((Tile *)v25[0xA], (_DWORD *)0xFB3, 0.0); /*0x59a39b*/
    if ( *((_BYTE *)v25 + 0x61) ) /*0x59a3a0*/
    {
      v29 = sub_422DC0((ExtraDataList *)(v25[0x11] + 0x44)); /*0x59a3ad*/
      reference->unk11C = Double_To_SInt32(v29); /*0x59a3bd*/
    }
    ContainerMenu_Update(st5_0, st6_0); /*0x59a3c3*/
    sub_599200(v25, v29, 1, 0); /*0x59a3ce*/
    EnableMenu(v32, st5_0, st6_0, v29, 0); /*0x59a3d9*/
    return (void (__thiscall ***)(void *, signed int))XML; /*0x59a3df*/
  }
  else
  {
    if ( XML ) /*0x59a0ce*/
      (*(void (__thiscall **)(BSStringT *, int))XML->m_data)(XML, 1); /*0x59a0d8*/
    PrintError("Container Menu Creation Failed... Are your menu and art resources up to date?"); /*0x59a0df*/
    return 0; /*0x59a0e9*/
  }
}
