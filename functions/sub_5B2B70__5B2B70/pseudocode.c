void __usercall sub_5B2B70(double a1@<st2>, double st6_0@<st1>)
{
  Tile *OpenMenuTile; // eax
  Menu *ParentMenu; // eax
  Menu *v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned int **v7; // esi
  int v8; // edx
  unsigned int *v9; // ebx
  Actor *v10; // ecx
  TESForm *ActorBaseForm; // eax
  EntryData *InventoryEntryOfItem; // eax
  EntryData *v13; // ebx
  _BYTE *v14; // eax
  int v15; // edx
  int *v16; // esi
  EntryData **v17; // eax
  TESForm *v18; // edx
  EntryData **v19; // eax
  TESForm *v20; // edx
  Menu *v21; // esi
  _DWORD *id; // ecx
  void (__thiscall **p_HandleMouseout)(Menu *, unsigned int, Tile *); // ebx
  double Float; // st7
  int v25; // eax
  _DWORD *v26; // ebx
  Tile *v27; // eax
  int *v28; // ecx
  Tile *v29; // esi
  int v30; // ecx
  Tile *v31; // eax
  Menu *v32; // eax
  int v33; // ecx
  int v34; // ecx
  Tile *v35; // eax
  int v36; // edi
  _DWORD *v37; // ebx
  _DWORD *v38; // esi
  bool v39; // al
  int v40; // ecx
  BOOL v41; // edi
  char v42; // al
  int v43; // eax
  int v44; // edi
  char v45; // al
  int v46; // eax
  int v47; // edi
  int (__thiscall *v48)(_DWORD *); // eax
  BOOL v49; // edi
  int v50; // edi
  int v51; // edi
  const char *v52; // eax
  const char *v53; // eax
  double v54; // st7
  int v55; // eax
  PlayerCharacter *v56; // ecx
  bool v57; // zf
  int v58; // ebx
  Tile *v59; // esi
  char *v60; // edi
  CHAR *v61; // eax
  Menu *v62; // edi
  BSStringT *v63; // esi
  double v64; // st7
  int *v65; // edi
  ExtraDataList ***v66; // esi
  void *v67; // eax
  int v68; // eax
  _DWORD *v69; // ebx
  char v70; // al
  int v71; // eax
  char v72; // al
  int v73; // eax
  CHAR *v74; // eax
  CHAR *v75; // eax
  double (__thiscall **v76)(_DWORD *, _DWORD); // eax
  double v77; // st7
  int v78; // eax
  PlayerCharacter *v79; // ecx
  int v80; // eax
  MenuVtbl *vftable; // eax
  void (__thiscall *Destructor)(Menu *, bool); // ebx
  Menu *v83; // edi
  int *v84; // esi
  const char *v85; // eax
  Menu *v86; // edi
  double v87; // st7
  InterfaceManager *v88; // eax
  void *v89; // ecx
  _DWORD *v90; // eax
  _DWORD *v91; // edi
  int v92; // edi
  int (__thiscall *v93)(_DWORD *); // edx
  _DWORD *v94; // edi
  _DWORD *v95; // eax
  int v96; // ecx
  Menu *v97; // ebx
  Tile *v98; // ecx
  double v99; // st7
  _DWORD *v100; // esi
  _DWORD *v101; // ebx
  float (__thiscall *GetSpellEffectiveness)(MagicCaster *, bool, float); // eax
  const char *value; // esi
  double v104; // st7
  char *v105; // esi
  Tile **Singleton; // eax
  EntryData *v107; // [esp+1Ch] [ebp-208h]
  unsigned int v108; // [esp+1Ch] [ebp-208h]
  char *v109; // [esp+1Ch] [ebp-208h]
  TESObjectREFR *v110; // [esp+1Ch] [ebp-208h]
  float v111; // [esp+1Ch] [ebp-208h]
  float v112; // [esp+1Ch] [ebp-208h]
  float v113; // [esp+1Ch] [ebp-208h]
  float v114; // [esp+1Ch] [ebp-208h]
  float v115; // [esp+1Ch] [ebp-208h]
  float v116; // [esp+1Ch] [ebp-208h]
  Tile *v117; // [esp+1Ch] [ebp-208h]
  float v118; // [esp+1Ch] [ebp-208h]
  float v119; // [esp+1Ch] [ebp-208h]
  float v120; // [esp+1Ch] [ebp-208h]
  float v121; // [esp+1Ch] [ebp-208h]
  float v122; // [esp+1Ch] [ebp-208h]
  float v123; // [esp+1Ch] [ebp-208h]
  float v124; // [esp+1Ch] [ebp-208h]
  float v125; // [esp+1Ch] [ebp-208h]
  _DWORD *v126; // [esp+20h] [ebp-204h]
  _DWORD *v127; // [esp+24h] [ebp-200h]
  _DWORD *v128; // [esp+28h] [ebp-1FCh]
  _DWORD *v129; // [esp+2Ch] [ebp-1F8h]
  char v130; // [esp+30h] [ebp-1F4h]
  bool v131; // [esp+57h] [ebp-1CDh]
  char *Str1; // [esp+58h] [ebp-1CCh] BYREF
  BSStringT v133; // [esp+5Ch] [ebp-1C8h] BYREF
  TESForm *i; // [esp+64h] [ebp-1C0h]
  int maxFocus; // [esp+68h] [ebp-1BCh] BYREF
  TileMenu *v136; // [esp+6Ch] [ebp-1B8h]
  Tile *v137; // [esp+70h] [ebp-1B4h] BYREF
  int v138; // [esp+74h] [ebp-1B0h]
  Menu *v139; // [esp+78h] [ebp-1ACh]
  int TotalEntryCountForITem; // [esp+7Ch] [ebp-1A8h]
  int *v141; // [esp+80h] [ebp-1A4h]
  Menu *v142; // [esp+84h] [ebp-1A0h]
  void (__thiscall *AttachTileByID)(Menu *, UInt32, Tile *); // [esp+88h] [ebp-19Ch]
  TileMenu *tile; // [esp+8Ch] [ebp-198h]
  Tile *root; // [esp+90h] [ebp-194h]
  char a2[8]; // [esp+94h] [ebp-190h] BYREF
  char v147[268]; // [esp+D4h] [ebp-150h] BYREF
  int v148; // [esp+220h] [ebp-4h]

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FE); /*0x5b2bb5*/
  root = OpenMenuTile; /*0x5b2bc1*/
  if ( OpenMenuTile )
  {
    ParentMenu = (Menu *)Tile_GetParentMenu(OpenMenuTile); /*0x5b2bcd*/
    v57 = dword_B14368 == 0; /*0x5b2bd2*/
    v4 = ParentMenu; /*0x5b2bd8*/
    v139 = ParentMenu; /*0x5b2bda*/
    if ( !v57 ) /*0x5b2bde*/
    {
      do /*0x5b2c39*/
      {
        v5 = dword_B14360; /*0x5b2be0*/
        v6 = *(_DWORD *)dword_B14360; /*0x5b2be5*/
        dword_B14360 = v6; /*0x5b2be9*/
        if ( v6 ) /*0x5b2bef*/
          *(_DWORD *)(v6 + 4) = 0; /*0x5b2bf1*/
        else
          dword_B14364 = 0; /*0x5b2bf6*/
        v7 = *(unsigned int ***)(v5 + 8); /*0x5b2bfc*/
        ((void (__thiscall *)(void ***, int))g_MagicMenuMagicItemList[2])(&g_MagicMenuMagicItemList, v5); /*0x5b2c0d*/
        --dword_B14368; /*0x5b2c0f*/
        if ( v7 ) /*0x5b2c18*/
        {
          v9 = *v7; /*0x5b2c1a*/
          if ( *v7 ) /*0x5b2c1a*/
          {
            ContainerEntryExtraData_DestroyDataTable(*v7, v8); /*0x5b2c22*/
            FormHeapFree((unsigned int)v9); /*0x5b2c28*/
          }
          FormHeapFree((unsigned int)v7); /*0x5b2c31*/
        }
      }
      while ( dword_B14368 ); /*0x5b2c39*/
      v4 = v139; /*0x5b2c41*/
    }
    v10 = (Actor *)reference; /*0x5b2c45*/
    if ( reference )
    {
      tile = v4[1].members.tile; /*0x5b2c57*/
      ActorBaseForm = Actor_GetActorBaseForm(v10, 0); /*0x5b2c5b*/
      maxFocus = (int)&ActorBaseForm[3].member.modlist; /*0x5b2c6a*/
      v4[1].members.fadeState = 0; /*0x5b2c6e*/
      BSSimpleList_SortViaArrayAndRebuild( /*0x5b2c71*/
        (EntryData *)&ActorBaseForm[3].member.modlist,
        (int (__cdecl *)(tListVoid *, tListVoid *))sub_5B2430);
      TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)reference, 0); /*0x5b2c84*/
      for ( i = 0; (int)i < TotalEntryCountForITem; i = (TESForm *)((char *)i + 1) ) /*0x5b2c8c*/
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, i, 0); /*0x5b2c9e*/
        v13 = InventoryEntryOfItem; /*0x5b2ca3*/
        if ( InventoryEntryOfItem ) /*0x5b2ca7*/
        {
          v14 = OblivionDynamicCast( /*0x5b2cbd*/
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          if ( v14 && (v14[0x88] & 1) != 0 && *((_DWORD *)v14 + 0x19) ) /*0x5b2cda*/
          {
            v16 = (int *)dword_B14360; /*0x5b2ce3*/
            if ( dword_B14360 ) /*0x5b2ce3*/
            {
              while ( 1 ) /*0x5b2cf7*/
              {
                v107 = *(EntryData **)v16[2]; /*0x5b2cf7*/
                v141 = v16; /*0x5b2cf8*/
                v16 = (int *)*v16; /*0x5b2cfc*/
                if ( sub_584500((char *)&dword_B3B0B4[0xD4], (int)v13, v13, v107) <= 0 ) /*0x5b2d0b*/
                  break; /*0x5b2d0b*/
                if ( !v16 ) /*0x5b2d0f*/
                  goto LABEL_21; /*0x5b2d0f*/
              }
              v19 = (EntryData **)FormHeapAlloc(8u); /*0x5b2d2c*/
              if ( v19 ) /*0x5b2d36*/
              {
                v20 = i; /*0x5b2d38*/
                *v19 = v13; /*0x5b2d3c*/
                v19[1] = (EntryData *)v20; /*0x5b2d3e*/
              }
              else
              {
                v19 = 0; /*0x5b2d43*/
              }
              v137 = (Tile *)v19; /*0x5b2d49*/
              NiTPointerList__InsertBeforePosition(&g_MagicMenuMagicItemList, (int)v141, &v137); /*0x5b2d58*/
            }
            else
            {
LABEL_21:
              v17 = (EntryData **)FormHeapAlloc(8u); /*0x5b2d11*/
              if ( v17 ) /*0x5b2d1d*/
              {
                v18 = i; /*0x5b2d1f*/
                *v17 = v13; /*0x5b2d23*/
                v17[1] = (EntryData *)v18; /*0x5b2d25*/
              }
              else
              {
                v17 = 0; /*0x5b2d5f*/
              }
              v137 = (Tile *)v17; /*0x5b2d61*/
              NiTPointerList__AddTail((BSTextureManager *)&g_MagicMenuMagicItemList, (void **)&v137); /*0x5b2d6f*/
            }
          }
          else
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v13, v15); /*0x5b2d78*/
            FormHeapFree((unsigned int)v13); /*0x5b2d7e*/
          }
        }
      }
      v21 = v139; /*0x5b2d9b*/
      id = (_DWORD *)v139[1].members.id; /*0x5b2d9f*/
      if ( id ) /*0x5b2da4*/
      {
        v108 = v139[1].members.id; /*0x5b2da8*/
        p_HandleMouseout = &v139->__vftable->HandleMouseout; /*0x5b2dae*/
        Float = Tile_GetFloat(id, 0xFA8); /*0x5b2db1*/
        v25 = Double_To_SInt32(Float); /*0x5b2db6*/
        (*p_HandleMouseout)(v21, v25, (Tile *)v108); /*0x5b2dc0*/
      }
      v26 = *((_DWORD **)tile + 0xD); /*0x5b2dc6*/
      while ( v26 ) /*0x5b2dcb*/
      {
        v27 = (Tile *)v26[2]; /*0x5b2dd3*/
        v26 = (_DWORD *)*v26; /*0x5b2dd5*/
        v137 = v27; /*0x5b2dde*/
        if ( Tile_GetFloat(v27, 0xFA8) >= dbl_A6C1E0 ) /*0x5b2df2*/
          Tile_SetFloat(v137, 0xFAAu, flt_A690E0); /*0x5b2e07*/
      }
      Tile_SetFloat(v21->members.tile, 0xFAFu, flt_A53954); /*0x5b2e22*/
      Tile_SetFloat(v21->members.tile, 0xFB0u, flt_A53954); /*0x5b2e39*/
      Tile_SetFloat(v21->members.tile, 0xFB1u, flt_A53954); /*0x5b2e50*/
      Tile_SetFloat(v21->members.tile, 0xFB2u, flt_A53954); /*0x5b2e67*/
      i = 0; /*0x5b2e6f*/
      TotalEntryCountForITem = 1; /*0x5b2e73*/
      v138 = 0; /*0x5b2e7b*/
      v136 = 0; /*0x5b2e7f*/
      BSSimpleList_Clear(&v21[1].members.templateContextTile); /*0x5b2e83*/
      sub_5B2B30((void **)&v21->__vftable); /*0x5b2e8a*/
      v28 = (int *)dword_B14360; /*0x5b2e8f*/
      v142 = (Menu *)((char *)v21 + 0x40); /*0x5b2e9c*/
      v141 = v28; /*0x5b2ea0*/
      v137 = (Tile *)maxFocus; /*0x5b2ea4*/
      while ( 1 )
      {
        v29 = v137; /*0x5b2ea8*/
        if ( !v137 ) /*0x5b2eae*/
          goto LABEL_50; /*0x5b2eae*/
        v30 = 0; /*0x5b2eb0*/
        v31 = v137; /*0x5b2eb2*/
        do /*0x5b2ec0*/
        {
          if ( *(_DWORD *)v31 ) /*0x5b2eb4*/
            ++v30; /*0x5b2eb8*/
          v31 = *((Tile **)v31 + 1); /*0x5b2ebb*/
        }
        while ( v31 ); /*0x5b2ec0*/
        if ( !v30 )
        {
LABEL_50:
          if ( !v141 )
          {
            v32 = v142; /*0x5b2ecc*/
            if ( !v142 ) /*0x5b2ed2*/
              goto LABEL_129; /*0x5b2ed2*/
            v33 = 0; /*0x5b2ed8*/
            do /*0x5b2eec*/
            {
              if ( v32->__vftable ) /*0x5b2ee0*/
                ++v33; /*0x5b2ee4*/
              v32 = (Menu *)v32->members.tile; /*0x5b2ee7*/
            }
            while ( v32 ); /*0x5b2eec*/
            if ( !v33 )
            {
LABEL_129:
              v97 = v139; /*0x5b363d*/
              v98 = v139[1].members.tile; /*0x5b3641*/
              *(_DWORD *)&v133.m_dataLen = (char *)i + 0xFFFFFFFF; /*0x5b3647*/
              v99 = (double)((int)&i[0xFFFFFFFF].member.modlist.next + 3); /*0x5b364b*/
              v125 = v99; /*0x5b3650*/
              Tile_SetFloat(v98, 0xFAEu, v125); /*0x5b3658*/
              v100 = *((_DWORD **)tile + 0xD); /*0x5b3661*/
              if ( v100 ) /*0x5b3666*/
              {
                do /*0x5b3699*/
                {
                  v101 = (_DWORD *)v100[2]; /*0x5b3668*/
                  v100 = (_DWORD *)*v100; /*0x5b366e*/
                  v99 = Tile_GetFloat(v101, 0xFAA); /*0x5b3677*/
                  if ( v99 == flt_A690E0 ) /*0x5b3687*/
                  {
                    if ( v101 ) /*0x5b368b*/
                      (*(void (__thiscall **)(_DWORD *, int))*v101)(v101, 1); /*0x5b3695*/
                  }
                }
                while ( v100 ); /*0x5b3699*/
                v97 = v139; /*0x5b369b*/
              }
              sub_5B1A40((int)v97, a1, st6_0, v99, (int)v97[2].__vftable); /*0x5b36a5*/
              Str1 = 0; /*0x5b36aa*/
              v133.m_data = 0; /*0x5b36ae*/
              GetSpellEffectiveness = reference->super.super.magicCaster.vtbl->GetSpellEffectiveness; /*0x5b36c3*/
              value = stru_B39518.value; /*0x5b36c6*/
              v148 = 1; /*0x5b36d4*/
              v104 = ((double (__stdcall *)(_DWORD, _DWORD))GetSpellEffectiveness)(0, 0.0); /*0x5b36df*/
              BSStringT_Static_Format((BSStringT *)&Str1, "%s: %0.0f%%", value, v104 * fCostant_100);
              v105 = Str1; /*0x5b36fd*/
              Tile_SetString(root, (_DWORD *)0xFB4, Str1); /*0x5b3711*/
              Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5b371a*/
              sub_57D730(Singleton, 0); /*0x5b3724*/
              FormHeapFree((unsigned int)v105); /*0x5b372a*/
              return; /*0x5b372a*/
            }
          }
        }
        Str1 = 0; /*0x5b2f00*/
        v133.m_data = 0; /*0x5b2f04*/
        BSStringT_Set((BSStringT *)&Str1, EmptyString, 0); /*0x5b2f0e*/
        v148 = 0; /*0x5b2f15*/
        AttachTileByID = 0; /*0x5b2f1c*/
        v131 = 0; /*0x5b2f20*/
        maxFocus = 0xFFFFFFFF; /*0x5b2f25*/
        if ( !v29 ) /*0x5b2f2d*/
          goto LABEL_88; /*0x5b2f2d*/
        v34 = 0; /*0x5b2f33*/
        v35 = v29; /*0x5b2f35*/
        do /*0x5b2f43*/
        {
          if ( *(_DWORD *)v35 ) /*0x5b2f37*/
            ++v34; /*0x5b2f3b*/
          v35 = *((Tile **)v35 + 1); /*0x5b2f3e*/
        }
        while ( v35 ); /*0x5b2f43*/
        if ( v34 )
        {
          v36 = *(_DWORD *)v137; /*0x5b2f51*/
          v57 = *(_DWORD *)v137 == 0; /*0x5b2f58*/
          v137 = *((Tile **)v137 + 1); /*0x5b2f5a*/
          if ( v57
            || (v37 = (_DWORD *)(v36 + 0x24),
                !EffectItemList_GetStrongestItem(
                   (_DWORD *)(v36 + 0x24),
                   3,
                   0,
                   (int)v126,
                   (int)v127,
                   (int)v128,
                   (int)v129,
                   v130)) )
          {
            v148 = 0xFFFFFFFF; /*0x5b31b1*/
            FormHeapFree((unsigned int)Str1); /*0x5b31bc*/
            Str1 = 0; /*0x5b31c4*/
            v133.m_data = 0; /*0x5b31cd*/
          }
          else
          {
            v38 = (_DWORD *)(v36 + 0x18); /*0x5b2f7f*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v36 + 0x18) + 0x18))(v36 + 0x18) != 1
              && (*(int (__thiscall **)(int))(*v38 + 0x18))(v36 + 0x18) != 4 )
            {
              BSSimpleList_PushBack(&v139[1].members.templateContextTile, v36); /*0x5b2fa9*/
              v136 = (TileMenu *)((char *)v136 + 1); /*0x5b2fae*/
              v39 = EffectItemList_HasOnTarget(v36 + 0x24); /*0x5b2fb5*/
              v40 = v36 + 0x24; /*0x5b2fbc*/
              v41 = v39; /*0x5b2fc2*/
              if ( EffectItemList_HasOnTarget(v40) || (EffectItemList_HasTouchEffect(v37), !v42) ) /*0x5b2fd6*/
                v43 = 0; /*0x5b2fdf*/
              else
                v43 = 2; /*0x5b2fd8*/
              v44 = v43 + v41; /*0x5b2fe3*/
              if ( EffectItemList_HasOnTarget((int)v37) || (EffectItemList_HasTouchEffect(v37), v45) ) /*0x5b2ff7*/
                v46 = 0; /*0x5b3000*/
              else
                v46 = 4; /*0x5b2ff9*/
              v47 = v46 + v44; /*0x5b3004*/
              v48 = *(int (__thiscall **)(_DWORD *))(*v38 + 0x18); /*0x5b3006*/
              v138 = v47; /*0x5b300b*/
              v49 = v48(v38) == 2; /*0x5b301e*/
              v50 = ((*(int (__thiscall **)(_DWORD *))(*v38 + 0x18))(v38) != 3 ? 0 : 2) + v49;
              v51 = ((*(int (__thiscall **)(_DWORD *))(*v38 + 0x18))(v38) != 0 ? 0 : 4) + v50;
              TotalEntryCountForITem = ((*(int (__thiscall **)(_DWORD *))(*v38 + 0x18))(v38) != 5 ? 0 : 4) + v51;
              v52 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem( /*0x5b3072*/
                                                   v37,
                                                   3,
                                                   0,
                                                   (int)v126,
                                                   (int)v127,
                                                   (int)v128,
                                                   (int)v129,
                                                   v130)
                                               + 0x1C)
                                   + 0x48);
              if ( !v52 ) /*0x5b3077*/
                v52 = EmptyString; /*0x5b3079*/
              _sprintf(v147, "%s\\%s", "Icons", v52); /*0x5b3091*/
              v53 = (const char *)v38[1]; /*0x5b3096*/
              if ( !v53 ) /*0x5b309e*/
                v53 = EmptyString; /*0x5b30a0*/
              BSStringT_Set((BSStringT *)&Str1, v53, 0); /*0x5b30ac*/
              v54 = ((double (__thiscall *)(_DWORD *, PlayerCharacter *))*(_DWORD *)*v37)(v37, reference); /*0x5b30bd*/
              v55 = Double_To_SInt32(v54); /*0x5b30bf*/
              v56 = reference; /*0x5b30c4*/
              AttachTileByID = (void (__thiscall *)(Menu *, UInt32, Tile *))v55; /*0x5b30ca*/
              v57 = v38 == (_DWORD *)Player_GetCurrentMagicItem(v56); /*0x5b30d3*/
LABEL_74:
              v131 = v57; /*0x5b30d5*/
              goto LABEL_75; /*0x5b30d5*/
            }
            v109 = Str1; /*0x5b31a6*/
LABEL_109:
            v148 = 0xFFFFFFFF; /*0x5b33a1*/
            FormHeapFree((unsigned int)v109); /*0x5b33ac*/
            Str1 = 0; /*0x5b33b6*/
            v133.m_data = 0; /*0x5b33bf*/
          }
        }
        else
        {
LABEL_88:
          if ( v141 ) /*0x5b31dd*/
          {
            v65 = (int *)v141[2]; /*0x5b31e7*/
            v66 = (ExtraDataList ***)*v65; /*0x5b31ea*/
            v67 = *(void **)(*v65 + 8); /*0x5b31f3*/
            v141 = (int *)*v141; /*0x5b3203*/
            *(_DWORD *)&v133.m_dataLen = OblivionDynamicCast( /*0x5b320c*/
                                           v67,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                           &TESObjectBOOK `RTTI Type Descriptor',
                                           0);
            v68 = *(_DWORD *)(*(_DWORD *)&v133.m_dataLen + 0x64); /*0x5b3210*/
            if ( v68 ) /*0x5b3218*/
            {
              v69 = (_DWORD *)(v68 + 0x24); /*0x5b321e*/
              v138 = EffectItemList_HasOnTarget(v68 + 0x24); /*0x5b3230*/
              if ( EffectItemList_HasOnTarget((int)v69) || (EffectItemList_HasTouchEffect(v69), !v70) ) /*0x5b3246*/
                v71 = 0; /*0x5b324f*/
              else
                v71 = 2; /*0x5b3248*/
              v138 += v71; /*0x5b3251*/
              if ( EffectItemList_HasOnTarget((int)v69) || (EffectItemList_HasTouchEffect(v69), v72) ) /*0x5b3269*/
                v73 = 0; /*0x5b3272*/
              else
                v73 = 4; /*0x5b326b*/
              v138 += v73; /*0x5b3274*/
              v110 = (TESObjectREFR *)reference; /*0x5b327d*/
              TotalEntryCountForITem = 8; /*0x5b3280*/
              v74 = sub_4851B0(v66, v110); /*0x5b3288*/
              _sprintf(v147, "%s\\%s", "Icons", v74); /*0x5b32a0*/
              v75 = sub_488DF0((EntryData *)v66); /*0x5b32aa*/
              BSStringT_Set((BSStringT *)&Str1, v75, 0); /*0x5b32b6*/
              v76 = (double (__thiscall **)(_DWORD *, _DWORD))*v69; /*0x5b32be*/
              maxFocus = v65[1]; /*0x5b32c0*/
              v77 = (*v76)(v69, 0); /*0x5b32ca*/
              v78 = Double_To_SInt32(v77); /*0x5b32cc*/
              v79 = reference; /*0x5b32d1*/
              AttachTileByID = (void (__thiscall *)(Menu *, UInt32, Tile *))v78; /*0x5b32d7*/
              v80 = sub_65D4C0(v79); /*0x5b32db*/
              v57 = *(_DWORD *)&v133.m_dataLen == v80; /*0x5b32e0*/
              goto LABEL_74; /*0x5b32e4*/
            }
          }
          else if ( v142 ) /*0x5b32ed*/
          {
            vftable = v142->__vftable; /*0x5b32f7*/
            if ( v142->__vftable ) /*0x5b32f7*/
            {
              Destructor = vftable->Destructor; /*0x5b3301*/
              v83 = v142; /*0x5b3305*/
              if ( vftable->Destructor ) /*0x5b3301*/
              {
                v136 = (TileMenu *)((char *)v136 + 1); /*0x5b3313*/
                if ( v142 == (Menu *)&v139[1].members.unk18 ) /*0x5b331d*/
                  v139[2].members.tile = v136; /*0x5b3323*/
                v84 = *((int **)Destructor + 3); /*0x5b3326*/
                v85 = *(const char **)(v84[7] + 0x48); /*0x5b332c*/
                v138 = 8; /*0x5b3331*/
                TotalEntryCountForITem = 0x10; /*0x5b3339*/
                if ( !v85 ) /*0x5b3341*/
                  v85 = EmptyString; /*0x5b3343*/
                _sprintf(v147, "%s\\%s", "Icons", v85); /*0x5b335b*/
                EffectItem_GetQualifiedName_SkillAttr(v84, (int)a2); /*0x5b336a*/
                BSStringT_Set((BSStringT *)&Str1, a2, 0); /*0x5b337a*/
                AttachTileByID = v83->__vftable->AttachTileByID; /*0x5b3384*/
                v131 = 0; /*0x5b3388*/
              }
              v142 = (Menu *)v83->members.tile; /*0x5b3392*/
              if ( !Destructor ) /*0x5b3396*/
              {
                v109 = Str1; /*0x5b33a0*/
                goto LABEL_109; /*0x5b33a0*/
              }
            }
          }
LABEL_75:
          v58 = *((_DWORD *)tile + 0xE); /*0x5b30da*/
          if ( v58 ) /*0x5b30e3*/
          {
            while ( 1 ) /*0x5b30e5*/
            {
              v59 = *(Tile **)(v58 + 8); /*0x5b30e5*/
              v58 = *(_DWORD *)(v58 + 4); /*0x5b30eb*/
              if ( Tile_GetFloat(v59, 0xFAA) == flt_A690E0 ) /*0x5b3105*/
              {
                if ( sub_588C10(v59, 0xFAF) ) /*0x5b310e*/
                {
                  v60 = Str1; /*0x5b3117*/
                  if ( Str1 ) /*0x5b311d*/
                  {
                    v61 = sub_588C10(v59, 0xFAF); /*0x5b3126*/
                    if ( v61 ) /*0x5b312d*/
                    {
                      if ( !CRT_StricmpLocaleDispatch(v60, v61) ) /*0x5b3131*/
                        break; /*0x5b3131*/
                    }
                  }
                }
              }
              if ( !v58 ) /*0x5b3143*/
                goto LABEL_82; /*0x5b3143*/
            }
            v86 = v139; /*0x5b33cd*/
            sub_5B1430(v59, 0xFFFFFFFF, 0xFFFFFFFF, (int)AttachTileByID); /*0x5b33d9*/
            if ( maxFocus == 0xFFFFFFFF ) /*0x5b33e6*/
              v87 = (double)(int)v136; /*0x5b33ee*/
            else
              v87 = (double)maxFocus; /*0x5b33e8*/
            v111 = v87; /*0x5b33f2*/
            Tile_SetFloat(v59, 0xFBBu, v111); /*0x5b33fa*/
            Tile_SetString(v59, (_DWORD *)0xFB4, v147); /*0x5b340e*/
            v112 = (float)TotalEntryCountForITem; /*0x5b341a*/
            Tile_SetFloat(v59, 0xFB5u, v112); /*0x5b3422*/
            v113 = (float)v138; /*0x5b342e*/
            Tile_SetFloat(v59, 0xFB7u, v113); /*0x5b3436*/
            *(_DWORD *)&v133.m_dataLen = v131 + 1; /*0x5b344c*/
            v114 = (float)*(int *)&v133.m_dataLen; /*0x5b3454*/
            Tile_SetFloat(v59, 0xFB8u, v114); /*0x5b345c*/
            *(_DWORD *)&v133.m_dataLen = (char *)v136 + 0xFFFFFFFF; /*0x5b3468*/
            v115 = (float)(int)((int)v136 + 0xFFFFFFFF); /*0x5b3473*/
            Tile_SetFloat(v59, 0xFB9u, v115); /*0x5b347b*/
            v116 = (float)(int)i; /*0x5b3487*/
            Tile_SetFloat(v59, 0xFAAu, v116); /*0x5b348f*/
            if ( v131 ) /*0x5b3496*/
            {
              v117 = root; /*0x5b349c*/
              maxFocus = 0x80000000; /*0x5b34a6*/
              v88 = InterfaceManager_GetSingleton(0, 1); /*0x5b34ae*/
              InterfaceManager::ScanForMaxFocus(v88, &maxFocus, v117); /*0x5b34b8*/
              *(_DWORD *)&v133.m_dataLen = maxFocus + 1; /*0x5b34c4*/
              v118 = (float)(maxFocus + 1); /*0x5b34cf*/
              Tile_SetFloat(v59, 0xFF0u, v118); /*0x5b34d7*/
              v86[1].members.fadeState = (OblivionMenuFadeState)v59; /*0x5b34dc*/
            }
            v89 = (void *)(*((_DWORD *)v59 + 4) + 0x30); /*0x5b34e2*/
            v90 = *(_DWORD **)(*((_DWORD *)v59 + 4) + 0x34); /*0x5b34e5*/
            if ( v90 ) /*0x5b34ea*/
            {
              while ( 1 ) /*0x5b34f0*/
              {
                v57 = v59 == (Tile *)v90[2]; /*0x5b34f0*/
                v91 = v90; /*0x5b34f6*/
                v90 = (_DWORD *)*v90; /*0x5b34f8*/
                if ( v57 ) /*0x5b34fa*/
                  break; /*0x5b34fa*/
                if ( !v90 ) /*0x5b34fe*/
                  goto LABEL_118; /*0x5b34fe*/
              }
            }
            else
            {
LABEL_118:
              v91 = 0; /*0x5b3500*/
            }
            *(_DWORD *)&v133.m_dataLen = v91; /*0x5b3504*/
            if ( v91 ) /*0x5b3508*/
              NiTPointerList_RemoveNode(v89, (void **)&v133.m_dataLen); /*0x5b350f*/
            v92 = *((_DWORD *)v59 + 4); /*0x5b3514*/
            v93 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v92 + 0x30) + 4); /*0x5b351a*/
            v94 = (_DWORD *)(v92 + 0x30); /*0x5b351d*/
            v95 = (_DWORD *)v93(v94); /*0x5b3522*/
            v95[2] = v59; /*0x5b3524*/
            v95[1] = 0; /*0x5b3527*/
            *v95 = v94[1]; /*0x5b3531*/
            v96 = v94[1]; /*0x5b3533*/
            if ( v96 ) /*0x5b3538*/
            {
              *(_DWORD *)(v96 + 4) = v95; /*0x5b353a*/
              ++v94[3]; /*0x5b353d*/
            }
            else
            {
              ++v94[3]; /*0x5b3549*/
              v94[2] = v95; /*0x5b354d*/
            }
            v94[1] = v95; /*0x5b3541*/
          }
          else
          {
LABEL_82:
            if ( !Str1 ) /*0x5b314a*/
              BSStringT_Set((BSStringT *)&Str1, MEMORY[0xB38D30].value, 0); /*0x5b3159*/
            v62 = v139; /*0x5b3166*/
            v63 = sub_5B2A10(v139, Str1, (signed int)&i[0x29].member.modlist.data + 1); /*0x5b317f*/
            sub_5B1430(v63, 0xFFFFFFFF, 0xFFFFFFFF, (int)AttachTileByID); /*0x5b3186*/
            if ( maxFocus == 0xFFFFFFFF ) /*0x5b3193*/
              v64 = (double)(int)v136; /*0x5b3558*/
            else
              v64 = (double)maxFocus; /*0x5b3199*/
            v119 = v64; /*0x5b355c*/
            Tile_SetFloat((Tile *)v63, 0xFBBu, v119); /*0x5b3564*/
            Tile_SetString(v63, (_DWORD *)0xFB4, v147); /*0x5b3578*/
            v120 = (float)TotalEntryCountForITem; /*0x5b3584*/
            Tile_SetFloat((Tile *)v63, 0xFB5u, v120); /*0x5b358c*/
            v121 = (float)v138; /*0x5b3598*/
            Tile_SetFloat((Tile *)v63, 0xFB7u, v121); /*0x5b35a0*/
            *(_DWORD *)&v133.m_dataLen = v131 + 1; /*0x5b35b3*/
            v122 = (float)*(int *)&v133.m_dataLen; /*0x5b35be*/
            Tile_SetFloat((Tile *)v63, 0xFB8u, v122); /*0x5b35c6*/
            *(_DWORD *)&v133.m_dataLen = (char *)v136 + 0xFFFFFFFF; /*0x5b35d2*/
            v123 = (float)(int)((int)v136 + 0xFFFFFFFF); /*0x5b35dd*/
            Tile_SetFloat((Tile *)v63, 0xFB9u, v123); /*0x5b35e5*/
            v124 = (float)(int)i; /*0x5b35f1*/
            Tile_SetFloat((Tile *)v63, 0xFAAu, v124); /*0x5b35f9*/
            if ( v131 ) /*0x5b3600*/
              v62[1].members.fadeState = (OblivionMenuFadeState)v63; /*0x5b3602*/
          }
          i = (TESForm *)((char *)i + 1); /*0x5b3609*/
          v148 = 0xFFFFFFFF; /*0x5b360f*/
          FormHeapFree((unsigned int)Str1); /*0x5b361a*/
          Str1 = 0; /*0x5b3624*/
          v133.m_data = 0; /*0x5b362d*/
        }
      }
    }
  }
}
