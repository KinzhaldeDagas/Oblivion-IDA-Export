_DWORD *__usercall sub_491CE0@<eax>(int a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  int v4; // edi
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  bool v7; // zf
  TESContainer_Entry *p_list; // eax
  void *v9; // edi
  TESForm::ModReferenceList **v10; // eax
  int v11; // eax
  int *v12; // ebx
  void *v13; // ebp
  tListVoid *next; // edi
  ExtraDataList *data; // esi
  double v16; // st5
  int ExtraCount; // ebx
  int v18; // esi
  void (__thiscall ***v19)(_DWORD, int); // edi
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // esi
  ExtraDataList *v23; // ebx
  ExtraDataList **v24; // edi
  ExtraDataList **v25; // eax
  _DWORD *v26; // eax
  ExtraDataList *v27; // esi
  BSExtraDataVtbl *ExtraScript; // eax
  char *v29; // eax
  char **EventList; // eax
  TESChildCELL *v31; // eax
  TESForm *v32; // ebp
  Script *v33; // eax
  _DWORD *v34; // eax
  int countDelta; // esi
  tListVoid *extendData; // ebx
  ExtraDataList *v37; // esi
  char *v38; // eax
  char **v39; // eax
  TESChildCELL *v40; // eax
  TESForm *v41; // edi
  Script *v42; // eax
  int v43; // ebp
  tListVoid *v44; // ebx
  _DWORD *v45; // eax
  ExtraDataList *v46; // esi
  int v47; // eax
  char *v48; // eax
  char **v49; // eax
  TESChildCELL *v50; // eax
  TESForm *v51; // edi
  char **v52; // eax
  EntryData *v53; // ebp
  ExtraDataList *v54; // esi
  int v55; // edi
  ExtraDataList *v56; // eax
  int v57; // eax
  tListVoid *v58; // ebx
  ExtraDataList *v59; // edi
  int v60; // edi
  ExtraDataList *v61; // esi
  int count; // eax
  int v63; // esi
  BSSimpleList_VoidPtr *v64; // ebp
  BSSimpleList_VoidPtr::NodeVoid *v65; // eax
  ExtraDataList *v66; // edi
  ExtraDataList *v67; // ebx
  BSExtraData *j; // esi
  tListVoid *v69; // esi
  _DWORD *result; // eax
  TESObjectREFR *v71; // ecx
  int v72; // ebp
  SInt32 FormCount; // esi
  TESObjectREFR *v74; // ecx
  TESContainer *v75; // eax
  void *v76; // ebx
  ExtraDataList **v77; // edi
  ExtraDataList *v78; // esi
  double v79; // st5
  int v80; // ebp
  int v81; // eax
  int v82; // esi
  ExtraDataList *v83; // edi
  ExtraDataList **v84; // edi
  ExtraDataList **v85; // eax
  _DWORD *v86; // ebx
  _DWORD *v87; // eax
  ExtraDataList *v88; // esi
  BSExtraDataVtbl *v89; // eax
  char *v90; // eax
  char **v91; // eax
  TESChildCELL *v92; // eax
  TESForm *v93; // ebp
  Script *v94; // eax
  int v95; // eax
  ExtraDataList **v96; // eax
  int v97; // edi
  _DWORD *v98; // eax
  int v99; // ebx
  ExtraDataList **v100; // esi
  int v101; // ecx
  ExtraDataList **v102; // eax
  ExtraDataList *v103; // ebp
  char *v104; // eax
  char **v105; // eax
  TESChildCELL *v106; // eax
  TESForm *v107; // ebx
  ExtraDataList **v108; // esi
  ExtraDataList *v109; // edi
  Script *v110; // esi
  char **v111; // eax
  ExtraDataList **v112; // ebx
  _DWORD *v113; // eax
  ExtraDataList *v114; // ebp
  ExtraDataList **v115; // esi
  ExtraDataList *v116; // edi
  BSExtraDataVtbl *v117; // eax
  char *v118; // eax
  char **v119; // eax
  TESChildCELL *v120; // eax
  TESForm *v121; // esi
  char **v122; // eax
  ExtraDataList **v123; // eax
  TESObjectREFR *v124; // ecx
  SInt32 v125; // ebp
  TESObjectREFR *v126; // ecx
  TESContainer *v127; // eax
  ExtraDataList **v128; // esi
  ExtraDataList *v129; // ecx
  ExtraDataList **v130; // esi
  ExtraDataList **v131; // esi
  int v132; // edi
  signed __int16 v133; // ax
  int v134; // eax
  ExtraDataList **v135; // edi
  ExtraDataList *v136; // esi
  ExtraDataList **v137; // esi
  ExtraDataList *v138; // edi
  unsigned int *v139; // ebp
  unsigned int v140; // esi
  void (__thiscall ***v141)(_DWORD, int); // edi
  _DWORD *v142; // eax
  unsigned int v143; // ebx
  unsigned int v144; // esi
  unsigned int v145; // edi
  signed __int16 v146; // ax
  ExtraDataList **v147; // edi
  ExtraDataList **v148; // eax
  ExtraDataList *v149; // ebp
  ExtraDataList *v150; // ebx
  BSExtraData *k; // esi
  ExtraDataList **v152; // eax
  BSExtraData *m_data; // esi
  char **ExtraScriptEventList; // [esp+4h] [ebp-60h]
  char **v155; // [esp+4h] [ebp-60h]
  char **v156; // [esp+4h] [ebp-60h]
  EntryData *v157; // [esp+24h] [ebp-40h]
  int v158; // [esp+24h] [ebp-40h]
  TESForm *type; // [esp+2Ch] [ebp-38h]
  _BYTE *v161; // [esp+2Ch] [ebp-38h]
  int i; // [esp+30h] [ebp-34h]
  Script *v163; // [esp+30h] [ebp-34h]
  int v164; // [esp+30h] [ebp-34h]
  ExtraDataList *v165; // [esp+30h] [ebp-34h]
  ExtraDataList **v166; // [esp+30h] [ebp-34h]
  int v167; // [esp+30h] [ebp-34h]
  TESContainer_Entry *v168; // [esp+34h] [ebp-30h]
  ExtraDataList **v169; // [esp+34h] [ebp-30h]
  Script *v170; // [esp+34h] [ebp-30h]
  _DWORD *a2; // [esp+38h] [ebp-2Ch]
  int v172; // [esp+3Ch] [ebp-28h]
  int v173; // [esp+3Ch] [ebp-28h]
  int v174; // [esp+40h] [ebp-24h]
  int v175; // [esp+44h] [ebp-20h]
  int v176; // [esp+44h] [ebp-20h]
  int v177; // [esp+48h] [ebp-1Ch]
  double HealthData; // [esp+4Ch] [ebp-18h]
  double v179; // [esp+4Ch] [ebp-18h]

  v4 = a1;
  v5 = *(TESObjectREFR **)(a1 + 4);
  if ( v5 )
    Container = TESObjectREFR_GetContainer(v5);
  else
    Container = 0;
  v7 = &Container->list == 0;
  p_list = &Container->list;
  v168 = p_list;
  if ( !v7 )
  {
    while ( 1 )
    {
      if ( !p_list->next && !p_list->data )
        goto LABEL_156;
      type = p_list->data->type;
      v9 = OblivionDynamicCast(
             type,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESLevItem `RTTI Type Descriptor',
             0);
      v10 = sub_4691B0((TESObjectARMO *)type);
      if ( !type || v9 || v10 && !TESBipedModelForm_IsPlayable(v10) )
        goto LABEL_155;
      ContainerExtraData_GetEntryForForm((_DWORD **)a1, (int)type, 1, 0);
      v12 = (int *)v11;
      v157 = (EntryData *)v11;
      if ( v11 )
      {
        v13 = OblivionDynamicCast(
                *(void **)(v11 + 8),
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESHealthForm `RTTI Type Descriptor',
                0);
        if ( v13 )
        {
          next = (tListVoid *)*v12;
          if ( *v12 )
          {
            do
            {
              data = (ExtraDataList *)next->node.data;
              if ( !next->node.data )
                break;
              if ( ExtraDataList_GetHealthData((ExtraDataList *)next->node.data) <= flt_A30634 )
                goto LABEL_24;
              HealthData = ExtraDataList_GetHealthData(data);
              v177 = (*(int (__thiscall **)(void *))(*(_DWORD *)v13 + 0x10))(v13);
              v16 = (double)v177;
              if ( v177 < 0 )
                v16 = v16 + flt_A2FC78;
              if ( v16 != HealthData )
                goto LABEL_24;
              sub_41F610(data);
              ExtraCount = ExtraDataList_GetExtraCount(data);
              sub_41F620(data);
              if ( data->members.m_data )
              {
                ExtraDataList_SetExtraCount(data, ExtraCount);
LABEL_24:
                next = (tListVoid *)next->node.next;
                goto LABEL_25;
              }
              BSSimpleList_Remove(next, (int)data);
              (*(void (__thiscall **)(ExtraDataList *, int))data->vtbl)(data, 1);
              next = v157->extendData;
LABEL_25:
              v12 = (int *)v157;
            }
            while ( next );
          }
        }
        if ( sub_469980((int)type) && *(PlayerCharacter **)(a1 + 4) == TESDataHandler_g_PlayerRef )
        {
          v18 = *v12;
          if ( *v12 )
          {
            while ( 1 )
            {
              v19 = *(void (__thiscall ****)(_DWORD, int))v18;
              if ( !*(_DWORD *)v18 )
                break;
              v20 = *(_DWORD **)(v18 + 4);
              if ( v20 )
              {
                *(_DWORD *)(v18 + 4) = v20[1];
                *(_DWORD *)v18 = *v20;
                FormHeapFree((unsigned int)v20);
              }
              else
              {
                *(_DWORD *)v18 = 0;
              }
              if ( v19 )
                (**v19)(v19, 1);
            }
          }
        }
        sub_484F20(v12);
        if ( v21 )
        {
          v22 = *v12;
          for ( i = *v12; v22; i = v22 )
          {
            v23 = *(ExtraDataList **)v22;
            if ( !*(_DWORD *)v22 )
              break;
            if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)v22) )
            {
              v24 = *(ExtraDataList ***)(v22 + 4);
              while ( v24 )
              {
                if ( !*v24 )
                  break;
                if ( v23 == *v24 )
                {
                  v25 = (ExtraDataList **)v24[1];
                  if ( v25 )
                  {
                    v24[1] = v25[1];
                    *v24 = *v25;
                    FormHeapFree((unsigned int)v25);
                  }
                  else
                  {
                    *v24 = 0;
                  }
                  v26 = (_DWORD *)FormHeapAlloc(0x14u);
                  v27 = v26 ? (ExtraDataList *)ExtraDataList_constr(v26) : 0;
                  ExtraScript = ExtraDataList_GetExtraScript(v23);
                  ExtraDataList_AddScript(v27, (int)ExtraScript);
                  v29 = (char *)ExtraDataList_GetExtraScript(v27);
                  EventList = Script_CreateEventList(v29);
                  ExtraDataList_SetScriptEventList(v27, (int)EventList);
                  v31 = (TESChildCELL *)FormHeapAlloc(0x58u);
                  v32 = v31 ? (TESForm *)TESObjectREFR_constr(v31) : 0;
                  TESForm_MakeTemporary(v32);
                  ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v27);
                  v33 = (Script *)ExtraDataList_GetExtraScript(v23);
                  a3 = Script_Run(v33, a3, st6_0, (TESObjectREFR *)v32, ExtraScriptEventList, 0, 0);
                  BSSimpleList_PushBack(v24, (int)v27);
                  v24 = *(ExtraDataList ***)(i + 4);
                  v22 = i;
                }
                else
                {
                  v24 = (ExtraDataList **)v24[1];
                }
              }
            }
            v22 = *(_DWORD *)(v22 + 4);
          }
        }
      }
      v34 = OblivionDynamicCast(
              type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      v163 = v34 ? (Script *)v34[1] : 0;
      if ( !v157 )
        break;
      countDelta = v157->countDelta;
      if ( countDelta >= 0 )
      {
        if ( v163 )
        {
          extendData = v157->extendData;
          if ( !v157->extendData || BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v157->extendData) )
          {
            a3 = ExtraContainerChanges_RunScripts((float *)a1, a3, st6_0);
          }
          else
          {
            v172 = countDelta - BSSimpleList_Count(extendData);
            do
            {
              v37 = (ExtraDataList *)extendData->node.data;
              if ( !extendData->node.data )
                break;
              if ( !ExtraDataList_GetExtraScript((ExtraDataList *)extendData->node.data) )
              {
                ExtraDataList_AddScript(v37, (int)v163);
                v38 = (char *)ExtraDataList_GetExtraScript(v37);
                v39 = Script_CreateEventList(v38);
                ExtraDataList_SetScriptEventList(v37, (int)v39);
                v40 = (TESChildCELL *)FormHeapAlloc(0x58u);
                if ( v40 )
                  v41 = (TESForm *)TESObjectREFR_constr(v40);
                else
                  v41 = 0;
                TESForm_MakeTemporary(v41);
                v155 = (char **)ExtraDataList_GetExtraScriptEventList(v37);
                sub_484F20((int *)v157);
                a3 = Script_Run(v42, a3, st6_0, (TESObjectREFR *)v41, v155, 0, 0);
                if ( v41 )
                  v41->vtbl->Destroy(v41, 1);
              }
              extendData = (tListVoid *)extendData->node.next;
            }
            while ( extendData );
            v43 = v172;
            v44 = v157->extendData;
            if ( v172 > 0 )
            {
              do
              {
                v45 = (_DWORD *)FormHeapAlloc(0x14u);
                if ( v45 )
                  v46 = (ExtraDataList *)ExtraDataList_constr(v45);
                else
                  v46 = 0;
                sub_484F20((int *)v157);
                ExtraDataList_AddScript(v46, v47);
                v48 = (char *)ExtraDataList_GetExtraScript(v46);
                v49 = Script_CreateEventList(v48);
                ExtraDataList_SetScriptEventList(v46, (int)v49);
                v50 = (TESChildCELL *)FormHeapAlloc(0x58u);
                if ( v50 )
                  v51 = (TESForm *)TESObjectREFR_constr(v50);
                else
                  v51 = 0;
                TESForm_MakeTemporary(v51);
                v52 = (char **)ExtraDataList_GetExtraScriptEventList(v46);
                a3 = Script_Run(v163, a3, st6_0, (TESObjectREFR *)v51, v52, 0, 0);
                if ( v51 )
                  v51->vtbl->Destroy(v51, 1);
                BSSimpleList_PushFront(v44, (int)v46);
                --v43;
              }
              while ( v43 );
            }
          }
        }
      }
      if ( type->member.type != kFormType_Ammo )
        goto LABEL_119;
      v53 = v157;
      v54 = 0;
      if ( *(PlayerCharacter **)(a1 + 4) == TESDataHandler_g_PlayerRef )
      {
        v55 = (int)v157->extendData;
        while ( v55 )
        {
          v56 = *(ExtraDataList **)v55;
          if ( !*(_DWORD *)v55 )
            break;
          v55 = *(_DWORD *)(v55 + 4);
          v54 = v56;
          ExtraDataList_RemoveOwner(v56);
        }
      }
      if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v157, 0) || sub_4846D0((TESForm *)v157) )
      {
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v157, 0) || !sub_4846D0((TESForm *)v157) )
        {
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v157, 0) )
          {
            if ( v157->countDelta < sub_4845D0((int *)v157) )
            {
LABEL_110:
              v157->countDelta = sub_4845D0((int *)v157);
              goto LABEL_120;
            }
            if ( v157->countDelta > sub_4845D0((int *)v157) )
            {
              v60 = (int)v157->extendData;
              while ( v60 )
              {
                v61 = *(ExtraDataList **)v60;
                if ( !*(_DWORD *)v60 )
                  break;
                v60 = *(_DWORD *)(v60 + 4);
                if ( ExtraDataList_HasWorn(v61, 0) )
                  ExtraDataList_SetExtraCount(v61, LOWORD(v157->countDelta));
              }
            }
          }
          goto LABEL_119;
        }
        if ( v157->countDelta < 0 )
          sub_4853B0(v157, 0, 0, 1);
        if ( InventoryEntryData_Cleanup((ExtraDataList ***)v157) > 1 )
        {
          v58 = v157->extendData;
          if ( v157->extendData )
          {
            while ( 2 )
            {
              v59 = (ExtraDataList *)v58->node.data;
              if ( !v58->node.data )
                break;
              v58 = (tListVoid *)v58->node.next;
              if ( ExtraDataList_HasWorn(v59, 0) )
              {
                if ( !v54 )
                {
                  v54 = v59;
                  goto LABEL_108;
                }
LABEL_107:
                BaseExtraList_Clear(v54, 1);
                ExtraDataList_DuplicateListForContainer(v54, (int)v59);
                SetWorn(v54, 1, 0);
                BSSimpleList_Clear(&v157->extendData->node.data);
                BSSimpleList_PushFront(&v157->extendData->node.data, (int)v54);
              }
              else if ( v54 )
              {
                goto LABEL_107;
              }
LABEL_108:
              if ( !v58 )
                break;
              continue;
            }
          }
        }
        if ( v157->countDelta < sub_4845D0((int *)v157) )
          goto LABEL_110;
LABEL_119:
        v53 = v157;
        goto LABEL_120;
      }
      v57 = v157->countDelta;
      if ( v57 <= 0 )
        goto LABEL_119;
      if ( v57 >= v168->data->count )
        v157->countDelta = 0;
LABEL_120:
      count = v168->data->count;
      if ( count < 0 )
        count = -count;
      if ( v53 )
      {
        v63 = v53->countDelta + count;
        v164 = v63;
      }
      else
      {
        v164 = count;
        v63 = count;
      }
      if ( v63 > 0 )
      {
        if ( v157 )
        {
          v64 = (BSSimpleList_VoidPtr *)v157->extendData;
          if ( v157->extendData )
          {
            if ( BSSimpleList_Count(&v157->extendData->node.data) )
            {
              while ( v63 < (unsigned int)BSSimpleList_Count(v64) )
              {
                v65 = v64->firstNode.next;
                v66 = (ExtraDataList *)v64->firstNode.data;
                if ( v65 )
                {
                  v64->firstNode.next = v65->next;
                  v64->firstNode.data = v65->data;
                  FormHeapFree((unsigned int)v65);
                }
                else
                {
                  v64->firstNode.data = 0;
                }
                if ( v66 )
                {
                  v67 = (ExtraDataList *)v64->firstNode.data;
                  if ( v64->firstNode.data )
                  {
                    for ( j = v66->members.m_data; j; j = v66->members.m_data )
                    {
                      if ( BaseExtraList_GetExtraData(v67, (ExtraDataType)j->members.type) )
                      {
                        BaseExtraList_RemoveExtraByPtr(v66, (int)j, 1);
                      }
                      else
                      {
                        BaseExtraList_RemoveExtraByPtr(v66, (int)j, 0);
                        BaseExtraList_AddExtra(v67, j);
                      }
                    }
                  }
                  (*(void (__thiscall **)(ExtraDataList *, int))v66->vtbl)(v66, 1);
                  v63 = v164;
                }
              }
              if ( BSSimpleList_IsEmpty(v64) )
              {
                FormHeapFree((unsigned int)v157->extendData);
                v157->extendData = 0;
              }
              else
              {
                v64 = (BSSimpleList_VoidPtr *)v157->extendData;
              }
              if ( v64 && v64->firstNode.data )
              {
                while ( v64->firstNode.data )
                {
                  if ( BaseExtraList_Count((ExtraDataList *)v64->firstNode.data) )
                  {
                    v64 = (BSSimpleList_VoidPtr *)v64->firstNode.next;
                  }
                  else
                  {
                    sub_67F100(v64);
                    v69 = v157->extendData;
                    if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v157->extendData) )
                    {
                      BSSimpleList_Clear(v64);
                      FormHeapFree((unsigned int)v64);
                      v157->extendData = 0;
                      break;
                    }
                    v64 = (BSSimpleList_VoidPtr *)v69;
                  }
                  if ( !v64 )
                    break;
                }
              }
            }
          }
        }
      }
LABEL_155:
      v4 = a1;
      v168 = v168->next;
      if ( !v168 )
        goto LABEL_156;
      p_list = v168;
    }
    if ( v163 )
      a3 = ExtraContainerChanges_RunScripts((float *)a1, a3, st6_0);
    goto LABEL_119;
  }
LABEL_156:
  result = *(_DWORD **)v4;
  a2 = *(_DWORD **)v4;
  if ( *(_DWORD *)v4 )
  {
    while ( 1 )
    {
      result = a2;
      if ( !a2[1] && !*a2 )
        break;
      v71 = *(TESObjectREFR **)(v4 + 4);
      v72 = *a2;
      FormCount = 0;
      v158 = *a2;
      if ( v71 )
      {
        if ( TESObjectREFR_GetContainer(v71) )
        {
          if ( v72 )
          {
            v74 = *(TESObjectREFR **)(v4 + 4);
            if ( v74 )
              v75 = TESObjectREFR_GetContainer(v74);
            else
              v75 = 0;
            FormCount = TESContainer_GetFormCount(v75, *(TESForm **)(v72 + 8));
          }
        }
      }
      v173 = FormCount + *(_DWORD *)(v72 + 4);
      v76 = OblivionDynamicCast(
              *(void **)(v72 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESHealthForm `RTTI Type Descriptor',
              0);
      if ( v76 )
      {
        v77 = *(ExtraDataList ***)v72;
        if ( *(_DWORD *)v72 )
        {
          do
          {
            v78 = *v77;
            if ( !*v77 )
              break;
            if ( ExtraDataList_GetHealthData(*v77) <= flt_A30634 )
              goto LABEL_178;
            v179 = ExtraDataList_GetHealthData(v78);
            v175 = (*(int (__thiscall **)(void *))(*(_DWORD *)v76 + 0x10))(v76);
            v79 = (double)v175;
            if ( v175 < 0 )
              v79 = v79 + flt_A2FC78;
            if ( v79 != v179 )
              goto LABEL_178;
            sub_41F610(v78);
            v80 = ExtraDataList_GetExtraCount(v78);
            sub_41F620(v78);
            if ( v78->members.m_data )
            {
              ExtraDataList_SetExtraCount(v78, v80);
LABEL_178:
              v77 = (ExtraDataList **)v77[1];
              goto LABEL_179;
            }
            BSSimpleList_Remove(v77, (int)v78);
            (*(void (__thiscall **)(ExtraDataList *, int))v78->vtbl)(v78, 1);
            v77 = *(ExtraDataList ***)v158;
LABEL_179:
            v72 = v158;
          }
          while ( v77 );
        }
      }
      v81 = sub_4845D0((int *)v72);
      v82 = *(_DWORD *)v72;
      v176 = v81;
      v161 = *(_BYTE **)(v72 + 8);
      if ( *(_DWORD *)v72 )
      {
        while ( 1 )
        {
          v83 = *(ExtraDataList **)v82;
          if ( !*(_DWORD *)v82 )
            goto LABEL_215;
          if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)v82) )
            break;
          v82 = *(_DWORD *)(v82 + 4);
          if ( !v82 )
            goto LABEL_215;
        }
        if ( ExtraDataList_GetExtraScript(v83) )
        {
          v169 = *(ExtraDataList ***)v158;
          if ( *(_DWORD *)v158 )
          {
            do
            {
              v165 = *v169;
              if ( !*v169 )
                break;
              if ( ExtraDataList_GetExtraScript(*v169) )
              {
                v84 = (ExtraDataList **)v169[1];
                while ( v84 )
                {
                  if ( !*v84 )
                    break;
                  if ( v165 == *v84 )
                  {
                    v85 = (ExtraDataList **)v84[1];
                    v86 = v84 + 1;
                    if ( v85 )
                    {
                      *v86 = v85[1];
                      *v84 = *v85;
                      FormHeapFree((unsigned int)v85);
                    }
                    else
                    {
                      *v84 = 0;
                    }
                    v87 = (_DWORD *)FormHeapAlloc(0x14u);
                    if ( v87 )
                      v88 = (ExtraDataList *)ExtraDataList_constr(v87);
                    else
                      v88 = 0;
                    v89 = ExtraDataList_GetExtraScript(v165);
                    ExtraDataList_AddScript(v88, (int)v89);
                    v90 = (char *)ExtraDataList_GetExtraScript(v88);
                    v91 = Script_CreateEventList(v90);
                    ExtraDataList_SetScriptEventList(v88, (int)v91);
                    v92 = (TESChildCELL *)FormHeapAlloc(0x58u);
                    if ( v92 )
                      v93 = (TESForm *)TESObjectREFR_constr(v92);
                    else
                      v93 = 0;
                    TESForm_MakeTemporary(v93);
                    v156 = (char **)ExtraDataList_GetExtraScriptEventList(v88);
                    v94 = (Script *)ExtraDataList_GetExtraScript(v165);
                    a3 = Script_Run(v94, a3, st6_0, (TESObjectREFR *)v93, v156, 0, 0);
                    if ( v88 )
                    {
                      if ( *v86 )
                      {
                        v95 = (int)(v84 + 1);
                        do
                        {
                          v84 = *(ExtraDataList ***)v95;
                          v7 = *(_DWORD *)(*(_DWORD *)v95 + 4) == 0;
                          v95 = *(_DWORD *)v95 + 4;
                        }
                        while ( !v7 );
                      }
                      if ( *v84 )
                      {
                        v96 = (ExtraDataList **)FormHeapAlloc(8u);
                        if ( v96 )
                        {
                          *v96 = v88;
                          v96[1] = 0;
                          v84[1] = (ExtraDataList *)v96;
                        }
                        else
                        {
                          v84[1] = 0;
                        }
                        v84 = (ExtraDataList **)v169[1];
                        continue;
                      }
                      *v84 = v88;
                    }
                    v84 = (ExtraDataList **)v169[1];
                  }
                  else
                  {
                    v84 = (ExtraDataList **)v84[1];
                  }
                }
              }
              v169 = (ExtraDataList **)v169[1];
            }
            while ( v169 );
          }
        }
      }
LABEL_215:
      v97 = v158;
      if ( *(int *)(v158 + 4) >= 0 )
      {
        v98 = OblivionDynamicCast(
                *(void **)(v158 + 8),
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESScriptableForm `RTTI Type Descriptor',
                0);
        v99 = v98 ? v98[1] : 0;
        v170 = (Script *)v99;
        if ( v99 )
        {
          v100 = *(ExtraDataList ***)v158;
          v166 = *(ExtraDataList ***)v158;
          if ( *(_DWORD *)v158 && (v100[1] || *v100) )
          {
            v101 = 0;
            v102 = *(ExtraDataList ***)v158;
            do
            {
              if ( *v102 )
                ++v101;
              v102 = (ExtraDataList **)v102[1];
            }
            while ( v102 );
            v174 = *(_DWORD *)(v158 + 4) - v101;
            do
            {
              v103 = *v100;
              if ( !*v100 )
                break;
              if ( !ExtraDataList_GetExtraScript(*v100) )
              {
                ExtraDataList_AddScript(v103, v99);
                v104 = (char *)ExtraDataList_GetExtraScript(v103);
                v105 = Script_CreateEventList(v104);
                ExtraDataList_SetScriptEventList(v103, (int)v105);
                v106 = (TESChildCELL *)FormHeapAlloc(0x58u);
                if ( v106 )
                  v107 = (TESForm *)TESObjectREFR_constr(v106);
                else
                  v107 = 0;
                TESForm_MakeTemporary(v107);
                v108 = *(ExtraDataList ***)v97;
                if ( *(_DWORD *)v97 )
                {
                  do
                  {
                    v109 = *v108;
                    if ( !*v108 )
                      break;
                    if ( ExtraDataList_GetExtraScript(*v108) )
                    {
                      v110 = (Script *)ExtraDataList_GetExtraScript(v109);
                      goto LABEL_238;
                    }
                    v108 = (ExtraDataList **)v108[1];
                  }
                  while ( v108 );
                }
                v110 = 0;
LABEL_238:
                v111 = (char **)ExtraDataList_GetExtraScriptEventList(v103);
                a3 = Script_Run(v110, a3, st6_0, (TESObjectREFR *)v107, v111, 0, 0);
                v97 = v158;
                v99 = (int)v170;
                v100 = v166;
              }
              v100 = (ExtraDataList **)v100[1];
              v166 = v100;
            }
            while ( v100 );
            v112 = *(ExtraDataList ***)v97;
            if ( v174 > 0 )
            {
              v167 = v174;
              do
              {
                v113 = (_DWORD *)FormHeapAlloc(0x14u);
                if ( v113 )
                  v114 = (ExtraDataList *)ExtraDataList_constr(v113);
                else
                  v114 = 0;
                v115 = *(ExtraDataList ***)v158;
                if ( *(_DWORD *)v158 )
                {
                  do
                  {
                    v116 = *v115;
                    if ( !*v115 )
                      break;
                    if ( ExtraDataList_GetExtraScript(*v115) )
                    {
                      v117 = ExtraDataList_GetExtraScript(v116);
                      goto LABEL_251;
                    }
                    v115 = (ExtraDataList **)v115[1];
                  }
                  while ( v115 );
                }
                v117 = 0;
LABEL_251:
                ExtraDataList_AddScript(v114, (int)v117);
                v118 = (char *)ExtraDataList_GetExtraScript(v114);
                v119 = Script_CreateEventList(v118);
                ExtraDataList_SetScriptEventList(v114, (int)v119);
                v120 = (TESChildCELL *)FormHeapAlloc(0x58u);
                if ( v120 )
                  v121 = (TESForm *)TESObjectREFR_constr(v120);
                else
                  v121 = 0;
                TESForm_MakeTemporary(v121);
                v122 = (char **)ExtraDataList_GetExtraScriptEventList(v114);
                a3 = Script_Run(v170, a3, st6_0, (TESObjectREFR *)v121, v122, 0, 0);
                if ( v121 )
                  v121->vtbl->Destroy(v121, 1);
                if ( v114 )
                {
                  if ( *v112 )
                  {
                    v123 = (ExtraDataList **)FormHeapAlloc(8u);
                    if ( v123 )
                    {
                      *v123 = *v112;
                      v123[1] = 0;
                    }
                    else
                    {
                      v123 = 0;
                    }
                    v123[1] = v112[1];
                    v112[1] = (ExtraDataList *)v123;
                  }
                  *v112 = v114;
                }
                --v167;
              }
              while ( v167 );
              v97 = v158;
            }
          }
          else
          {
            a3 = ExtraContainerChanges_RunScripts((float *)a1, a3, st6_0);
          }
        }
      }
      if ( v161[4] == 0x22 )
      {
        v124 = *(TESObjectREFR **)(a1 + 4);
        v125 = 0;
        if ( v124 )
        {
          if ( TESObjectREFR_GetContainer(v124) )
          {
            v126 = *(TESObjectREFR **)(a1 + 4);
            if ( v126 )
              v127 = TESObjectREFR_GetContainer(v126);
            else
              v127 = 0;
            v125 = TESContainer_GetFormCount(v127, *(TESForm **)(v97 + 8));
          }
        }
        if ( *(PlayerCharacter **)(a1 + 4) == TESDataHandler_g_PlayerRef )
        {
          v128 = *(ExtraDataList ***)v97;
          if ( *(_DWORD *)v97 )
          {
            do
            {
              v129 = *v128;
              if ( !*v128 )
                break;
              v128 = (ExtraDataList **)v128[1];
              ExtraDataList_RemoveOwner(v129);
            }
            while ( v128 );
          }
        }
        v130 = *(ExtraDataList ***)v97;
        if ( *(_DWORD *)v97 )
        {
          while ( *v130 )
          {
            if ( ExtraDataList_HasWorn(*v130, 0) )
            {
              v131 = *(ExtraDataList ***)v158;
              v132 = 0;
              if ( *(_DWORD *)v158 )
              {
                do
                {
                  if ( !*v131 )
                    break;
                  v133 = ExtraDataList_GetExtraCount(*v131);
                  v131 = (ExtraDataList **)v131[1];
                  v132 += v133;
                }
                while ( v131 );
              }
              v134 = *(_DWORD *)(v158 + 4);
              if ( v134 + v125 >= v132 )
              {
                if ( v134 + v125 > v132 )
                {
                  v135 = *(ExtraDataList ***)v158;
                  if ( *(_DWORD *)v158 )
                  {
                    do
                    {
                      v136 = *v135;
                      if ( !*v135 )
                        break;
                      v135 = (ExtraDataList **)v135[1];
                      if ( ExtraDataList_HasWorn(v136, 0) )
                        ExtraDataList_SetExtraCount(v136, *(unsigned __int16 *)(v158 + 4));
                    }
                    while ( v135 );
                  }
                }
              }
              else
              {
                *(_DWORD *)(v158 + 4) = v132 - v134 - v125;
              }
              break;
            }
            v130 = (ExtraDataList **)v130[1];
            if ( !v130 )
              break;
          }
        }
      }
      v137 = *(ExtraDataList ***)v158;
      if ( *(_DWORD *)v158 )
      {
        do
        {
          v138 = *v137;
          if ( !*v137 )
            break;
          if ( ExtraDataList_GetExtraScript(*v137) )
            sub_41F620(v138);
          v137 = (ExtraDataList **)v137[1];
        }
        while ( v137 );
      }
      if ( sub_469980((int)v161) && *(PlayerCharacter **)(a1 + 4) == TESDataHandler_g_PlayerRef )
      {
        v139 = (unsigned int *)v158;
        v140 = *(_DWORD *)v158;
        if ( *(_DWORD *)v158 )
        {
          while ( 1 )
          {
            v141 = *(void (__thiscall ****)(_DWORD, int))v140;
            if ( !*(_DWORD *)v140 )
              break;
            v142 = *(_DWORD **)(v140 + 4);
            if ( v142 )
            {
              *(_DWORD *)(v140 + 4) = v142[1];
              *(_DWORD *)v140 = *v142;
              FormHeapFree((unsigned int)v142);
            }
            else
            {
              *(_DWORD *)v140 = 0;
            }
            if ( v141 )
              (**v141)(v141, 1);
          }
        }
      }
      else
      {
        v139 = (unsigned int *)v158;
      }
      v143 = v173;
      if ( v173 > (int)0xFFFFFFFF && v173 < v176 )
      {
        v144 = *v139;
        if ( *v139 )
        {
          v145 = 0;
          do
          {
            if ( !*(_DWORD *)v144 )
              break;
            v146 = ExtraDataList_GetExtraCount(*(ExtraDataList **)v144);
            v144 = *(_DWORD *)(v144 + 4);
            v145 += v146;
          }
          while ( v144 );
          v139[1] = v145;
        }
      }
      if ( v173 > 0 )
      {
        v147 = (ExtraDataList **)*v139;
        if ( *v139 )
        {
          if ( *v147 )
          {
            if ( v173 < (unsigned int)BSSimpleList_Count((_DWORD *)*v139) )
            {
              do
              {
                v148 = (ExtraDataList **)v147[1];
                v149 = *v147;
                if ( v148 )
                {
                  v147[1] = v148[1];
                  *v147 = *v148;
                  FormHeapFree((unsigned int)v148);
                }
                else
                {
                  *v147 = 0;
                }
                if ( v149 )
                {
                  v150 = *v147;
                  if ( *v147 )
                  {
                    for ( k = v149->members.m_data; k; k = v149->members.m_data )
                    {
                      if ( BaseExtraList_GetExtraData(v150, (ExtraDataType)k->members.type) )
                      {
                        BaseExtraList_RemoveExtraByPtr(v149, (int)k, 1);
                      }
                      else
                      {
                        BaseExtraList_RemoveExtraByPtr(v149, (int)k, 0);
                        BaseExtraList_AddExtra(v150, k);
                      }
                    }
                  }
                  (*(void (__thiscall **)(ExtraDataList *, int))v149->vtbl)(v149, 1);
                  v143 = v173;
                }
              }
              while ( v143 < BSSimpleList_Count(v147) );
              v139 = (unsigned int *)v158;
            }
            if ( v147[1] || *v147 )
            {
              v147 = (ExtraDataList **)*v139;
            }
            else
            {
              FormHeapFree(*v139);
              *v139 = 0;
            }
            if ( v147 )
            {
              while ( *v147 )
              {
                if ( BaseExtraList_Count(*v147) )
                {
                  v147 = (ExtraDataList **)v147[1];
                }
                else
                {
                  v152 = (ExtraDataList **)v147[1];
                  if ( v152 )
                  {
                    v147[1] = v152[1];
                    *v147 = *v152;
                    FormHeapFree((unsigned int)v152);
                  }
                  else
                  {
                    *v147 = 0;
                  }
                  if ( !*(_DWORD *)(*v139 + 4) && !*(_DWORD *)*v139 )
                  {
                    if ( v147[1] )
                    {
                      do
                      {
                        m_data = v147[1]->members.m_data;
                        FormHeapFree((unsigned int)v147[1]);
                        v147[1] = (ExtraDataList *)m_data;
                      }
                      while ( m_data );
                    }
                    *v147 = 0;
                    FormHeapFree((unsigned int)v147);
                    *v139 = 0;
                    break;
                  }
                  v147 = (ExtraDataList **)*v139;
                }
                if ( !v147 )
                  break;
              }
            }
          }
        }
      }
      a2 = (_DWORD *)a2[1];
      result = a2;
      if ( !a2 )
        break;
      v4 = a1;
    }
  }
  return result;
}
