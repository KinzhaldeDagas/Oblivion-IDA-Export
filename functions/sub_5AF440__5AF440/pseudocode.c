BSStringT *__usercall sub_5AF440@<eax>(double a1@<st2>, double st6_0@<st1>, double st7_0@<st0>, TESObjectREFR *a4)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // edi
  double Depth; // st7
  Tile *File; // ebx
  int ParentMenu; // eax
  Menu *v9; // esi
  TileMenu *v10; // eax
  char *v11; // esi
  int EffectiveDoorLockLevel; // eax
  Tile *v14; // ecx
  char **v15; // eax
  char *v16; // eax
  void **v17; // ebp
  int v18; // ebx
  float *v19; // eax
  float *v20; // edi
  int v21; // edi
  int v22; // ebp
  char *v23; // edi
  void *v24; // eax
  float *v25; // eax
  double v26; // st7
  int *sound; // ebp
  _DWORD *v28; // edi
  int v29; // ebx
  double Float; // st7
  int v31; // eax
  _DWORD *v32; // ecx
  double v33; // st7
  int v34; // eax
  _DWORD *v35; // ecx
  double v36; // st7
  int v37; // eax
  _DWORD *v38; // ecx
  double v39; // st7
  int v40; // eax
  _DWORD *v41; // ecx
  double v42; // st7
  int v43; // eax
  double v44; // st7
  double v45; // st7
  int v46; // edx
  TESObjectREFR *v47; // ecx
  int ItemCount; // eax
  _DWORD *v49; // ecx
  TESKey *a2; // [esp+10h] [ebp-20h]
  float v51; // [esp+14h] [ebp-1Ch]
  float v52; // [esp+14h] [ebp-1Ch]
  float v53; // [esp+14h] [ebp-1Ch]
  float v54; // [esp+24h] [ebp-Ch]
  int v55; // [esp+24h] [ebp-Ch]
  Menu *v56; // [esp+28h] [ebp-8h]
  Tile *v57; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F6); /*0x5af448*/
  if ( OpenMenuTile ) /*0x5af452*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5af45c*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5af46d*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5af46f*/
  v54 = Depth; /*0x5af474*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\lockpick_menu.xml"); /*0x5af485*/
  v57 = File; /*0x5af489*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5af48d*/
  v9 = (Menu *)ParentMenu; /*0x5af492*/
  v56 = (Menu *)ParentMenu; /*0x5af496*/
  if ( !ParentMenu ) /*0x5af49a*/
    return 0; /*0x5af49a*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F6 ) /*0x5af4ae*/
  {
    if ( v9->members.tile ) /*0x5af944*/
      v9->__vftable->Destructor(v9, 1); /*0x5af952*/
    return 0; /*0x5af956*/
  }
  v10 = (TileMenu *)OblivionDynamicCast( /*0x5af4c3*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v9, st6_0, Depth, v10); /*0x5af4ce*/
  v11 = (char *)OblivionDynamicCast( /*0x5af4e7*/
                  v9,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &LockPickMenu `RTTI Type Descriptor',
                  0);
  if ( sub_5AF070(v11) ) /*0x5af4ee*/
  {
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5af524*/
      Tile_SetFloat(File, 0xFABu, v54); /*0x5af535*/
    v51 = (float)(LOBYTE(Singleton->unk008[0]) != 1); /*0x5af54e*/
    Tile_SetFloat(File, 0xFAEu, v51); /*0x5af556*/
    *((_DWORD *)v11 + 0xE) = a4; /*0x5af55f*/
    *((_DWORD *)v11 + 0xF) = TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35EC8]); /*0x5af574*/
    *((_DWORD *)v11 + 0xF) += TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]); /*0x5af588*/
    EffectiveDoorLockLevel = TESObjectREFR_GetEffectiveDoorLockLevel(a4); /*0x5af58d*/
    v14 = *((Tile **)v11 + 0xA); /*0x5af596*/
    v52 = (float)*((int *)v11 + 0xF); /*0x5af599*/
    *((_DWORD *)v11 + 0x12) = EffectiveDoorLockLevel; /*0x5af5a1*/
    Tile_SetFloat(v14, 0xFB1u, v52); /*0x5af5a4*/
    v15 = *(char ***)(4 * GetLockLevel(*((_DWORD *)v11 + 0x12)) + 0xB03E1C); /*0x5af5b2*/
    if ( v15 ) /*0x5af5be*/
      v16 = *v15; /*0x5af5c0*/
    else
      v16 = 0; /*0x5af5c4*/
    Tile_SetString(*((_DWORD **)v11 + 0xA), (_DWORD *)0xFB0, v16); /*0x5af5cf*/
    if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Security) <= 0x64 ) /*0x5af5e9*/
      v55 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Security); /*0x5af607*/
    else
      v55 = 0x64; /*0x5af5eb*/
    v53 = (float)v55; /*0x5af613*/
    Tile_SetFloat(*((Tile **)v11 + 0xA), 0xFB2u, v53); /*0x5af61b*/
    if ( GetLockLevel(*((_DWORD *)v11 + 0x12)) ) /*0x5af624*/
    {
      if ( GetLockLevel(*((_DWORD *)v11 + 0x12)) == LL_EASY ) /*0x5af648*/
      {
        *((_DWORD *)v11 + 0x13) = 2; /*0x5af64a*/
      }
      else if ( GetLockLevel(*((_DWORD *)v11 + 0x12)) == LL_AVERAGE ) /*0x5af662*/
      {
        *((_DWORD *)v11 + 0x13) = 3; /*0x5af664*/
      }
      else if ( GetLockLevel(*((_DWORD *)v11 + 0x12)) == LL_HARD ) /*0x5af67c*/
      {
        *((_DWORD *)v11 + 0x13) = 4; /*0x5af67e*/
      }
      else
      {
        *((_DWORD *)v11 + 0x13) = 5; /*0x5af687*/
      }
    }
    else
    {
      *((_DWORD *)v11 + 0x13) = 1; /*0x5af630*/
    }
    *((float *)v11 + 0x1E) = 0.0; /*0x5af691*/
    v17 = (void **)(v11 + 0x9C); /*0x5af694*/
    v18 = 5; /*0x5af69a*/
    do /*0x5af6ed*/
    {
      v19 = (float *)OblivionDynamicCast( /*0x5af6b2*/
                       *v17,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                       &Tile3D `RTTI Type Descriptor',
                       0);
      v20 = v19; /*0x5af6b7*/
      if ( v19 ) /*0x5af6be*/
      {
        v19[0x16] = 0.0; /*0x5af6c6*/
        sub_58FBA0((int)v19, a1, st6_0, 0.0, 0); /*0x5af6c9*/
        v21 = *((_DWORD *)v20 + 0x11); /*0x5af6ce*/
        if ( v21 ) /*0x5af6d3*/
        {
          if ( *(float *)(v21 + 0x30) > 0.0 ) /*0x5af6df*/
            *((float *)v11 + 0x1E) = *(float *)(v21 + 0x30); /*0x5af6e4*/
        }
      }
      v17 += 0xA; /*0x5af6e7*/
      --v18; /*0x5af6ea*/
    }
    while ( v18 ); /*0x5af6ed*/
    if ( 0.0 == *((float *)v11 + 0x1E) ) /*0x5af6f9*/
      *((float *)v11 + 0x1E) = flt_A6C7CC; /*0x5af701*/
    v22 = 4; /*0x5af704*/
    if ( *((int *)v11 + 0x13) <= 4 ) /*0x5af70c*/
    {
      v23 = v11 + 0x11C; /*0x5af70e*/
      do /*0x5af758*/
      {
        v24 = *((void **)v23 + 8); /*0x5af714*/
        v23[0x19] = 1; /*0x5af723*/
        *(float *)v23 = *((float *)v11 + 0x1E); /*0x5af72c*/
        v25 = (float *)OblivionDynamicCast( /*0x5af72f*/
                         v24,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                         &Tile3D `RTTI Type Descriptor',
                         0);
        if ( v25 ) /*0x5af739*/
        {
          *(float *)v23 = *((float *)v11 + 0x1E); /*0x5af740*/
          v26 = *((float *)v11 + 0x1E); /*0x5af744*/
          v25[0x16] = *((float *)v11 + 0x1E); /*0x5af747*/
          sub_58FBA0((int)v25, a1, st6_0, v26, 0); /*0x5af74a*/
        }
        --v22; /*0x5af74f*/
        v23 += 0xFFFFFFD8; /*0x5af752*/
      }
      while ( v22 >= *((_DWORD *)v11 + 0x13) ); /*0x5af758*/
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x5af760*/
    v28 = v11 + 0x80; /*0x5af763*/
    v29 = 5; /*0x5af769*/
    do /*0x5af793*/
    {
      if ( sound ) /*0x5af772*/
        v28[8] = PlaySound___(sound, "UILockTumblerMoveLP", 0x31, 1); /*0x5af784*/
      *v28 = 0xFFFFFFFF; /*0x5af787*/
      v28 += 0xA; /*0x5af78d*/
      --v29; /*0x5af790*/
    }
    while ( v29 ); /*0x5af793*/
    Float = Tile_GetFloat((_DWORD *)*((_DWORD *)v11 + 0x5E), 0xFB9); /*0x5af7a0*/
    v31 = Double_To_SInt32(Float); /*0x5af7a5*/
    v32 = *((_DWORD **)v11 + 0x5E); /*0x5af7aa*/
    *((_DWORD *)v11 + 0x26) = v31; /*0x5af7b5*/
    v33 = Tile_GetFloat(v32, 0xFBA); /*0x5af7bb*/
    v34 = Double_To_SInt32(v33); /*0x5af7c0*/
    v35 = *((_DWORD **)v11 + 0x5E); /*0x5af7c5*/
    *((_DWORD *)v11 + 0x30) = v34; /*0x5af7d0*/
    v36 = Tile_GetFloat(v35, 0xFBB); /*0x5af7d6*/
    v37 = Double_To_SInt32(v36); /*0x5af7db*/
    v38 = *((_DWORD **)v11 + 0x5E); /*0x5af7e0*/
    *((_DWORD *)v11 + 0x3A) = v37; /*0x5af7eb*/
    v39 = Tile_GetFloat(v38, 0xFBC); /*0x5af7f1*/
    v40 = Double_To_SInt32(v39); /*0x5af7f6*/
    v41 = *((_DWORD **)v11 + 0x5E); /*0x5af7fb*/
    *((_DWORD *)v11 + 0x44) = v40; /*0x5af806*/
    v42 = Tile_GetFloat(v41, 0xFBD); /*0x5af80c*/
    v43 = Double_To_SInt32(v42); /*0x5af811*/
    *((float *)v11 + 0x19) = flt_A5ACDC; /*0x5af81c*/
    *((_DWORD *)v11 + 0x4E) = v43; /*0x5af81f*/
    v44 = flt_A5ACC4; /*0x5af825*/
    *((_DWORD *)v11 + 0x14) = 5; /*0x5af82b*/
    *((float *)v11 + 0x1A) = v44; /*0x5af832*/
    *((_DWORD *)v11 + 0x15) = 0x12C; /*0x5af835*/
    v45 = flt_A57604; /*0x5af83c*/
    *((float *)v11 + 0x18) = flt_A57604; /*0x5af842*/
    *((float *)v11 + 0x1B) = v45; /*0x5af845*/
    *((float *)v11 + 0x17) = 1.0; /*0x5af84a*/
    *((float *)v11 + 0x1C) = flt_A372CC; /*0x5af853*/
    *((float *)v11 + 0x52) = (float)*((int *)v11 + 0x26); /*0x5af85c*/
    *((float *)v11 + 0x55) = flt_A6C7B4; /*0x5af868*/
    *((float *)v11 + 0x57) = flt_A6C7B0; /*0x5af874*/
    *((float *)v11 + 0x16) = flt_A37450; /*0x5af880*/
    *((float *)v11 + 0x1D) = flt_A468FC; /*0x5af889*/
    v46 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5af88c*/
    *((_DWORD *)v11 + 0x10) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5af894*/
    *((_DWORD *)v11 + 0x11) = v46; /*0x5af897*/
    Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, (char *)stru_B38920.value); /*0x5af8a9*/
    Tile_SetString(*((_DWORD **)v11 + 0xD), (_DWORD *)0xFAE, (char *)stru_B38928.value); /*0x5af8bd*/
    *((_DWORD *)v11 + 0x59) = *((_DWORD *)v11 + 0x58); /*0x5af8ca*/
    sub_583DF0(0); /*0x5af8d0*/
    sub_579320(0.0, 0.0); /*0x5af8de*/
    a2 = MEMORY[0xB35ECC]; /*0x5af8ec*/
    v47 = (TESObjectREFR *)reference; /*0x5af8ed*/
    LOBYTE(dword_B3B0B4[0xD0]) = 1; /*0x5af8f3*/
    ItemCount = TESObjectREFR_GetItemCount(v47, (TESForm *)a2); /*0x5af8fa*/
    v49 = *((_DWORD **)v11 + 0x5E); /*0x5af901*/
    if ( ItemCount ) /*0x5af908*/
      Tile_SetString(v49, (_DWORD *)0xFE6, "Lockpicking\\skeletonkeypick.nif"); /*0x5af90f*/
    else
      Tile_SetString(v49, (_DWORD *)0xFE6, "Lockpicking\\Pick.NIF"); /*0x5af91b*/
    if ( unk_B3B43D ) /*0x5af920*/
      sub_5C1000(st6_0); /*0x5af929*/
    EnableMenu(v56, a1, st6_0, 0.0, 0); /*0x5af934*/
    return (BSStringT *)v57; /*0x5af939*/
  }
  else
  {
    PrintError("LockPick Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5af4fc*/
    return 0; /*0x5af506*/
  }
}
