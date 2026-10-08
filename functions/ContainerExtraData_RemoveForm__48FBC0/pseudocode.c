void __userpurge ContainerExtraData_RemoveForm(
        int ***a1@<ecx>,
        double a2@<st2>,
        double st7_0@<st0>,
        double st6_0@<st1>,
        TESObjectREFR *a5,
        TESForm *form,
        int a7,
        signed int a8,
        ExtraDataList *a9,
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
  int *extendData; // esi
  ExtraDataList *v31; // edi
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
  TESObjectREFR *ReferencePointer; // eax
  MobileObject *v43; // ebx
  TESObjectCELL *v44; // esi
  int v45; // eax
  _BYTE *v46; // eax
  void *v47; // eax
  const char **v48; // eax
  const char **v49; // esi
  const char **WorldModel; // edi
  TESForm *v51; // eax
  MobileObject *v52; // edi
  TESObjectCELL *DwordAtOffset40; // ebx
  int v54; // eax
  bool IsOwnedByActor; // al
  char v56; // bl
  _BYTE *v57; // eax
  TESForm *v58; // eax
  const char **v59; // eax
  const char **v60; // ebx
  bool v61; // zf
  TESForm *v62; // eax
  ExtraDataList *v63; // esi
  unsigned int v64; // esi
  ExtraDataList *v65; // edi
  TESForm *v66; // eax
  TESForm *v67; // eax
  _DWORD *v68; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  unsigned int *v71; // esi
  SInt32 v72; // esi
  signed int v73; // esi
  int v74; // eax
  TESObjectREFR *v75; // ecx
  TESContainer *v76; // eax
  char *v77; // edi
  TESObjectCELL *v78; // esi
  int v79; // eax
  _BYTE *v80; // eax
  void *v81; // eax
  const char **v82; // eax
  const char **v83; // esi
  TESForm *v84; // eax
  TESForm *v85; // eax
  TESForm *v86; // edi
  ExtraDataList *v87; // ebp
  _DWORD *v88; // eax
  unsigned __int8 *v89; // eax
  int *v90; // eax
  ExtraDataList *v91; // ebx
  ExtraDataList ***v92; // eax
  ExtraDataList ***v93; // esi
  int **v94; // ebp
  int **v95; // eax
  char v96; // dl
  int v97; // edi
  ExtraDataList **v98; // eax
  _DWORD *v99; // eax
  ExtraDataList *v100; // ebp
  TESObjectREFR *v101; // eax
  char *v102; // ebp
  TESObjectCELL *v103; // esi
  int v104; // eax
  _BYTE *v105; // eax
  void *v106; // eax
  const char **v107; // eax
  const char **v108; // esi
  const char **v109; // ebx
  TESForm *v110; // eax
  TESObjectCELL *v111; // edi
  int v112; // eax
  _BYTE *v113; // eax
  void *v114; // eax
  const char **v115; // eax
  const char **v116; // edi
  TESForm *v117; // eax
  ExtraDataList *v118; // ebp
  _DWORD *v119; // eax
  ExtraDataList **v120; // eax
  TESForm *v121; // eax
  TESForm *v122; // ebx
  int *v123; // eax
  Actor *v124; // ebx
  int *v125; // esi
  signed __int16 v126; // ax
  char v127; // al
  int *v128; // ebx
  void (__thiscall **p_Unk_43)(TESObjectREFR *); // esi
  signed __int16 v130; // ax
  EntryData *EntryForForm; // eax
  int *v132; // edi
  signed __int16 v133; // ax
  int **v134; // ebx
  char *v135; // eax
  int *v136; // ecx
  TESObjectCELL *v137; // edi
  int v138; // eax
  _BYTE *v139; // eax
  void *v140; // eax
  const char **v141; // eax
  const char **v142; // edi
  TESForm *v143; // eax
  TESForm *v144; // eax
  TESForm *v145; // edi
  ExtraDataList *v146; // esi
  _DWORD *v147; // eax
  ExtraDataList *v148; // eax
  _DWORD *v149; // eax
  _DWORD *v150; // eax
  EntryData *v151; // eax
  SInt32 v152; // edi
  _DWORD *v153; // eax
  int v154; // eax
  unsigned int v155; // esi
  ExtraDataList *v156; // [esp+2Ch] [ebp-5Ch]
  float duration; // [esp+30h] [ebp-58h]
  float durationa; // [esp+30h] [ebp-58h]
  float durationb; // [esp+30h] [ebp-58h]
  char v160; // [esp+48h] [ebp-40h]
  char v161; // [esp+49h] [ebp-3Fh]
  char v162; // [esp+4Ah] [ebp-3Eh]
  unsigned int *v163; // [esp+4Ch] [ebp-3Ch]
  int v164; // [esp+50h] [ebp-38h]
  char *v165; // [esp+50h] [ebp-38h]
  int **v166; // [esp+54h] [ebp-34h]
  SInt32 v168; // [esp+5Ch] [ebp-2Ch]
  ExtraDataList *v169; // [esp+60h] [ebp-28h]
  const char **v170; // [esp+60h] [ebp-28h]
  int *v171; // [esp+64h] [ebp-24h]
  int *v172; // [esp+64h] [ebp-24h]
  const char **ownerc; // [esp+68h] [ebp-20h]
  TESForm *owner; // [esp+68h] [ebp-20h]
  TESForm *ownera; // [esp+68h] [ebp-20h]
  const char **ownerd; // [esp+68h] [ebp-20h]
  ExtraDataList **ownerb; // [esp+68h] [ebp-20h]
  BSExtraData *LeveledItem; // [esp+6Ch] [ebp-1Ch]
  SInt32 v179; // [esp+70h] [ebp-18h]
  char v180; // [esp+B4h] [ebp+2Ch]
  TESObjectREFRVtbl *vtbl; // [esp+B4h] [ebp+2Ch]
  const char **v182; // [esp+B4h] [ebp+2Ch]

  v15 = a1; /*0x48fbe7*/
  v16 = a1[1]; /*0x48fbed*/
  v17 = 0; /*0x48fbf6*/
  *((float *)a1 + 2) = kTerrainLODQuadRayDirectionZ; /*0x48fbf8*/
  v164 = 0; /*0x48fbfd*/
  v162 = 0; /*0x48fc01*/
  if ( v16 ) /*0x48fc06*/
    ((void (__thiscall *)(int **, int))(*v16)[0x10])(v16, 0x8000000); /*0x48fc12*/
  if ( a11 ) /*0x48fc1a*/
    a11->vtbl->MarkAsModified(a11, 0x8000000); /*0x48fc26*/
  v18 = *v15; /*0x48fc28*/
  v19 = 1; /*0x48fc30*/
  if ( *v15 ) /*0x48fc28*/
  {
    while ( v19 ) /*0x48fc36*/
    {
      if ( *v18 && (TESForm *)(*v18)[2] == form ) /*0x48fc41*/
        v19 = 0; /*0x48fc43*/
      else
        v18 = (int **)v18[1]; /*0x48fc47*/
      if ( !v18 ) /*0x48fc4c*/
        goto LABEL_15; /*0x48fc4c*/
    }
    if ( v18 ) /*0x48fc52*/
      v17 = (EntryData *)*v18; /*0x48fc54*/
  }
LABEL_15:
  v20 = 0; /*0x48fc56*/
  v166 = (int **)v17; /*0x48fc5e*/
  v163 = 0; /*0x48fc62*/
  if ( a9 ) /*0x48fc66*/
  {
    if ( !BaseExtraList_Count(a9) ) /*0x48fc6a*/
    {
      if ( v17 ) /*0x48fc75*/
      {
        if ( v17->extendData ) /*0x48fc77*/
          BSSimpleList_Remove((int *)v17->extendData, (int)a9); /*0x48fc7e*/
      }
      (*(void (__thiscall **)(ExtraDataList *, int))a9->vtbl)(a9, 1); /*0x48fc8c*/
      a9 = 0; /*0x48fc8e*/
    }
  }
  FormCount = 0; /*0x48fc92*/
  v168 = 0; /*0x48fc98*/
  if ( a5 ) /*0x48fc9c*/
  {
    v22 = (TESObjectREFR *)v15[1]; /*0x48fc9e*/
    if ( v22 ) /*0x48fca3*/
      Container = TESObjectREFR_GetContainer(v22); /*0x48fca5*/
    else
      Container = 0; /*0x48fcac*/
    FormCount = TESContainer_GetFormCount(Container, form); /*0x48fcbc*/
    v168 = FormCount; /*0x48fcbe*/
    if ( v17 ) /*0x48fcc2*/
    {
      if ( !ContainerEntryExtraData_HasWorn(v17, 0) ) /*0x48fcc8*/
      {
        v24 = sub_4845D0((int *)v17); /*0x48fcda*/
        if ( FormCount + v17->countDelta > sub_484620((int *)v17) + v24 ) /*0x48fcea*/
        {
          sub_484F20((int *)v17); /*0x48fcee*/
          if ( v25 ) /*0x48fcf5*/
          {
            FormCount = 0; /*0x48fcf7*/
            v168 = 0; /*0x48fcf9*/
          }
        }
        v15 = a1; /*0x48fcfd*/
      }
    }
  }
  v179 = 0; /*0x48fd03*/
  if ( FormCount < 0 ) /*0x48fd07*/
  {
    if ( ((unsigned __int8 (__thiscall *)(int **))(*v15[1])[0x64])(v15[1]) /*0x48fd27*/
      && ((unsigned __int8 (__thiscall *)(int **, _DWORD))(*v15[1])[0x66])(v15[1], 0) )
    {
      if ( v17 ) /*0x48fd2f*/
      {
        FormCount = 0; /*0x48fd31*/
        v168 = 0; /*0x48fd33*/
        v162 = 1; /*0x48fd37*/
        goto LABEL_36; /*0x48fd37*/
      }
      FormCount = -FormCount; /*0x48fd4b*/
      v179 = FormCount; /*0x48fd4d*/
    }
    else
    {
      v179 = FormCount; /*0x48fd53*/
      FormCount = -FormCount; /*0x48fd57*/
    }
    v168 = FormCount; /*0x48fd5b*/
    if ( FormCount < 0 && a11 != (TESForm *)reference ) /*0x48fd6b*/
      return; /*0x48fd6b*/
  }
LABEL_36:
  if ( v17 ) /*0x48fd3e*/
  {
    countDelta = v17->countDelta; /*0x48fd40*/
    if ( !countDelta ) /*0x48fd45*/
      goto LABEL_46; /*0x48fd45*/
    v27 = FormCount + countDelta == 0; /*0x48fd47*/
  }
  else
  {
    v27 = FormCount == 0; /*0x48fd74*/
  }
  if ( v27 ) /*0x48fd76*/
    return; /*0x48fd76*/
LABEL_46:
  LeveledItem = 0; /*0x48fd78*/
  v161 = 0; /*0x48fd7e*/
  if ( v17 ) /*0x48fd83*/
  {
    while ( 1 ) /*0x48fd90*/
    {
      if ( a8 <= 0 || FormCount + v17->countDelta <= 0 ) /*0x48fda2*/
        goto LABEL_368; /*0x48fda2*/
      if ( v20 ) /*0x48fdaa*/
      {
        if ( *v20 ) /*0x48fdac*/
          BSSimpleList_Clear((_DWORD *)*v20); /*0x48fdb2*/
        FormHeapFree(*v20); /*0x48fdba*/
        *v20 = 0; /*0x48fdc0*/
        FormHeapFree((unsigned int)v20); /*0x48fdc6*/
      }
      v28 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48fdd0*/
      if ( v28 ) /*0x48fdda*/
      {
        v28[2] = 0; /*0x48fdde*/
        *v28 = 0; /*0x48fde1*/
        v28[1] = 0; /*0x48fde3*/
        v29 = v28; /*0x48fde6*/
      }
      else
      {
        v29 = 0; /*0x48fdea*/
      }
      v29[2] = (unsigned int)v17->type; /*0x48fdf4*/
      extendData = (int *)v17->extendData; /*0x48fdf7*/
      v163 = v29; /*0x48fdf9*/
      v171 = (int *)v17->extendData; /*0x48fdfd*/
      v160 = 1; /*0x48fe01*/
      if ( (a9 && BaseExtraList_Count(a9) || a15) && extendData && *extendData ) /*0x48fe2b*/
      {
        while ( 1 ) /*0x48fe38*/
        {
          v31 = (ExtraDataList *)*v171; /*0x48fe38*/
          if ( !*v171 || !v160 ) /*0x48fe47*/
            goto LABEL_276; /*0x48fe47*/
          if ( a9 != v31 && (a9 || !a15 || !ExtraDataList_GetOwner((ExtraDataList *)*v171)) ) /*0x48fe64*/
          {
            v171 = (int *)v171[1]; /*0x48fe70*/
            goto LABEL_189; /*0x48fe74*/
          }
          a9 = 0; /*0x48fe7b*/
          v160 = 0; /*0x48fe83*/
          ExtraCount = ExtraDataList_GetExtraCount(v31); /*0x48fe91*/
          if ( ExtraDataList_HasWorn(v31, 0) ) /*0x48fe94*/
          {
            v180 = 0; /*0x49108d*/
            if ( (unsigned int)BaseExtraList_Count(v31) <= 1 /*0x4910cd*/
              || BaseExtraList_Count(v31) == 2 && ExtraDataList_GetExtraCount(v31) > 1
              || sub_41DEF0((TESForm *)v31) && BaseExtraList_Count(v31) == 2 )
            {
              v180 = 1; /*0x4910cf*/
            }
            if ( a5->vtbl->IsActor(a5) && (a5->member.super.flags & 0x800) == 0 ) /*0x4910f5*/
            {
              v124 = (Actor *)OblivionDynamicCast( /*0x49110b*/
                                a5,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                &Actor `RTTI Type Descriptor',
                                0);
              if ( !v124->members.super.process ) /*0x491110*/
                goto LABEL_387; /*0x491110*/
              v125 = v166[2]; /*0x49111a*/
              v126 = ExtraDataList_GetExtraCount(v31); /*0x491126*/
              st7_0 = Actor_UnequipItem(v124, st7_0, a2, st6_0, (char)v125, v126, v31, 1, 0, 0); /*0x491132*/
LABEL_385:
              if ( !v127 || v180 ) /*0x491168*/
LABEL_387:
                v31 = 0; /*0x49116a*/
              EntryForForm = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)a1, form, 1, 0); /*0x49117b*/
              if ( !EntryForForm || !ContainerEntryExtraData_HasWorn(EntryForForm, 0) ) /*0x491188*/
                ContainerExtraData_RemoveForm( /*0x4911b8*/
                  a1,
                  a2,
                  st7_0,
                  st6_0,
                  a5,
                  (int)form,
                  a7,
                  a8,
                  (unsigned __int8 *)v31,
                  a10,
                  a11,
                  a12,
                  a13,
                  1,
                  0);
              if ( v163 ) /*0x4911cb*/
              {
                if ( *v163 ) /*0x4911cd*/
                  BSSimpleList_Clear((_DWORD *)*v163); /*0x4911d3*/
                FormHeapFree(*v163); /*0x4911db*/
                *v163 = 0; /*0x4911e1*/
                FormHeapFree((unsigned int)v163); /*0x4911e7*/
              }
              return; /*0x4911e7*/
            }
            v128 = v166[2]; /*0x49113d*/
            p_Unk_43 = &a5->vtbl->Unk_43; /*0x491146*/
            v130 = ExtraDataList_GetExtraCount(v31); /*0x49114c*/
            v127 = ((int (__thiscall *)(TESObjectREFR *, int *, _DWORD, ExtraDataList *))*p_Unk_43)(a5, v128, v130, v31); /*0x49115a*/
            goto LABEL_385; /*0x49115a*/
          }
          if ( ExtraCount > a8 || ExtraDataList_GetLeveledItem(v31) ) /*0x48feab*/
          {
            LeveledItem = ExtraDataList_GetLeveledItem(v31); /*0x48ff0c*/
            if ( ExtraDataList_GetLeveledItem(v31) && ExtraDataList_GetExtraScript(v31) ) /*0x48ff1b*/
            {
              v33 = v31; /*0x48ff2b*/
              BSSimpleList_Remove(*v166, (int)v31); /*0x48ff2d*/
              v34 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48ff34*/
              v35 = 0; /*0x48ff40*/
              if ( v34 ) /*0x48ff48*/
                v35 = (ExtraDataList *)ExtraDataList_constr(v34); /*0x48ff51*/
              v36 = ExtraDataList_GetLeveledItem(v31); /*0x48ff5d*/
              ExtraDataList_AddExtraLeveledItem(v35, v36[1].vtbl); /*0x48ff68*/
              BSSimpleList_PushFront(*v166, (int)v35); /*0x48ff75*/
              sub_424790(v31); /*0x48ff7c*/
              v166[1] = (int *)-ExtraDataList_GetExtraCount(v31); /*0x48ff8d*/
            }
            else
            {
              if ( sub_41DEF0((TESForm *)v31) && a8 == ExtraCount ) /*0x48ffa8*/
              {
                v166[1] = (int *)((char *)v166[1] - ExtraCount); /*0x48ffaa*/
                v37 = -ExtraCount; /*0x48ffad*/
              }
              else
              {
                v166[1] = (int *)((char *)v166[1] - a8); /*0x48ffb1*/
                v37 = ExtraCount - a8; /*0x48ffb4*/
              }
              ExtraDataList_SetExtraCount(v31, v37); /*0x48ffb7*/
              v38 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48ffbe*/
              if ( v38 ) /*0x48ffd4*/
                v33 = (ExtraDataList *)ExtraDataList_constr(v38); /*0x48ffdd*/
              else
                v33 = 0; /*0x48ffe1*/
              ExtraDataList_CopyListForReference(v33, (ExtraDataList **)v31, 0); /*0x48fff0*/
              sub_424790(v33); /*0x48fff7*/
              ExtraDataList_SetExtraCount(v33, a8); /*0x48ffff*/
              if ( BaseExtraList_Count(v33) == 1 && ExtraDataList_GetExtraCount(v33) > 1 || !BaseExtraList_Count(v33) ) /*0x49001f*/
              {
                if ( v33 ) /*0x49002a*/
                  (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1); /*0x490034*/
                v33 = 0; /*0x490036*/
              }
            }
            Script_AddEventToExtraScript(a5, v33, 4); /*0x490040*/
            ExtraCount = a8; /*0x490048*/
            a8 = 0; /*0x49004a*/
          }
          else
          {
            v166[1] = (int *)((char *)v166[1] - ExtraCount); /*0x48feb8*/
            v163[1] += ExtraCount; /*0x48fec4*/
            v33 = v31; /*0x48fecc*/
            a8 -= ExtraCount; /*0x48fece*/
            BSSimpleList_Remove(*v166, (int)v31); /*0x48fed2*/
            v156 = v31; /*0x48fedd*/
            v31 = 0; /*0x48fedf*/
            Script_AddEventToExtraScript(a5, v156, 4); /*0x48fee1*/
            if ( !v33->members.m_data ) /*0x48fee9*/
            {
              (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1); /*0x48fefa*/
              v33 = 0; /*0x48fefc*/
              goto LABEL_105; /*0x48fefe*/
            }
          }
          if ( v33 ) /*0x490054*/
          {
            if ( BaseExtraList_Count(v33) ) /*0x490058*/
            {
              if ( !*v163 ) /*0x490065*/
              {
                v39 = (_DWORD *)FormHeapAlloc(8u); /*0x49006c*/
                if ( v39 ) /*0x490076*/
                {
                  *v39 = 0; /*0x490078*/
                  v39[1] = 0; /*0x49007e*/
                }
                else
                {
                  v39 = 0; /*0x490087*/
                }
                *v163 = (unsigned int)v39; /*0x490089*/
              }
              v40 = (ExtraDataList **)*v163; /*0x49008f*/
              if ( *(_DWORD *)*v163 ) /*0x490091*/
              {
                v41 = (ExtraDataList **)FormHeapAlloc(8u); /*0x490098*/
                if ( v41 ) /*0x4900a2*/
                {
                  *v41 = *v40; /*0x4900a6*/
                  v41[1] = 0; /*0x4900a8*/
                }
                else
                {
                  v41 = 0; /*0x4900b1*/
                }
                v41[1] = v40[1]; /*0x4900b6*/
                v40[1] = (ExtraDataList *)v41; /*0x4900b9*/
              }
              *v40 = v33; /*0x4900bc*/
            }
          }
LABEL_105:
          if ( (_BYTE)a10 ) /*0x4900c3*/
          {
            if ( !v33 || !ExtraDataList_GetReferencePointer(v33) ) /*0x4900d3*/
            {
              v52 = (MobileObject *)sub_48B080(st6_0, st7_0, a5, (TESForm *)v166[2], ExtraCount, 0, a12, a13); /*0x4902b6*/
              v164 = (int)v52; /*0x4902c1*/
              v52->vtbl->super.super.MarkAsModified((TESForm *)v52, 0x20); /*0x4902c5*/
              if ( v33 ) /*0x4902c9*/
              {
                if ( BaseExtraList_Count(v33) ) /*0x4902cd*/
                {
                  st7_0 = ExtraDataList_Scale(v33); /*0x4902d8*/
                  durationa = st7_0; /*0x4902e0*/
                  sub_4DB520(v52, durationa); /*0x4902e3*/
                  ExtraDataList_CopyListForReference(&v52->super.baseExtraList, (ExtraDataList **)v33, 1); /*0x4902f0*/
                  sub_41F690(&v52->super.baseExtraList.vtbl); /*0x4902f7*/
                }
              }
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x49030a*/
              sub_4D72B0(v52); /*0x49030c*/
              if ( v54 /*0x490330*/
                || !DwordAtOffset40
                || !TESObjectCELL_GetOwner(DwordAtOffset40)
                || (IsOwnedByActor = TESObjectCELL_IsOwnedByActor(DwordAtOffset40, (Actor *)a5), v56 = 1, IsOwnedByActor) )
              {
                v56 = 0; /*0x490332*/
              }
              if ( TESObjectREFR_GetOwner((TESObjectREFR *)v52) ) /*0x490338*/
              {
                v61 = v56 == 0; /*0x4903b8*/
LABEL_140:
                if ( v61 ) /*0x4903ba*/
                {
LABEL_142:
                  if ( v163 ) /*0x4903d7*/
                  {
                    if ( *v163 ) /*0x4903d9*/
                      BSSimpleList_Clear((_DWORD *)*v163); /*0x4903df*/
                    FormHeapFree(*v163); /*0x4903e7*/
                    *v163 = 0; /*0x4903ed*/
                    FormHeapFree((unsigned int)v163); /*0x4903f3*/
                  }
                  v163 = 0; /*0x4903fd*/
                  if ( v33 ) /*0x490405*/
                    (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1); /*0x490413*/
                  goto LABEL_189; /*0x490415*/
                }
              }
              else if ( !v56 ) /*0x490343*/
              {
                if ( a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC ) /*0x490356*/
                {
                  v57 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490363*/
                                   a5,
                                   st7_0,
                                   st6_0,
                                   a2);
                  if ( TESActorBase_IsFemale(v57) == 1 ) /*0x49036f*/
                  {
                    v58 = v52->vtbl->super.GetBaseForm((TESObjectREFR *)v52); /*0x490389*/
                    v59 = (const char **)OblivionDynamicCast( /*0x49038c*/
                                           v58,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                           &TESBipedModelForm `RTTI Type Descriptor',
                                           0);
                    v60 = v59; /*0x490391*/
                    if ( v59 ) /*0x490398*/
                    {
                      ownerc = TESBipedModelForm_GetWorldModel(v59, 1); /*0x4903a7*/
                      v61 = ownerc == TESBipedModelForm_GetWorldModel(v60, 0); /*0x4903b4*/
                      goto LABEL_140; /*0x4903b6*/
                    }
                  }
                }
                goto LABEL_142; /*0x490398*/
              }
              v62 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x4903c7*/
                                 a5,
                                 st7_0,
                                 st6_0,
                                 a2);
              sub_4DB890((char *)v52, v62); /*0x4903cc*/
              goto LABEL_142; /*0x4903cc*/
            }
            ReferencePointer = ExtraDataList_GetReferencePointer(v33); /*0x4900e2*/
            v164 = (int)ReferencePointer; /*0x4900e9*/
            if ( ReferencePointer ) /*0x4900ed*/
            {
              v43 = (MobileObject *)ReferencePointer; /*0x4900f3*/
              ((void (__usercall *)(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))ReferencePointer->vtbl->super.Unk_23)( /*0x490101*/
                ReferencePointer,
                0,
                st7_0,
                st6_0,
                a2);
              sub_4246B0(v33); /*0x490105*/
              st7_0 = ExtraDataList_Scale(v33); /*0x49011a*/
              duration = st7_0; /*0x490122*/
              sub_4DB520(v43, duration); /*0x490125*/
              ExtraDataList_CopyListForReference(&v43->super.baseExtraList, (ExtraDataList **)v33, v31 == 0); /*0x490135*/
              sub_41F690(&v43->super.baseExtraList.vtbl); /*0x49013c*/
              sub_4246B0(&v43->super.baseExtraList); /*0x490143*/
              if ( !sub_41F7F0(&v43->super.baseExtraList) ) /*0x49014a*/
              {
                sub_423D30(&v43->super.baseExtraList, (int)v43); /*0x490156*/
                st7_0 = ((double (__thiscall *)(MobileObject *, int))v43->vtbl->super.super.MarkAsModified)(v43, 0x20); /*0x490164*/
              }
              sub_48B080(st6_0, st7_0, a5, (TESForm *)v166[2], ExtraCount, (TESObjectREFR *)v43, a12, a13); /*0x490183*/
              if ( v163 ) /*0x49018e*/
              {
                if ( *v163 ) /*0x490190*/
                  BSSimpleList_Clear((_DWORD *)*v163); /*0x490196*/
                FormHeapFree(*v163); /*0x49019e*/
                *v163 = 0; /*0x4901a4*/
                FormHeapFree((unsigned int)v163); /*0x4901aa*/
              }
              v163 = 0; /*0x4901ba*/
              (*(void (__thiscall **)(ExtraDataList *, int))v33->vtbl)(v33, 1); /*0x4901c2*/
              v44 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x4901cd*/
              sub_4D72B0(v43); /*0x4901cf*/
              if ( !v45 && v44 && TESObjectCELL_GetOwner(v44) && !TESObjectCELL_IsOwnedByActor(v44, (Actor *)a5) ) /*0x4901f1*/
                goto LABEL_124; /*0x4901f1*/
              if ( a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC ) /*0x490208*/
              {
                v46 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490218*/
                                 a5,
                                 st7_0,
                                 st6_0,
                                 a2);
                if ( TESActorBase_IsFemale(v46) == 1 ) /*0x490224*/
                {
                  v47 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v164 + 0x170))(v164); /*0x490244*/
                  v48 = (const char **)OblivionDynamicCast( /*0x490247*/
                                         v47,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                         &TESBipedModelForm `RTTI Type Descriptor',
                                         0);
                  v49 = v48; /*0x49024c*/
                  if ( v48 ) /*0x490253*/
                  {
                    WorldModel = TESBipedModelForm_GetWorldModel(v48, 1); /*0x490266*/
                    if ( WorldModel != TESBipedModelForm_GetWorldModel(v49, 0) ) /*0x49026f*/
                    {
                      v43 = (MobileObject *)v164; /*0x490275*/
LABEL_124:
                      v51 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490279*/
                                         a5,
                                         st7_0,
                                         st6_0,
                                         a2);
                      sub_4DB890((char *)v43, v51); /*0x490289*/
                    }
                  }
                }
              }
            }
          }
          else
          {
            if ( a11 ) /*0x49041f*/
            {
              v63 = 0; /*0x49042b*/
              if ( *v163 ) /*0x490429*/
              {
                v64 = *v163; /*0x490435*/
                do /*0x4904d8*/
                {
                  v65 = *(ExtraDataList **)v64; /*0x490437*/
                  if ( !*(_DWORD *)v64 ) /*0x490437*/
                    break; /*0x49043b*/
                  if ( !ExtraDataList_GetOwner(*(ExtraDataList **)v64) ) /*0x490443*/
                  {
                    if ( a5->vtbl->IsActor(a5) ) /*0x49045a*/
                      v66 = a5->vtbl->GetBaseForm(a5); /*0x49046a*/
                    else
                      v66 = TESObjectREFR_GetOwner(a5); /*0x49046e*/
                    owner = v66; /*0x490478*/
                    if ( (_BYTE)a7 ) /*0x49047c*/
                    {
                      if ( !sub_469980(v163[2]) /*0x4904ad*/
                        && !sub_4DE880(a5, (BSExtraDataVtbl *)owner)
                        && *(_BYTE *)(v163[2] + 4) != 0x22 )
                      {
                        ExtraDataList::SetOrRemoveExtraOwnership(v65, owner); /*0x4904b6*/
                      }
                    }
                  }
                  ((void (__thiscall *)(TESForm *, unsigned int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)( /*0x4904d1*/
                    a11,
                    v163[2],
                    v65,
                    ExtraCount);                // ContainerExtraData_RemoveForm transfer path: when destRef is non-null, calls destRef virtual AddItem slot with item form, extra data, and count after removing from source.
                  v64 = *(_DWORD *)(v64 + 4); /*0x4904d3*/
                }
                while ( v64 ); /*0x4904d8*/
                if ( *v163 ) /*0x4904e2*/
                  BSSimpleList_Clear((_DWORD *)*v163); /*0x4904e8*/
              }
              else
              {
                if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)( /*0x49051d*/
                       a5,
                       st7_0,
                       st6_0,
                       a2) )
                {
                  v67 = a5->vtbl->GetBaseForm(a5); /*0x49052d*/
                }
                else
                {
                  v67 = TESObjectREFR_GetOwner(a5); /*0x490531*/
                }
                ownera = v67; /*0x49053f*/
                if ( (_BYTE)a7 ) /*0x490543*/
                {
                  if ( !sub_469980(v163[2]) /*0x49056c*/
                    && !sub_4DE880(a5, (BSExtraDataVtbl *)ownera)
                    && *(_BYTE *)(v163[2] + 4) != 0x22 )
                  {
                    v68 = (_DWORD *)FormHeapAlloc(0x14u); /*0x490570*/
                    if ( v68 ) /*0x490586*/
                      v63 = (ExtraDataList *)ExtraDataList_constr(v68); /*0x49058f*/
                    else
                      v63 = 0; /*0x490593*/
                    ExtraDataList::SetOrRemoveExtraOwnership(v63, ownera); /*0x4905a4*/
                    ExtraDataList_SetExtraCount(v63, a8); /*0x4905b0*/
                  }
                }
                ((void (__thiscall *)(TESForm *, unsigned int, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)( /*0x4905c7*/
                  a11,
                  v163[2],
                  v63,
                  ExtraCount);                  // ContainerExtraData_RemoveForm transfer path without existing extra list: builds/sets ExtraOwnership/ExtraCount as needed, then calls destRef virtual AddItem.
                if ( *v163 ) /*0x4905c9*/
                  BSSimpleList_Clear((_DWORD *)*v163); /*0x4905cf*/
              }
              FormHeapFree(*v163); /*0x4904f4*/
              *v163 = 0; /*0x4904fa*/
              FormHeapFree((unsigned int)v163); /*0x490500*/
              v160 = 0; /*0x490505*/
            }
            else
            {
              OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x4905f4*/
              if ( OpenMenuTile && (ParentMenu = Tile_GetParentMenu(OpenMenuTile)) != 0 && *(_BYTE *)(ParentMenu + 0x61) ) /*0x49060b*/
              {
                v71 = v163; /*0x49061e*/
              }
              else
              {
                v71 = v163; /*0x490611*/
                ContainerEntryExtraData_ClearDataTable((int *)v163); /*0x490617*/
              }
              if ( v71 ) /*0x490624*/
              {
                if ( *v71 ) /*0x490626*/
                  BSSimpleList_Clear((_DWORD *)*v71); /*0x49062c*/
                FormHeapFree(*v71); /*0x490634*/
                *v71 = 0; /*0x49063a*/
                FormHeapFree((unsigned int)v71); /*0x490640*/
              }
            }
            v163 = 0; /*0x490648*/
          }
LABEL_189:
          if ( a8 > 0 && a15 ) /*0x490660*/
          {
            ContainerExtraData_RemoveForm(a1, a2, st7_0, st6_0, a5, (int)form, a7, a8, 0, a10, a11, a12, a13, 1, 0); /*0x491224*/
            return; /*0x491229*/
          }
          if ( a8 < 1 ) /*0x490669*/
          {
            if ( !v171 ) /*0x49068f*/
              goto LABEL_276; /*0x49068f*/
          }
          else
          {
            if ( v164 ) /*0x490671*/
              return; /*0x490671*/
            if ( !v171 ) /*0x49067b*/
            {
              a9 = 0; /*0x490681*/
              goto LABEL_276; /*0x490685*/
            }
          }
        }
      }
      v72 = v17->countDelta; /*0x49069c*/
      if ( FormCount >= 0 ) /*0x49069f*/
        v73 = FormCount + v72; /*0x4906a5*/
      else
        v73 = v72 - FormCount; /*0x4906a1*/
      if ( v73 < 0 && FormCount >= 0 ) /*0x4906ad*/
        return; /*0x4906ad*/
      if ( v17->extendData ) /*0x4906b3*/
      {
        v74 = sub_484620((int *)v17); /*0x4906ba*/
        if ( v74 > 0 ) /*0x4906c1*/
          v73 -= v74; /*0x4906c3*/
      }
      if ( v73 < 0 ) /*0x4906c9*/
        v73 = 0; /*0x4906cb*/
      v169 = 0; /*0x4906cf*/
      if ( v73 > 0 ) /*0x4906d3*/
      {
        if ( v73 < a8 ) /*0x4906df*/
        {
          v75 = (TESObjectREFR *)a1[1]; /*0x4906f6*/
          if ( v75 ) /*0x4906fb*/
            v76 = TESObjectREFR_GetContainer(v75); /*0x4906fd*/
          else
            v76 = 0; /*0x490704*/
          if ( TESContainer_GetFormCount(v76, form) > 0 ) /*0x490714*/
            v17->countDelta -= v73; /*0x490716*/
          a8 -= v73; /*0x490719*/
        }
        else
        {
          if ( !v179 ) /*0x4906e5*/
            v17->countDelta -= a8; /*0x4906e7*/
          v73 = a8; /*0x4906ea*/
          a8 = 0; /*0x4906ec*/
        }
        if ( FormCount + v17->countDelta < 0 ) /*0x490722*/
        {
          if ( FormCount ) /*0x490726*/
            v17->countDelta = -FormCount; /*0x49072a*/
          else
            v17->countDelta = 0; /*0x49072f*/
        }
        if ( (_BYTE)a10 ) /*0x49073b*/
        {
          v77 = (char *)sub_48B080(st6_0, st7_0, a5, form, v73, 0, a12, a13); /*0x490761*/
          v164 = (int)v77; /*0x490765*/
          v78 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x490770*/
          sub_4D72B0(v77); /*0x490772*/
          if ( !v79 && v78 && TESObjectCELL_GetOwner(v78) && !TESObjectCELL_IsOwnedByActor(v78, (Actor *)a5) /*0x490807*/
            || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
            && (v80 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                 a5,
                                 st7_0,
                                 st6_0,
                                 a2),
                TESActorBase_IsFemale(v80) == 1)
            && (v81 = (void *)(*(int (__thiscall **)(char *))(*(_DWORD *)v77 + 0x170))(v77),
                v82 = (const char **)OblivionDynamicCast(
                                       v81,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESBipedModelForm `RTTI Type Descriptor',
                                       0),
                (v83 = v82) != 0)
            && (ownerd = TESBipedModelForm_GetWorldModel(v82, 1), ownerd != TESBipedModelForm_GetWorldModel(v83, 0)) )
          {
            v84 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490814*/
                               a5,
                               st7_0,
                               st6_0,
                               a2);
            sub_4DB890(v77, v84); /*0x490819*/
          }
          if ( *v29 ) /*0x49081e*/
            BSSimpleList_Clear((_DWORD *)*v29); /*0x490824*/
          FormHeapFree(*v29); /*0x49082c*/
          *v29 = 0; /*0x490832*/
          FormHeapFree((unsigned int)v29); /*0x490838*/
          v169 = 0; /*0x49083d*/
        }
        else
        {
          if ( a11 ) /*0x49084f*/
          {
            if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)( /*0x490864*/
                   a5,
                   st7_0,
                   st6_0,
                   a2) )
            {
              v85 = a5->vtbl->GetBaseForm(a5); /*0x490875*/
            }
            else
            {
              v85 = TESObjectREFR_GetOwner(a5); /*0x490879*/
            }
            v86 = v85; /*0x490883*/
            if ( !(_BYTE)a7 /*0x4908ac*/
              || sub_469980((int)form)
              || sub_4DE880(a5, (BSExtraDataVtbl *)v86)
              || form->member.type == kFormType_Ammo )
            {
              v87 = a9; /*0x4908fb*/
            }
            else
            {
              v87 = a9; /*0x4908ae*/
              if ( !a9 ) /*0x4908b4*/
              {
                v88 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4908b8*/
                if ( v88 ) /*0x4908ce*/
                  v89 = (unsigned __int8 *)ExtraDataList_constr(v88); /*0x4908d2*/
                else
                  v89 = 0; /*0x4908d9*/
                v87 = (ExtraDataList *)v89; /*0x4908db*/
                a9 = (ExtraDataList *)v89; /*0x4908e5*/
              }
              ExtraDataList::SetOrRemoveExtraOwnership(v87, v86); /*0x4908ec*/
              ExtraDataList_SetExtraCount(v87, v73); /*0x4908f4*/
            }
            ((void (__thiscall *)(TESForm *, TESForm *, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)( /*0x490912*/
              a11,
              form,
              v87,
              v73);
          }
          if ( *v29 ) /*0x490914*/
            BSSimpleList_Clear((_DWORD *)*v29); /*0x49091a*/
          FormHeapFree(*v29); /*0x490922*/
          *v29 = 0; /*0x490928*/
          FormHeapFree((unsigned int)v29); /*0x49092e*/
        }
        v163 = 0; /*0x490936*/
      }
      if ( a8 > 0 ) /*0x490943*/
      {
        v90 = *v166; /*0x49094d*/
        if ( *v166 ) /*0x49094d*/
        {
          if ( v90[1] || *v90 ) /*0x49095d*/
            break; /*0x49095d*/
        }
      }
LABEL_276:
      v95 = *a1; /*0x490a33*/
      v96 = 1; /*0x490a3b*/
      if ( !*a1 ) /*0x490a37*/
        goto LABEL_367; /*0x490a37*/
      while ( v96 ) /*0x490a49*/
      {
        if ( *v95 && (TESForm *)(*v95)[2] == form ) /*0x490a5c*/
          v96 = 0; /*0x490a62*/
        else
          v95 = (int **)v95[1]; /*0x491006*/
        if ( !v95 ) /*0x49100b*/
          goto LABEL_367; /*0x49100b*/
      }
      if ( !v95 ) /*0x491070*/
      {
LABEL_367:
        v166 = 0; /*0x491011*/
        goto LABEL_368; /*0x491011*/
      }
      v123 = *v95; /*0x491072*/
      v166 = (int **)v123; /*0x491076*/
      if ( !v123 ) /*0x49107a*/
        goto LABEL_368; /*0x49107a*/
      FormCount = v168; /*0x49107c*/
      v20 = v163; /*0x491080*/
      v17 = (EntryData *)v123; /*0x491084*/
    }
    v172 = *v166; /*0x490966*/
    while ( 1 ) /*0x49096a*/
    {
      if ( !*v172 || a8 <= 0 ) /*0x49097d*/
        goto LABEL_276; /*0x49097d*/
      v91 = (ExtraDataList *)*v172; /*0x49098b*/
      ownerb = (ExtraDataList **)*v172; /*0x49098d*/
      if ( v163 ) /*0x490991*/
      {
        if ( *v163 ) /*0x490993*/
          BSSimpleList_Clear((_DWORD *)*v163); /*0x490999*/
        FormHeapFree(*v163); /*0x4909a1*/
        *v163 = 0; /*0x4909a7*/
        FormHeapFree((unsigned int)v163); /*0x4909a9*/
      }
      v92 = (ExtraDataList ***)FormHeapAlloc(0xCu); /*0x4909b3*/
      if ( v92 ) /*0x4909bd*/
      {
        v92[2] = 0; /*0x4909bf*/
        *v92 = 0; /*0x4909c2*/
        v92[1] = 0; /*0x4909c4*/
        v93 = v92; /*0x4909c7*/
      }
      else
      {
        v93 = 0; /*0x4909cb*/
      }
      v94 = v166; /*0x4909cd*/
      v93[2] = (ExtraDataList **)v166[2]; /*0x4909d6*/
      if ( ExtraDataList_GetExtraCount(v91) >= 0 ) /*0x4909e1*/
        break; /*0x4909e1*/
      v172 = (int *)v172[1]; /*0x4909ee*/
      if ( *v93 ) /*0x4909f2*/
        BSSimpleList_Clear(*v93); /*0x4909f8*/
      FormHeapFree((unsigned int)*v93); /*0x490a00*/
      *v93 = 0; /*0x490a06*/
      FormHeapFree((unsigned int)v93); /*0x490a08*/
      v163 = 0; /*0x490a16*/
      if ( v169 ) /*0x490a1a*/
        ((void (__thiscall *)(ExtraDataList *, int))*v169->vtbl)(v169, 1); /*0x490a22*/
      v169 = 0; /*0x490a24*/
LABEL_275:
      if ( !v172 ) /*0x490a2d*/
        goto LABEL_276; /*0x490a2d*/
    }
    if ( ExtraDataList_HasWorn(v91, 0) ) /*0x490a6c*/
    {
      if ( (unsigned int)BaseExtraList_Count(v91) <= 1 /*0x491246*/
        || BaseExtraList_Count(v91) == 2 && ExtraDataList_GetExtraCount(v91) )
      {
        a9 = 0; /*0x491250*/
      }
      v132 = v166[2]; /*0x491254*/
      vtbl = a5->vtbl; /*0x491261*/
      v133 = ExtraDataList_GetExtraCount(v91); /*0x491268*/
      if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int *, _DWORD, ExtraDataList *))vtbl->Unk_43)( /*0x491281*/
             a5,
             v132,
             v133,
             v91) )
      {
        ContainerExtraData_RemoveForm( /*0x4912b8*/
          a1,
          a2,
          st7_0,
          st6_0,
          a5,
          (int)form,
          a7,
          a8,
          (unsigned __int8 *)a9,
          a10,
          a11,
          a12,
          a13,
          1,
          0);
      }
      else
      {
        GameUI_QueueMessage(stru_B38560.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x4912d5*/
      }
      if ( *v93 ) /*0x4912e1*/
        BSSimpleList_Clear(*v93); /*0x4912e7*/
LABEL_406:
      FormHeapFree((unsigned int)*v93); /*0x4912ec*/
      *v93 = 0; /*0x4912f5*/
      FormHeapFree((unsigned int)v93); /*0x4912fb*/
      return; /*0x491305*/
    }
    v97 = ExtraDataList_GetExtraCount(v91); /*0x490a80*/
    if ( v97 > a8 || ExtraDataList_GetLeveledItem(v91) ) /*0x490a8f*/
    {
      LeveledItem = ExtraDataList_GetLeveledItem(v91); /*0x490b22*/
      if ( LeveledItem && (a8 == v97 || a8 > v97) ) /*0x490b32*/
      {
        v166[1] = (int *)((char *)v166[1] - v97); /*0x490b34*/
        ExtraDataList_SetExtraCount(v91, -v97); /*0x490b3c*/
      }
      else
      {
        v166[1] = (int *)((char *)v166[1] - a8); /*0x490b42*/
        ExtraDataList_SetExtraCount(v91, v97 - a8); /*0x490b48*/
      }
      v99 = (_DWORD *)FormHeapAlloc(0x14u); /*0x490b4f*/
      if ( v99 ) /*0x490b65*/
        v100 = (ExtraDataList *)ExtraDataList_constr(v99); /*0x490b6e*/
      else
        v100 = 0; /*0x490b72*/
      v91 = v100; /*0x490b7a*/
      v169 = v100; /*0x490b87*/
      ExtraDataList_CopyListForReference(v100, ownerb, 0); /*0x490b8b*/
      sub_424790(v100); /*0x490b92*/
      if ( v97 >= a8 ) /*0x490b9d*/
        ExtraDataList_SetExtraCount(v100, a8); /*0x490ba7*/
      else
        ExtraDataList_SetExtraCount(v100, v97); /*0x490ba0*/
      if ( a8 < v97 ) /*0x490bb2*/
        v97 = a8; /*0x490bb4*/
      v94 = v166; /*0x490bb6*/
      a8 -= v97; /*0x490bbc*/
    }
    else
    {
      v166[1] = (int *)((char *)v166[1] - v97); /*0x490a9c*/
      a8 -= v97; /*0x490aa2*/
      v93[1] = (ExtraDataList **)((char *)v93[1] + v97); /*0x490aa8*/
      v169 = v91; /*0x490aaf*/
      BSSimpleList_Remove(*v166, (int)v91); /*0x490ab3*/
      ownerb = 0; /*0x490abc*/
      if ( !v91->members.m_data ) /*0x490ab8*/
      {
        (*(void (__thiscall **)(ExtraDataList *, int))v91->vtbl)(v91, 1); /*0x490ace*/
        v91 = 0; /*0x490ad0*/
        v169 = 0; /*0x490ad2*/
        goto LABEL_305; /*0x490ad6*/
      }
      if ( !*v93 ) /*0x490adb*/
      {
        v98 = (ExtraDataList **)FormHeapAlloc(8u); /*0x490ae2*/
        if ( v98 ) /*0x490aec*/
        {
          *v98 = 0; /*0x490aee*/
          v98[1] = 0; /*0x490af4*/
          *v93 = v98; /*0x490afe*/
          BSSimpleList_PushFront(v98, (int)v91); /*0x490b00*/
          goto LABEL_305; /*0x490b05*/
        }
        *v93 = 0; /*0x490b0c*/
      }
      BSSimpleList_PushFront(*v93, (int)v91); /*0x490b11*/
    }
LABEL_305:
    if ( (_BYTE)a10 ) /*0x490bc5*/
    {
      if ( !v91 || !ExtraDataList_GetReferencePointer(v91) ) /*0x490bd5*/
      {
        v164 = sub_48B080(st6_0, st7_0, a5, (TESForm *)v94[2], v97, 0, a12, a13); /*0x490db8*/
        v111 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x490dc5*/
        sub_4D72B0((_BYTE *)v164); /*0x490dc7*/
        if ( !v112 && v111 && TESObjectCELL_GetOwner(v111) && !TESObjectCELL_IsOwnedByActor(v111, (Actor *)a5) /*0x490e5e*/
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v113 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v113) == 1)
          && (v114 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v164 + 0x170))(v164),
              v115 = (const char **)OblivionDynamicCast(
                                      v114,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v116 = v115) != 0)
          && (v170 = TESBipedModelForm_GetWorldModel(v115, 1), v170 != TESBipedModelForm_GetWorldModel(v116, 0)) )
        {
          v117 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490e6b*/
                              a5,
                              st7_0,
                              st6_0,
                              a2);
          sub_4DB890((char *)v164, v117); /*0x490e72*/
        }
        if ( *v93 ) /*0x490e77*/
          BSSimpleList_Clear(*v93); /*0x490e7d*/
        FormHeapFree((unsigned int)*v93); /*0x490e85*/
        *v93 = 0; /*0x490e8b*/
        FormHeapFree((unsigned int)v93); /*0x490e91*/
        if ( v91 ) /*0x490e9b*/
          (*(void (__thiscall **)(ExtraDataList *, int))v91->vtbl)(v91, 1); /*0x490ea5*/
        v169 = 0; /*0x490ea7*/
        goto LABEL_361; /*0x490eaf*/
      }
      v101 = ExtraDataList_GetReferencePointer(v91); /*0x490be4*/
      v164 = (int)v101; /*0x490beb*/
      if ( v101 ) /*0x490bef*/
      {
        ((void (__usercall *)(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))v101->vtbl->super.Unk_23)( /*0x490c01*/
          v101,
          0,
          st7_0,
          st6_0,
          a2);
        sub_4246B0(v91); /*0x490c05*/
        st7_0 = ExtraDataList_Scale(v91); /*0x490c1d*/
        durationb = st7_0; /*0x490c29*/
        sub_4DB520((MobileObject *)v164, durationb); /*0x490c2c*/
        ExtraDataList_CopyListForReference((ExtraDataList *)(v164 + 0x44), (ExtraDataList **)v91, ownerb == 0); /*0x490c3c*/
        sub_41F690((_DWORD *)(v164 + 0x44)); /*0x490c43*/
        sub_4246B0((ExtraDataList *)(v164 + 0x44)); /*0x490c4a*/
        if ( !sub_41F7F0((ExtraDataList *)(v164 + 0x44)) ) /*0x490c51*/
        {
          sub_423D30((ExtraDataList *)(v164 + 0x44), v164); /*0x490c61*/
          st7_0 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v164 + 0x40))(v164, 0x20); /*0x490c71*/
        }
        v102 = (char *)sub_48B080(st6_0, st7_0, a5, (TESForm *)v166[2], v97, (TESObjectREFR *)v164, a12, a13); /*0x490c9d*/
        v164 = (int)v102; /*0x490c9f*/
        if ( *v93 ) /*0x490c99*/
          BSSimpleList_Clear(*v93); /*0x490ca5*/
        FormHeapFree((unsigned int)*v93); /*0x490cad*/
        *v93 = 0; /*0x490cb3*/
        FormHeapFree((unsigned int)v93); /*0x490cb9*/
        (*(void (__thiscall **)(ExtraDataList *, int))v91->vtbl)(v91, 1); /*0x490cc9*/
        v169 = 0; /*0x490ccd*/
        v103 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x490cdc*/
        sub_4D72B0(v102); /*0x490cde*/
        if ( !v104 && v103 && TESObjectCELL_GetOwner(v103) && !TESObjectCELL_IsOwnedByActor(v103, (Actor *)a5) /*0x490d78*/
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v105 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v105) == 1)
          && (v106 = (void *)(*(int (__thiscall **)(char *))(*(_DWORD *)v102 + 0x170))(v102),
              v107 = (const char **)OblivionDynamicCast(
                                      v106,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v108 = v107) != 0)
          && (v109 = TESBipedModelForm_GetWorldModel(v107, 1), v109 != TESBipedModelForm_GetWorldModel(v108, 0)) )
        {
          v110 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x490d88*/
                              a5,
                              st7_0,
                              st6_0,
                              a2);
          sub_4DB890(v102, v110); /*0x490d8d*/
        }
LABEL_361:
        v163 = 0; /*0x490fd7*/
        if ( ownerb ) /*0x490fe4*/
          v172 = (int *)v172[1]; /*0x490fed*/
        if ( a8 ) /*0x490ff6*/
          v161 = 1; /*0x490ffc*/
        goto LABEL_275; /*0x491001*/
      }
    }
    else if ( a11 ) /*0x490eb9*/
    {
      if ( *v93 ) /*0x490ebf*/
      {
        v118 = **v93; /*0x490ec5*/
      }
      else
      {
        v119 = (_DWORD *)FormHeapAlloc(0x14u); /*0x490ecb*/
        if ( v119 ) /*0x490ee1*/
          v118 = (ExtraDataList *)ExtraDataList_constr(v119); /*0x490eea*/
        else
          v118 = 0; /*0x490eee*/
        v120 = (ExtraDataList **)FormHeapAlloc(8u); /*0x490efa*/
        if ( v120 ) /*0x490f04*/
        {
          *v120 = 0; /*0x490f06*/
          v120[1] = 0; /*0x490f0c*/
        }
        else
        {
          v120 = 0; /*0x490f15*/
        }
        *v93 = v120; /*0x490f1a*/
        BSSimpleList_PushFront(v120, (int)v118); /*0x490f1c*/
      }
      if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsActor)( /*0x490f2d*/
             a5,
             st7_0,
             st6_0,
             a2) )
      {
        v121 = a5->vtbl->GetBaseForm(a5); /*0x490f3f*/
      }
      else
      {
        v121 = TESObjectREFR_GetOwner(a5); /*0x490f43*/
      }
      v122 = v121; /*0x490f4d*/
      if ( !(_BYTE)a7 /*0x490f76*/
        || sub_469980((int)v93[2])
        || sub_4DE880(a5, (BSExtraDataVtbl *)v122)
        || *((_BYTE *)v93[2] + 4) == 0x22 )
      {
        ExtraDataList_RemoveOwner(v118); /*0x490f8c*/
      }
      else
      {
        ExtraDataList::SetOrRemoveExtraOwnership(v118, v122); /*0x490f7b*/
        ExtraDataList_SetExtraCount(v118, v97); /*0x490f83*/
      }
      ((void (__thiscall *)(TESForm *, ExtraDataList **, ExtraDataList *, int))a11->vtbl[1].Unk_0E)( /*0x490fa3*/
        a11,
        v93[2],
        v118,
        v97);                                   // ContainerExtraData_RemoveForm stack/entry transfer path: calls destRef virtual AddItem with entry form, extra data, and count. Confirms stolen items land in destination inventory.
    }
    else if ( a14 ) /*0x490fac*/
    {
      ContainerEntryExtraData_ClearDataTable((int *)v93); /*0x490fb0*/
    }
    if ( *v93 ) /*0x490fb5*/
      BSSimpleList_Clear(*v93); /*0x490fbb*/
    FormHeapFree((unsigned int)*v93); /*0x490fc3*/
    *v93 = 0; /*0x490fc9*/
    FormHeapFree((unsigned int)v93); /*0x490fcf*/
    goto LABEL_361; /*0x490fcf*/
  }
LABEL_368:
  if ( a15 && a8 > 0 ) /*0x49102d*/
  {
    ContainerExtraData_RemoveForm( /*0x491064*/
      a1,
      a2,
      st7_0,
      st6_0,
      a5,
      (int)form,
      a7,
      a8,
      (unsigned __int8 *)a9,
      a10,
      a11,
      a12,
      a13,
      1,
      0);
    return; /*0x491069*/
  }
  v134 = v166; /*0x49130a*/
  if ( !v166 || v161 ) /*0x491317*/
  {
    v135 = (char *)v168; /*0x49131d*/
    if ( v168 ) /*0x491323*/
    {
      if ( v166 ) /*0x49132b*/
      {
        v135 = (char *)v166[1] + v168; /*0x49132d*/
        v168 = (SInt32)v135; /*0x491330*/
      }
      if ( !v135 ) /*0x491336*/
      {
        v136 = *v166; /*0x491338*/
LABEL_473:
        BSSimpleList_Clear(v136); /*0x491663*/
        return; /*0x491663*/
      }
      if ( (_BYTE)a10 ) /*0x491344*/
      {
        v165 = (char *)sub_48B080(st6_0, st7_0, a5, form, a8, 0, a12, a13); /*0x49136c*/
        v137 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x491379*/
        sub_4D72B0(v165); /*0x49137b*/
        if ( !v138 && v137 && TESObjectCELL_GetOwner(v137) && !TESObjectCELL_IsOwnedByActor(v137, (Actor *)a5) /*0x491426*/
          || a5->vtbl->GetBaseForm(a5)->member.type == kFormType_NPC
          && (v139 = (_BYTE *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)(
                                a5,
                                st7_0,
                                st6_0,
                                a2),
              TESActorBase_IsFemale(v139) == 1)
          && (v140 = (void *)(*(int (__thiscall **)(char *))(*(_DWORD *)v165 + 0x170))(v165),
              v141 = (const char **)OblivionDynamicCast(
                                      v140,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESBipedModelForm `RTTI Type Descriptor',
                                      0),
              (v142 = v141) != 0)
          && (v182 = TESBipedModelForm_GetWorldModel(v141, 1), v182 != TESBipedModelForm_GetWorldModel(v142, 0)) )
        {
          v143 = (TESForm *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetBaseForm)( /*0x491436*/
                              a5,
                              st7_0,
                              st6_0,
                              a2);
          sub_4DB890(v165, v143); /*0x49143d*/
        }
      }
      else
      {
        if ( a11 ) /*0x49144d*/
        {
          if ( a5->vtbl->IsActor(a5) ) /*0x491461*/
            v144 = a5->vtbl->GetBaseForm(a5); /*0x491471*/
          else
            v144 = TESObjectREFR_GetOwner(a5); /*0x491475*/
          v145 = v144; /*0x49147f*/
          if ( !(_BYTE)a7 /*0x4914a8*/
            || sub_469980((int)form)
            || sub_4DE880(a5, (BSExtraDataVtbl *)v145)
            || form->member.type == kFormType_Ammo )
          {
            v146 = a9; /*0x4914f6*/
            if ( a9 ) /*0x4914fc*/
              ExtraDataList_RemoveOwner(a9); /*0x491500*/
          }
          else
          {
            v146 = a9; /*0x4914aa*/
            if ( !a9 ) /*0x4914b0*/
            {
              v147 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4914b4*/
              if ( v147 ) /*0x4914cd*/
                v148 = (ExtraDataList *)ExtraDataList_constr(v147); /*0x4914d1*/
              else
                v148 = 0; /*0x4914d8*/
              v146 = v148; /*0x4914e2*/
            }
            ExtraDataList::SetOrRemoveExtraOwnership(v146, v145); /*0x4914e7*/
            ExtraDataList_SetExtraCount(v146, a8); /*0x4914ef*/
          }
          if ( a8 > 0 ) /*0x491507*/
            ((void (__thiscall *)(TESForm *, TESForm *, ExtraDataList *, signed int))a11->vtbl[1].Unk_0E)( /*0x49151a*/
              a11,
              form,
              v146,
              a8);
        }
        v134 = v166; /*0x49151c*/
      }
      if ( v163 ) /*0x491526*/
      {
        if ( *v163 ) /*0x491528*/
          BSSimpleList_Clear((_DWORD *)*v163); /*0x49152e*/
        FormHeapFree(*v163); /*0x491536*/
        *v163 = 0; /*0x49153c*/
        FormHeapFree((unsigned int)v163); /*0x491542*/
      }
      if ( v134 ) /*0x49154c*/
      {
        v134[1] = (int *)((char *)v134[1] - a8); /*0x491594*/
      }
      else
      {
        v149 = (_DWORD *)FormHeapAlloc(0xCu); /*0x491550*/
        if ( v149 ) /*0x491569*/
          v150 = ContainerEntryExtraData_constr(v149, (int)form, -a8); /*0x491575*/
        else
          v150 = 0; /*0x49157c*/
        BSSimpleList_PushBack(*a1, (int)v150); /*0x49158d*/
      }
    }
  }
  v151 = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)a1, form, 1, 0); /*0x4915a4*/
  v93 = (ExtraDataList ***)v151; /*0x4915a9*/
  if ( v151 ) /*0x4915ad*/
  {
    if ( !v162 /*0x4915e3*/
      && !LeveledItem
      && ((v152 = v151->countDelta) == 0 && !v168
       || v151->extendData && BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v151->extendData) && !v152) )
    {
      v153 = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x4915ea*/
      if ( !v153 || (v154 = Tile_GetParentMenu(v153)) == 0 || !*(_BYTE *)(v154 + 0x61) ) /*0x491601*/
        ContainerEntryExtraData_ClearDataTable((int *)v93); /*0x491609*/
      BSSimpleList_Remove((int *)*a1, (int)v93); /*0x491615*/
      if ( *v93 ) /*0x49161a*/
        BSSimpleList_Clear(*v93); /*0x491620*/
      goto LABEL_406; /*0x491620*/
    }
    if ( (int)v93[1] + v168 < 0 && !ContainerEntryExtraData_HasWorn((EntryData *)v93, 0) ) /*0x49164b*/
    {
      v155 = (unsigned int)*v93; /*0x491654*/
      if ( v155 ) /*0x491658*/
      {
        if ( !LeveledItem ) /*0x49165f*/
        {
          v136 = (int *)v155; /*0x491661*/
          goto LABEL_473; /*0x491661*/
        }
      }
    }
  }
}
