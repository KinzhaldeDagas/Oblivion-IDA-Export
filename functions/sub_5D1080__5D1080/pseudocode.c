void __userpurge sub_5D1080(
        int a1@<ecx>,
        int a2@<ebx>,
        double Health@<st0>,
        double st5_0@<st2>,
        double a5@<st1>,
        int a6)
{
  TESObjectREFR *v7; // ecx
  bool v8; // zf
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  int SkillMasteryLevel; // eax
  char *m_data; // edx
  EntryData *InventoryEntryOfItem; // ebx
  unsigned __int8 *type; // edi
  Actor *v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  int v19; // eax
  unsigned __int8 *v20; // esi
  int BaseCalcAVi; // eax
  _DWORD *v22; // ebx
  _DWORD *ItemByIndex2; // eax
  bool v24; // al
  tListVoid *extendData; // eax
  unsigned __int8 v26; // al
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  void *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // esi
  int v32; // edx
  char v33; // al
  unsigned __int8 v34; // al
  tListVoid *v35; // eax
  unsigned __int8 v36; // al
  int *v38; // esi
  int v39; // eax
  EntryData *v40; // edi
  int *v41; // ebx
  _DWORD *v42; // eax
  CHAR *v43; // eax
  Sky **v44; // eax
  TESForm *v45; // ecx
  Sky **v46; // edi
  NiNode *v47; // esi
  NiNode *v48; // eax
  Sky **v49; // eax
  TESForm *v50; // ecx
  Sky **v51; // edi
  _DWORD *v52; // esi
  _DWORD *v53; // eax
  _DWORD *v54; // ecx
  _DWORD *v55; // eax
  _DWORD *v56; // ecx
  _DWORD *v57; // esi
  Tile *v58; // edi
  _DWORD *v59; // edi
  _DWORD *v60; // eax
  EntryData **v61; // eax
  EntryData *v62; // esi
  int v63; // edx
  unsigned __int8 *v64; // eax
  CHAR *v65; // eax
  _DWORD *v66; // ebx
  Tile *v67; // edi
  CHAR *v69; // eax
  _DWORD *v70; // eax
  int v71; // eax
  int v72; // ebx
  char *v73; // eax
  BSStringT *v74; // edi
  char *v75; // eax
  char *v76; // eax
  char *v77; // eax
  char *v78; // eax
  bool v79; // al
  InterfaceManager *Singleton; // eax
  _DWORD *v81; // eax
  _DWORD *v82; // esi
  _DWORD *v83; // ebx
  int v85; // esi
  _DWORD *v86; // eax
  int v87; // eax
  char *v88; // eax
  char *v89; // eax
  char *v90; // eax
  char *v91; // eax
  char *v92; // eax
  bool v93; // al
  _DWORD *v95; // eax
  BSTextureManager *v96; // ecx
  _DWORD *v97; // eax
  _DWORD *v98; // esi
  int v99; // esi
  int (__thiscall *v100)(_DWORD *); // edx
  _DWORD *v101; // esi
  _DWORD *v102; // eax
  int v103; // ecx
  char *v104; // edx
  float v105; // [esp+0h] [ebp-180h]
  signed int v106; // [esp+0h] [ebp-180h]
  float v107; // [esp+0h] [ebp-180h]
  float v108; // [esp+4h] [ebp-17Ch]
  float v109; // [esp+4h] [ebp-17Ch]
  float v110; // [esp+4h] [ebp-17Ch]
  float v111; // [esp+4h] [ebp-17Ch]
  float v112; // [esp+4h] [ebp-17Ch]
  float v113; // [esp+4h] [ebp-17Ch]
  float v114; // [esp+8h] [ebp-178h]
  float v115; // [esp+8h] [ebp-178h]
  float v116; // [esp+8h] [ebp-178h]
  float v117; // [esp+8h] [ebp-178h]
  float v118; // [esp+8h] [ebp-178h]
  float v119; // [esp+8h] [ebp-178h]
  float v120; // [esp+8h] [ebp-178h]
  float v121; // [esp+8h] [ebp-178h]
  float v122; // [esp+8h] [ebp-178h]
  float v123; // [esp+8h] [ebp-178h]
  float v124; // [esp+8h] [ebp-178h]
  float v125; // [esp+8h] [ebp-178h]
  float v126; // [esp+8h] [ebp-178h]
  float v127; // [esp+8h] [ebp-178h]
  float v128; // [esp+8h] [ebp-178h]
  float v129; // [esp+8h] [ebp-178h]
  char v130; // [esp+1Fh] [ebp-161h]
  char v131; // [esp+1Fh] [ebp-161h]
  bool v132; // [esp+1Fh] [ebp-161h]
  char v133; // [esp+1Fh] [ebp-161h]
  Sky *a3; // [esp+20h] [ebp-160h]
  signed int a3a; // [esp+20h] [ebp-160h]
  _DWORD *TotalEntryCountForITem; // [esp+24h] [ebp-15Ch] BYREF
  _DWORD *v137; // [esp+28h] [ebp-158h]
  _DWORD *v138; // [esp+2Ch] [ebp-154h]
  bool v139; // [esp+33h] [ebp-14Dh]
  int v140; // [esp+34h] [ebp-14Ch]
  TESForm *v141; // [esp+38h] [ebp-148h]
  char v142; // [esp+3Fh] [ebp-141h]
  unsigned __int8 *HealthForForm; // [esp+40h] [ebp-140h]
  unsigned __int8 *v144; // [esp+44h] [ebp-13Ch]
  unsigned __int8 *v145; // [esp+48h] [ebp-138h]
  BSStringT v146; // [esp+4Ch] [ebp-134h] BYREF
  BSStringT v147; // [esp+54h] [ebp-12Ch] BYREF
  int v148; // [esp+5Ch] [ebp-124h]
  char v149[264]; // [esp+60h] [ebp-120h] BYREF
  int v150; // [esp+17Ch] [ebp-4h]

  v7 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v8 = TESDataHandler_g_PlayerRef == 0;
  v137 = (_DWORD *)a1;
  if ( !v8 )
  {
    v148 = *(_DWORD *)(a1 + 0x44);
    TotalEntryCountForITem = (_DWORD *)TESObjectREF_GetTotalEntryCountForITem(v7, 0);
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x410);
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v144 = (unsigned __int8 *)OblivionDynamicCast(
                                ParentMenu,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                &AlchemyMenu `RTTI Type Descriptor',
                                0);
    SkillMasteryLevel = Actor_GetSkillMasteryLevel(0xC);
    HealthForForm = (unsigned __int8 *)(SkillMasteryLevel < 3 ? 0x64 : 0x7D);
    v139 = SkillMasteryLevel >= 2;
    sub_5D0D50((int **)(a1 + 0x68));
    v141 = 0;
    if ( (int)TotalEntryCountForITem > 0 )
    {
      while ( 1 )
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v141, 0);
        type = 0;
        a3 = (Sky *)InventoryEntryOfItem;
        if ( !InventoryEntryOfItem )
          goto LABEL_7;
        v15 = (Actor *)TESDataHandler_g_PlayerRef;
        type = (unsigned __int8 *)InventoryEntryOfItem->type;
        v145 = type;
        if ( !(unsigned __int8)sub_4854F0(InventoryEntryOfItem, v15, 0, 1, 1, 0)
          || sub_469980((int)InventoryEntryOfItem->type) )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, (int)m_data);
          FormHeapFree((unsigned int)InventoryEntryOfItem);
          InventoryEntryOfItem = 0;
          a3 = 0;
LABEL_7:
          v16 = v137[0x16];
          if ( v16 == 2 )
          {
            if ( !InventoryEntryOfItem )
              goto LABEL_70;
            v17 = type[4];
            if ( v17 == 0x14 || v17 == 0x21 )
            {
              Health = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 1);
              __asm
              {
                fcomp   qword ptr ds:0A309F0h
                fnstsw  ax
              }
              if ( (_AX & 0x100) != 0 )
                goto LABEL_70;
            }
          }
          else
          {
            if ( v16 != 1 )
              goto LABEL_70;
            if ( !InventoryEntryOfItem )
              goto LABEL_70;
            v36 = type[4];
            if ( v36 == 0x14 || v36 == 0x21 )
            {
              Health = ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 1);
              __asm
              {
                fild    [esp+174h+var_140]
                fcompp
                fnstsw  ax
              }
              if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
                goto LABEL_70;
            }
          }
          goto LABEL_68;
        }
        v19 = v137[0x16];
        if ( v19 == 3 )
          break;
        if ( v19 == 4 )
        {
          extendData = InventoryEntryOfItem->extendData;
          if ( InventoryEntryOfItem->extendData && extendData->node.data )
            v131 = sub_41DF40(extendData->node.data);
          else
            v131 = 0;
          v26 = type[4];
          if ( (v26 == 0x21 || v26 == 0x16 || v26 == 0x14)
            && !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) )
          {
            v27 = OblivionDynamicCast(
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( (!v27 || !v27[1]) && !v131 )
              goto LABEL_70;
          }
LABEL_68:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, (int)m_data);
          FormHeapFree((unsigned int)InventoryEntryOfItem);
          goto LABEL_69;
        }
        if ( v19 == 6 )
        {
          v142 = 0;
          v28 = (_DWORD *)Menu_GetOpenMenuTile(0x418);
          v29 = (void *)Tile_GetParentMenu(v28);
          v30 = OblivionDynamicCast(
                  v29,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &SigilStoneMenu `RTTI Type Descriptor',
                  0);
          v31 = v30;
          if ( !v30 )
            goto LABEL_70;
          v132 = (unsigned __int8)sub_5D4700(v30) != 0;
          v8 = sub_5D4760(v31) == 0;
          v33 = 1;
          if ( v8 )
            v33 = v142;
          if ( (!v132 || type[4] != 0x21) && (!v33 || (v34 = type[4], v34 != 0x16) && v34 != 0x14)
            || TESEnchantableForm_GetFormEnchantment(type)
            || (v35 = InventoryEntryOfItem->extendData) != 0 && v35->node.data && sub_41DF40(v35->node.data) == 1 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v32);
            FormHeapFree((unsigned int)InventoryEntryOfItem);
            InventoryEntryOfItem = 0;
            a3 = 0;
          }
          if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) )
            goto LABEL_70;
          if ( InventoryEntryOfItem )
            goto LABEL_68;
LABEL_69:
          InventoryEntryOfItem = 0;
          a3 = 0;
          goto LABEL_70;
        }
        if ( v19 != 5 )
          goto LABEL_7;
        if ( !EnchantmentMenu_SoulGemInfo_GetSoulLevel((ExtraDataList ***)InventoryEntryOfItem) )
          goto LABEL_68;
LABEL_70:
        v38 = (int *)v137[0x1B];
        v138 = 0;
        if ( InventoryEntryOfItem )
          v138 = (_DWORD *)sub_485150(InventoryEntryOfItem);
        v39 = v137[0x16];
        if ( v39 == 3 || v39 == 6 || (v133 = 0, v39 == 5) )
          v133 = 1;
        if ( v38 )
        {
          while ( a3 )
          {
            v40 = *(EntryData **)v38[2];
            v41 = v38;
            v38 = (int *)*v38;
            v42 = (_DWORD *)sub_485150(v40);
            if ( v133 && v40->type == (TESForm *)a3->nodeMoonsRoot )
            {
              v47 = TESHealthForm_GetHealth((Sky *)v40);
              v48 = TESHealthForm_GetHealth(a3);
              sub_60D020(v40, (int)v47 + (_DWORD)v48);
              break;
            }
            if ( (int)v42 < (int)v138
              || v42 == v138
              && (v145 = (unsigned __int8 *)sub_488DF0((EntryData *)a3),
                  v43 = sub_488DF0(v40),
                  _mbsicmp((const unsigned __int8 *)v43, v145) <= 0) )
            {
              v49 = (Sky **)FormHeapAlloc(8u);
              if ( v49 )
              {
                v50 = v141;
                *v49 = a3;
                v49[1] = (Sky *)v50;
                v51 = v49;
              }
              else
              {
                v51 = 0;
              }
              v52 = v137 + 0x1A;
              v53 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v137[0x1A] + 4))(v137 + 0x1A);
              v53[2] = v51;
              *v53 = v41;
              v53[1] = v41[1];
              v54 = (_DWORD *)v41[1];
              if ( v54 )
                *v54 = v53;
              else
                v52[1] = v53;
              v41[1] = (int)v53;
              goto LABEL_101;
            }
            if ( !v38 )
            {
              InventoryEntryOfItem = (EntryData *)a3;
              goto LABEL_85;
            }
          }
        }
        else
        {
LABEL_85:
          if ( InventoryEntryOfItem )
          {
            v44 = (Sky **)FormHeapAlloc(8u);
            if ( v44 )
            {
              v45 = v141;
              *v44 = a3;
              v44[1] = (Sky *)v45;
              v46 = v44;
            }
            else
            {
              v46 = 0;
            }
            v52 = v137 + 0x1A;
            v55 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v137[0x1A] + 4))(v137 + 0x1A);
            v55[2] = v46;
            *v55 = 0;
            v55[1] = v52[2];
            v56 = (_DWORD *)v52[2];
            if ( v56 )
              *v56 = v55;
            else
              v52[1] = v55;
            v52[2] = v55;
LABEL_101:
            ++v52[3];
          }
        }
        v141 = (TESForm *)((char *)v141 + 1);
        if ( (int)v141 >= (int)TotalEntryCountForITem )
          goto LABEL_103;
      }
      if ( type[4] == 0x19
        && v144
        && !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) )
      {
        if ( !*((_BYTE *)v137 + 0x65) )
          goto LABEL_70;
        v20 = v144 + 0xA8;
        v140 = (int)(v144 + 0xA8);
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v144 + 0x15) )
          goto LABEL_70;
        v130 = 0;
        BaseCalcAVi = Actor_GetBaseCalcAVi(0x13);
        v146.m_data = (char *)Magic_GetWortcraftMaxEffects(BaseCalcAVi);
        v138 = 0;
        while ( 1 )
        {
          m_data = v146.m_data;
          if ( (int)v138 >= (int)v146.m_data )
            break;
          do
          {
            if ( !v20 )
              break;
            if ( EffectItemList_GetItemByIndex2((char *)v145 + 0x30, (int)v138) )
            {
              v22 = *(_DWORD **)v20;
              ItemByIndex2 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v145 + 0x30, (int)v138);
              v24 = EffectItem_Match(v22, ItemByIndex2);
              InventoryEntryOfItem = (EntryData *)a3;
              if ( v24 )
                v130 = 1;
            }
            v20 = *((unsigned __int8 **)v20 + 1);
          }
          while ( !v130 );
          v138 = (_DWORD *)((char *)v138 + 1);
          if ( v130 )
            goto LABEL_70;
          v20 = (unsigned __int8 *)v140;
        }
      }
      goto LABEL_68;
    }
LABEL_103:
    v57 = *(_DWORD **)(v148 + 0x34);
    while ( v57 )
    {
      v58 = (Tile *)v57[2];
      v57 = (_DWORD *)*v57;
      if ( sub_588B50(v58, 0xFB8) )
      {
        __asm { fld     dword ptr ds:0A690E0h }
        __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
        Tile_SetFloat(v58, (_DWORD *)0xFAA, v114);
      }
    }
    v59 = v137;
    v60 = (_DWORD *)v137[0x1C];
    a3a = 0;
    v141 = 0;
    v138 = v60;
    if ( v60 )
    {
      do
      {
        v61 = (EntryData **)v138[2];
        v62 = *v61;
        v63 = (int)v61[1];
        v138 = (_DWORD *)v138[1];
        TotalEntryCountForITem = v61;
        v140 = v63;
        v64 = (unsigned __int8 *)sub_485150(v62);
        v145 = v64;
        if ( v64 != (unsigned __int8 *)v141 )
          v141 = (TESForm *)v64;
        v65 = sub_4851B0((ExtraDataList ***)v62, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
        _sprintf(v149, "%s\\%s", "Icons", v65);
        v66 = *(_DWORD **)(v148 + 0x34);
        if ( v66 )
        {
          while ( 1 )
          {
            v67 = (Tile *)v66[2];
            v66 = (_DWORD *)*v66;
            if ( sub_588C10(v67, 0xFAF) )
            {
              if ( sub_488DF0((EntryData *)*TotalEntryCountForITem) )
              {
                Health = Tile_GetFloat(v67, 0xFAA);
                __asm
                {
                  fcomp   dword ptr ds:0A690E0h
                  fnstsw  ax
                }
                if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
                {
                  HealthForForm = (unsigned __int8 *)sub_488DF0(v62);
                  v69 = sub_588C10(v67, 0xFAF);
                  if ( !_mbscmp((const unsigned __int8 *)v69, HealthForForm) )
                    break;
                }
              }
            }
            if ( !v66 )
              goto LABEL_116;
          }
          if ( v137[0x16] != 2 )
            goto LABEL_144;
          HealthForForm = (unsigned __int8 *)TESHealthForm_GetHealthForForm(v62->type);
          sub_470520(v62->type);
          TotalEntryCountForITem = v86;
          __asm { fild    [esp+17Ch+var_15C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; float }
          ContainerEntryExtraData_GetHealth((void **)&v62->extendData, 0);
          __asm
          {
            fstp    dword ptr [esp+180h+var_17C]; float
            fild    [esp+180h+var_140]
            fstp    [esp+180h+var_180]; float
          }
          Health = sub_5483C0(v107, v110, v122);
          if ( v87 <= 1 )
LABEL_144:
            v87 = 1;
          v146.m_data = 0;
          *(_DWORD *)&v146.m_dataLen = 0;
          v150 = 0;
          BSStringT_Static_Format(&v146, "%d", v87);
          v88 = sub_488DF0(v62);
          Tile_SetString(v67, (_DWORD *)0xFAF, v88);
          Tile_SetString(v67, (_DWORD *)0xFB0, v146.m_data);
          v89 = (char *)sub_48F450(v62, 2, 1, 0, 0.0);
          Tile_SetString(v67, (_DWORD *)0xFB1, v89);
          v90 = (char *)sub_48F450(v62, 3, 1, 0, 0.0);
          Tile_SetString(v67, (_DWORD *)0xFB2, v90);
          v91 = (char *)sub_48F450(v62, 4, 1, 0, 0.0);
          Tile_SetString(v67, (_DWORD *)0xFB3, v91);
          Tile_SetString(v67, (_DWORD *)0xFB4, v149);
          v92 = (char *)sub_48F450(v62, 0, 1, 0, 0.0);
          Tile_SetString(v67, (_DWORD *)0xFB5, v92);
          __asm { fild    [esp+174h+var_138] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat(v67, (_DWORD *)0xFB7, v123);
          TotalEntryCountForITem = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v62, 0) != 0) + 1);
          __asm { fild    [esp+174h+var_15C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat(v67, (_DWORD *)0xFB8, v124);
          __asm { fild    [esp+174h+var_14C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat(v67, (_DWORD *)0xFB9, v125);
          if ( !v144 || (v93 = sub_593690(v144, (int)v62), v140 = 2, !v93) )
            v140 = 1;
          __asm { fild    [esp+174h+var_14C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat(v67, (_DWORD *)0xFBA, v126);
          __asm { fild    [esp+174h+a3] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat(v67, (_DWORD *)0xFAA, v127);
          if ( a3a == dword_B3B718 )
          {
            InterfaceManager_GetSingleton(0, 1);
            _EAX = InterfaceManager_GetSingleton(0, 1);
            ++_EAX->unk08C;
            __asm { fild    dword ptr [eax+8Ch] }
            if ( (int)_EAX->unk08C < 0 )
              __asm { fadd    dword ptr ds:0A2FC78h }
            __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
            Tile_SetFloat(v67, (_DWORD *)0xFF0, v128);
          }
          if ( v137[0x16] == 1 )
          {
            v95 = OblivionDynamicCast(
                    v62->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( v95 )
            {
              if ( v95[1] )
              {
                TotalEntryCountForITem = (_DWORD *)(2 - v139);
                __asm
                {
                  fild    [esp+178h+var_15C]
                  fstp    dword ptr [esp+178h+var_17C+4]; a3
                }
                Tile_SetFloat(v67, (_DWORD *)0xFAE, v129);
              }
            }
          }
          v96 = (BSTextureManager *)(*((_DWORD *)v67 + 4) + 0x30);
          v97 = *(_DWORD **)(*((_DWORD *)v67 + 4) + 0x34);
          if ( v97 )
          {
            while ( 1 )
            {
              v8 = v67 == (Tile *)v97[2];
              v98 = v97;
              v97 = (_DWORD *)*v97;
              if ( v8 )
                break;
              if ( !v97 )
                goto LABEL_159;
            }
          }
          else
          {
LABEL_159:
            v98 = 0;
          }
          TotalEntryCountForITem = v98;
          if ( v98 )
            sub_7AA860(v96, (NiTPointerList_Node_void **)&TotalEntryCountForITem);
          v99 = *((_DWORD *)v67 + 4);
          v100 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v99 + 0x30) + 4);
          v101 = (_DWORD *)(v99 + 0x30);
          v102 = (_DWORD *)v100(v101);
          v102[2] = v67;
          v102[1] = 0;
          *v102 = v101[1];
          v103 = v101[1];
          if ( v103 )
            *(_DWORD *)(v103 + 4) = v102;
          else
            v101[2] = v102;
          v104 = v146.m_data;
          ++v101[3];
          v101[1] = v102;
          v150 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)v104);
          v146.m_data = 0;
          *(_DWORD *)&v146.m_dataLen = 0;
        }
        else
        {
LABEL_116:
          if ( v137[0x16] != 2 )
            goto LABEL_118;
          HealthForForm = (unsigned __int8 *)TESHealthForm_GetHealthForForm(v62->type);
          sub_470520(v62->type);
          TotalEntryCountForITem = v70;
          __asm { fild    [esp+17Ch+var_15C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; float }
          ContainerEntryExtraData_GetHealth((void **)&v62->extendData, 0);
          __asm
          {
            fstp    dword ptr [esp+180h+var_17C]; float
            fild    [esp+180h+var_140]
            fstp    [esp+180h+var_180]; float
          }
          Health = sub_5483C0(v105, v108, v115);
          v72 = v71;
          if ( v71 <= 1 )
LABEL_118:
            v72 = 1;
          v106 = sub_485150(v62);
          v73 = sub_488DF0(v62);
          v74 = sub_5D0E50(v137, st5_0, a5, Health, v149, v73, v106, a3a, a3a + 0x33);
          v147.m_data = 0;
          *(_DWORD *)&v147.m_dataLen = 0;
          v150 = 1;
          BSStringT_Static_Format(&v147, "%d", v72);
          Tile_SetString(v74, (_DWORD *)0xFB0, v147.m_data);
          v75 = (char *)sub_48F450(v62, 2, 1, 0, 0.0);
          Tile_SetString(v74, (_DWORD *)0xFB1, v75);
          v76 = (char *)sub_48F450(v62, 3, 1, 0, 0.0);
          Tile_SetString(v74, (_DWORD *)0xFB2, v76);
          v77 = (char *)sub_48F450(v62, 4, 1, 0, 0.0);
          Tile_SetString(v74, (_DWORD *)0xFB3, v77);
          v78 = (char *)sub_48F450(v62, 0, 1, 0, 0.0);
          Tile_SetString(v74, (_DWORD *)0xFB5, v78);
          TotalEntryCountForITem = (_DWORD *)(((unsigned __int8)ContainerEntryExtraData_HasWorn(v62, 0) != 0) + 1);
          __asm { fild    [esp+174h+var_15C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat((Tile *)v74, (_DWORD *)0xFB8, v116);
          __asm { fild    [esp+174h+var_14C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat((Tile *)v74, (_DWORD *)0xFB9, v117);
          if ( !v144 || (v79 = sub_593690(v144, (int)v62), v140 = 2, !v79) )
            v140 = 1;
          __asm { fild    [esp+174h+var_14C] }
          __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
          Tile_SetFloat((Tile *)v74, (_DWORD *)0xFBA, v118);
          if ( a3a == dword_B3B718 )
          {
            InterfaceManager_GetSingleton(0, 1);
            Singleton = InterfaceManager_GetSingleton(0, 1);
            TotalEntryCountForITem = (_DWORD *)++Singleton->unk08C;
            __asm { fild    [esp+184h+var_15C] }
            if ( (int)TotalEntryCountForITem < 0 )
              __asm { fadd    dword ptr ds:0A2FC78h }
            __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
            Tile_SetFloat((Tile *)v74, (_DWORD *)0xFF0, v119);
          }
          if ( v137[0x16] == 1 )
          {
            v81 = OblivionDynamicCast(
                    v62->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( v81 )
            {
              if ( v81[1] )
              {
                TotalEntryCountForITem = (_DWORD *)(2 - v139);
                __asm
                {
                  fild    [esp+178h+var_15C]
                  fstp    dword ptr [esp+178h+var_17C+4]; a3
                }
                Tile_SetFloat((Tile *)v74, (_DWORD *)0xFAE, v120);
              }
            }
          }
          v150 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)v147.m_data);
          v147.m_data = 0;
          *(_DWORD *)&v147.m_dataLen = 0;
        }
        ++a3a;
      }
      while ( v138 );
      v59 = v137;
    }
    TotalEntryCountForITem = (_DWORD *)(a3a - 1);
    __asm { fild    [esp+174h+var_15C] }
    __asm { fstp    dword ptr [esp+178h+var_17C+4]; a3 }
    Tile_SetFloat((Tile *)v59[0x11], (_DWORD *)0xFAE, v121);
    v82 = *(_DWORD **)(v148 + 0x34);
    while ( v82 )
    {
      v83 = (_DWORD *)v82[2];
      v82 = (_DWORD *)*v82;
      Tile_GetFloat(v83, 0xFAA);
      __asm
      {
        fcomp   dword ptr ds:0A690E0h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
      {
        if ( v83 )
          (*(void (__thiscall **)(_DWORD *, int))*v83)(v83, 1);
      }
    }
    if ( v59[0x16] == 2 )
    {
      __asm { fld     dword ptr ds:0A379B4h }
      __asm { fstp    dword ptr [esp+17Ch+var_17C]; a3 }
      Tile_SetFloat((Tile *)v59[0xC], (_DWORD *)0xFB1, v109);
      v85 = sub_5D0BE0(v59);
      if ( v85 <= 0 || sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v85 )
        __asm { fld1 }
      else
        __asm { fld     dword ptr ds:0A379B4h }
      __asm { fstp    dword ptr [esp+17Ch+var_17C]; a3 }
      Tile_SetFloat((Tile *)v59[0xC], (_DWORD *)0xFAF, v111);
    }
    if ( v59[0x16] == 3 )
    {
      __asm { fld     dword ptr ds:0A379B4h }
      __asm { fstp    dword ptr [esp+17Ch+var_17C]; a3 }
      Tile_SetFloat((Tile *)v59[0x14], (_DWORD *)0xFB1, v112);
      if ( !HealthForForm || *((_DWORD *)HealthForForm + 0x2B) || *((_DWORD *)HealthForForm + 0x2A) )
        __asm { fld     dword ptr ds:0A379B4h }
      else
        __asm { fld1 }
      __asm { fstp    dword ptr [esp+17Ch+var_17C]; a3 }
      Tile_SetFloat((Tile *)v59[0x14], (_DWORD *)0xFB1, v113);
      if ( *((_BYTE *)v59 + 0x65) )
        Tile_SetString((_DWORD *)v59[0x14], (_DWORD *)0xFAE, (char *)dword_B388A0);
      else
        Tile_SetString((_DWORD *)v59[0x14], (_DWORD *)0xFAE, (char *)dword_B38898);
    }
  }
}
