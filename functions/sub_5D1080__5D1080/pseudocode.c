void __userpurge sub_5D1080(int a1@<ecx>, double Float@<st0>, double st5_0@<st2>, double a4@<st1>, int a5)
{
  TESObjectREFR *v7; // ecx
  bool v8; // zf
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  unsigned __int8 *v11; // eax
  Actor *v12; // ecx
  SkillMasteryLevel SkillMasteryLevel; // eax
  char *m_data; // edx
  EntryData *InventoryEntryOfItem; // ebx
  unsigned __int8 *type; // edi
  Actor *v17; // eax
  int v18; // eax
  unsigned __int8 v19; // al
  int v20; // eax
  unsigned __int8 *v21; // esi
  SInt32 BaseCalcAVi; // eax
  int v23; // eax
  _DWORD *v24; // ebx
  _DWORD *v25; // eax
  bool v26; // al
  tListVoid *extendData; // eax
  unsigned __int8 v28; // al
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  void *v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // esi
  int v34; // edx
  char v35; // al
  unsigned __int8 v36; // al
  tListVoid *v37; // eax
  unsigned __int8 v38; // al
  int *v39; // esi
  int v40; // eax
  EntryData *v41; // edi
  int *v42; // ebx
  _DWORD *v43; // eax
  CHAR *v44; // eax
  TESHealthForm **v45; // eax
  TESForm *v46; // ecx
  TESHealthForm **v47; // edi
  unsigned int Health; // esi
  unsigned int v49; // eax
  TESHealthForm **v50; // eax
  TESForm *v51; // ecx
  TESHealthForm **v52; // edi
  _DWORD *v53; // esi
  _DWORD *v54; // eax
  _DWORD *v55; // ecx
  _DWORD *v56; // eax
  _DWORD *v57; // ecx
  _DWORD *v58; // esi
  Tile *v59; // edi
  _DWORD *v60; // edi
  _DWORD *v61; // eax
  EntryData **v62; // eax
  EntryData *v63; // esi
  int v64; // edx
  unsigned __int8 *v65; // eax
  CHAR *v66; // eax
  _DWORD *v67; // ebx
  Tile *v68; // edi
  CHAR *v69; // eax
  int v70; // eax
  int v71; // ebx
  char *v72; // eax
  BSStringT *v73; // edi
  char *v74; // eax
  char *v75; // eax
  char *v76; // eax
  char *v77; // eax
  bool v78; // al
  InterfaceManager *v79; // eax
  _DWORD *v80; // eax
  _DWORD *v81; // esi
  _DWORD *v82; // ebx
  int v83; // esi
  double v84; // st4
  int v85; // eax
  char *v86; // eax
  char *v87; // eax
  char *v88; // eax
  char *v89; // eax
  char *v90; // eax
  bool v91; // al
  InterfaceManager *Singleton; // eax
  _DWORD *v93; // eax
  void *v94; // ecx
  _DWORD *v95; // eax
  _DWORD *v96; // esi
  int v97; // esi
  int (__thiscall *v98)(_DWORD *); // edx
  _DWORD *v99; // esi
  _DWORD *v100; // eax
  int v101; // ecx
  char *v102; // edx
  double v103; // st4
  float v104; // [esp+0h] [ebp-180h]
  signed int v105; // [esp+0h] [ebp-180h]
  float v106; // [esp+0h] [ebp-180h]
  float value; // [esp+4h] [ebp-17Ch]
  float valuea; // [esp+4h] [ebp-17Ch]
  float valueb; // [esp+4h] [ebp-17Ch]
  float valuec; // [esp+4h] [ebp-17Ch]
  float value_4; // [esp+8h] [ebp-178h]
  float value_4a; // [esp+8h] [ebp-178h]
  float value_4b; // [esp+8h] [ebp-178h]
  float value_4c; // [esp+8h] [ebp-178h]
  float value_4d; // [esp+8h] [ebp-178h]
  float value_4e; // [esp+8h] [ebp-178h]
  float value_4f; // [esp+8h] [ebp-178h]
  float value_4g; // [esp+8h] [ebp-178h]
  float value_4h; // [esp+8h] [ebp-178h]
  float value_4i; // [esp+8h] [ebp-178h]
  float value_4j; // [esp+8h] [ebp-178h]
  float value_4k; // [esp+8h] [ebp-178h]
  float value_4l; // [esp+8h] [ebp-178h]
  float value_4m; // [esp+8h] [ebp-178h]
  float value_4n; // [esp+8h] [ebp-178h]
  char v126; // [esp+1Fh] [ebp-161h]
  char v127; // [esp+1Fh] [ebp-161h]
  bool v128; // [esp+1Fh] [ebp-161h]
  char v129; // [esp+1Fh] [ebp-161h]
  TESHealthForm *a3; // [esp+20h] [ebp-160h]
  signed int a3a; // [esp+20h] [ebp-160h]
  _DWORD *TotalEntryCountForITem; // [esp+24h] [ebp-15Ch] BYREF
  _DWORD *v133; // [esp+28h] [ebp-158h]
  _DWORD *v134; // [esp+2Ch] [ebp-154h]
  bool v135; // [esp+33h] [ebp-14Dh]
  int v136; // [esp+34h] [ebp-14Ch]
  TESForm *v137; // [esp+38h] [ebp-148h]
  char v138; // [esp+3Fh] [ebp-141h]
  unsigned __int8 *HealthForForm; // [esp+40h] [ebp-140h]
  unsigned __int8 *v140; // [esp+44h] [ebp-13Ch]
  unsigned __int8 *v141; // [esp+48h] [ebp-138h]
  BSStringT v142; // [esp+4Ch] [ebp-134h] BYREF
  BSStringT v143; // [esp+54h] [ebp-12Ch] BYREF
  int v144; // [esp+5Ch] [ebp-124h]
  char v145[264]; // [esp+60h] [ebp-120h] BYREF
  int v146; // [esp+17Ch] [ebp-4h]

  v7 = (TESObjectREFR *)reference; /*0x5d10c2*/
  v8 = reference == 0; /*0x5d10c8*/
  v133 = (_DWORD *)a1; /*0x5d10ca*/
  if ( !v8 )
  {
    v144 = *(_DWORD *)(a1 + 0x44); /*0x5d10d9*/
    TotalEntryCountForITem = (_DWORD *)TESObjectREF_GetTotalEntryCountForITem(v7, 0); /*0x5d10f7*/
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x410); /*0x5d10fb*/
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d1105*/
    v11 = (unsigned __int8 *)OblivionDynamicCast( /*0x5d110b*/
                               ParentMenu,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                               &AlchemyMenu `RTTI Type Descriptor',
                               0);
    v12 = (Actor *)reference; /*0x5d1110*/
    v140 = v11; /*0x5d111b*/
    SkillMasteryLevel = Actor_GetSkillMasteryLevel(v12, kSkillAV_Armorer); /*0x5d111f*/
    HealthForForm = (unsigned __int8 *)(SkillMasteryLevel < kSkillMastery_Expert ? 0x64 : 0x7D);
    v135 = SkillMasteryLevel >= kSkillMastery_Journeyman; /*0x5d113f*/
    sub_5D0D50((int ***)(a1 + 0x68)); /*0x5d1144*/
    v137 = 0; /*0x5d114b*/
    if ( (int)TotalEntryCountForITem > 0 ) /*0x5d1153*/
    {
      while ( 1 ) /*0x5d116b*/
      {
        InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v137, 0); /*0x5d116b*/
        type = 0; /*0x5d116d*/
        a3 = (TESHealthForm *)InventoryEntryOfItem; /*0x5d1171*/
        if ( !InventoryEntryOfItem ) /*0x5d1175*/
          goto LABEL_7; /*0x5d1175*/
        v17 = (Actor *)reference; /*0x5d1177*/
        type = (unsigned __int8 *)InventoryEntryOfItem->type; /*0x5d117c*/
        v141 = type; /*0x5d118a*/
        if ( !(unsigned __int8)sub_4854F0(InventoryEntryOfItem, v17, 0, 1, 1, 0) /*0x5d119b*/
          || sub_469980((int)InventoryEntryOfItem->type) )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, (int)m_data); /*0x5d11a9*/
          FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5d11af*/
          InventoryEntryOfItem = 0; /*0x5d11b7*/
          a3 = 0; /*0x5d11b9*/
LABEL_7:
          v18 = v133[0x16]; /*0x5d11bd*/
          if ( v18 == 2 ) /*0x5d11c7*/
          {
            if ( !InventoryEntryOfItem ) /*0x5d11cf*/
              goto LABEL_70; /*0x5d11cf*/
            v19 = type[4]; /*0x5d11d5*/
            if ( (v19 == 0x14 || v19 == 0x21) /*0x5d11f8*/
              && ContainerEntryExtraData_GetHealth((void **)&InventoryEntryOfItem->extendData, 1) < fCostant_100 )
            {
              goto LABEL_70; /*0x5d11f8*/
            }
          }
          else
          {
            if ( v18 != 1 ) /*0x5d1473*/
              goto LABEL_70; /*0x5d1473*/
            if ( !InventoryEntryOfItem ) /*0x5d1477*/
              goto LABEL_70; /*0x5d1477*/
            v38 = type[4]; /*0x5d1479*/
            if ( (v38 == 0x14 || v38 == 0x21) /*0x5d1498*/
              && (double)(int)HealthForForm > ContainerEntryExtraData_GetHealth(
                                                (void **)&InventoryEntryOfItem->extendData,
                                                1) )
            {
              goto LABEL_70; /*0x5d1498*/
            }
          }
          goto LABEL_68; /*0x5d11f8*/
        }
        v20 = v133[0x16]; /*0x5d1207*/
        if ( v20 == 3 ) /*0x5d120d*/
          break; /*0x5d120d*/
        if ( v20 == 4 ) /*0x5d1311*/
        {
          extendData = InventoryEntryOfItem->extendData; /*0x5d1313*/
          if ( InventoryEntryOfItem->extendData && extendData->node.data ) /*0x5d1319*/
            v127 = sub_41DF40(extendData->node.data); /*0x5d1325*/
          else
            v127 = 0; /*0x5d132b*/
          v28 = type[4]; /*0x5d1330*/
          if ( (v28 == 0x21 || v28 == 0x16 || v28 == 0x14) /*0x5d134a*/
            && !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) )
          {
            v29 = OblivionDynamicCast( /*0x5d1363*/
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( (!v29 || !v29[1]) && !v127 ) /*0x5d137e*/
              goto LABEL_70; /*0x5d137e*/
          }
LABEL_68:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, (int)m_data); /*0x5d149a*/
          FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5d14a2*/
          goto LABEL_69; /*0x5d14a2*/
        }
        if ( v20 == 6 ) /*0x5d138c*/
        {
          v138 = 0; /*0x5d139c*/
          v30 = (_DWORD *)Menu_GetOpenMenuTile(0x418); /*0x5d13a1*/
          v31 = (void *)Tile_GetParentMenu(v30); /*0x5d13b9*/
          v32 = OblivionDynamicCast( /*0x5d13bf*/
                  v31,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &SigilStoneMenu `RTTI Type Descriptor',
                  0);
          v33 = v32; /*0x5d13c4*/
          if ( !v32 ) /*0x5d13cb*/
            goto LABEL_70; /*0x5d13cb*/
          v128 = (unsigned __int8)sub_5D4700(v32) != 0; /*0x5d13dc*/
          v8 = sub_5D4760(v33) == 0; /*0x5d13e8*/
          v35 = 1; /*0x5d13ea*/
          if ( v8 ) /*0x5d13ec*/
            v35 = v138; /*0x5d13ee*/
          if ( (!v128 || type[4] != 0x21) && (!v35 || (v36 = type[4], v36 != 0x16) && v36 != 0x14) /*0x5d142f*/
            || TESEnchantableForm_GetFormEnchantment(type)
            || (v37 = InventoryEntryOfItem->extendData) != 0 && v37->node.data && sub_41DF40(v37->node.data) == 1 )
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v34); /*0x5d1433*/
            FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5d1439*/
            InventoryEntryOfItem = 0; /*0x5d1441*/
            a3 = 0; /*0x5d1443*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) ) /*0x5d144e*/
            goto LABEL_70; /*0x5d1452*/
          if ( InventoryEntryOfItem ) /*0x5d1456*/
            goto LABEL_68; /*0x5d1456*/
LABEL_69:
          InventoryEntryOfItem = 0; /*0x5d14aa*/
          a3 = 0; /*0x5d14ac*/
          goto LABEL_70; /*0x5d14ac*/
        }
        if ( v20 != 5 ) /*0x5d145d*/
          goto LABEL_7; /*0x5d145d*/
        if ( !EnchantmentMenu_SoulGemInfo_GetSoulLevel((ExtraDataList ***)InventoryEntryOfItem) ) /*0x5d1465*/
          goto LABEL_68; /*0x5d146c*/
LABEL_70:
        v39 = (int *)v133[0x1B]; /*0x5d14b0*/
        v134 = 0; /*0x5d14b9*/
        if ( InventoryEntryOfItem ) /*0x5d14c1*/
          v134 = (_DWORD *)sub_485150(InventoryEntryOfItem); /*0x5d14ca*/
        v40 = v133[0x16]; /*0x5d14ce*/
        if ( v40 == 3 || v40 == 6 || (v129 = 0, v40 == 5) ) /*0x5d14e3*/
          v129 = 1; /*0x5d14e5*/
        if ( v39 ) /*0x5d14ec*/
        {
          while ( a3 ) /*0x5d14f3*/
          {
            v41 = *(EntryData **)v39[2]; /*0x5d14fe*/
            v42 = v39; /*0x5d1500*/
            v39 = (int *)*v39; /*0x5d1502*/
            v43 = (_DWORD *)sub_485150(v41); /*0x5d1506*/
            if ( v129 && v41->type == (TESForm *)a3[1].vtbl ) /*0x5d151c*/
            {
              Health = TESHealthForm_GetHealth((TESHealthForm *)v41); /*0x5d158c*/
              v49 = TESHealthForm_GetHealth(a3); /*0x5d158e*/
              Shared_SetDwordAtOffset04(v41, v49 + Health); /*0x5d1598*/
              break; /*0x5d159d*/
            }
            if ( (int)v43 < (int)v134 /*0x5d154c*/
              || v43 == v134
              && (v141 = (unsigned __int8 *)sub_488DF0((EntryData *)a3),
                  v44 = sub_488DF0(v41),
                  _mbsicmp((const unsigned __int8 *)v44, v141) <= 0) )
            {
              v50 = (TESHealthForm **)FormHeapAlloc(8u); /*0x5d15a4*/
              if ( v50 ) /*0x5d15ae*/
              {
                v51 = v137; /*0x5d15b4*/
                *v50 = a3; /*0x5d15b8*/
                v50[1] = (TESHealthForm *)v51; /*0x5d15ba*/
                v52 = v50; /*0x5d15bd*/
              }
              else
              {
                v52 = 0; /*0x5d15c1*/
              }
              v53 = v133 + 0x1A; /*0x5d15cd*/
              v54 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v133[0x1A] + 4))(v133 + 0x1A); /*0x5d15d2*/
              v54[2] = v52; /*0x5d15d4*/
              *v54 = v42; /*0x5d15d7*/
              v54[1] = v42[1]; /*0x5d15dc*/
              v55 = (_DWORD *)v42[1]; /*0x5d15df*/
              if ( v55 ) /*0x5d15e4*/
                *v55 = v54; /*0x5d15e6*/
              else
                v53[1] = v54; /*0x5d15ed*/
              v42[1] = (int)v54; /*0x5d15e8*/
              goto LABEL_101; /*0x5d15eb*/
            }
            if ( !v39 ) /*0x5d1550*/
            {
              InventoryEntryOfItem = (EntryData *)a3; /*0x5d1552*/
              goto LABEL_85; /*0x5d1552*/
            }
          }
        }
        else
        {
LABEL_85:
          if ( InventoryEntryOfItem ) /*0x5d1558*/
          {
            v45 = (TESHealthForm **)FormHeapAlloc(8u); /*0x5d1560*/
            if ( v45 ) /*0x5d156a*/
            {
              v46 = v137; /*0x5d1574*/
              *v45 = a3; /*0x5d1578*/
              v45[1] = (TESHealthForm *)v46; /*0x5d157a*/
              v47 = v45; /*0x5d157d*/
            }
            else
            {
              v47 = 0; /*0x5d15f5*/
            }
            v53 = v133 + 0x1A; /*0x5d1601*/
            v56 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v133[0x1A] + 4))(v133 + 0x1A); /*0x5d1606*/
            v56[2] = v47; /*0x5d1608*/
            *v56 = 0; /*0x5d160b*/
            v56[1] = v53[2]; /*0x5d1614*/
            v57 = (_DWORD *)v53[2]; /*0x5d1617*/
            if ( v57 ) /*0x5d161c*/
              *v57 = v56; /*0x5d161e*/
            else
              v53[1] = v56; /*0x5d1622*/
            v53[2] = v56; /*0x5d1625*/
LABEL_101:
            ++v53[3]; /*0x5d1628*/
          }
        }
        v137 = (TESForm *)((char *)v137 + 1); /*0x5d162c*/
        if ( (int)v137 >= (int)TotalEntryCountForITem ) /*0x5d163b*/
          goto LABEL_103; /*0x5d163b*/
      }
      if ( type[4] == 0x19 /*0x5d1230*/
        && v140
        && !(*(unsigned __int8 (__thiscall **)(unsigned __int8 *))(*(_DWORD *)type + 0x78))(type) )
      {
        if ( !*((_BYTE *)v133 + 0x65) ) /*0x5d123e*/
          goto LABEL_70; /*0x5d123e*/
        v21 = v140 + 0xA8; /*0x5d1247*/
        v136 = (int)(v140 + 0xA8); /*0x5d124f*/
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v140 + 0x15) ) /*0x5d1253*/
          goto LABEL_70; /*0x5d125a*/
        v126 = 0; /*0x5d1268*/
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, (int)InventoryEntryOfItem, (int)type, (int)v21, 0x13); /*0x5d126c*/
        v142.m_data = (char *)Magic_GetWortcraftMaxEffects(BaseCalcAVi); /*0x5d127a*/
        v134 = 0; /*0x5d127e*/
        while ( 1 ) /*0x5d1294*/
        {
          m_data = v142.m_data; /*0x5d1294*/
          if ( (int)v134 >= (int)v142.m_data ) /*0x5d129c*/
            break; /*0x5d129c*/
          do /*0x5d12eb*/
          {
            if ( !v21 ) /*0x5d12a7*/
              break; /*0x5d12a7*/
            EffectItemList_GetItemByIndex2((char *)v141 + 0x30, (int)v134); /*0x5d12b7*/
            if ( v23 ) /*0x5d12be*/
            {
              v24 = *(_DWORD **)v21; /*0x5d12c4*/
              EffectItemList_GetItemByIndex2((char *)v141 + 0x30, (int)v134); /*0x5d12c9*/
              v26 = EffectItem_Match(v24, v25); /*0x5d12d1*/
              InventoryEntryOfItem = (EntryData *)a3; /*0x5d12d8*/
              if ( v26 ) /*0x5d12dc*/
                v126 = 1; /*0x5d12de*/
            }
            v21 = *((unsigned __int8 **)v21 + 1); /*0x5d12e8*/
          }
          while ( !v126 ); /*0x5d12eb*/
          v134 = (_DWORD *)((char *)v134 + 1); /*0x5d12ed*/
          if ( v126 ) /*0x5d12f7*/
            goto LABEL_70; /*0x5d12f7*/
          v21 = (unsigned __int8 *)v136; /*0x5d1290*/
        }
      }
      goto LABEL_68; /*0x5d129c*/
    }
LABEL_103:
    v58 = *(_DWORD **)(v144 + 0x34); /*0x5d1641*/
    while ( v58 ) /*0x5d164c*/
    {
      v59 = (Tile *)v58[2]; /*0x5d1650*/
      v58 = (_DWORD *)*v58; /*0x5d1656*/
      if ( sub_588B50(v59, 0xFB8) ) /*0x5d165f*/
        Tile_SetFloat(v59, 0xFAAu, flt_A690E0); /*0x5d1679*/
    }
    v60 = v133; /*0x5d1682*/
    v61 = (_DWORD *)v133[0x1C]; /*0x5d1686*/
    a3a = 0; /*0x5d168b*/
    v137 = 0; /*0x5d168f*/
    v134 = v61; /*0x5d1693*/
    if ( v61 ) /*0x5d1697*/
    {
      do /*0x5d19f2*/
      {
        v62 = (EntryData **)v134[2]; /*0x5d16a7*/
        v63 = *v62; /*0x5d16ac*/
        v64 = (int)v62[1]; /*0x5d16ae*/
        v134 = (_DWORD *)v134[1]; /*0x5d16b1*/
        TotalEntryCountForITem = v62; /*0x5d16b7*/
        v136 = v64; /*0x5d16bb*/
        v65 = (unsigned __int8 *)sub_485150(v63); /*0x5d16bf*/
        v141 = v65; /*0x5d16c8*/
        if ( v65 != (unsigned __int8 *)v137 ) /*0x5d16cc*/
          v137 = (TESForm *)v65; /*0x5d16ce*/
        v66 = sub_4851B0((ExtraDataList ***)v63, (TESObjectREFR *)reference); /*0x5d16da*/
        _sprintf(v145, "%s\\%s", "Icons", v66); /*0x5d16ef*/
        v67 = *(_DWORD **)(v144 + 0x34); /*0x5d16f8*/
        if ( v67 ) /*0x5d1700*/
        {
          while ( 1 ) /*0x5d1702*/
          {
            v68 = (Tile *)v67[2]; /*0x5d1702*/
            v67 = (_DWORD *)*v67; /*0x5d1708*/
            if ( sub_588C10(v68, 0xFAF) ) /*0x5d1711*/
            {
              if ( sub_488DF0((EntryData *)*TotalEntryCountForITem) ) /*0x5d1720*/
              {
                Float = Tile_GetFloat(v68, 0xFAA); /*0x5d1730*/
                if ( Float == flt_A690E0 ) /*0x5d1740*/
                {
                  HealthForForm = (unsigned __int8 *)sub_488DF0(v63); /*0x5d1750*/
                  v69 = sub_588C10(v68, 0xFAF); /*0x5d1754*/
                  if ( !_mbscmp((const unsigned __int8 *)v69, HealthForForm) ) /*0x5d175f*/
                    break; /*0x5d175f*/
                }
              }
            }
            if ( !v67 ) /*0x5d1771*/
              goto LABEL_116; /*0x5d1771*/
          }
          if ( v133[0x16] != 2 /*0x5d1afb*/
            || (HealthForForm = (unsigned __int8 *)TESHealthForm_GetHealthForForm(v63->type),
                TotalEntryCountForITem = (_DWORD *)TESForm_GetValue(v63->type),
                value_4g = (float)(int)TotalEntryCountForITem,
                valuea = ContainerEntryExtraData_GetHealth((void **)&v63->extendData, 0),
                v106 = (float)(int)HealthForForm,
                sub_5483C0(v106, valuea, value_4g),
                v85 <= 1) )
          {
            v85 = 1; /*0x5d1b01*/
          }
          v142.m_data = 0; /*0x5d1b06*/
          *(_DWORD *)&v142.m_dataLen = 0; /*0x5d1b0a*/
          v146 = 0; /*0x5d1b1f*/
          BSStringT_Static_Format(&v142, "%d", v85); /*0x5d1b26*/
          v86 = sub_488DF0(v63); /*0x5d1b30*/
          Tile_SetString(v68, (_DWORD *)0xFAF, v86); /*0x5d1b3d*/
          Tile_SetString(v68, (_DWORD *)0xFB0, v142.m_data); /*0x5d1b4e*/
          v87 = (char *)sub_48F450(v63, 0, 2, 1, 0, 0.0); /*0x5d1b5c*/
          Tile_SetString(v68, (_DWORD *)0xFB1, v87); /*0x5d1b69*/
          v88 = (char *)sub_48F450(v63, 0, 3, 1, 0, 0.0); /*0x5d1b77*/
          Tile_SetString(v68, (_DWORD *)0xFB2, v88); /*0x5d1b84*/
          v89 = (char *)sub_48F450(v63, 0, 4, 1, 0, 0.0); /*0x5d1b92*/
          Tile_SetString(v68, (_DWORD *)0xFB3, v89); /*0x5d1b9f*/
          Tile_SetString(v68, (_DWORD *)0xFB4, v145); /*0x5d1bb0*/
          v90 = (char *)sub_48F450(v63, 0, 0, 1, 0, 0.0); /*0x5d1bbd*/
          Tile_SetString(v68, (_DWORD *)0xFB5, v90); /*0x5d1bca*/
          value_4h = (float)(int)v141; /*0x5d1bd6*/
          Tile_SetFloat(v68, 0xFB7u, value_4h); /*0x5d1bde*/
          TotalEntryCountForITem = (_DWORD *)((ContainerEntryExtraData_HasWorn(v63, 0) != 0) + 1); /*0x5d1bf4*/
          value_4i = (float)(int)TotalEntryCountForITem; /*0x5d1bff*/
          Tile_SetFloat(v68, 0xFB8u, value_4i); /*0x5d1c07*/
          value_4j = (float)v136; /*0x5d1c13*/
          Tile_SetFloat(v68, 0xFB9u, value_4j); /*0x5d1c1b*/
          if ( !v140 || (v91 = sub_593690(v140, (int)v63), v136 = 2, !v91) ) /*0x5d1c38*/
            v136 = 1; /*0x5d1c3a*/
          value_4k = (float)v136; /*0x5d1c49*/
          Tile_SetFloat(v68, 0xFBAu, value_4k); /*0x5d1c51*/
          Float = (double)a3a; /*0x5d1c56*/
          value_4l = Float; /*0x5d1c5d*/
          Tile_SetFloat(v68, 0xFAAu, value_4l); /*0x5d1c65*/
          if ( a3a == unk_B3B718 ) /*0x5d1c74*/
          {
            InterfaceManager_GetSingleton(0, 1); /*0x5d1c79*/
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d1c81*/
            Float = (double)(int)++Singleton->unk08C; /*0x5d1c8d*/
            if ( (int)Singleton->unk08C < 0 ) /*0x5d1ca0*/
              Float = Float + flt_A2FC78; /*0x5d1ca2*/
            value_4m = Float; /*0x5d1cab*/
            Tile_SetFloat(v68, 0xFF0u, value_4m); /*0x5d1cb5*/
          }
          if ( v133[0x16] == 1 ) /*0x5d1cc2*/
          {
            v93 = OblivionDynamicCast( /*0x5d1cd4*/
                    v63->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( v93 ) /*0x5d1cde*/
            {
              if ( v93[1] ) /*0x5d1ce0*/
              {
                TotalEntryCountForITem = (_DWORD *)(2 - v135); /*0x5d1cf3*/
                Float = (double)(int)TotalEntryCountForITem; /*0x5d1cf7*/
                value_4n = Float; /*0x5d1cfb*/
                Tile_SetFloat(v68, 0xFAEu, value_4n); /*0x5d1d03*/
              }
            }
          }
          v94 = (void *)(*((_DWORD *)v68 + 4) + 0x30); /*0x5d1d0b*/
          v95 = *(_DWORD **)(*((_DWORD *)v68 + 4) + 0x34); /*0x5d1d0e*/
          if ( v95 ) /*0x5d1d13*/
          {
            while ( 1 ) /*0x5d1d15*/
            {
              v8 = v68 == (Tile *)v95[2]; /*0x5d1d15*/
              v96 = v95; /*0x5d1d1b*/
              v95 = (_DWORD *)*v95; /*0x5d1d1d*/
              if ( v8 ) /*0x5d1d1f*/
                break; /*0x5d1d1f*/
              if ( !v95 ) /*0x5d1d23*/
                goto LABEL_159; /*0x5d1d23*/
            }
          }
          else
          {
LABEL_159:
            v96 = 0; /*0x5d1d25*/
          }
          TotalEntryCountForITem = v96; /*0x5d1d29*/
          if ( v96 ) /*0x5d1d2d*/
            NiTPointerList_RemoveNode(v94, (void **)&TotalEntryCountForITem); /*0x5d1d34*/
          v97 = *((_DWORD *)v68 + 4); /*0x5d1d39*/
          v98 = *(int (__thiscall **)(_DWORD *))(*(_DWORD *)(v97 + 0x30) + 4); /*0x5d1d3f*/
          v99 = (_DWORD *)(v97 + 0x30); /*0x5d1d42*/
          v100 = (_DWORD *)v98(v99); /*0x5d1d47*/
          v100[2] = v68; /*0x5d1d49*/
          v100[1] = 0; /*0x5d1d4c*/
          *v100 = v99[1]; /*0x5d1d52*/
          v101 = v99[1]; /*0x5d1d54*/
          if ( v101 ) /*0x5d1d59*/
            *(_DWORD *)(v101 + 4) = v100; /*0x5d1d5b*/
          else
            v99[2] = v100; /*0x5d1d60*/
          v102 = v142.m_data; /*0x5d1d63*/
          ++v99[3]; /*0x5d1d67*/
          v99[1] = v100; /*0x5d1d6c*/
          v146 = 0xFFFFFFFF; /*0x5d1d6f*/
          FormHeapFree((unsigned int)v102); /*0x5d1d7a*/
          v142.m_data = 0; /*0x5d1d82*/
          *(_DWORD *)&v142.m_dataLen = 0; /*0x5d1d8b*/
        }
        else
        {
LABEL_116:
          if ( v133[0x16] != 2 /*0x5d17c5*/
            || (HealthForForm = (unsigned __int8 *)TESHealthForm_GetHealthForForm(v63->type),
                TotalEntryCountForITem = (_DWORD *)TESForm_GetValue(v63->type),
                value_4 = (float)(int)TotalEntryCountForITem,
                value = ContainerEntryExtraData_GetHealth((void **)&v63->extendData, 0),
                v104 = (float)(int)HealthForForm,
                Float = sub_5483C0(v104, value, value_4),
                v71 = v70,
                v70 <= 1) )
          {
            v71 = 1; /*0x5d17c7*/
          }
          v105 = sub_485150(v63); /*0x5d17dc*/
          v72 = sub_488DF0(v63); /*0x5d17df*/
          v73 = sub_5D0E50((Menu *)v133, st5_0, a4, Float, v145, v72, v105, a3a, a3a + 0x33); /*0x5d17f3*/
          v143.m_data = 0; /*0x5d17f7*/
          *(_DWORD *)&v143.m_dataLen = 0; /*0x5d17fb*/
          v146 = 1; /*0x5d1810*/
          BSStringT_Static_Format(&v143, "%d", v71); /*0x5d181b*/
          Tile_SetString(v73, (_DWORD *)0xFB0, v143.m_data); /*0x5d182f*/
          v74 = (char *)sub_48F450(v63, v71, 2, 1, 0, 0.0); /*0x5d1840*/
          Tile_SetString(v73, (_DWORD *)0xFB1, v74); /*0x5d184d*/
          v75 = (char *)sub_48F450(v63, v71, 3, 1, 0, 0.0); /*0x5d185e*/
          Tile_SetString(v73, (_DWORD *)0xFB2, v75); /*0x5d186b*/
          v76 = (char *)sub_48F450(v63, v71, 4, 1, 0, 0.0); /*0x5d187c*/
          Tile_SetString(v73, (_DWORD *)0xFB3, v76); /*0x5d1889*/
          v77 = (char *)sub_48F450(v63, v71, 0, 1, 0, 0.0); /*0x5d189a*/
          Tile_SetString(v73, (_DWORD *)0xFB5, v77); /*0x5d18a7*/
          TotalEntryCountForITem = (_DWORD *)((ContainerEntryExtraData_HasWorn(v63, 0) != 0) + 1); /*0x5d18be*/
          value_4a = (float)(int)TotalEntryCountForITem; /*0x5d18c9*/
          Tile_SetFloat((Tile *)v73, 0xFB8u, value_4a); /*0x5d18d1*/
          value_4b = (float)v136; /*0x5d18dd*/
          Tile_SetFloat((Tile *)v73, 0xFB9u, value_4b); /*0x5d18e5*/
          if ( !v140 || (v78 = sub_593690(v140, (int)v63), v136 = 2, !v78) ) /*0x5d1905*/
            v136 = 1; /*0x5d1907*/
          Float = (double)v136; /*0x5d190f*/
          value_4c = Float; /*0x5d1916*/
          Tile_SetFloat((Tile *)v73, 0xFBAu, value_4c); /*0x5d191e*/
          if ( a3a == unk_B3B718 ) /*0x5d192f*/
          {
            InterfaceManager_GetSingleton(0, 1); /*0x5d1934*/
            v79 = InterfaceManager_GetSingleton(0, 1); /*0x5d193c*/
            TotalEntryCountForITem = (_DWORD *)++v79->unk08C; /*0x5d1951*/
            Float = (double)(int)TotalEntryCountForITem; /*0x5d1955*/
            if ( (int)TotalEntryCountForITem < 0 ) /*0x5d1959*/
              Float = Float + flt_A2FC78; /*0x5d195b*/
            value_4d = Float; /*0x5d1964*/
            Tile_SetFloat((Tile *)v73, 0xFF0u, value_4d); /*0x5d196e*/
          }
          if ( v133[0x16] == 1 ) /*0x5d197b*/
          {
            v80 = OblivionDynamicCast( /*0x5d198d*/
                    v63->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0);
            if ( v80 ) /*0x5d1997*/
            {
              if ( v80[1] ) /*0x5d1999*/
              {
                TotalEntryCountForITem = (_DWORD *)(2 - v135); /*0x5d19ac*/
                Float = (double)(int)TotalEntryCountForITem; /*0x5d19b0*/
                value_4e = Float; /*0x5d19b4*/
                Tile_SetFloat((Tile *)v73, 0xFAEu, value_4e); /*0x5d19bc*/
              }
            }
          }
          v146 = 0xFFFFFFFF; /*0x5d19c6*/
          FormHeapFree((unsigned int)v143.m_data); /*0x5d19d1*/
          v143.m_data = 0; /*0x5d19d9*/
          *(_DWORD *)&v143.m_dataLen = 0; /*0x5d19e2*/
        }
        ++a3a; /*0x5d19e9*/
      }
      while ( v134 ); /*0x5d19f2*/
      v60 = v133; /*0x5d19f8*/
    }
    TotalEntryCountForITem = (_DWORD *)(a3a - 1); /*0x5d1a03*/
    value_4f = (float)(a3a - 1); /*0x5d1a0f*/
    Tile_SetFloat((Tile *)v60[0x11], 0xFAEu, value_4f); /*0x5d1a17*/
    v81 = *(_DWORD **)(v144 + 0x34); /*0x5d1a20*/
    while ( v81 ) /*0x5d1a25*/
    {
      v82 = (_DWORD *)v81[2]; /*0x5d1a27*/
      v81 = (_DWORD *)*v81; /*0x5d1a2d*/
      if ( Tile_GetFloat(v82, 0xFAA) == flt_A690E0 ) /*0x5d1a46*/
      {
        if ( v82 ) /*0x5d1a4a*/
          (*(void (__thiscall **)(_DWORD *, int))*v82)(v82, 1); /*0x5d1a54*/
      }
    }
    if ( v60[0x16] == 2 ) /*0x5d1a5e*/
    {
      Tile_SetFloat((Tile *)v60[0xC], 0xFB1u, fConstant_2); /*0x5d1a76*/
      v83 = sub_5D0BE0(v60); /*0x5d1a82*/
      if ( v83 <= 0 || sub_5E4420((Actor *)reference) < v83 ) /*0x5d1a99*/
        v84 = 1.0; /*0x5d1d95*/
      else
        v84 = fConstant_2; /*0x5d1a9f*/
      valueb = v84; /*0x5d1d9b*/
      Tile_SetFloat((Tile *)v60[0xC], 0xFAFu, valueb); /*0x5d1da3*/
    }
    if ( v60[0x16] == 3 ) /*0x5d1dac*/
    {
      Tile_SetFloat((Tile *)v60[0x14], 0xFB1u, fConstant_2); /*0x5d1dc0*/
      if ( !HealthForForm || *((_DWORD *)HealthForForm + 0x2B) || *((_DWORD *)HealthForForm + 0x2A) ) /*0x5d1dd6*/
        v103 = fConstant_2; /*0x5d1de3*/
      else
        v103 = 1.0; /*0x5d1ddf*/
      valuec = v103; /*0x5d1ded*/
      Tile_SetFloat((Tile *)v60[0x14], 0xFB1u, valuec); /*0x5d1df5*/
      if ( *((_BYTE *)v60 + 0x65) ) /*0x5d1dfa*/
        Tile_SetString((_DWORD *)v60[0x14], (_DWORD *)0xFAE, (char *)stru_B388A0.value); /*0x5d1e06*/
      else
        Tile_SetString((_DWORD *)v60[0x14], (_DWORD *)0xFAE, (char *)stru_B38898.value); /*0x5d1e17*/
    }
  }
}
