void __usercall sub_5B2B70(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax
  _DWORD *v4; // esi
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
  _DWORD *v21; // esi
  _DWORD *v22; // ecx
  void (__thiscall **v23)(_DWORD *, int, int); // ebx
  double Float; // st7
  int v25; // eax
  _DWORD *v26; // ebx
  Tile *v27; // eax
  double v28; // st7
  int *v29; // ecx
  Tile *v30; // esi
  int v31; // ecx
  Tile *v32; // eax
  _DWORD *v33; // eax
  int v34; // ecx
  int v35; // ecx
  Tile *v36; // eax
  int v37; // edi
  _DWORD *v38; // ebx
  _DWORD *v39; // esi
  bool v40; // al
  int v41; // ecx
  BOOL v42; // edi
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // edi
  int (__thiscall *v47)(_DWORD *); // eax
  BOOL v48; // edi
  int v49; // edi
  int v50; // edi
  const char *v51; // eax
  const char *v52; // eax
  int v53; // eax
  PlayerCharacter *v54; // ecx
  bool v55; // zf
  int v56; // ebx
  Tile *v57; // esi
  char *v58; // edi
  char *v59; // eax
  _DWORD *v60; // edi
  BSStringT *v61; // esi
  double v62; // st7
  ExtraDataList ****v63; // edi
  ExtraDataList ***v64; // esi
  ExtraDataList **v65; // eax
  int v66; // eax
  _DWORD *v67; // ebx
  int v68; // eax
  int v69; // eax
  CHAR *v70; // eax
  CHAR *v71; // eax
  double (__thiscall **v72)(_DWORD *, _DWORD); // eax
  int v73; // eax
  PlayerCharacter *v74; // ecx
  int v75; // eax
  int *v76; // eax
  int v77; // ebx
  _DWORD *v78; // edi
  int *v79; // esi
  const char *v80; // eax
  _DWORD *v81; // edi
  double v82; // st7
  InterfaceManager *v83; // eax
  BSTextureManager *v84; // ecx
  _DWORD *v85; // eax
  _DWORD *v86; // edi
  int v87; // edi
  int (__thiscall *v88)(_DWORD *); // edx
  _DWORD *v89; // edi
  _DWORD *v90; // eax
  int v91; // ecx
  _DWORD *v92; // ebx
  Tile *v93; // ecx
  double v94; // st7
  _DWORD *v95; // esi
  _DWORD *v96; // ebx
  float (__thiscall *GetSpellEffectiveness)(MagicCaster *, bool, float); // eax
  const char *v98; // esi
  double v99; // st7
  char *v100; // esi
  Tile **Singleton; // eax
  EntryData *v102; // [esp+1Ch] [ebp-208h]
  int v103; // [esp+1Ch] [ebp-208h]
  char *v104; // [esp+1Ch] [ebp-208h]
  TESObjectREFR *v105; // [esp+1Ch] [ebp-208h]
  float v106; // [esp+1Ch] [ebp-208h]
  float v107; // [esp+1Ch] [ebp-208h]
  float v108; // [esp+1Ch] [ebp-208h]
  float v109; // [esp+1Ch] [ebp-208h]
  float v110; // [esp+1Ch] [ebp-208h]
  float v111; // [esp+1Ch] [ebp-208h]
  _DWORD *v112; // [esp+1Ch] [ebp-208h]
  float v113; // [esp+1Ch] [ebp-208h]
  float v114; // [esp+1Ch] [ebp-208h]
  float v115; // [esp+1Ch] [ebp-208h]
  float v116; // [esp+1Ch] [ebp-208h]
  float v117; // [esp+1Ch] [ebp-208h]
  float v118; // [esp+1Ch] [ebp-208h]
  float v119; // [esp+1Ch] [ebp-208h]
  float v120; // [esp+1Ch] [ebp-208h]
  bool v121; // [esp+57h] [ebp-1CDh]
  char *Str1; // [esp+58h] [ebp-1CCh] BYREF
  BSStringT v123; // [esp+5Ch] [ebp-1C8h] BYREF
  TESForm *i; // [esp+64h] [ebp-1C0h]
  int p_modlist; // [esp+68h] [ebp-1BCh] BYREF
  int v126; // [esp+6Ch] [ebp-1B8h]
  Tile *v127; // [esp+70h] [ebp-1B4h] BYREF
  int v128; // [esp+74h] [ebp-1B0h]
  _DWORD *v129; // [esp+78h] [ebp-1ACh]
  int TotalEntryCountForITem; // [esp+7Ch] [ebp-1A8h]
  int *v131; // [esp+80h] [ebp-1A4h]
  _DWORD *v132; // [esp+84h] [ebp-1A0h]
  int v133; // [esp+88h] [ebp-19Ch]
  int v134; // [esp+8Ch] [ebp-198h]
  _DWORD *v135; // [esp+90h] [ebp-194h]
  char a2[8]; // [esp+94h] [ebp-190h] BYREF
  char v137[268]; // [esp+D4h] [ebp-150h] BYREF
  int v138; // [esp+220h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FE);
  v135 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    v55 = dword_B14368 == 0;
    v4 = ParentMenu;
    v129 = ParentMenu;
    if ( !v55 )
    {
      do
      {
        v5 = dword_B14360;
        v6 = *(_DWORD *)dword_B14360;
        dword_B14360 = v6;
        if ( v6 )
          *(_DWORD *)(v6 + 4) = 0;
        else
          dword_B14364 = 0;
        v7 = *(unsigned int ***)(v5 + 8);
        ((void (__thiscall *)(void ***, int))g_MagicMenuMagicItemList[2])(&g_MagicMenuMagicItemList, v5);
        --dword_B14368;
        if ( v7 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            ContainerEntryExtraData_DestroyDataTable(*v7, v8);
            FormHeapFree((unsigned int)v9);
          }
          FormHeapFree((unsigned int)v7);
        }
      }
      while ( dword_B14368 );
      v4 = v129;
    }
    v10 = (Actor *)TESDataHandler_g_PlayerRef;
    if ( TESDataHandler_g_PlayerRef )
    {
      v134 = v4[0xB];
      ActorBaseForm = Actor_GetActorBaseForm(v10, 0);
      p_modlist = (int)&ActorBaseForm[3].member.modlist;
      v4[0x13] = 0;
      sub_5B27A0((EntryData *)&ActorBaseForm[3].member.modlist, (int (__cdecl *)(tListVoid *, tListVoid *))sub_5B2430);
      TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
      for ( i = 0; (int)i < TotalEntryCountForITem; i = (TESForm *)((char *)i + 1) )
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, i, 0);
        v13 = InventoryEntryOfItem;
        if ( InventoryEntryOfItem )
        {
          v14 = OblivionDynamicCast(
                  InventoryEntryOfItem->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          if ( v14 && (v14[0x88] & 1) != 0 && *((_DWORD *)v14 + 0x19) )
          {
            v16 = (int *)dword_B14360;
            if ( dword_B14360 )
            {
              while ( 1 )
              {
                v102 = *(EntryData **)v16[2];
                v131 = v16;
                v16 = (int *)*v16;
                if ( sub_584500(&byte_B3B404, v13, v102) <= 0 )
                  break;
                if ( !v16 )
                  goto LABEL_21;
              }
              v19 = (EntryData **)FormHeapAlloc(8u);
              if ( v19 )
              {
                v20 = i;
                *v19 = v13;
                v19[1] = (EntryData *)v20;
              }
              else
              {
                v19 = 0;
              }
              v127 = (Tile *)v19;
              sub_589640(&g_MagicMenuMagicItemList, (int)v131, &v127);
            }
            else
            {
LABEL_21:
              v17 = (EntryData **)FormHeapAlloc(8u);
              if ( v17 )
              {
                v18 = i;
                *v17 = v13;
                v17[1] = (EntryData *)v18;
              }
              else
              {
                v17 = 0;
              }
              v127 = (Tile *)v17;
              sub_5B1E20((BSTextureManager *)&g_MagicMenuMagicItemList, (void **)&v127);
            }
          }
          else
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v13, v15);
            FormHeapFree((unsigned int)v13);
          }
        }
      }
      v21 = v129;
      v22 = (_DWORD *)v129[0x12];
      if ( v22 )
      {
        v103 = v129[0x12];
        v23 = (void (__thiscall **)(_DWORD *, int, int))(*v129 + 0x14);
        Float = Tile_GetFloat(v22, 0xFA8);
        v25 = Double_To_SInt32(Float);
        (*v23)(v21, v25, v103);
      }
      v26 = *(_DWORD **)(v134 + 0x34);
      while ( v26 )
      {
        v27 = (Tile *)v26[2];
        v26 = (_DWORD *)*v26;
        v127 = v27;
        if ( Tile_GetFloat(v27, 0xFA8) >= dbl_A6C1E0 )
          Tile_SetFloat(v127, (_DWORD *)0xFAA, flt_A690E0);
      }
      Tile_SetFloat((Tile *)v21[1], (_DWORD *)0xFAF, flt_A53954);
      Tile_SetFloat((Tile *)v21[1], (_DWORD *)0xFB0, flt_A53954);
      Tile_SetFloat((Tile *)v21[1], (_DWORD *)0xFB1, flt_A53954);
      v28 = flt_A53954;
      Tile_SetFloat((Tile *)v21[1], (_DWORD *)0xFB2, flt_A53954);
      i = 0;
      TotalEntryCountForITem = 1;
      v128 = 0;
      v126 = 0;
      BSSimpleList_Clear(v21 + 0xE);
      sub_5B2B30((void **)v21);
      v29 = (int *)dword_B14360;
      v132 = v21 + 0x10;
      v131 = v29;
      v127 = (Tile *)p_modlist;
      while ( 1 )
      {
        v30 = v127;
        if ( !v127 )
          goto LABEL_50;
        v31 = 0;
        v32 = v127;
        do
        {
          if ( *(_DWORD *)v32 )
            ++v31;
          v32 = *((Tile **)v32 + 1);
        }
        while ( v32 );
        if ( !v31 )
        {
LABEL_50:
          if ( !v131 )
          {
            v33 = v132;
            if ( !v132 )
              goto LABEL_129;
            v34 = 0;
            do
            {
              if ( *v33 )
                ++v34;
              v33 = (_DWORD *)v33[1];
            }
            while ( v33 );
            if ( !v34 )
            {
LABEL_129:
              v92 = v129;
              v93 = (Tile *)v129[0xB];
              *(_DWORD *)&v123.m_dataLen = (char *)i + 0xFFFFFFFF;
              v94 = (double)((int)&i[0xFFFFFFFF].member.modlist.next + 3);
              v120 = v94;
              Tile_SetFloat(v93, (_DWORD *)0xFAE, v120);
              v95 = *(_DWORD **)(v134 + 0x34);
              if ( v95 )
              {
                do
                {
                  v96 = (_DWORD *)v95[2];
                  v95 = (_DWORD *)*v95;
                  v94 = Tile_GetFloat(v96, 0xFAA);
                  if ( v94 == flt_A690E0 )
                  {
                    if ( v96 )
                      (*(void (__thiscall **)(_DWORD *, int))*v96)(v96, 1);
                  }
                }
                while ( v95 );
                v92 = v129;
              }
              sub_5B1A40((int)v92, a1, st6_0, v94, v92[0x14]);
              Str1 = 0;
              v123.m_data = 0;
              GetSpellEffectiveness = TESDataHandler_g_PlayerRef->super.super.magicCaster.vtbl->GetSpellEffectiveness;
              v98 = *(const char **)dword_B39518;
              v138 = 1;
              v99 = ((double (__stdcall *)(_DWORD, _DWORD))GetSpellEffectiveness)(0, 0.0);
              BSStringT_Static_Format((BSStringT *)&Str1, "%s: %0.0f%%", v98, v99 * fCostant_100);
              v100 = Str1;
              Tile_SetString(v135, (_DWORD *)0xFB4, Str1);
              Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1);
              sub_57D730(Singleton, 0);
              FormHeapFree((unsigned int)v100);
              return;
            }
          }
        }
        Str1 = 0;
        v123.m_data = 0;
        BSStringT_Set((BSStringT *)&Str1, EmptyString, 0);
        v138 = 0;
        v133 = 0;
        v121 = 0;
        p_modlist = 0xFFFFFFFF;
        if ( !v30 )
          goto LABEL_88;
        v35 = 0;
        v36 = v30;
        do
        {
          if ( *(_DWORD *)v36 )
            ++v35;
          v36 = *((Tile **)v36 + 1);
        }
        while ( v36 );
        if ( v35 )
        {
          v37 = *(_DWORD *)v127;
          v55 = *(_DWORD *)v127 == 0;
          v127 = *((Tile **)v127 + 1);
          if ( v55 || (v38 = (_DWORD *)(v37 + 0x24), !EffectItemList_GetStrongestItem(3, 0)) )
          {
            v138 = 0xFFFFFFFF;
            FormHeapFree((unsigned int)Str1);
            Str1 = 0;
            v123.m_data = 0;
          }
          else
          {
            v39 = (_DWORD *)(v37 + 0x18);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v37 + 0x18) + 0x18))(v37 + 0x18) != 1
              && (*(int (__thiscall **)(int))(*v39 + 0x18))(v37 + 0x18) != 4 )
            {
              BSSimpleList_PushBack(v129 + 0xE, v37);
              ++v126;
              v40 = EffectItemList_HasOnTarget(v37 + 0x24);
              v41 = v37 + 0x24;
              v42 = v40;
              if ( EffectItemList_HasOnTarget(v41) || !EffectItemList_HasTouchEffect(v38) )
                v43 = 0;
              else
                v43 = 2;
              v44 = v43 + v42;
              if ( EffectItemList_HasOnTarget((int)v38) || EffectItemList_HasTouchEffect(v38) )
                v45 = 0;
              else
                v45 = 4;
              v46 = v45 + v44;
              v47 = *(int (__thiscall **)(_DWORD *))(*v39 + 0x18);
              v128 = v46;
              v48 = v47(v39) == 2;
              v49 = ((*(int (__thiscall **)(_DWORD *))(*v39 + 0x18))(v39) != 3 ? 0 : 2) + v48;
              v50 = ((*(int (__thiscall **)(_DWORD *))(*v39 + 0x18))(v39) != 0 ? 0 : 4) + v49;
              TotalEntryCountForITem = ((*(int (__thiscall **)(_DWORD *))(*v39 + 0x18))(v39) != 5 ? 0 : 4) + v50;
              v51 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x1C) + 0x48);
              if ( !v51 )
                v51 = EmptyString;
              _sprintf(v137, "%s\\%s", "Icons", v51);
              v52 = (const char *)v39[1];
              if ( !v52 )
                v52 = EmptyString;
              BSStringT_Set((BSStringT *)&Str1, v52, 0);
              v28 = ((double (__thiscall *)(_DWORD *, PlayerCharacter *))*(_DWORD *)*v38)(
                      v38,
                      TESDataHandler_g_PlayerRef);
              v53 = Double_To_SInt32(v28);
              v54 = TESDataHandler_g_PlayerRef;
              v133 = v53;
              v55 = v39 == (_DWORD *)Player_GetCurrentMagicItem(v54);
LABEL_74:
              v121 = v55;
              goto LABEL_75;
            }
            v104 = Str1;
LABEL_109:
            v138 = 0xFFFFFFFF;
            FormHeapFree((unsigned int)v104);
            Str1 = 0;
            v123.m_data = 0;
          }
        }
        else
        {
LABEL_88:
          if ( v131 )
          {
            v63 = (ExtraDataList ****)v131[2];
            v64 = *v63;
            v65 = (*v63)[2];
            v131 = (int *)*v131;
            *(_DWORD *)&v123.m_dataLen = OblivionDynamicCast(
                                           v65,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                           &TESObjectBOOK `RTTI Type Descriptor',
                                           0);
            v66 = *(_DWORD *)(*(_DWORD *)&v123.m_dataLen + 0x64);
            if ( v66 )
            {
              v67 = (_DWORD *)(v66 + 0x24);
              v128 = EffectItemList_HasOnTarget(v66 + 0x24);
              if ( EffectItemList_HasOnTarget((int)v67) || !EffectItemList_HasTouchEffect(v67) )
                v68 = 0;
              else
                v68 = 2;
              v128 += v68;
              if ( EffectItemList_HasOnTarget((int)v67) || EffectItemList_HasTouchEffect(v67) )
                v69 = 0;
              else
                v69 = 4;
              v128 += v69;
              v105 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
              TotalEntryCountForITem = 8;
              v70 = sub_4851B0(v64, v105);
              _sprintf(v137, "%s\\%s", "Icons", v70);
              v71 = sub_488DF0((EntryData *)v64);
              BSStringT_Set((BSStringT *)&Str1, v71, 0);
              v72 = (double (__thiscall **)(_DWORD *, _DWORD))*v67;
              p_modlist = (int)v63[1];
              v28 = (*v72)(v67, 0);
              v73 = Double_To_SInt32(v28);
              v74 = TESDataHandler_g_PlayerRef;
              v133 = v73;
              v75 = sub_65D4C0(v74);
              v55 = *(_DWORD *)&v123.m_dataLen == v75;
              goto LABEL_74;
            }
          }
          else if ( v132 )
          {
            v76 = (int *)*v132;
            if ( *v132 )
            {
              v77 = *v76;
              v78 = v132;
              if ( *v76 )
              {
                ++v126;
                if ( v132 == v129 + 0x10 )
                  v129[0x15] = v126;
                v79 = *(int **)(v77 + 0xC);
                v80 = *(const char **)(v79[7] + 0x48);
                v128 = 8;
                TotalEntryCountForITem = 0x10;
                if ( !v80 )
                  v80 = EmptyString;
                _sprintf(v137, "%s\\%s", "Icons", v80);
                EffectItem_GetQualifiedName_SkillAttr(v79, (int)a2);
                BSStringT_Set((BSStringT *)&Str1, a2, 0);
                v133 = *(_DWORD *)(*v78 + 4);
                v121 = 0;
              }
              v132 = (_DWORD *)v78[1];
              if ( !v77 )
              {
                v104 = Str1;
                goto LABEL_109;
              }
            }
          }
LABEL_75:
          v56 = *(_DWORD *)(v134 + 0x38);
          if ( v56 )
          {
            while ( 1 )
            {
              v57 = *(Tile **)(v56 + 8);
              v56 = *(_DWORD *)(v56 + 4);
              v28 = Tile_GetFloat(v57, 0xFAA);
              if ( v28 == flt_A690E0 )
              {
                if ( sub_588C10(v57, 0xFAF) )
                {
                  v58 = Str1;
                  if ( Str1 )
                  {
                    v59 = sub_588C10(v57, 0xFAF);
                    if ( v59 )
                    {
                      if ( !_strcmp(v58, v59) )
                        break;
                    }
                  }
                }
              }
              if ( !v56 )
                goto LABEL_82;
            }
            v81 = v129;
            sub_5B1430(v57, 0xFFFFFFFF, 0xFFFFFFFF, v133);
            if ( p_modlist == 0xFFFFFFFF )
              v82 = (double)v126;
            else
              v82 = (double)p_modlist;
            v106 = v82;
            Tile_SetFloat(v57, (_DWORD *)0xFBB, v106);
            Tile_SetString(v57, (_DWORD *)0xFB4, v137);
            v107 = (float)TotalEntryCountForITem;
            Tile_SetFloat(v57, (_DWORD *)0xFB5, v107);
            v108 = (float)v128;
            Tile_SetFloat(v57, (_DWORD *)0xFB7, v108);
            *(_DWORD *)&v123.m_dataLen = v121 + 1;
            v109 = (float)*(int *)&v123.m_dataLen;
            Tile_SetFloat(v57, (_DWORD *)0xFB8, v109);
            *(_DWORD *)&v123.m_dataLen = v126 - 1;
            v110 = (float)(v126 - 1);
            Tile_SetFloat(v57, (_DWORD *)0xFB9, v110);
            v28 = (double)(int)i;
            v111 = v28;
            Tile_SetFloat(v57, (_DWORD *)0xFAA, v111);
            if ( v121 )
            {
              v112 = v135;
              p_modlist = 0x80000000;
              v83 = InterfaceManager_GetSingleton(0, 1);
              sub_57DA90(v83, a1, st6_0, v28, &p_modlist, v112);
              *(_DWORD *)&v123.m_dataLen = p_modlist + 1;
              v28 = (double)(p_modlist + 1);
              v113 = v28;
              Tile_SetFloat(v57, (_DWORD *)0xFF0, v113);
              v81[0x13] = v57;
            }
            v84 = (BSTextureManager *)(*((_DWORD *)v57 + 4) + 0x30);
            v85 = *(_DWORD **)(*((_DWORD *)v57 + 4) + 0x34);
            if ( v85 )
            {
              while ( 1 )
              {
                v55 = v57 == (Tile *)v85[2];
                v86 = v85;
                v85 = (_DWORD *)*v85;
                if ( v55 )
                  break;
                if ( !v85 )
                  goto LABEL_118;
              }
            }
            else
            {
LABEL_118:
              v86 = 0;
            }
            *(_DWORD *)&v123.m_dataLen = v86;
            if ( v86 )
              sub_7AA860(v84, (NiTPointerList_Node_void **)&v123.m_dataLen);
            v87 = *((_DWORD *)v57 + 4);
            v88 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v87 + 0x30) + 4);
            v89 = (_DWORD *)(v87 + 0x30);
            v90 = (_DWORD *)v88(v89);
            v90[2] = v57;
            v90[1] = 0;
            *v90 = v89[1];
            v91 = v89[1];
            if ( v91 )
            {
              *(_DWORD *)(v91 + 4) = v90;
              ++v89[3];
            }
            else
            {
              ++v89[3];
              v89[2] = v90;
            }
            v89[1] = v90;
          }
          else
          {
LABEL_82:
            if ( !Str1 )
              BSStringT_Set((BSStringT *)&Str1, (const char *)sMissingName, 0);
            v60 = v129;
            v61 = sub_5B2A10(v129, a1, st6_0, v28, Str1, (signed int)&i[0x29].member.modlist.data + 1);
            sub_5B1430(v61, 0xFFFFFFFF, 0xFFFFFFFF, v133);
            if ( p_modlist == 0xFFFFFFFF )
              v62 = (double)v126;
            else
              v62 = (double)p_modlist;
            v114 = v62;
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFBB, v114);
            Tile_SetString(v61, (_DWORD *)0xFB4, v137);
            v115 = (float)TotalEntryCountForITem;
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFB5, v115);
            v116 = (float)v128;
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFB7, v116);
            *(_DWORD *)&v123.m_dataLen = v121 + 1;
            v117 = (float)*(int *)&v123.m_dataLen;
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFB8, v117);
            *(_DWORD *)&v123.m_dataLen = v126 - 1;
            v118 = (float)(v126 - 1);
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFB9, v118);
            v28 = (double)(int)i;
            v119 = v28;
            Tile_SetFloat((Tile *)v61, (_DWORD *)0xFAA, v119);
            if ( v121 )
              v60[0x13] = v61;
          }
          i = (TESForm *)((char *)i + 1);
          v138 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)Str1);
          Str1 = 0;
          v123.m_data = 0;
        }
      }
    }
  }
}
