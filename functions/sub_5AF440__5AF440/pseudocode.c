BSStringT *__usercall sub_5AF440@<eax>(
        int a1@<ebx>,
        int ebp0@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double st7_0@<st0>,
        _BYTE *a8)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // edi
  double Depth; // st7
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v13; // esi
  TileMenu *v14; // eax
  char *v15; // esi
  int v17; // eax
  int v18; // eax
  Tile *v19; // ecx
  int v20; // eax
  char **v21; // eax
  char *v22; // eax
  void **v23; // ebp
  int v24; // ebx
  float *v25; // eax
  float *v26; // edi
  int v27; // edi
  int v28; // ebp
  char *v29; // edi
  void *v30; // eax
  float *v31; // eax
  double v32; // st7
  _DWORD *sound; // ebp
  _DWORD *v34; // edi
  int v35; // ebx
  double Float; // st7
  int v37; // eax
  _DWORD *v38; // ecx
  double v39; // st7
  int v40; // eax
  _DWORD *v41; // ecx
  double v42; // st7
  int v43; // eax
  _DWORD *v44; // ecx
  double v45; // st7
  int v46; // eax
  _DWORD *v47; // ecx
  double v48; // st7
  int v49; // eax
  double v50; // st7
  double v51; // st7
  unsigned int v52; // edx
  TESObjectREFR *v53; // ecx
  _DWORD *v54; // ecx
  int v55; // eax
  char v56; // bp
  _DWORD *a2; // [esp+10h] [ebp-20h]
  float v58; // [esp+14h] [ebp-1Ch]
  float v59; // [esp+14h] [ebp-1Ch]
  float v60; // [esp+14h] [ebp-1Ch]
  char v62; // [esp+14h] [ebp-1Ch]
  _DWORD *v64; // [esp+18h] [ebp-18h]
  _DWORD *v65; // [esp+18h] [ebp-18h]
  int v67; // [esp+1Ch] [ebp-14h]
  int v68; // [esp+1Ch] [ebp-14h]
  int v70; // [esp+20h] [ebp-10h]
  float v71; // [esp+24h] [ebp-Ch]
  int v72; // [esp+24h] [ebp-Ch]
  Menu *v73; // [esp+28h] [ebp-8h]
  BSStringT *v74; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x3F6);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v71 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, a5, a6, Depth, "Data\\Menus\\lockpick_menu.xml");
  v74 = XML;
  ParentMenu = Tile_GetParentMenu(XML);
  v13 = (Menu *)ParentMenu;
  v73 = (Menu *)ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3F6 )
  {
    if ( v13->members.tile )
      v13->__vftable->Destructor(v13, 1);
    return 0;
  }
  v14 = (TileMenu *)OblivionDynamicCast(
                      XML,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v13, a6, Depth, v14);
  v15 = (char *)OblivionDynamicCast(
                  v13,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &LockPickMenu `RTTI Type Descriptor',
                  0);
  if ( sub_5AF070(v15) )
  {
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v71);
    v58 = (float)(LOBYTE(Singleton->unk008[0]) != 1);
    Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAE, v58);
    *((_DWORD *)v15 + 0xE) = a8;
    TESObjectREF_GetItemCount((TESObjectREFR *)TESDataHandler_g_PlayerRef, TESDataHandler_g_Lockpick, a3, a4, a1);
    *((_DWORD *)v15 + 0xF) = v17;
    TESObjectREF_GetItemCount(
      (TESObjectREFR *)TESDataHandler_g_PlayerRef,
      TESDataHandler_g_SkeletonKey,
      (int)v64,
      v67,
      v70);
    *((_DWORD *)v15 + 0xF) += v18;
    sub_4D7780(a8);
    v19 = *((Tile **)v15 + 0xA);
    v59 = (float)*((int *)v15 + 0xF);
    *((_DWORD *)v15 + 0x12) = v20;
    Tile_SetFloat(v19, (_DWORD *)0xFB1, v59);
    v21 = *(char ***)(4 * GetLockLevel(*((_DWORD *)v15 + 0x12)) + 0xB03E1C);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0;
    Tile_SetString(*((_DWORD **)v15 + 0xA), (_DWORD *)0xFB0, v22);
    if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Security) <= 0x64 )
      v72 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
              (Actor *)TESDataHandler_g_PlayerRef,
              kActorVal_Security);
    else
      v72 = 0x64;
    v60 = (float)v72;
    Tile_SetFloat(*((Tile **)v15 + 0xA), (_DWORD *)0xFB2, v60);
    if ( GetLockLevel(*((_DWORD *)v15 + 0x12)) )
    {
      if ( GetLockLevel(*((_DWORD *)v15 + 0x12)) == 1 )
      {
        *((_DWORD *)v15 + 0x13) = 2;
      }
      else if ( GetLockLevel(*((_DWORD *)v15 + 0x12)) == 2 )
      {
        *((_DWORD *)v15 + 0x13) = 3;
      }
      else if ( GetLockLevel(*((_DWORD *)v15 + 0x12)) == 3 )
      {
        *((_DWORD *)v15 + 0x13) = 4;
      }
      else
      {
        *((_DWORD *)v15 + 0x13) = 5;
      }
    }
    else
    {
      *((_DWORD *)v15 + 0x13) = 1;
    }
    *((float *)v15 + 0x1E) = 0.0;
    v23 = (void **)(v15 + 0x9C);
    v24 = 5;
    do
    {
      v25 = (float *)OblivionDynamicCast(
                       *v23,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                       &Tile3D `RTTI Type Descriptor',
                       0);
      v26 = v25;
      if ( v25 )
      {
        v25[0x16] = 0.0;
        sub_58FBA0((int)v25, a5, a6, 0.0, 0);
        v27 = *((_DWORD *)v26 + 0x11);
        if ( v27 )
        {
          if ( *(float *)(v27 + 0x30) > 0.0 )
            *((float *)v15 + 0x1E) = *(float *)(v27 + 0x30);
        }
      }
      v23 += 0xA;
      --v24;
    }
    while ( v24 );
    if ( 0.0 == *((float *)v15 + 0x1E) )
      *((float *)v15 + 0x1E) = flt_A6C7CC;
    v28 = 4;
    if ( *((int *)v15 + 0x13) <= 4 )
    {
      v29 = v15 + 0x11C;
      do
      {
        v30 = *((void **)v29 + 8);
        v29[0x19] = 1;
        *(float *)v29 = *((float *)v15 + 0x1E);
        v31 = (float *)OblivionDynamicCast(
                         v30,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                         &Tile3D `RTTI Type Descriptor',
                         0);
        if ( v31 )
        {
          *(float *)v29 = *((float *)v15 + 0x1E);
          v32 = *((float *)v15 + 0x1E);
          v31[0x16] = *((float *)v15 + 0x1E);
          sub_58FBA0((int)v31, a5, a6, v32, 0);
        }
        --v28;
        v29 += 0xFFFFFFD8;
      }
      while ( v28 >= *((_DWORD *)v15 + 0x13) );
    }
    sound = OSGlobals->sound;
    v34 = v15 + 0x80;
    v35 = 5;
    do
    {
      if ( sound )
        v34[8] = PlaySound___(sound, "UILockTumblerMoveLP", 0x31, 1);
      *v34 = 0xFFFFFFFF;
      v34 += 0xA;
      --v35;
    }
    while ( v35 );
    Float = Tile_GetFloat((_DWORD *)*((_DWORD *)v15 + 0x5E), 0xFB9);
    v37 = Double_To_SInt32(Float);
    v38 = *((_DWORD **)v15 + 0x5E);
    *((_DWORD *)v15 + 0x26) = v37;
    v39 = Tile_GetFloat(v38, 0xFBA);
    v40 = Double_To_SInt32(v39);
    v41 = *((_DWORD **)v15 + 0x5E);
    *((_DWORD *)v15 + 0x30) = v40;
    v42 = Tile_GetFloat(v41, 0xFBB);
    v43 = Double_To_SInt32(v42);
    v44 = *((_DWORD **)v15 + 0x5E);
    *((_DWORD *)v15 + 0x3A) = v43;
    v45 = Tile_GetFloat(v44, 0xFBC);
    v46 = Double_To_SInt32(v45);
    v47 = *((_DWORD **)v15 + 0x5E);
    *((_DWORD *)v15 + 0x44) = v46;
    v48 = Tile_GetFloat(v47, 0xFBD);
    v49 = Double_To_SInt32(v48);
    *((float *)v15 + 0x19) = flt_A5ACDC;
    *((_DWORD *)v15 + 0x4E) = v49;
    v50 = flt_A5ACC4;
    *((_DWORD *)v15 + 0x14) = 5;
    *((float *)v15 + 0x1A) = v50;
    *((_DWORD *)v15 + 0x15) = 0x12C;
    v51 = flt_A57604;
    *((float *)v15 + 0x18) = flt_A57604;
    *((float *)v15 + 0x1B) = v51;
    *((float *)v15 + 0x17) = 1.0;
    *((float *)v15 + 0x1C) = flt_A372CC;
    *((float *)v15 + 0x52) = (float)*((int *)v15 + 0x26);
    *((float *)v15 + 0x55) = flt_A6C7B4;
    *((float *)v15 + 0x57) = flt_A6C7B0;
    *((float *)v15 + 0x16) = flt_A37450;
    *((float *)v15 + 0x1D) = flt_A468FC;
    v52 = Seed;
    *((_DWORD *)v15 + 0x10) = Seed;
    *((_DWORD *)v15 + 0x11) = v52;
    Tile_SetString(*((_DWORD **)v15 + 0xB), (_DWORD *)0xFAE, (char *)dword_B38920);
    Tile_SetString(*((_DWORD **)v15 + 0xD), (_DWORD *)0xFAE, (char *)dword_B38928);
    *((_DWORD *)v15 + 0x59) = *((_DWORD *)v15 + 0x58);
    sub_583DF0(0);
    sub_579320(0.0, 0.0);
    a2 = (_DWORD *)TESDataHandler_g_SkeletonKey;
    v53 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    byte_B3B3F4 = 1;
    TESObjectREF_GetItemCount(v53, (int)a2, ebp0, (int)v65, v68);
    v54 = *((_DWORD **)v15 + 0x5E);
    v56 = v62;
    if ( v55 )
      Tile_SetString(v54, (_DWORD *)0xFE6, "Lockpicking\\skeletonkeypick.nif");
    else
      Tile_SetString(v54, (_DWORD *)0xFE6, "Lockpicking\\Pick.NIF");
    if ( byte_B3B43D )
      sub_5C1000(a5, a6, v56);
    EnableMenu(v73, a5, a6, 0.0, 0);
    return v74;
  }
  else
  {
    PrintError("LockPick Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
}
