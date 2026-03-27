void __userpurge sub_48DA00(
        _DWORD *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        TESObjectREFR *a6)
{
  TESObjectREFR *v7; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebp
  unsigned __int8 *type; // edi
  _DWORD **v11; // eax
  _DWORD **v12; // ebx
  int count; // eax
  int v14; // esi
  _DWORD *v15; // eax
  TESForm *Dynamic; // esi
  _DWORD *v17; // eax
  int v18; // edi
  _DWORD *v19; // eax
  int *v20; // ebp
  int v21; // esi
  _DWORD *v22; // eax
  ExtraDataList *v23; // ebx
  BSExtraData *ExtraData; // eax
  BSExtraData *v25; // edi
  _DWORD *v26; // eax
  int *v27; // ebp
  int v28; // esi
  _DWORD *v29; // eax
  ExtraDataList *v30; // edi
  int **v31; // eax
  int *v32; // edi
  int v33; // eax
  TESForm *v34; // esi
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  int *v37; // ebp
  int v38; // esi
  _DWORD *v39; // eax
  ExtraDataList *v40; // ebx
  BSExtraData *v41; // eax
  BSExtraData *v42; // edi
  _DWORD *v43; // eax
  int *v44; // ebx
  int v45; // esi
  _DWORD *v46; // eax
  ExtraDataList *v47; // edi
  int v48; // [esp+0h] [ebp-2Ch]
  int v49; // [esp+4h] [ebp-28h]
  int v50; // [esp+8h] [ebp-24h]
  int v51; // [esp+Ch] [ebp-20h]
  int v52; // [esp+10h] [ebp-1Ch]
  float *ContainerExtraDataForRef; // [esp+18h] [ebp-14h]
  TESContainer_Entry *v55; // [esp+30h] [ebp+4h]
  int **v56; // [esp+30h] [ebp+4h]
  int *v57; // [esp+34h] [ebp+8h]
  int *v58; // [esp+34h] [ebp+8h]

  if ( a6 )
  {
    if ( a5 )
    {
      TESObjectREFR_GetContainer(a6);
      ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(a6);
      if ( ContainerExtraDataForRef )
      {
        v7 = (TESObjectREFR *)a1[1];
        if ( v7 )
          Container = TESObjectREFR_GetContainer(v7);
        else
          Container = 0;
        p_list = &Container->list;
        v55 = &Container->list;
        if ( Container != (TESContainer *)0xFFFFFFF8 )
        {
          do
          {
            if ( !p_list->next && !p_list->data )
              break;
            type = (unsigned __int8 *)p_list->data->type;
            OblivionDynamicCast(
              type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
            if ( type )
            {
              ContainerExtraData_GetEntryForForm((_DWORD **)a1, (int)type, 1, 0);
              v12 = v11;
              count = p_list->data->count;
              if ( count < 0 )
                count = -count;
              if ( v12 )
                v14 = (int)v12[1] + count;
              else
                v14 = count;
              if ( v14 > 0 )
              {
                v15 = OblivionDynamicCast(
                        type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESScriptableForm `RTTI Type Descriptor',
                        0);
                if ( v15 && v15[1] )
                {
                  Dynamic = TESForm_CreateDynamic(type[4]);
                  ((void (__thiscall *)(TESForm *, unsigned __int8 *))Dynamic->vtbl->CopyFrom)(Dynamic, type);
                  v17 = OblivionDynamicCast(
                          Dynamic,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESScriptableForm `RTTI Type Descriptor',
                          0);
                  if ( v17 )
                    v17[1] = 0;
                  TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a2, a3, a4, (unsigned __int8 *)Dynamic);
                  SaveLoad_AddCreatedObj((char *)SaveLoad_CurrentSavegame, (int)Dynamic);
                  v18 = p_list->data->count;
                  if ( v12 )
                    v18 += (int)v12[1];
                  v19 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v19 )
                    v20 = ContainerEntryExtraData_constr(v19, (int)Dynamic, v18);
                  else
                    v20 = 0;
                  v57 = v20;
                  if ( v12 )
                  {
                    v21 = (int)*v12;
                    if ( *v12 )
                    {
                      if ( BSSimpleList_Count(*v12) )
                      {
                        if ( v21 )
                        {
                          if ( *(_DWORD *)v21 )
                          {
                            do
                            {
                              if ( !*(_DWORD *)v21 )
                                break;
                              v22 = (_DWORD *)FormHeapAlloc(0x14u);
                              v23 = v22 ? (ExtraDataList *)ExtraDataList_constr(v22) : 0;
                              ExtraData = BaseExtraList_GetExtraData(*(ExtraDataList **)v21, kExtraData_Script);
                              v25 = ExtraData;
                              if ( ExtraData )
                                BaseExtraList_RemoveExtraByPtr(*(ExtraDataList **)v21, (int)ExtraData, 0);
                              ExtraDataList_CopyListForContainer(v23, *(ExtraDataList **)v21, 1);
                              BSSimpleList_PushBack((_DWORD *)*v20, (int)v23);
                              if ( v25 )
                                BaseExtraList_AddExtra(*(ExtraDataList **)v21, v25);
                              v21 = *(_DWORD *)(v21 + 4);
                            }
                            while ( v21 );
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v26 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v26 )
                    v27 = ContainerEntryExtraData_constr(v26, (int)type, v14);
                  else
                    v27 = 0;
                  v57 = v27;
                  if ( v12 )
                  {
                    v28 = (int)*v12;
                    if ( *v12 )
                    {
                      if ( BSSimpleList_Count(*v12) )
                      {
                        if ( v28 )
                        {
                          if ( *(_DWORD *)v28 )
                          {
                            do
                            {
                              if ( !*(_DWORD *)v28 )
                                break;
                              v29 = (_DWORD *)FormHeapAlloc(0x14u);
                              v30 = v29 ? (ExtraDataList *)ExtraDataList_constr(v29) : 0;
                              ExtraDataList_CopyListForContainer(v30, *(ExtraDataList **)v28, 1);
                              BSSimpleList_PushBack((_DWORD *)*v27, (int)v30);
                              v28 = *(_DWORD *)(v28 + 4);
                            }
                            while ( v28 );
                          }
                        }
                      }
                    }
                  }
                }
                ContainerExtraData_AddEntry(ContainerExtraDataForRef, v57, 1, v48, v49, v50, v51, v52);
                p_list = v55;
              }
            }
            p_list = p_list->next;
            v55 = p_list;
          }
          while ( p_list );
        }
        v31 = (int **)*a1;
        v56 = (int **)*a1;
        if ( *a1 )
        {
          do
          {
            if ( !v31[1] && !*v31 )
              break;
            v32 = *v31;
            if ( *v31 )
            {
              if ( v32[1] > 0 )
              {
                sub_4847F0((ExtraDataList ***)*v31);
                sub_484F20(v32);
                if ( v33 )
                {
                  v34 = TESForm_CreateDynamic(*(_BYTE *)(v32[2] + 4));
                  ((void (__thiscall *)(TESForm *, int))v34->vtbl->CopyFrom)(v34, v32[2]);
                  v35 = OblivionDynamicCast(
                          v34,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESScriptableForm `RTTI Type Descriptor',
                          0);
                  if ( v35 )
                    v35[1] = 0;
                  TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a2, a3, a4, (unsigned __int8 *)v34);
                  SaveLoad_AddCreatedObj((char *)SaveLoad_CurrentSavegame, (int)v34);
                  v36 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v36 )
                    v37 = ContainerEntryExtraData_constr(v36, (int)v34, v32[1]);
                  else
                    v37 = 0;
                  v38 = *v32;
                  v58 = v37;
                  if ( *v32 )
                  {
                    if ( BSSimpleList_Count((_DWORD *)v38) )
                    {
                      if ( v38 )
                      {
                        if ( *(_DWORD *)v38 )
                        {
                          do
                          {
                            if ( !*(_DWORD *)v38 )
                              break;
                            v39 = (_DWORD *)FormHeapAlloc(0x14u);
                            v40 = v39 ? (ExtraDataList *)ExtraDataList_constr(v39) : 0;
                            v41 = BaseExtraList_GetExtraData(*(ExtraDataList **)v38, kExtraData_Script);
                            v42 = v41;
                            if ( v41 )
                              BaseExtraList_RemoveExtraByPtr(*(ExtraDataList **)v38, (int)v41, 0);
                            ExtraDataList_CopyListForContainer(v40, *(ExtraDataList **)v38, 1);
                            BSSimpleList_PushBack((_DWORD *)*v37, (int)v40);
                            if ( v42 )
                              BaseExtraList_AddExtra(*(ExtraDataList **)v38, v42);
                            v38 = *(_DWORD *)(v38 + 4);
                          }
                          while ( v38 );
                        }
                      }
                    }
                  }
                }
                else
                {
                  v43 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v43 )
                    v44 = ContainerEntryExtraData_constr(v43, v32[2], v32[1]);
                  else
                    v44 = 0;
                  v45 = *v32;
                  v58 = v44;
                  if ( *v32 )
                  {
                    if ( BSSimpleList_Count((_DWORD *)v45) )
                    {
                      if ( v45 )
                      {
                        if ( *(_DWORD *)v45 )
                        {
                          do
                          {
                            if ( !*(_DWORD *)v45 )
                              break;
                            v46 = (_DWORD *)FormHeapAlloc(0x14u);
                            v47 = v46 ? (ExtraDataList *)ExtraDataList_constr(v46) : 0;
                            ExtraDataList_CopyListForContainer(v47, *(ExtraDataList **)v45, 1);
                            BSSimpleList_PushBack((_DWORD *)*v44, (int)v47);
                            v45 = *(_DWORD *)(v45 + 4);
                          }
                          while ( v45 );
                        }
                      }
                    }
                  }
                }
                ContainerExtraData_AddEntry(ContainerExtraDataForRef, v58, 1, v48, v49, v50, v51, v52);
                v31 = v56;
              }
            }
            v31 = (int **)v31[1];
            v56 = v31;
          }
          while ( v31 );
        }
      }
    }
  }
}
