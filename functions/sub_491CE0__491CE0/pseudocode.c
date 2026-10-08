tListEntryData *__usercall sub_491CE0@<eax>(ExtraContainerChanges_Data *a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  ExtraContainerChanges_Data *v3; // edi
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  bool v6; // zf
  TESContainer_Entry *p_list; // eax
  void *v8; // edi
  TESForm::ModReferenceList **v9; // eax
  EntryData *EntryForForm; // eax
  int *v11; // ebx
  void *v12; // ebp
  int *extendData; // edi
  ExtraDataList *v14; // esi
  double v15; // st5
  int ExtraCount; // ebx
  int v17; // esi
  void (__thiscall ***v18)(_DWORD, int); // edi
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // esi
  ExtraDataList *v22; // ebx
  ExtraDataList **v23; // edi
  ExtraDataList **v24; // eax
  _DWORD *v25; // eax
  ExtraDataList *v26; // esi
  BSExtraDataVtbl *ExtraScript; // eax
  char *v28; // eax
  char **EventList; // eax
  TESChildCELL *v30; // eax
  TESForm *v31; // ebp
  Script *v32; // eax
  _DWORD *v33; // eax
  int countDelta; // esi
  tListVoid *next; // ebx
  ExtraDataList *data; // esi
  char *v37; // eax
  char **v38; // eax
  TESChildCELL *v39; // eax
  TESForm *v40; // edi
  Script *v41; // eax
  int v42; // ebp
  tListVoid *v43; // ebx
  _DWORD *v44; // eax
  ExtraDataList *v45; // esi
  BSExtraDataVtbl *v46; // eax
  char *v47; // eax
  char **v48; // eax
  TESChildCELL *v49; // eax
  TESForm *v50; // edi
  char **v51; // eax
  EntryData *v52; // ebp
  ExtraDataList *v53; // esi
  int v54; // edi
  ExtraDataList *v55; // eax
  int v56; // eax
  tListVoid *v57; // ebx
  ExtraDataList *v58; // edi
  int v59; // edi
  ExtraDataList *v60; // esi
  int count; // eax
  int v62; // esi
  BSSimpleList_VoidPtr *v63; // ebp
  BSSimpleList_VoidPtr::NodeVoid *v64; // eax
  ExtraDataList *v65; // edi
  ExtraDataList *v66; // ebx
  BSExtraData *j; // esi
  tListVoid *v68; // esi
  tListEntryData *result; // eax
  TESObjectREFR *v70; // ecx
  EntryData *v71; // ebp
  SInt32 FormCount; // esi
  TESObjectREFR *v73; // ecx
  TESContainer *v74; // eax
  void *v75; // ebx
  int *v76; // edi
  ExtraDataList *v77; // esi
  double v78; // st5
  int v79; // ebp
  int v80; // eax
  int v81; // esi
  ExtraDataList *v82; // edi
  ExtraDataList **v83; // edi
  ExtraDataList **v84; // eax
  _DWORD *v85; // ebx
  _DWORD *v86; // eax
  ExtraDataList *v87; // esi
  BSExtraDataVtbl *v88; // eax
  char *v89; // eax
  char **v90; // eax
  TESChildCELL *v91; // eax
  TESForm *v92; // ebp
  Script *v93; // eax
  int v94; // eax
  ExtraDataList **v95; // eax
  EntryData *v96; // edi
  _DWORD *v97; // eax
  BSExtraDataVtbl *v98; // ebx
  int *v99; // esi
  int v100; // ecx
  int *v101; // eax
  ExtraDataList *v102; // ebp
  char *v103; // eax
  char **v104; // eax
  TESChildCELL *v105; // eax
  TESForm *v106; // ebx
  ExtraDataList **v107; // esi
  ExtraDataList *v108; // edi
  Script *v109; // esi
  char **v110; // eax
  ExtraDataList **v111; // ebx
  _DWORD *v112; // eax
  ExtraDataList *v113; // ebp
  int *v114; // esi
  ExtraDataList *v115; // edi
  BSExtraDataVtbl *v116; // eax
  char *v117; // eax
  char **v118; // eax
  TESChildCELL *v119; // eax
  TESForm *v120; // esi
  char **v121; // eax
  ExtraDataList **v122; // eax
  TESObjectREFR *v123; // ecx
  SInt32 v124; // ebp
  TESObjectREFR *v125; // ecx
  TESContainer *v126; // eax
  ExtraDataList **v127; // esi
  ExtraDataList *v128; // ecx
  ExtraDataList **v129; // esi
  int *v130; // esi
  int v131; // edi
  signed __int16 v132; // ax
  SInt32 v133; // eax
  int *v134; // edi
  ExtraDataList *v135; // esi
  int *v136; // esi
  ExtraDataList *v137; // edi
  unsigned int *v138; // ebp
  int *v139; // esi
  void (__thiscall ***v140)(_DWORD, int); // edi
  int *v141; // eax
  unsigned int v142; // ebx
  unsigned int v143; // esi
  unsigned int v144; // edi
  signed __int16 v145; // ax
  ExtraDataList **v146; // edi
  ExtraDataList **v147; // eax
  ExtraDataList *v148; // ebp
  ExtraDataList *v149; // ebx
  BSExtraData *k; // esi
  ExtraDataList **v151; // eax
  BSExtraData *m_data; // esi
  char **ExtraScriptEventList; // [esp+4h] [ebp-60h]
  char **v154; // [esp+4h] [ebp-60h]
  char **v155; // [esp+4h] [ebp-60h]
  EntryData *v156; // [esp+24h] [ebp-40h]
  EntryData *v157; // [esp+24h] [ebp-40h]
  TESForm *form; // [esp+2Ch] [ebp-38h]
  TESForm *forma; // [esp+2Ch] [ebp-38h]
  int i; // [esp+30h] [ebp-34h]
  BSExtraDataVtbl *v162; // [esp+30h] [ebp-34h]
  int v163; // [esp+30h] [ebp-34h]
  ExtraDataList *v164; // [esp+30h] [ebp-34h]
  int *v165; // [esp+30h] [ebp-34h]
  int v166; // [esp+30h] [ebp-34h]
  TESContainer_Entry *v167; // [esp+34h] [ebp-30h]
  int *v168; // [esp+34h] [ebp-30h]
  Script *v169; // [esp+34h] [ebp-30h]
  tListEntryData *a2; // [esp+38h] [ebp-2Ch]
  int v171; // [esp+3Ch] [ebp-28h]
  int v172; // [esp+3Ch] [ebp-28h]
  int v173; // [esp+40h] [ebp-24h]
  int v174; // [esp+44h] [ebp-20h]
  int v175; // [esp+44h] [ebp-20h]
  int v176; // [esp+48h] [ebp-1Ch]
  double HealthData; // [esp+4Ch] [ebp-18h]
  double v178; // [esp+4Ch] [ebp-18h]

  v3 = a1; /*0x491d0d*/
  owner = a1->owner; /*0x491d13*/
  if ( owner ) /*0x491d18*/
    Container = TESObjectREFR_GetContainer(owner); /*0x491d1a*/
  else
    Container = 0; /*0x491d21*/
  v6 = &Container->list == 0; /*0x491d23*/
  p_list = &Container->list; /*0x491d23*/
  v167 = p_list; /*0x491d26*/
  if ( !v6 )
  {
    while ( 1 )
    {
      if ( !p_list->next && !p_list->data ) /*0x491d3f*/
        goto LABEL_156; /*0x491d3f*/
      form = p_list->data->type; /*0x491d5b*/
      v8 = OblivionDynamicCast( /*0x491d65*/
             form,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESLevItem `RTTI Type Descriptor',
             0);
      v9 = sub_4691B0((TESObjectARMO *)form); /*0x491d67*/
      if ( !form || v8 || v9 && !TESBipedModelForm_IsPlayable(v9) ) /*0x491d85*/
        goto LABEL_155; /*0x491d8c*/
      EntryForForm = ContainerExtraData_GetEntryForForm(a1, form, 1, 0); /*0x491d9f*/
      v11 = (int *)EntryForForm; /*0x491da4*/
      v156 = EntryForForm; /*0x491da8*/
      if ( EntryForForm )
      {
        v12 = OblivionDynamicCast( /*0x491dc9*/
                EntryForForm->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESHealthForm `RTTI Type Descriptor',
                0);
        if ( v12 ) /*0x491dd0*/
        {
          extendData = (int *)*v11; /*0x491dd6*/
          if ( *v11 ) /*0x491dd6*/
          {
            do /*0x491de0*/
            {
              v14 = (ExtraDataList *)*extendData; /*0x491de0*/
              if ( !*extendData ) /*0x491de4*/
                break; /*0x491de4*/
              if ( ExtraDataList_GetHealthData((ExtraDataList *)*extendData) <= kTerrainLODQuadRayDirectionZ ) /*0x491dfc*/
                goto LABEL_24; /*0x491dfc*/
              HealthData = ExtraDataList_GetHealthData(v14); /*0x491e05*/
              v176 = (*(int (__thiscall **)(void *))(*(_DWORD *)v12 + 0x10))(v12); /*0x491e15*/
              v15 = (double)v176; /*0x491e19*/
              if ( v176 < 0 ) /*0x491e1d*/
                v15 = v15 + flt_A2FC78; /*0x491e1f*/
              if ( v15 != HealthData ) /*0x491e2e*/
                goto LABEL_24; /*0x491e2e*/
              sub_41F610(v14); /*0x491e32*/
              ExtraCount = ExtraDataList_GetExtraCount(v14); /*0x491e40*/
              sub_41F620(v14); /*0x491e43*/
              if ( v14->members.m_data ) /*0x491e48*/
              {
                ExtraDataList_SetExtraCount(v14, ExtraCount); /*0x491e6b*/
LABEL_24:
                extendData = (int *)extendData[1]; /*0x491e70*/
                goto LABEL_25; /*0x491e70*/
              }
              BSSimpleList_Remove(extendData, (int)v14); /*0x491e51*/
              (*(void (__thiscall **)(ExtraDataList *, int))v14->vtbl)(v14, 1); /*0x491e5e*/
              extendData = (int *)v156->extendData; /*0x491e64*/
LABEL_25:
              v11 = (int *)v156; /*0x491e73*/
            }
            while ( extendData ); /*0x491de0*/
          }
        }
        if ( sub_469980((int)form) && (PlayerCharacter *)a1->owner == reference ) /*0x491e9d*/
        {
          v17 = *v11; /*0x491e9f*/
          if ( *v11 ) /*0x491e9f*/
          {
            while ( 1 ) /*0x491ea5*/
            {
              v18 = *(void (__thiscall ****)(_DWORD, int))v17; /*0x491ea5*/
              if ( !*(_DWORD *)v17 ) /*0x491ea5*/
                break; /*0x491ea5*/
              v19 = *(_DWORD **)(v17 + 4); /*0x491eab*/
              if ( v19 ) /*0x491eb0*/
              {
                *(_DWORD *)(v17 + 4) = v19[1]; /*0x491eb5*/
                *(_DWORD *)v17 = *v19; /*0x491ebb*/
                FormHeapFree((unsigned int)v19); /*0x491ebd*/
              }
              else
              {
                *(_DWORD *)v17 = 0; /*0x491ec7*/
              }
              if ( v18 ) /*0x491ecf*/
                (**v18)(v18, 1); /*0x491ed9*/
            }
          }
        }
        sub_484F20(v11); /*0x491edf*/
        if ( v20 )
        {
          v21 = *v11; /*0x491eec*/
          for ( i = *v11; v21; i = v21 )
          {
            v22 = *(ExtraDataList **)v21; /*0x491f00*/
            if ( !*(_DWORD *)v21 ) /*0x491f00*/
              break; /*0x491f04*/
            if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)v21) )
            {
              v23 = *(ExtraDataList ***)(v21 + 4); /*0x491f19*/
              while ( v23 )
              {
                if ( !*v23 ) /*0x491f24*/
                  break; /*0x491f28*/
                if ( v22 == *v23 )
                {
                  v24 = (ExtraDataList **)v23[1]; /*0x491f36*/
                  if ( v24 ) /*0x491f3b*/
                  {
                    v23[1] = v24[1]; /*0x491f40*/
                    *v23 = *v24; /*0x491f46*/
                    FormHeapFree((unsigned int)v24); /*0x491f48*/
                  }
                  else
                  {
                    *v23 = 0; /*0x491f52*/
                  }
                  v25 = (_DWORD *)FormHeapAlloc(0x14u); /*0x491f5a*/
                  v26 = v25 ? (ExtraDataList *)ExtraDataList_constr(v25) : 0;
                  ExtraScript = ExtraDataList_GetExtraScript(v22); /*0x491f89*/
                  ExtraDataList_AddScript(v26, ExtraScript); /*0x491f91*/
                  v28 = (char *)ExtraDataList_GetExtraScript(v26); /*0x491f98*/
                  EventList = Script_CreateEventList(v28); /*0x491f9f*/
                  ExtraDataList_SetScriptEventList(v26, (int)EventList); /*0x491fa7*/
                  v30 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x491fae*/
                  v31 = v30 ? (TESForm *)TESObjectREFR_constr(v30) : 0;
                  TESForm_MakeTemporary(v31); /*0x491fdd*/
                  ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v26); /*0x491fed*/
                  v32 = (Script *)ExtraDataList_GetExtraScript(v22); /*0x491ff1*/
                  a3 = Script_Run(v32, a3, st6_0, (TESObjectREFR *)v31, ExtraScriptEventList, 0, 0); /*0x491ff8*/
                  BSSimpleList_PushBack(v23, (int)v26); /*0x492000*/
                  v23 = *(ExtraDataList ***)(i + 4); /*0x492009*/
                  v21 = i; /*0x49200c*/
                }
                else
                {
                  v23 = (ExtraDataList **)v23[1]; /*0x492010*/
                }
              }
            }
            v21 = *(_DWORD *)(v21 + 4); /*0x49201b*/
          }
        }
      }
      v33 = OblivionDynamicCast( /*0x49203d*/
              form,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      v162 = v33 ? (BSExtraDataVtbl *)v33[1] : 0;
      if ( !v156 ) /*0x492060*/
        break; /*0x492060*/
      countDelta = v156->countDelta; /*0x49207a*/
      if ( countDelta >= 0 ) /*0x49207f*/
      {
        if ( v162 ) /*0x49208a*/
        {
          next = v156->extendData; /*0x492094*/
          if ( !v156->extendData || BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v156->extendData) ) /*0x4920a0*/
          {
            a3 = ExtraContainerChanges_RunScripts(a1, a3, st6_0); /*0x49223d*/
          }
          else
          {
            v171 = countDelta - BSSimpleList_Count(next); /*0x4920b6*/
            do /*0x49215d*/
            {
              data = (ExtraDataList *)next->node.data; /*0x4920bf*/
              if ( !next->node.data ) /*0x4920bf*/
                break; /*0x4920c3*/
              if ( !ExtraDataList_GetExtraScript((ExtraDataList *)next->node.data) ) /*0x4920cb*/
              {
                ExtraDataList_AddScript(data, v162); /*0x4920df*/
                v37 = (char *)ExtraDataList_GetExtraScript(data); /*0x4920e6*/
                v38 = Script_CreateEventList(v37); /*0x4920ed*/
                ExtraDataList_SetScriptEventList(data, (int)v38); /*0x4920f5*/
                v39 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4920fc*/
                if ( v39 ) /*0x49210e*/
                  v40 = (TESForm *)TESObjectREFR_constr(v39); /*0x492117*/
                else
                  v40 = 0; /*0x49211b*/
                TESForm_MakeTemporary(v40); /*0x492127*/
                v154 = (char **)ExtraDataList_GetExtraScriptEventList(data); /*0x49213b*/
                sub_484F20((int *)v156); /*0x49213d*/
                a3 = Script_Run(v41, a3, st6_0, (TESObjectREFR *)v40, v154, 0, 0); /*0x492144*/
                if ( v40 ) /*0x49214b*/
                  v40->vtbl->Destroy(v40, 1); /*0x492156*/
              }
              next = (tListVoid *)next->node.next; /*0x492158*/
            }
            while ( next ); /*0x49215d*/
            v42 = v171; /*0x492163*/
            v43 = v156->extendData; /*0x49216d*/
            if ( v171 > 0 ) /*0x49216f*/
            {
              do /*0x492231*/
              {
                v44 = (_DWORD *)FormHeapAlloc(0x14u); /*0x492177*/
                if ( v44 ) /*0x49218d*/
                  v45 = (ExtraDataList *)ExtraDataList_constr(v44); /*0x492196*/
                else
                  v45 = 0; /*0x49219a*/
                sub_484F20((int *)v156); /*0x4921a8*/
                ExtraDataList_AddScript(v45, v46); /*0x4921b0*/
                v47 = (char *)ExtraDataList_GetExtraScript(v45); /*0x4921b7*/
                v48 = Script_CreateEventList(v47); /*0x4921be*/
                ExtraDataList_SetScriptEventList(v45, (int)v48); /*0x4921c6*/
                v49 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4921cd*/
                if ( v49 ) /*0x4921e3*/
                  v50 = (TESForm *)TESObjectREFR_constr(v49); /*0x4921ec*/
                else
                  v50 = 0; /*0x4921f0*/
                TESForm_MakeTemporary(v50); /*0x4921fc*/
                v51 = (char **)ExtraDataList_GetExtraScriptEventList(v45); /*0x492207*/
                a3 = Script_Run((Script *)v162, a3, st6_0, (TESObjectREFR *)v50, v51, 0, 0); /*0x492212*/
                if ( v50 ) /*0x492219*/
                  v50->vtbl->Destroy(v50, 1); /*0x492224*/
                BSSimpleList_PushFront(v43, (int)v45); /*0x492229*/
                --v42; /*0x49222e*/
              }
              while ( v42 ); /*0x492231*/
            }
          }
        }
      }
      if ( form->member.type != kFormType_Ammo ) /*0x49224a*/
        goto LABEL_119; /*0x49224a*/
      v52 = v156; /*0x492257*/
      v53 = 0; /*0x49225b*/
      if ( (PlayerCharacter *)a1->owner == reference ) /*0x492263*/
      {
        v54 = (int)v156->extendData; /*0x492265*/
        while ( v54 ) /*0x492265*/
        {
          v55 = *(ExtraDataList **)v54; /*0x492270*/
          if ( !*(_DWORD *)v54 ) /*0x492270*/
            break; /*0x492274*/
          v54 = *(_DWORD *)(v54 + 4); /*0x492276*/
          v53 = v55; /*0x492279*/
          ExtraDataList_RemoveOwner(v55); /*0x49227d*/
        }
      }
      if ( !ContainerEntryExtraData_HasWorn(v156, 0) || sub_4846D0((TESForm *)v156) ) /*0x492295*/
      {
        if ( !ContainerEntryExtraData_HasWorn(v156, 0) || !sub_4846D0((TESForm *)v156) ) /*0x4922d6*/
        {
          if ( ContainerEntryExtraData_HasWorn(v156, 0) ) /*0x49237f*/
          {
            if ( v156->countDelta < sub_4845D0((int *)v156) ) /*0x492394*/
            {
LABEL_110:
              v156->countDelta = sub_4845D0((int *)v156); /*0x49236f*/
              goto LABEL_120; /*0x492379*/
            }
            if ( v156->countDelta > sub_4845D0((int *)v156) ) /*0x4923a8*/
            {
              v59 = (int)v156->extendData; /*0x4923aa*/
              while ( v59 ) /*0x4923aa*/
              {
                v60 = *(ExtraDataList **)v59; /*0x4923b1*/
                if ( !*(_DWORD *)v59 ) /*0x4923b1*/
                  break; /*0x4923b5*/
                v59 = *(_DWORD *)(v59 + 4); /*0x4923b7*/
                if ( ExtraDataList_HasWorn(v60, 0) ) /*0x4923be*/
                  ExtraDataList_SetExtraCount(v60, LOWORD(v156->countDelta)); /*0x4923ce*/
              }
            }
          }
          goto LABEL_119; /*0x4923d5*/
        }
        if ( v156->countDelta < 0 ) /*0x4922e7*/
          sub_4853B0(v156, 0, 0, 1); /*0x4922f1*/
        if ( InventoryEntryData_Cleanup((ExtraDataList ***)v156) > 1 ) /*0x492300*/
        {
          v57 = v156->extendData; /*0x492302*/
          if ( v156->extendData ) /*0x492302*/
          {
            while ( 2 ) /*0x492310*/
            {
              v58 = (ExtraDataList *)v57->node.data; /*0x492310*/
              if ( !v57->node.data ) /*0x492314*/
                break; /*0x492314*/
              v57 = (tListVoid *)v57->node.next; /*0x492316*/
              if ( ExtraDataList_HasWorn(v58, 0) ) /*0x49231d*/
              {
                if ( !v53 ) /*0x492328*/
                {
                  v53 = v58; /*0x49232a*/
                  goto LABEL_108; /*0x49232c*/
                }
LABEL_107:
                BaseExtraList_Clear(v53, 1); /*0x492332*/
                ExtraDataList_DuplicateListForContainer(v53, (int)v58); /*0x49233e*/
                SetWorn(v53, 1, 0); /*0x492349*/
                BSSimpleList_Clear(&v156->extendData->node.data); /*0x492351*/
                BSSimpleList_PushFront(&v156->extendData->node.data, (int)v53); /*0x49235a*/
              }
              else if ( v53 ) /*0x492330*/
              {
                goto LABEL_107; /*0x492330*/
              }
LABEL_108:
              if ( !v57 ) /*0x492361*/
                break; /*0x492361*/
              continue; /*0x492361*/
            }
          }
        }
        if ( v156->countDelta < sub_4845D0((int *)v156) ) /*0x49236d*/
          goto LABEL_110; /*0x49236d*/
LABEL_119:
        v52 = v156; /*0x4923d7*/
        goto LABEL_120; /*0x4923d7*/
      }
      v56 = v156->countDelta; /*0x49229e*/
      if ( v56 <= 0 ) /*0x4922a3*/
        goto LABEL_119; /*0x4922a3*/
      if ( v56 >= v167->data->count ) /*0x4922b1*/
        v156->countDelta = 0; /*0x4922b7*/
LABEL_120:
      count = v167->data->count; /*0x4923db*/
      if ( count < 0 ) /*0x4923e5*/
        count = -count; /*0x4923e7*/
      if ( v52 ) /*0x4923eb*/
      {
        v62 = v52->countDelta + count; /*0x4923f0*/
        v163 = v62; /*0x4923f3*/
      }
      else
      {
        v163 = count; /*0x4923f9*/
        v62 = count; /*0x4923fd*/
      }
      if ( v62 > 0 ) /*0x492401*/
      {
        if ( v156 ) /*0x49240c*/
        {
          v63 = (BSSimpleList_VoidPtr *)v156->extendData; /*0x492416*/
          if ( v156->extendData ) /*0x492416*/
          {
            if ( BSSimpleList_Count(&v156->extendData->node.data) ) /*0x492422*/
            {
              while ( v62 < (unsigned int)BSSimpleList_Count(v63) ) /*0x492438*/
              {
                v64 = v63->firstNode.next; /*0x492440*/
                v65 = (ExtraDataList *)v63->firstNode.data; /*0x492445*/
                if ( v64 ) /*0x492448*/
                {
                  v63->firstNode.next = v64->next; /*0x49244d*/
                  v63->firstNode.data = v64->data; /*0x492453*/
                  FormHeapFree((unsigned int)v64); /*0x492456*/
                }
                else
                {
                  v63->firstNode.data = 0; /*0x492460*/
                }
                if ( v65 ) /*0x492469*/
                {
                  v66 = (ExtraDataList *)v63->firstNode.data; /*0x49246b*/
                  if ( v63->firstNode.data ) /*0x49246b*/
                  {
                    for ( j = v65->members.m_data; j; j = v65->members.m_data ) /*0x492477*/
                    {
                      if ( BaseExtraList_GetExtraData(v66, (ExtraDataType)j->members.type) ) /*0x49248e*/
                      {
                        BaseExtraList_RemoveExtraByPtr(v65, (int)j, 1); /*0x49249c*/
                      }
                      else
                      {
                        BaseExtraList_RemoveExtraByPtr(v65, (int)j, 0); /*0x4924a6*/
                        BaseExtraList_AddExtra(v66, j); /*0x4924ae*/
                      }
                    }
                  }
                  (*(void (__thiscall **)(ExtraDataList *, int))v65->vtbl)(v65, 1); /*0x4924c2*/
                  v62 = v163; /*0x4924c4*/
                }
              }
              if ( BSSimpleList_IsEmpty(v63) ) /*0x4924d9*/
              {
                FormHeapFree((unsigned int)v156->extendData); /*0x4924e9*/
                v156->extendData = 0; /*0x4924f1*/
              }
              else
              {
                v63 = (BSSimpleList_VoidPtr *)v156->extendData; /*0x4924f9*/
              }
              if ( v63 && v63->firstNode.data ) /*0x4924ff*/
              {
                while ( v63->firstNode.data ) /*0x49250a*/
                {
                  if ( BaseExtraList_Count((ExtraDataList *)v63->firstNode.data) ) /*0x49250c*/
                  {
                    v63 = (BSSimpleList_VoidPtr *)v63->firstNode.next; /*0x49252e*/
                  }
                  else
                  {
                    BSSimpleList_PopHeadWithoutPayloadFree(v63); /*0x492518*/
                    v68 = v156->extendData; /*0x49251d*/
                    if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v156->extendData) ) /*0x492521*/
                    {
                      BSSimpleList_Clear(v63); /*0x492539*/
                      FormHeapFree((unsigned int)v63); /*0x49253f*/
                      v156->extendData = 0; /*0x492547*/
                      break; /*0x492547*/
                    }
                    v63 = (BSSimpleList_VoidPtr *)v68; /*0x49252a*/
                  }
                  if ( !v63 ) /*0x492533*/
                    break; /*0x492533*/
                }
              }
            }
          }
        }
      }
LABEL_155:
      v3 = a1; /*0x49254d*/
      v167 = v167->next; /*0x49255a*/
      if ( !v167 ) /*0x49255e*/
        goto LABEL_156; /*0x49255e*/
      p_list = v167; /*0x491d32*/
    }
    if ( v162 ) /*0x492066*/
      a3 = ExtraContainerChanges_RunScripts(a1, a3, st6_0); /*0x492070*/
    goto LABEL_119; /*0x492075*/
  }
LABEL_156:
  result = v3->objList; /*0x492564*/
  a2 = v3->objList; /*0x492568*/
  if ( v3->objList )
  {
    while ( 1 )
    {
      result = a2; /*0x492578*/
      if ( !a2->node.next && !a2->node.data ) /*0x492582*/
        break; /*0x492582*/
      v70 = v3->owner; /*0x49258b*/
      v71 = a2->node.data; /*0x49258e*/
      FormCount = 0; /*0x492590*/
      v157 = a2->node.data; /*0x492594*/
      if ( v70 ) /*0x492598*/
      {
        if ( TESObjectREFR_GetContainer(v70) ) /*0x49259a*/
        {
          if ( v71 ) /*0x4925a5*/
          {
            v73 = v3->owner; /*0x4925a7*/
            if ( v73 ) /*0x4925ac*/
              v74 = TESObjectREFR_GetContainer(v73); /*0x4925ae*/
            else
              v74 = 0; /*0x4925b5*/
            FormCount = TESContainer_GetFormCount(v74, v71->type); /*0x4925c2*/
          }
        }
      }
      v172 = FormCount + v71->countDelta; /*0x4925d5*/
      v75 = OblivionDynamicCast( /*0x4925e4*/
              v71->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESHealthForm `RTTI Type Descriptor',
              0);
      if ( v75 ) /*0x4925eb*/
      {
        v76 = (int *)v71->extendData; /*0x4925f1*/
        if ( v71->extendData ) /*0x4925f1*/
        {
          do /*0x492600*/
          {
            v77 = (ExtraDataList *)*v76; /*0x492600*/
            if ( !*v76 ) /*0x492604*/
              break; /*0x492604*/
            if ( ExtraDataList_GetHealthData((ExtraDataList *)*v76) <= kTerrainLODQuadRayDirectionZ ) /*0x49261c*/
              goto LABEL_178; /*0x49261c*/
            v178 = ExtraDataList_GetHealthData(v77); /*0x492625*/
            v174 = (*(int (__thiscall **)(void *))(*(_DWORD *)v75 + 0x10))(v75); /*0x492634*/
            v78 = (double)v174; /*0x492638*/
            if ( v174 < 0 ) /*0x49263c*/
              v78 = v78 + flt_A2FC78; /*0x49263e*/
            if ( v78 != v178 ) /*0x49264d*/
              goto LABEL_178; /*0x49264d*/
            sub_41F610(v77); /*0x492651*/
            v79 = ExtraDataList_GetExtraCount(v77); /*0x49265f*/
            sub_41F620(v77); /*0x492662*/
            if ( v77->members.m_data ) /*0x492667*/
            {
              ExtraDataList_SetExtraCount(v77, v79); /*0x49268a*/
LABEL_178:
              v76 = (int *)v76[1]; /*0x49268f*/
              goto LABEL_179; /*0x49268f*/
            }
            BSSimpleList_Remove(v76, (int)v77); /*0x492670*/
            (*(void (__thiscall **)(ExtraDataList *, int))v77->vtbl)(v77, 1); /*0x49267d*/
            v76 = (int *)v157->extendData; /*0x492683*/
LABEL_179:
            v71 = v157; /*0x492692*/
          }
          while ( v76 ); /*0x492600*/
        }
      }
      v80 = sub_4845D0((int *)v71); /*0x49269e*/
      v81 = (int)v71->extendData; /*0x4926a5*/
      v175 = v80; /*0x4926ad*/
      forma = v71->type; /*0x4926b1*/
      if ( v71->extendData ) /*0x4926a5*/
      {
        while ( 1 ) /*0x4926c0*/
        {
          v82 = *(ExtraDataList **)v81; /*0x4926c0*/
          if ( !*(_DWORD *)v81 ) /*0x4926c4*/
            goto LABEL_215; /*0x4926c4*/
          if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)v81) ) /*0x4926cc*/
            break; /*0x4926cc*/
          v81 = *(_DWORD *)(v81 + 4); /*0x4926d5*/
          if ( !v81 ) /*0x4926da*/
            goto LABEL_215; /*0x4926da*/
        }
        if ( ExtraDataList_GetExtraScript(v82) ) /*0x4926e3*/
        {
          v168 = (int *)v157->extendData; /*0x4926f8*/
          if ( v157->extendData ) /*0x4926f8*/
          {
            do /*0x49270a*/
            {
              v164 = (ExtraDataList *)*v168; /*0x49270a*/
              if ( !*v168 ) /*0x49270a*/
                break; /*0x49270a*/
              if ( ExtraDataList_GetExtraScript((ExtraDataList *)*v168) ) /*0x49271e*/
              {
                v83 = (ExtraDataList **)v168[1]; /*0x49272f*/
                while ( v83 ) /*0x492734*/
                {
                  if ( !*v83 ) /*0x49273e*/
                    break; /*0x49273e*/
                  if ( v164 == *v83 ) /*0x49274a*/
                  {
                    v84 = (ExtraDataList **)v83[1]; /*0x492750*/
                    v85 = v83 + 1; /*0x492755*/
                    if ( v84 ) /*0x492758*/
                    {
                      *v85 = v84[1]; /*0x49275d*/
                      *v83 = *v84; /*0x492762*/
                      FormHeapFree((unsigned int)v84); /*0x492764*/
                    }
                    else
                    {
                      *v83 = 0; /*0x49276e*/
                    }
                    v86 = (_DWORD *)FormHeapAlloc(0x14u); /*0x492776*/
                    if ( v86 ) /*0x49278c*/
                      v87 = (ExtraDataList *)ExtraDataList_constr(v86); /*0x492795*/
                    else
                      v87 = 0; /*0x492799*/
                    v88 = ExtraDataList_GetExtraScript(v164); /*0x4927a5*/
                    ExtraDataList_AddScript(v87, v88); /*0x4927ad*/
                    v89 = (char *)ExtraDataList_GetExtraScript(v87); /*0x4927b4*/
                    v90 = Script_CreateEventList(v89); /*0x4927bb*/
                    ExtraDataList_SetScriptEventList(v87, (int)v90); /*0x4927c3*/
                    v91 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4927ca*/
                    if ( v91 ) /*0x4927e0*/
                      v92 = (TESForm *)TESObjectREFR_constr(v91); /*0x4927e9*/
                    else
                      v92 = 0; /*0x4927ed*/
                    TESForm_MakeTemporary(v92); /*0x4927f9*/
                    v155 = (char **)ExtraDataList_GetExtraScriptEventList(v87); /*0x49280d*/
                    v93 = (Script *)ExtraDataList_GetExtraScript(v164); /*0x49280f*/
                    a3 = Script_Run(v93, a3, st6_0, (TESObjectREFR *)v92, v155, 0, 0); /*0x492816*/
                    if ( v87 ) /*0x49281d*/
                    {
                      if ( *v85 ) /*0x49281f*/
                      {
                        v94 = (int)(v83 + 1); /*0x492824*/
                        do /*0x49282f*/
                        {
                          v83 = *(ExtraDataList ***)v94; /*0x492826*/
                          v6 = *(_DWORD *)(*(_DWORD *)v94 + 4) == 0; /*0x492828*/
                          v94 = *(_DWORD *)v94 + 4; /*0x49282c*/
                        }
                        while ( !v6 ); /*0x49282f*/
                      }
                      if ( *v83 ) /*0x492831*/
                      {
                        v95 = (ExtraDataList **)FormHeapAlloc(8u); /*0x492838*/
                        if ( v95 ) /*0x492842*/
                        {
                          *v95 = v87; /*0x492848*/
                          v95[1] = 0; /*0x49284a*/
                          v83[1] = (ExtraDataList *)v95; /*0x492851*/
                        }
                        else
                        {
                          v83[1] = 0; /*0x49285f*/
                        }
                        v83 = (ExtraDataList **)v168[1]; /*0x492854*/
                        continue; /*0x492857*/
                      }
                      *v83 = v87; /*0x492867*/
                    }
                    v83 = (ExtraDataList **)v168[1]; /*0x49286d*/
                  }
                  else
                  {
                    v83 = (ExtraDataList **)v83[1]; /*0x492872*/
                  }
                }
              }
              v168 = (int *)v168[1]; /*0x49287d*/
            }
            while ( v168 ); /*0x49270a*/
          }
        }
      }
LABEL_215:
      v96 = v157; /*0x492890*/
      if ( v157->countDelta >= 0 )
      {
        v97 = OblivionDynamicCast( /*0x4928b0*/
                v157->type,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESScriptableForm `RTTI Type Descriptor',
                0);
        v98 = v97 ? (BSExtraDataVtbl *)v97[1] : 0;
        v169 = (Script *)v98; /*0x4928c5*/
        if ( v98 ) /*0x4928c9*/
        {
          v99 = (int *)v157->extendData; /*0x4928cf*/
          v165 = (int *)v157->extendData; /*0x4928d3*/
          if ( v157->extendData && (v99[1] || *v99) ) /*0x4928e3*/
          {
            v100 = 0; /*0x4928ef*/
            v101 = (int *)v157->extendData; /*0x4928f1*/
            do /*0x492900*/
            {
              if ( *v101 ) /*0x4928f3*/
                ++v100; /*0x4928f8*/
              v101 = (int *)v101[1]; /*0x4928fb*/
            }
            while ( v101 ); /*0x492900*/
            v173 = v157->countDelta - v100; /*0x492904*/
            do /*0x4929c3*/
            {
              v102 = (ExtraDataList *)*v99; /*0x492908*/
              if ( !*v99 ) /*0x492908*/
                break; /*0x49290c*/
              if ( !ExtraDataList_GetExtraScript((ExtraDataList *)*v99) ) /*0x492914*/
              {
                ExtraDataList_AddScript(v102, v98); /*0x492924*/
                v103 = (char *)ExtraDataList_GetExtraScript(v102); /*0x49292b*/
                v104 = Script_CreateEventList(v103); /*0x492932*/
                ExtraDataList_SetScriptEventList(v102, (int)v104); /*0x49293a*/
                v105 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x492941*/
                if ( v105 ) /*0x492957*/
                  v106 = (TESForm *)TESObjectREFR_constr(v105); /*0x492960*/
                else
                  v106 = 0; /*0x492964*/
                TESForm_MakeTemporary(v106); /*0x492970*/
                v107 = (ExtraDataList **)v96->extendData; /*0x492975*/
                if ( v96->extendData ) /*0x492975*/
                {
                  do /*0x492980*/
                  {
                    v108 = *v107; /*0x492980*/
                    if ( !*v107 ) /*0x492980*/
                      break; /*0x492980*/
                    if ( ExtraDataList_GetExtraScript(*v107) ) /*0x492988*/
                    {
                      v109 = (Script *)ExtraDataList_GetExtraScript(v108); /*0x492a07*/
                      goto LABEL_238; /*0x492a09*/
                    }
                    v107 = (ExtraDataList **)v107[1]; /*0x492991*/
                  }
                  while ( v107 ); /*0x492980*/
                }
                v109 = 0; /*0x492998*/
LABEL_238:
                v110 = (char **)ExtraDataList_GetExtraScriptEventList(v102); /*0x49299a*/
                a3 = Script_Run(v109, a3, st6_0, (TESObjectREFR *)v106, v110, 0, 0); /*0x4929a9*/
                v96 = v157; /*0x4929ae*/
                v98 = (BSExtraDataVtbl *)v169; /*0x4929b6*/
                v99 = v165; /*0x4929b6*/
              }
              v99 = (int *)v99[1]; /*0x4929ba*/
              v165 = v99; /*0x4929bf*/
            }
            while ( v99 ); /*0x4929c3*/
            v111 = (ExtraDataList **)v96->extendData; /*0x4929cf*/
            if ( v173 > 0 ) /*0x4929d1*/
            {
              v166 = v173; /*0x4929d7*/
              do /*0x492af2*/
              {
                v112 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4929dd*/
                if ( v112 ) /*0x4929f3*/
                  v113 = (ExtraDataList *)ExtraDataList_constr(v112); /*0x4929fc*/
                else
                  v113 = 0; /*0x492a0b*/
                v114 = (int *)v157->extendData; /*0x492a11*/
                if ( v157->extendData ) /*0x492a11*/
                {
                  do /*0x492a20*/
                  {
                    v115 = (ExtraDataList *)*v114; /*0x492a20*/
                    if ( !*v114 ) /*0x492a20*/
                      break; /*0x492a20*/
                    if ( ExtraDataList_GetExtraScript((ExtraDataList *)*v114) ) /*0x492a28*/
                    {
                      v116 = ExtraDataList_GetExtraScript(v115); /*0x492a7f*/
                      goto LABEL_251; /*0x492a84*/
                    }
                    v114 = (int *)v114[1]; /*0x492a31*/
                  }
                  while ( v114 ); /*0x492a20*/
                }
                v116 = 0; /*0x492a38*/
LABEL_251:
                ExtraDataList_AddScript(v113, v116); /*0x492a3a*/
                v117 = (char *)ExtraDataList_GetExtraScript(v113); /*0x492a44*/
                v118 = Script_CreateEventList(v117); /*0x492a4b*/
                ExtraDataList_SetScriptEventList(v113, (int)v118); /*0x492a53*/
                v119 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x492a5a*/
                if ( v119 ) /*0x492a70*/
                  v120 = (TESForm *)TESObjectREFR_constr(v119); /*0x492a79*/
                else
                  v120 = 0; /*0x492a86*/
                TESForm_MakeTemporary(v120); /*0x492a92*/
                v121 = (char **)ExtraDataList_GetExtraScriptEventList(v113); /*0x492a9d*/
                a3 = Script_Run(v169, a3, st6_0, (TESObjectREFR *)v120, v121, 0, 0); /*0x492aa8*/
                if ( v120 ) /*0x492aaf*/
                  v120->vtbl->Destroy(v120, 1); /*0x492aba*/
                if ( v113 ) /*0x492abe*/
                {
                  if ( *v111 ) /*0x492ac0*/
                  {
                    v122 = (ExtraDataList **)FormHeapAlloc(8u); /*0x492ac7*/
                    if ( v122 ) /*0x492ad1*/
                    {
                      *v122 = *v111; /*0x492ad5*/
                      v122[1] = 0; /*0x492ad7*/
                    }
                    else
                    {
                      v122 = 0; /*0x492ae0*/
                    }
                    v122[1] = v111[1]; /*0x492ae5*/
                    v111[1] = (ExtraDataList *)v122; /*0x492ae8*/
                  }
                  *v111 = v113; /*0x492aeb*/
                }
                --v166; /*0x492aed*/
              }
              while ( v166 ); /*0x492af2*/
              v96 = v157; /*0x492af8*/
            }
          }
          else
          {
            a3 = ExtraContainerChanges_RunScripts(a1, a3, st6_0); /*0x492b02*/
          }
        }
      }
      if ( forma->member.type == kFormType_Ammo ) /*0x492b0f*/
      {
        v123 = a1->owner; /*0x492b19*/
        v124 = 0; /*0x492b1c*/
        if ( v123 ) /*0x492b20*/
        {
          if ( TESObjectREFR_GetContainer(v123) ) /*0x492b22*/
          {
            v125 = a1->owner; /*0x492b2b*/
            if ( v125 ) /*0x492b30*/
              v126 = TESObjectREFR_GetContainer(v125); /*0x492b32*/
            else
              v126 = 0; /*0x492b39*/
            v124 = TESContainer_GetFormCount(v126, v96->type); /*0x492b46*/
          }
        }
        if ( (PlayerCharacter *)a1->owner == reference ) /*0x492b51*/
        {
          v127 = (ExtraDataList **)v96->extendData; /*0x492b53*/
          if ( v96->extendData ) /*0x492b53*/
          {
            do /*0x492b70*/
            {
              v128 = *v127; /*0x492b60*/
              if ( !*v127 ) /*0x492b60*/
                break; /*0x492b64*/
              v127 = (ExtraDataList **)v127[1]; /*0x492b66*/
              ExtraDataList_RemoveOwner(v128); /*0x492b69*/
            }
            while ( v127 ); /*0x492b70*/
          }
        }
        v129 = (ExtraDataList **)v96->extendData; /*0x492b72*/
        if ( v96->extendData ) /*0x492b72*/
        {
          while ( *v129 ) /*0x492b84*/
          {
            if ( ExtraDataList_HasWorn(*v129, 0) ) /*0x492b8c*/
            {
              v130 = (int *)v157->extendData; /*0x492ba2*/
              v131 = 0; /*0x492ba4*/
              if ( v157->extendData ) /*0x492ba2*/
              {
                do /*0x492bbf*/
                {
                  if ( !*v130 ) /*0x492baa*/
                    break; /*0x492bae*/
                  v132 = ExtraDataList_GetExtraCount((ExtraDataList *)*v130); /*0x492bb0*/
                  v130 = (int *)v130[1]; /*0x492bb5*/
                  v131 += v132; /*0x492bbb*/
                }
                while ( v130 ); /*0x492bbf*/
              }
              v133 = v157->countDelta; /*0x492bc1*/
              if ( v133 + v124 >= v131 ) /*0x492bc9*/
              {
                if ( v133 + v124 > v131 ) /*0x492bd4*/
                {
                  v134 = (int *)v157->extendData; /*0x492bda*/
                  if ( v157->extendData ) /*0x492bda*/
                  {
                    do /*0x492c08*/
                    {
                      v135 = (ExtraDataList *)*v134; /*0x492be0*/
                      if ( !*v134 ) /*0x492be0*/
                        break; /*0x492be4*/
                      v134 = (int *)v134[1]; /*0x492be6*/
                      if ( ExtraDataList_HasWorn(v135, 0) ) /*0x492bed*/
                        ExtraDataList_SetExtraCount(v135, LOWORD(v157->countDelta)); /*0x492c01*/
                    }
                    while ( v134 ); /*0x492c08*/
                  }
                }
              }
              else
              {
                v157->countDelta = v131 - v133 - v124; /*0x492bcf*/
              }
              break; /*0x492bd2*/
            }
            v129 = (ExtraDataList **)v129[1]; /*0x492b95*/
            if ( !v129 ) /*0x492b9a*/
              break; /*0x492b9a*/
          }
        }
      }
      v136 = (int *)v157->extendData; /*0x492c0a*/
      if ( v157->extendData ) /*0x492c0e*/
      {
        do /*0x492c31*/
        {
          v137 = (ExtraDataList *)*v136; /*0x492c14*/
          if ( !*v136 ) /*0x492c14*/
            break; /*0x492c18*/
          if ( ExtraDataList_GetExtraScript((ExtraDataList *)*v136) ) /*0x492c1c*/
            sub_41F620(v137); /*0x492c27*/
          v136 = (int *)v136[1]; /*0x492c2c*/
        }
        while ( v136 ); /*0x492c31*/
      }
      if ( sub_469980((int)forma) && (PlayerCharacter *)a1->owner == reference ) /*0x492c51*/
      {
        v138 = (unsigned int *)v157; /*0x492c53*/
        v139 = (int *)v157->extendData; /*0x492c57*/
        if ( v157->extendData ) /*0x492c57*/
        {
          while ( 1 ) /*0x492c60*/
          {
            v140 = (void (__thiscall ***)(_DWORD, int))*v139; /*0x492c60*/
            if ( !*v139 ) /*0x492c60*/
              break; /*0x492c60*/
            v141 = (int *)v139[1]; /*0x492c66*/
            if ( v141 ) /*0x492c6b*/
            {
              v139[1] = v141[1]; /*0x492c70*/
              *v139 = *v141; /*0x492c76*/
              FormHeapFree((unsigned int)v141); /*0x492c78*/
            }
            else
            {
              *v139 = 0; /*0x492c82*/
            }
            if ( v140 ) /*0x492c8a*/
              (**v140)(v140, 1); /*0x492c94*/
          }
        }
      }
      else
      {
        v138 = (unsigned int *)v157; /*0x492c98*/
      }
      v142 = v172; /*0x492c9c*/
      if ( v172 > (int)0xFFFFFFFF && v172 < v175 ) /*0x492ca9*/
      {
        v143 = *v138; /*0x492cab*/
        if ( *v138 ) /*0x492cab*/
        {
          v144 = 0; /*0x492cb2*/
          do /*0x492cc9*/
          {
            if ( !*(_DWORD *)v143 ) /*0x492cb4*/
              break; /*0x492cb8*/
            v145 = ExtraDataList_GetExtraCount(*(ExtraDataList **)v143); /*0x492cba*/
            v143 = *(_DWORD *)(v143 + 4); /*0x492cbf*/
            v144 += v145; /*0x492cc5*/
          }
          while ( v143 ); /*0x492cc9*/
          v138[1] = v144; /*0x492ccb*/
        }
      }
      if ( v172 > 0 ) /*0x492cd0*/
      {
        v146 = (ExtraDataList **)*v138; /*0x492cd6*/
        if ( *v138 ) /*0x492cd6*/
        {
          if ( *v146 ) /*0x492ce1*/
          {
            if ( v172 < (unsigned int)BSSimpleList_Count((_DWORD *)*v138) ) /*0x492cf3*/
            {
              do /*0x492d87*/
              {
                v147 = (ExtraDataList **)v146[1]; /*0x492d00*/
                v148 = *v146; /*0x492d05*/
                if ( v147 ) /*0x492d07*/
                {
                  v146[1] = v147[1]; /*0x492d0c*/
                  *v146 = *v147; /*0x492d12*/
                  FormHeapFree((unsigned int)v147); /*0x492d14*/
                }
                else
                {
                  *v146 = 0; /*0x492d1e*/
                }
                if ( v148 ) /*0x492d26*/
                {
                  v149 = *v146; /*0x492d28*/
                  if ( *v146 ) /*0x492d28*/
                  {
                    for ( k = v148->members.m_data; k; k = v148->members.m_data ) /*0x492d33*/
                    {
                      if ( BaseExtraList_GetExtraData(v149, (ExtraDataType)k->members.type) ) /*0x492d43*/
                      {
                        BaseExtraList_RemoveExtraByPtr(v148, (int)k, 1); /*0x492d51*/
                      }
                      else
                      {
                        BaseExtraList_RemoveExtraByPtr(v148, (int)k, 0); /*0x492d5b*/
                        BaseExtraList_AddExtra(v149, k); /*0x492d63*/
                      }
                    }
                  }
                  (*(void (__thiscall **)(ExtraDataList *, int))v148->vtbl)(v148, 1); /*0x492d78*/
                  v142 = v172; /*0x492d7a*/
                }
              }
              while ( v142 < BSSimpleList_Count(v146) ); /*0x492d87*/
              v138 = (unsigned int *)v157; /*0x492d8d*/
            }
            if ( v146[1] || *v146 ) /*0x492d97*/
            {
              v146 = (ExtraDataList **)*v138; /*0x492db1*/
            }
            else
            {
              FormHeapFree(*v138); /*0x492da0*/
              *v138 = 0; /*0x492da8*/
            }
            if ( v146 ) /*0x492db6*/
            {
              while ( *v146 ) /*0x492dc4*/
              {
                if ( BaseExtraList_Count(*v146) ) /*0x492dc6*/
                {
                  v146 = (ExtraDataList **)v146[1]; /*0x492e04*/
                }
                else
                {
                  v151 = (ExtraDataList **)v146[1]; /*0x492dd0*/
                  if ( v151 ) /*0x492dd5*/
                  {
                    v146[1] = v151[1]; /*0x492dda*/
                    *v146 = *v151; /*0x492de0*/
                    FormHeapFree((unsigned int)v151); /*0x492de2*/
                  }
                  else
                  {
                    *v146 = 0; /*0x492dec*/
                  }
                  if ( !*(_DWORD *)(*v138 + 4) && !*(_DWORD *)*v138 ) /*0x492dfe*/
                  {
                    if ( v146[1] ) /*0x492e0d*/
                    {
                      do /*0x492e27*/
                      {
                        m_data = v146[1]->members.m_data; /*0x492e16*/
                        FormHeapFree((unsigned int)v146[1]); /*0x492e1a*/
                        v146[1] = (ExtraDataList *)m_data; /*0x492e24*/
                      }
                      while ( m_data ); /*0x492e27*/
                    }
                    *v146 = 0; /*0x492e2a*/
                    FormHeapFree((unsigned int)v146); /*0x492e30*/
                    *v138 = 0; /*0x492e38*/
                    break; /*0x492e38*/
                  }
                  v146 = (ExtraDataList **)*v138; /*0x492e00*/
                }
                if ( !v146 ) /*0x492e09*/
                  break; /*0x492e09*/
              }
            }
          }
        }
      }
      a2 = (tListEntryData *)a2->node.next; /*0x492e48*/
      result = a2; /*0x492e43*/
      if ( !a2 ) /*0x492e4c*/
        break; /*0x492e4c*/
      v3 = a1; /*0x492574*/
    }
  }
  return result; /*0x492e52*/
}
