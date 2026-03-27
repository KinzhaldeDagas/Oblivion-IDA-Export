void __userpurge ContainerExtraData_RemoveForm(
        int ***a1@<ecx>,
        double a2@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a5,
        int a6,
        int a7,
        signed int a8,
        unsigned __int8 *a9,
        int a10,
        TESForm *a11,
        float *a12,
        NiPoint3 *a13,
        char a14,
        char a15)
{
  int ***v15; // ebx
  int **v16; // ecx
  EntryData *v17; // edi
  int **v18; // eax
  char v19; // dl
  unsigned int *v20; // esi
  SInt32 FormCount; // ebp
  TESObjectREFR *v22; // ecx
  TESContainer *Container; // eax
  int v24; // ebx
  int v25; // eax
  SInt32 countDelta; // eax
  bool v27; // zf
  unsigned int *v28; // eax
  unsigned int *v29; // ebx
  tListVoid *extendData; // esi
  ExtraDataList *data; // edi
  signed int ExtraCount; // ebp
  ExtraDataList *v33; // esi
  _DWORD *v34; // eax
  ExtraDataList *v35; // ebp
  BSExtraData *v36; // eax
  int v37; // ebp
  _DWORD *v38; // eax
  _DWORD *v39; // eax
  ExtraDataList **v40; // ebx
  ExtraDataList **v41; // eax
  BSExtraDataVtbl *ReferencePointer; // eax
  TESObjectREFR *v43; // ebx
  TESObjectCELL *ParentCell; // esi
  int v45; // eax
  int v46; // eax
  _BYTE *v47; // eax
  void *v48; // eax
  const char **v49; // eax
  const char **v50; // esi
  int WorldModel; // edi
  int v52; // eax
  TESObjectREFR *v53; // edi
  TESObjectCELL *v54; // ebx
  int v55; // eax
  int v56; // eax
  bool v57; // al
  char v58; // bl
  _BYTE *v59; // eax
  TESForm *v60; // eax
  const char **v61; // eax
  const char **v62; // ebx
  bool v63; // zf
  int v64; // eax
  ExtraDataList *v65; // esi
  unsigned int v66; // esi
  ExtraDataList *v67; // edi
  TESForm *Owner; // eax
  char v69; // al
  TESForm *v70; // eax
  char v71; // al
  _DWORD *v72; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  unsigned int *v75; // esi
  SInt32 v76; // esi
  signed int v77; // esi
  int v78; // eax
  TESObjectREFR *v79; // ecx
  TESContainer *v80; // eax
  _BYTE *v81; // edi
  TESObjectCELL *v82; // esi
  int v83; // eax
  int v84; // eax
  _BYTE *v85; // eax
  void *v86; // eax
  const char **v87; // eax
  const char **v88; // esi
  int v89; // eax
  TESForm *v90; // eax
  TESForm *v91; // edi
  char v92; // al
  ExtraDataList *v93; // ebp
  _DWORD *v94; // eax
  unsigned __int8 *v95; // eax
  tListVoid *v96; // eax
  ExtraDataList *v97; // ebx
  ExtraDataList ***v98; // eax
  ExtraDataList ***v99; // esi
  EntryData *v100; // ebp
  int **v101; // eax
  char v102; // dl
  int v103; // edi
  ExtraDataList **v104; // eax
  _DWORD *v105; // eax
  ExtraDataList *v106; // ebp
  BSExtraDataVtbl *v107; // eax
  _BYTE *v108; // ebp
  TESObjectCELL *v109; // esi
  int v110; // eax
  int v111; // eax
  _BYTE *v112; // eax
  void *v113; // eax
  const char **v114; // eax
  const char **v115; // esi
  int v116; // ebx
  int v117; // eax
  TESObjectCELL *v118; // edi
  int v119; // eax
  int v120; // eax
  _BYTE *v121; // eax
  void *v122; // eax
  const char **v123; // eax
  const char **v124; // edi
  int v125; // eax
  ExtraDataList *v126; // ebp
  _DWORD *v127; // eax
  ExtraDataList **v128; // eax
  TESForm *v129; // eax
  TESForm *v130; // ebx
  char v131; // al
  EntryData *v132; // eax
  _DWORD *v133; // ebx
  int type; // esi
  signed __int16 v135; // ax
  char v136; // al
  TESForm *v137; // ebx
  void (__thiscall **p_Unk_43)(TESObjectREFR *); // esi
  signed __int16 v139; // ax
  EntryData *v140; // eax
  TESForm *v141; // edi
  signed __int16 v142; // ax
  EntryData *v143; // ebx
  char *v144; // eax
  tListVoid *v145; // ecx
  TESObjectCELL *v146; // edi
  int v147; // eax
  int v148; // eax
  _BYTE *v149; // eax
  void *v150; // eax
  const char **v151; // eax
  const char **v152; // edi
  int v153; // eax
  TESForm *v154; // eax
  TESForm *v155; // edi
  char v156; // al
  ExtraDataList *v157; // esi
  _DWORD *v158; // eax
  ExtraDataList *v159; // eax
  _DWORD *v160; // eax
  _DWORD *v161; // eax
  int v162; // eax
  int v163; // edi
  _DWORD *v164; // eax
  int v165; // eax
  unsigned int v166; // esi
  ExtraDataList *v167; // [esp+2Ch] [ebp-5Ch]
  float duration; // [esp+30h] [ebp-58h]
  float durationa; // [esp+30h] [ebp-58h]
  float durationb; // [esp+30h] [ebp-58h]
  char v171; // [esp+48h] [ebp-40h]
  char v172; // [esp+49h] [ebp-3Fh]
  char v173; // [esp+4Ah] [ebp-3Eh]
  unsigned int *v174; // [esp+4Ch] [ebp-3Ch]
  int v175; // [esp+50h] [ebp-38h]
  _BYTE *v176; // [esp+50h] [ebp-38h]
  EntryData *v177; // [esp+54h] [ebp-34h]
  SInt32 v179; // [esp+5Ch] [ebp-2Ch]
  ExtraDataList *v180; // [esp+60h] [ebp-28h]
  int v181; // [esp+60h] [ebp-28h]
  tListVoid *next; // [esp+64h] [ebp-24h]
  ExtraDataList **v183; // [esp+64h] [ebp-24h]
  int v184; // [esp+68h] [ebp-20h]
  TESForm *v185; // [esp+68h] [ebp-20h]
  TESForm *v186; // [esp+68h] [ebp-20h]
  int v187; // [esp+68h] [ebp-20h]
  ExtraDataList **v188; // [esp+68h] [ebp-20h]
  BSExtraData *v189; // [esp+6Ch] [ebp-1Ch]
  SInt32 v190; // [esp+70h] [ebp-18h]
  char v191; // [esp+B4h] [ebp+2Ch]
  TESObjectREFRVtbl *vtbl; // [esp+B4h] [ebp+2Ch]
  int v193; // [esp+B4h] [ebp+2Ch]

  v15 = a1;
  v16 = a1[1];
  v17 = 0;
  *((float *)a1 + 2) = flt_A30634;
  v175 = 0;
  v173 = 0;
  if ( v16 )
    ((void (__thiscall *)(int **, int))(*v16)[0x10])(v16, 0x8000000);
  if ( a11 )
    a11->vtbl->MarkAsModified(a11, 0x8000000);
  v18 = *v15;
  v19 = 1;
  if ( *v15 )
  {
    while ( v19 )
    {
      if ( *v18 && (*v18)[2] == a6 )
        v19 = 0;
      else
        v18 = (int **)v18[1];
      if ( !v18 )
        goto LABEL_15;
    }
    if ( v18 )
      v17 = (EntryData *)*v18;
  }
LABEL_15:
  v20 = 0;
  v177 = v17;
  v174 = 0;
  if ( a9 )
  {
    if ( !BaseExtraList_Count((ExtraDataList *)a9) )
    {
      if ( v17 )
      {
        if ( v17->extendData )
          BSSimpleList_Remove(&v17->extendData->node.data, (int)a9);
      }
      (**(void (__thiscall ***)(unsigned __int8 *, int))a9)(a9, 1);
      a9 = 0;
    }
  }
  FormCount = 0;
  v179 = 0;
  if ( a5 )
  {
    v22 = (TESObjectREFR *)v15[1];
    if ( v22 )
      Container = TESObjectREFR_GetContainer(v22);
    else
      Container = 0;
    FormCount = TESContainer_GetFormCount(Container, (TESForm *)a6);
    v179 = FormCount;
    if ( v17 )
    {
      if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v17, 0) )
      {
        v24 = sub_4845D0((int *)v17);
        if ( FormCount + v17->countDelta > sub_484620((int *)v17) + v24 )
        {
          sub_484F20((int *)v17);
          if ( v25 )
          {
            FormCount = 0;
            v179 = 0;
          }
        }
        v15 = a1;
      }
    }
  }
  v190 = 0;
  if ( FormCount < 0 )
  {
    if ( ((unsigned __int8 (__thiscall *)(int **))(*v15[1])[0x64])(v15[1])
      && ((unsigned __int8 (__thiscall *)(int **, _DWORD))(*v15[1])[0x66])(v15[1], 0) )
    {
      if ( v17 )
      {
        FormCount = 0;
        v179 = 0;
        v173 = 1;
        goto LABEL_36;
      }
      FormCount = -FormCount;
      v190 = FormCount;
    }
    else
    {
      v190 = FormCount;
      FormCount = -FormCount;
    }
    v179 = FormCount;
    if ( FormCount < 0 && a11 != (TESForm *)TESDataHandler_g_PlayerRef )
      return;
  }
LABEL_36:
  if ( v17 )
  {
    countDelta = v17->countDelta;
    if ( !countDelta )
      goto LABEL_46;
    v27 = FormCount + countDelta == 0;
  }
  else
  {
    v27 = FormCount == 0;
  }
  if ( v27 )
    return;
LABEL_46:
  v189 = 0;
  v172 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      if ( a8 <= 0 || FormCount + v17->countDelta <= 0 )
        goto LABEL_367;
      if ( v20 )
      {
        if ( *v20 )
          BSSimpleList_Clear((_DWORD *)*v20);
        FormHeapFree(*v20);
        *v20 = 0;
        FormHeapFree((unsigned int)v20);
      }
      v28 = (unsigned int *)FormHeapAlloc(0xCu);
      if ( v28 )
      {
        v28[2] = 0;
        *v28 = 0;
        v28[1] = 0;
        v29 = v28;
      }
      else
      {
        v29 = 0;
      }
      v29[2] = (unsigned int)v17->type;
      extendData = v17->extendData;
      v174 = v29;
      next = v17->extendData;
      v171 = 1;
      if ( (a9 && BaseExtraList_Count((ExtraDataList *)a9) || a15) && extendData && extendData->node.data )
      {
        while ( 1 )
        {
          data = (ExtraDataList *)next->node.data;
          if ( !next->node.data || !v171 )
            goto LABEL_275;
          if ( a9 != (unsigned __int8 *)data
            && (a9 || !a15 || !ExtraDataList_GetOwner((ExtraDataList *)next->node.data)) )
          {
            next = (tListVoid *)next->node.next;
            goto LABEL_188;
          }
          a9 = 0;
          v171 = 0;
          ExtraCount = ExtraDataList_GetExtraCount(data);
          if ( ExtraDataList_HasWorn(data, 0) )
          {
            v191 = 0;
            if ( (unsigned int)BaseExtraList_Count(data) <= 1
              || BaseExtraList_Count(data) == 2 && ExtraDataList_GetExtraCount(data) > 1
              || sub_41DEF0((TESForm *)data) && BaseExtraList_Count(data) == 2 )
            {
              v191 = 1;
            }
            if ( a5->vtbl->IsActor(a5) && (a5->member.super.flags & 0x800) == 0 )
            {
              v133 = OblivionDynamicCast(
                       a5,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
              if ( !v133[0x16] )
                goto LABEL_386;
              type = (int)v177->type;
              v135 = ExtraDataList_GetExtraCount(data);
              st7_0 = Actor_UnequipItem((int)v133, st7_0, a2, st6_0, type, v135, data, 1, 0, 0);
LABEL_384:
              if ( !v136 || v191 )
LABEL_386:
                data = 0;
              ContainerExtraData_GetEntryForForm(a1, a6, 1, 0);
              if ( !v140 || !(unsigned __int8)ContainerEntryExtraData_HasWorn(v140, 0) )
                ContainerExtraData_RemoveForm(
                  a1,
                  a2,
                  st7_0,
                  st6_0,
                  a5,
                  a6,
                  a7,
                  a8,
                  (unsigned __int8 *)data,
                  a10,
                  a11,
                  a12,
                  &a13->x,
                  1,
                  0);
              if ( v174 )
              {
                if ( *v174 )
                  BSSimpleList_Clear((_DWORD *)*v174);
                FormHeapFree(*v174);
                *v174 = 0;
                FormHeapFree((unsigned int)v174);
              }
              return;
            }
            v137 = v177->type;
            p_Unk_43 = &a5->vtbl->Unk_43;
            v139 = ExtraDataList_GetExtraCount(data);
            v136 = ((int (__thiscall *)(TESObjectREFR *, TESForm *, _DWORD, ExtraDataList *))*p_Unk_43)(
                     a5,
                     v137,
                     v139,
                     data);
            goto LABEL_384;
          }
          if ( ExtraCount > a8 || sub_41E850(data) )
          {
            v189 = sub_41E850(data);
            if ( sub_41E850(data) && ExtraDataList_GetExtraScript(data) )
            {
              v33 = data;
              BSSimpleList_Remove(&v177->extendData->node.data, (int)data);
              v34 = (_DWORD *)FormHeapAlloc(0x14u);
              v35 = 0;
              if ( v34 )
                v35 = (ExtraDataList *)ExtraDataList_constr(v34);
              v36 = sub_41E850(data);
              ExtraDataList_AddExtraLeveledItem(v35, v36[1].vtbl);
              BSSimpleList_PushFront(&v177->extendData->node.data, (int)v35);
              sub_424790(data);
              v177->countDelta = -ExtraDataList_GetExtraCount(data);
            }
            else
            {
              if ( sub_41DEF0((TESForm *)data) && a8 == ExtraCount )
              {
                v177->countDelta -= ExtraCount;
                v37 = -ExtraCount;
              }
              else
              {
                v177->countDelta -= a8;
                v37 = ExtraCount - a8;
              }
              ExtraDataList_SetExtraCount(data, v37);
              v38 = (_DWORD *)FormHeapAlloc(0x14u);
              if ( v38 )
                v33 = (ExtraDataList *)ExtraDataList_constr(v38);
              else
                v33 = 0;
              ExtraDataList_CopyListForReference(v33, (ExtraDataList **)data, 0);
              sub_424790(v33);
              ExtraDataList_SetExtraCount(v33, a8);
              if ( BaseExtraList_Count(v33) == 1 && ExtraDataList_GetExtraCount(v33) > 1 || !BaseExtraList_Count(v33) )
              {
                if ( v33 )
                  (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1);
                v33 = 0;
              }
            }
            Script_AddEventToExtraScript(a5, v33, 4);
            ExtraCount = a8;
            a8 = 0;
          }
          else
          {
            v177->countDelta -= ExtraCount;
            v174[1] += ExtraCount;
            v33 = data;
            a8 -= ExtraCount;
            BSSimpleList_Remove(&v177->extendData->node.data, (int)data);
            v167 = data;
            data = 0;
            Script_AddEventToExtraScript(a5, v167, 4);
            if ( !v33->members.m_data )
            {
              (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1);
              v33 = 0;
              goto LABEL_105;
            }
          }
          if ( v33 )
          {
            if ( BaseExtraList_Count(v33) )
            {
              if ( !*v174 )
              {
                v39 = (_DWORD *)FormHeapAlloc(8u);
                if ( v39 )
                {
                  *v39 = 0;
                  v39[1] = 0;
                }
                else
                {
                  v39 = 0;
                }
                *v174 = (unsigned int)v39;
              }
              v40 = (ExtraDataList **)*v174;
              if ( *(_DWORD *)*v174 )
              {
                v41 = (ExtraDataList **)FormHeapAlloc(8u);
                if ( v41 )
                {
                  *v41 = *v40;
                  v41[1] = 0;
                }
                else
                {
                  v41 = 0;
                }
                v41[1] = v40[1];
                v40[1] = (ExtraDataList *)v41;
              }
              *v40 = v33;
            }
          }
LABEL_105:
          if ( (_BYTE)a10 )
          {
            if ( v33 && ExtraDataList_GetReferencePointer(v33) )
            {
              ReferencePointer = ExtraDataList_GetReferencePointer(v33);
              v175 = (int)ReferencePointer;
              if ( ReferencePointer )
              {
                v43 = (TESObjectREFR *)ReferencePointer;
                (*((void (__usercall **)(BSExtraDataVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))ReferencePointer->Destructor
                 + 0x23))(
                  ReferencePointer,
                  0,
                  st7_0,
                  st6_0,
                  a2);
                sub_4246B0(v33);
                st7_0 = ExtraDataList_Scale(v33);
                duration = st7_0;
                sub_4DB520(duration);
                ExtraDataList_CopyListForReference(&v43->member.baseExtraList, (ExtraDataList **)v33, data == 0);
                sub_41F690(&v43->member.baseExtraList.vtbl);
                sub_4246B0(&v43->member.baseExtraList);
                if ( !sub_41F7F0(&v43->member.baseExtraList) )
                {
                  sub_423D30(&v43->member.baseExtraList, (int)v43);
                  st7_0 = ((double (__thiscall *)(TESObjectREFR *, int))v43->vtbl->super.MarkAsModified)(v43, 0x20);
                }
                sub_48B080(st6_0, st7_0, a5, (int)v177->type, ExtraCount, v43, a12, a13);
                if ( v174 )
                {
                  if ( *v174 )
                    BSSimpleList_Clear((_DWORD *)*v174);
                  FormHeapFree(*v174);
                  *v174 = 0;
                  FormHeapFree((unsigned int)v174);
                }
                v174 = 0;
                (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1);
                ParentCell = TESObjectREFR_GetParentCell(a5);
                sub_4D72B0(v43);
                if ( !v45 && ParentCell && (TESObjectCELL_GetOwner(ParentCell), v46) && !sub_4CAAC0(ParentCell, a5)
                  || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
                  && (v47 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                       a5,
                                       st7_0,
                                       st6_0,
                                       a2),
                      TESActorBase_IsFemale(v47) == 1)
                  && (v48 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v175 + 0x170))(v175),
                      v49 = (const char **)OblivionDynamicCast(
                                             v48,
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                             &TESBipedModelForm `RTTI Type Descriptor',
                                             0),
                      (v50 = v49) != 0)
                  && (WorldModel = TESBipedModelForm_GetWorldModel(v49, 1),
                      WorldModel != TESBipedModelForm_GetWorldModel(v50, 0)) )
                {
                  v52 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                          a5,
                          st7_0,
                          st6_0,
                          a2);
                  st7_0 = sub_4DB890(v52);
                }
              }
              goto LABEL_188;
            }
            v53 = (TESObjectREFR *)sub_48B080(st6_0, st7_0, a5, (int)v177->type, ExtraCount, 0, a12, a13);
            v175 = (int)v53;
            v53->vtbl->super.MarkAsModified((TESForm *)v53, 0x20);
            if ( v33 )
            {
              if ( BaseExtraList_Count(v33) )
              {
                st7_0 = ExtraDataList_Scale(v33);
                durationa = st7_0;
                sub_4DB520(durationa);
                ExtraDataList_CopyListForReference(&v53->member.baseExtraList, (ExtraDataList **)v33, 1);
                sub_41F690(&v53->member.baseExtraList.vtbl);
              }
            }
            v54 = TESObjectREFR_GetParentCell(a5);
            sub_4D72B0(v53);
            if ( v55 || !v54 || (TESObjectCELL_GetOwner(v54), !v56) || (v57 = sub_4CAAC0(v54, a5), v58 = 1, v57) )
              v58 = 0;
            if ( TESObjectREFR_GetOwner(v53) )
            {
              v63 = v58 == 0;
LABEL_139:
              if ( v63 )
              {
LABEL_141:
                if ( v174 )
                {
                  if ( *v174 )
                    BSSimpleList_Clear((_DWORD *)*v174);
                  FormHeapFree(*v174);
                  *v174 = 0;
                  FormHeapFree((unsigned int)v174);
                }
                v174 = 0;
                if ( v33 )
                  (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1);
                goto LABEL_188;
              }
            }
            else if ( !v58 )
            {
              if ( a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC )
              {
                v59 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                 a5,
                                 st7_0,
                                 st6_0,
                                 a2);
                if ( TESActorBase_IsFemale(v59) == 1 )
                {
                  v60 = v53->vtbl->GetBaseForm(v53);
                  v61 = (const char **)OblivionDynamicCast(
                                         v60,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                         &TESBipedModelForm `RTTI Type Descriptor',
                                         0);
                  v62 = v61;
                  if ( v61 )
                  {
                    v184 = TESBipedModelForm_GetWorldModel(v61, 1);
                    v63 = v184 == TESBipedModelForm_GetWorldModel(v62, 0);
                    goto LABEL_139;
                  }
                }
              }
              goto LABEL_141;
            }
            v64 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                    a5,
                    st7_0,
                    st6_0,
                    a2);
            st7_0 = sub_4DB890(v64);
            goto LABEL_141;
          }
          if ( a11 )
          {
            v65 = 0;
            if ( *v174 )
            {
              v66 = *v174;
              do
              {
                v67 = *(ExtraDataList **)v66;
                if ( !*(_DWORD *)v66 )
                  break;
                if ( !ExtraDataList_GetOwner(*(ExtraDataList **)v66) )
                {
                  if ( a5->vtbl->IsActor(a5) )
                    Owner = a5->vtbl->GetBaseForm(a5);
                  else
                    Owner = (TESForm *)TESObjectREFR_GetOwner(a5);
                  v185 = Owner;
                  if ( (_BYTE)a7 )
                  {
                    if ( !sub_469980(v174[2]) )
                    {
                      sub_4DE880(v185);
                      if ( !v69 && *(_BYTE *)(v174[2] + 4) != 0x22 )
                        ExtraDataList::SetOrRemoveExtraOwnership(v67, v185);
                    }
                  }
                }
                ((void (__thiscall *)(TESForm *, unsigned int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)(
                  a11,
                  v174[2],
                  v67,
                  ExtraCount);
                v66 = *(_DWORD *)(v66 + 4);
              }
              while ( v66 );
              if ( *v174 )
                BSSimpleList_Clear((_DWORD *)*v174);
            }
            else
            {
              if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)(
                     a5,
                     st7_0,
                     st6_0,
                     a2) )
              {
                v70 = a5->vtbl->GetBaseForm(a5);
              }
              else
              {
                v70 = (TESForm *)TESObjectREFR_GetOwner(a5);
              }
              v186 = v70;
              if ( (_BYTE)a7 )
              {
                if ( !sub_469980(v174[2]) )
                {
                  st7_0 = sub_4DE880(v186);
                  if ( !v71 && *(_BYTE *)(v174[2] + 4) != 0x22 )
                  {
                    v72 = (_DWORD *)FormHeapAlloc(0x14u);
                    if ( v72 )
                      v65 = (ExtraDataList *)ExtraDataList_constr(v72);
                    else
                      v65 = 0;
                    ExtraDataList::SetOrRemoveExtraOwnership(v65, v186);
                    ExtraDataList_SetExtraCount(v65, a8);
                  }
                }
              }
              ((void (__thiscall *)(TESForm *, unsigned int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)(
                a11,
                v174[2],
                v65,
                ExtraCount);
              if ( *v174 )
                BSSimpleList_Clear((_DWORD *)*v174);
            }
            FormHeapFree(*v174);
            *v174 = 0;
            FormHeapFree((unsigned int)v174);
            v171 = 0;
          }
          else
          {
            OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
            if ( OpenMenuTile && (ParentMenu = Tile_GetParentMenu(OpenMenuTile)) != 0 && *(_BYTE *)(ParentMenu + 0x61) )
            {
              v75 = v174;
            }
            else
            {
              v75 = v174;
              ContainerEntryExtraData_ClearDataTable((int *)v174);
            }
            if ( v75 )
            {
              if ( *v75 )
                BSSimpleList_Clear((_DWORD *)*v75);
              FormHeapFree(*v75);
              *v75 = 0;
              FormHeapFree((unsigned int)v75);
            }
          }
          v174 = 0;
LABEL_188:
          if ( a8 > 0 && a15 )
          {
            ContainerExtraData_RemoveForm(a1, a2, st7_0, st6_0, a5, a6, a7, a8, 0, a10, a11, a12, &a13->x, 1, 0);
            return;
          }
          if ( a8 < 1 )
          {
            if ( !next )
              goto LABEL_275;
          }
          else
          {
            if ( v175 )
              return;
            if ( !next )
            {
              a9 = 0;
              goto LABEL_275;
            }
          }
        }
      }
      v76 = v17->countDelta;
      if ( FormCount >= 0 )
        v77 = FormCount + v76;
      else
        v77 = v76 - FormCount;
      if ( v77 < 0 && FormCount >= 0 )
        return;
      if ( v17->extendData )
      {
        v78 = sub_484620((int *)v17);
        if ( v78 > 0 )
          v77 -= v78;
      }
      if ( v77 < 0 )
        v77 = 0;
      v180 = 0;
      if ( v77 > 0 )
      {
        if ( v77 < a8 )
        {
          v79 = (TESObjectREFR *)a1[1];
          if ( v79 )
            v80 = TESObjectREFR_GetContainer(v79);
          else
            v80 = 0;
          if ( TESContainer_GetFormCount(v80, (TESForm *)a6) > 0 )
            v17->countDelta -= v77;
          a8 -= v77;
        }
        else
        {
          if ( !v190 )
            v17->countDelta -= a8;
          v77 = a8;
          a8 = 0;
        }
        if ( FormCount + v17->countDelta < 0 )
        {
          if ( FormCount )
            v17->countDelta = -FormCount;
          else
            v17->countDelta = 0;
        }
        if ( (_BYTE)a10 )
        {
          v81 = (_BYTE *)sub_48B080(st6_0, st7_0, a5, a6, v77, 0, a12, a13);
          v175 = (int)v81;
          v82 = TESObjectREFR_GetParentCell(a5);
          sub_4D72B0(v81);
          if ( !v83 && v82 && (TESObjectCELL_GetOwner(v82), v84) && !sub_4CAAC0(v82, a5)
            || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
            && (v85 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                 a5,
                                 st7_0,
                                 st6_0,
                                 a2),
                TESActorBase_IsFemale(v85) == 1)
            && (v86 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v81 + 0x170))(v81),
                v87 = (const char **)OblivionDynamicCast(
                                       v86,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0),
                (v88 = v87) != 0)
            && (v187 = TESBipedModelForm_GetWorldModel(v87, 1), v187 != TESBipedModelForm_GetWorldModel(v88, 0)) )
          {
            v89 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                    a5,
                    st7_0,
                    st6_0,
                    a2);
            st7_0 = sub_4DB890(v89);
          }
          if ( *v29 )
            BSSimpleList_Clear((_DWORD *)*v29);
          FormHeapFree(*v29);
          *v29 = 0;
          FormHeapFree((unsigned int)v29);
          v180 = 0;
        }
        else
        {
          if ( a11 )
          {
            if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)(
                   a5,
                   st7_0,
                   st6_0,
                   a2) )
            {
              v90 = a5->vtbl->GetBaseForm(a5);
            }
            else
            {
              v90 = (TESForm *)TESObjectREFR_GetOwner(a5);
            }
            v91 = v90;
            if ( !(_BYTE)a7 || sub_469980(a6) || (st7_0 = sub_4DE880(v91), v92) || *(_BYTE *)(a6 + 4) == 0x22 )
            {
              v93 = (ExtraDataList *)a9;
            }
            else
            {
              v93 = (ExtraDataList *)a9;
              if ( !a9 )
              {
                v94 = (_DWORD *)FormHeapAlloc(0x14u);
                if ( v94 )
                  v95 = (unsigned __int8 *)ExtraDataList_constr(v94);
                else
                  v95 = 0;
                v93 = (ExtraDataList *)v95;
                a9 = v95;
              }
              ExtraDataList::SetOrRemoveExtraOwnership(v93, v91);
              ExtraDataList_SetExtraCount(v93, v77);
            }
            ((void (__thiscall *)(TESForm *, int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)(a11, a6, v93, v77);
          }
          if ( *v29 )
            BSSimpleList_Clear((_DWORD *)*v29);
          FormHeapFree(*v29);
          *v29 = 0;
          FormHeapFree((unsigned int)v29);
        }
        v174 = 0;
      }
      if ( a8 > 0 )
      {
        v96 = v177->extendData;
        if ( v177->extendData )
        {
          if ( v96->node.next || v96->node.data )
            break;
        }
      }
LABEL_275:
      v101 = *a1;
      v102 = 1;
      if ( !*a1 )
        goto LABEL_366;
      while ( v102 )
      {
        if ( *v101 && (*v101)[2] == a6 )
          v102 = 0;
        else
          v101 = (int **)v101[1];
        if ( !v101 )
          goto LABEL_366;
      }
      if ( !v101 )
      {
LABEL_366:
        v177 = 0;
        goto LABEL_367;
      }
      v132 = (EntryData *)*v101;
      v177 = v132;
      if ( !v132 )
        goto LABEL_367;
      FormCount = v179;
      v20 = v174;
      v17 = v132;
    }
    v183 = (ExtraDataList **)v177->extendData;
    while ( 1 )
    {
      if ( !*v183 || a8 <= 0 )
        goto LABEL_275;
      v97 = *v183;
      v188 = (ExtraDataList **)*v183;
      if ( v174 )
      {
        if ( *v174 )
          BSSimpleList_Clear((_DWORD *)*v174);
        FormHeapFree(*v174);
        *v174 = 0;
        FormHeapFree((unsigned int)v174);
      }
      v98 = (ExtraDataList ***)FormHeapAlloc(0xCu);
      if ( v98 )
      {
        v98[2] = 0;
        *v98 = 0;
        v98[1] = 0;
        v99 = v98;
      }
      else
      {
        v99 = 0;
      }
      v100 = v177;
      v99[2] = (ExtraDataList **)v177->type;
      if ( ExtraDataList_GetExtraCount(v97) >= 0 )
        break;
      v183 = (ExtraDataList **)v183[1];
      if ( *v99 )
        BSSimpleList_Clear(*v99);
      FormHeapFree((unsigned int)*v99);
      *v99 = 0;
      FormHeapFree((unsigned int)v99);
      v174 = 0;
      if ( v180 )
        ((void (__thiscall *)(ExtraDataList *, int))*v180->vtbl)(v180, 1);
      v180 = 0;
LABEL_274:
      if ( !v183 )
        goto LABEL_275;
    }
    if ( ExtraDataList_HasWorn(v97, 0) )
    {
      if ( (unsigned int)BaseExtraList_Count(v97) <= 1
        || BaseExtraList_Count(v97) == 2 && ExtraDataList_GetExtraCount(v97) )
      {
        a9 = 0;
      }
      v141 = v177->type;
      vtbl = a5->vtbl;
      v142 = ExtraDataList_GetExtraCount(v97);
      if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, TESForm *, _DWORD, ExtraDataList *))vtbl->Unk_43)(
             a5,
             v141,
             v142,
             v97) )
      {
        ContainerExtraData_RemoveForm(a1, a2, st7_0, st6_0, a5, a6, a7, a8, a9, a10, a11, a12, &a13->x, 1, 0);
      }
      else
      {
        GameUI_QueueMessage((const char *)dword_B38560, 0, 1u, flt_A30634);
      }
      if ( *v99 )
        BSSimpleList_Clear(*v99);
LABEL_405:
      FormHeapFree((unsigned int)*v99);
      *v99 = 0;
      FormHeapFree((unsigned int)v99);
      return;
    }
    v103 = ExtraDataList_GetExtraCount(v97);
    if ( v103 > a8 || sub_41E850(v97) )
    {
      v189 = sub_41E850(v97);
      if ( v189 && (a8 == v103 || a8 > v103) )
      {
        v177->countDelta -= v103;
        ExtraDataList_SetExtraCount(v97, -v103);
      }
      else
      {
        v177->countDelta -= a8;
        ExtraDataList_SetExtraCount(v97, v103 - a8);
      }
      v105 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v105 )
        v106 = (ExtraDataList *)ExtraDataList_constr(v105);
      else
        v106 = 0;
      v97 = v106;
      v180 = v106;
      ExtraDataList_CopyListForReference(v106, v188, 0);
      sub_424790(v106);
      if ( v103 >= a8 )
        ExtraDataList_SetExtraCount(v106, a8);
      else
        ExtraDataList_SetExtraCount(v106, v103);
      if ( a8 < v103 )
        v103 = a8;
      v100 = v177;
      a8 -= v103;
    }
    else
    {
      v177->countDelta -= v103;
      a8 -= v103;
      v99[1] = (ExtraDataList **)((char *)v99[1] + v103);
      v180 = v97;
      BSSimpleList_Remove(&v177->extendData->node.data, (int)v97);
      v188 = 0;
      if ( !v97->members.m_data )
      {
        (*(void (__thiscall **)(ExtraDataList *, int))v97->vtbl)(v97, 1);
        v97 = 0;
        v180 = 0;
        goto LABEL_304;
      }
      if ( !*v99 )
      {
        v104 = (ExtraDataList **)FormHeapAlloc(8u);
        if ( v104 )
        {
          *v104 = 0;
          v104[1] = 0;
          *v99 = v104;
          BSSimpleList_PushFront(v104, (int)v97);
          goto LABEL_304;
        }
        *v99 = 0;
      }
      BSSimpleList_PushFront(*v99, (int)v97);
    }
LABEL_304:
    if ( (_BYTE)a10 )
    {
      if ( !v97 || !ExtraDataList_GetReferencePointer(v97) )
      {
        v175 = sub_48B080(st6_0, st7_0, a5, (int)v100->type, v103, 0, a12, a13);
        v118 = TESObjectREFR_GetParentCell(a5);
        sub_4D72B0((_BYTE *)v175);
        if ( !v119 && v118 && (TESObjectCELL_GetOwner(v118), v120) && !sub_4CAAC0(v118, a5)
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v121 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v121) == 1)
          && (v122 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v175 + 0x170))(v175),
              v123 = (const char **)OblivionDynamicCast(
                                      v122,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v124 = v123) != 0)
          && (v181 = TESBipedModelForm_GetWorldModel(v123, 1), v181 != TESBipedModelForm_GetWorldModel(v124, 0)) )
        {
          v125 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                   a5,
                   st7_0,
                   st6_0,
                   a2);
          st7_0 = sub_4DB890(v125);
        }
        if ( *v99 )
          BSSimpleList_Clear(*v99);
        FormHeapFree((unsigned int)*v99);
        *v99 = 0;
        FormHeapFree((unsigned int)v99);
        if ( v97 )
          (*(void (__thiscall **)(ExtraDataList *, int))v97->vtbl)(v97, 1);
        v180 = 0;
        goto LABEL_360;
      }
      v107 = ExtraDataList_GetReferencePointer(v97);
      v175 = (int)v107;
      if ( v107 )
      {
        (*((void (__usercall **)(BSExtraDataVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))v107->Destructor
         + 0x23))(
          v107,
          0,
          st7_0,
          st6_0,
          a2);
        sub_4246B0(v97);
        st7_0 = ExtraDataList_Scale(v97);
        durationb = st7_0;
        sub_4DB520(durationb);
        ExtraDataList_CopyListForReference((ExtraDataList *)(v175 + 0x44), (ExtraDataList **)v97, v188 == 0);
        sub_41F690((_DWORD *)(v175 + 0x44));
        sub_4246B0((ExtraDataList *)(v175 + 0x44));
        if ( !sub_41F7F0((ExtraDataList *)(v175 + 0x44)) )
        {
          sub_423D30((ExtraDataList *)(v175 + 0x44), v175);
          st7_0 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v175 + 0x40))(v175, 0x20);
        }
        v108 = (_BYTE *)sub_48B080(st6_0, st7_0, a5, (int)v177->type, v103, (TESObjectREFR *)v175, a12, a13);
        v175 = (int)v108;
        if ( *v99 )
          BSSimpleList_Clear(*v99);
        FormHeapFree((unsigned int)*v99);
        *v99 = 0;
        FormHeapFree((unsigned int)v99);
        (*(void (__thiscall **)(ExtraDataList *, int))v97->vtbl)(v97, 1);
        v180 = 0;
        v109 = TESObjectREFR_GetParentCell(a5);
        sub_4D72B0(v108);
        if ( !v110 && v109 && (TESObjectCELL_GetOwner(v109), v111) && !sub_4CAAC0(v109, a5)
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v112 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v112) == 1)
          && (v113 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v108 + 0x170))(v108),
              v114 = (const char **)OblivionDynamicCast(
                                      v113,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v115 = v114) != 0)
          && (v116 = TESBipedModelForm_GetWorldModel(v114, 1), v116 != TESBipedModelForm_GetWorldModel(v115, 0)) )
        {
          v117 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                   a5,
                   st7_0,
                   st6_0,
                   a2);
          st7_0 = sub_4DB890(v117);
        }
LABEL_360:
        v174 = 0;
        if ( v188 )
          v183 = (ExtraDataList **)v183[1];
        if ( a8 )
          v172 = 1;
        goto LABEL_274;
      }
    }
    else if ( a11 )
    {
      if ( *v99 )
      {
        v126 = **v99;
      }
      else
      {
        v127 = (_DWORD *)FormHeapAlloc(0x14u);
        if ( v127 )
          v126 = (ExtraDataList *)ExtraDataList_constr(v127);
        else
          v126 = 0;
        v128 = (ExtraDataList **)FormHeapAlloc(8u);
        if ( v128 )
        {
          *v128 = 0;
          v128[1] = 0;
        }
        else
        {
          v128 = 0;
        }
        *v99 = v128;
        BSSimpleList_PushFront(v128, (int)v126);
      }
      if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)(
             a5,
             st7_0,
             st6_0,
             a2) )
      {
        v129 = a5->vtbl->GetBaseForm(a5);
      }
      else
      {
        v129 = (TESForm *)TESObjectREFR_GetOwner(a5);
      }
      v130 = v129;
      if ( !(_BYTE)a7 || sub_469980((int)v99[2]) || (st7_0 = sub_4DE880(v130), v131) || *((_BYTE *)v99[2] + 4) == 0x22 )
      {
        ExtraDataList_RemoveOwner(v126);
      }
      else
      {
        ExtraDataList::SetOrRemoveExtraOwnership(v126, v130);
        ExtraDataList_SetExtraCount(v126, v103);
      }
      ((void (__thiscall *)(TESForm *, ExtraDataList **, ExtraDataList *, int))a11->vtbl[1].Unk_0E)(
        a11,
        v99[2],
        v126,
        v103);
    }
    else if ( a14 )
    {
      ContainerEntryExtraData_ClearDataTable((int *)v99);
    }
    if ( *v99 )
      BSSimpleList_Clear(*v99);
    FormHeapFree((unsigned int)*v99);
    *v99 = 0;
    FormHeapFree((unsigned int)v99);
    goto LABEL_360;
  }
LABEL_367:
  if ( a15 && a8 > 0 )
  {
    ContainerExtraData_RemoveForm(a1, a2, st7_0, st6_0, a5, a6, a7, a8, a9, a10, a11, a12, &a13->x, 1, 0);
    return;
  }
  v143 = v177;
  if ( !v177 || v172 )
  {
    v144 = (char *)v179;
    if ( v179 )
    {
      if ( v177 )
      {
        v144 = (char *)(v177->countDelta + v179);
        v179 = (SInt32)v144;
      }
      if ( !v144 )
      {
        v145 = v177->extendData;
LABEL_472:
        BSSimpleList_Clear(v145);
        return;
      }
      if ( (_BYTE)a10 )
      {
        v176 = (_BYTE *)sub_48B080(st6_0, st7_0, a5, a6, a8, 0, a12, a13);
        v146 = TESObjectREFR_GetParentCell(a5);
        sub_4D72B0(v176);
        if ( !v147 && v146 && (TESObjectCELL_GetOwner(v146), v148) && !sub_4CAAC0(v146, a5)
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v149 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v149) == 1)
          && (v150 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v176 + 0x170))(v176),
              v151 = (const char **)OblivionDynamicCast(
                                      v150,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v152 = v151) != 0)
          && (v193 = TESBipedModelForm_GetWorldModel(v151, 1), v193 != TESBipedModelForm_GetWorldModel(v152, 0)) )
        {
          v153 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                   a5,
                   st7_0,
                   st6_0,
                   a2);
          sub_4DB890(v153);
        }
      }
      else
      {
        if ( a11 )
        {
          if ( a5->vtbl->IsActor(a5) )
            v154 = a5->vtbl->GetBaseForm(a5);
          else
            v154 = (TESForm *)TESObjectREFR_GetOwner(a5);
          v155 = v154;
          if ( !(_BYTE)a7 || sub_469980(a6) || (sub_4DE880(v155), v156) || *(_BYTE *)(a6 + 4) == 0x22 )
          {
            v157 = (ExtraDataList *)a9;
            if ( a9 )
              ExtraDataList_RemoveOwner(a9);
          }
          else
          {
            v157 = (ExtraDataList *)a9;
            if ( !a9 )
            {
              v158 = (_DWORD *)FormHeapAlloc(0x14u);
              if ( v158 )
                v159 = (ExtraDataList *)ExtraDataList_constr(v158);
              else
                v159 = 0;
              v157 = v159;
            }
            ExtraDataList::SetOrRemoveExtraOwnership(v157, v155);
            ExtraDataList_SetExtraCount(v157, a8);
          }
          if ( a8 > 0 )
            ((void (__thiscall *)(TESForm *, int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)(a11, a6, v157, a8);
        }
        v143 = v177;
      }
      if ( v174 )
      {
        if ( *v174 )
          BSSimpleList_Clear((_DWORD *)*v174);
        FormHeapFree(*v174);
        *v174 = 0;
        FormHeapFree((unsigned int)v174);
      }
      if ( v143 )
      {
        v143->countDelta -= a8;
      }
      else
      {
        v160 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v160 )
          v161 = ContainerEntryExtraData_constr(v160, a6, -a8);
        else
          v161 = 0;
        BSSimpleList_PushBack(*a1, (int)v161);
      }
    }
  }
  ContainerExtraData_GetEntryForForm(a1, a6, 1, 0);
  v99 = (ExtraDataList ***)v162;
  if ( v162 )
  {
    if ( !v173
      && !v189
      && ((v163 = *(_DWORD *)(v162 + 4)) == 0 && !v179
       || *(_DWORD *)v162 && BSSimpleList_IsEmpty(*(BSSimpleList_VoidPtr **)v162) && !v163) )
    {
      v164 = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
      if ( !v164 || (v165 = Tile_GetParentMenu(v164)) == 0 || !*(_BYTE *)(v165 + 0x61) )
        ContainerEntryExtraData_ClearDataTable((int *)v99);
      BSSimpleList_Remove(*a1, (int)v99);
      if ( *v99 )
        BSSimpleList_Clear(*v99);
      goto LABEL_405;
    }
    if ( (int)v99[1] + v179 < 0 && !(unsigned __int8)ContainerEntryExtraData_HasWorn((EntryData *)v99, 0) )
    {
      v166 = (unsigned int)*v99;
      if ( v166 )
      {
        if ( !v189 )
        {
          v145 = (tListVoid *)v166;
          goto LABEL_472;
        }
      }
    }
  }
}
