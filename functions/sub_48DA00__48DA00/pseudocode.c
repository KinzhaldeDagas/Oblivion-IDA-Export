void __userpurge sub_48DA00(
        ExtraContainerChanges_Data *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        EntryData *entry,
        TESObjectREFR *a6)
{
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  int **p_list; // ebp
  int v10; // edi
  EntryData *EntryForForm; // ebx
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // eax
  TESForm *Dynamic; // esi
  _DWORD *v16; // eax
  int v17; // edi
  _DWORD *v18; // eax
  TESChildCELL *v19; // ebp
  tListVoid *extendData; // esi
  _DWORD *v21; // eax
  ExtraDataList *v22; // ebx
  BSExtraData *ExtraData; // eax
  BSExtraData *v24; // edi
  _DWORD *v25; // eax
  TESChildCELL *v26; // ebp
  tListVoid *next; // esi
  _DWORD *v28; // eax
  ExtraDataList *v29; // edi
  EntryData *objList; // eax
  int *v31; // edi
  int v32; // eax
  TESForm *v33; // esi
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  TESChildCELL *v36; // ebp
  int v37; // esi
  _DWORD *v38; // eax
  ExtraDataList *v39; // ebx
  BSExtraData *v40; // eax
  BSExtraData *v41; // edi
  _DWORD *v42; // eax
  TESChildCELL *v43; // ebx
  int v44; // esi
  _DWORD *v45; // eax
  ExtraDataList *v46; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // [esp+18h] [ebp-14h]
  EntryData *entrya; // [esp+30h] [ebp+4h]
  EntryData *entryb; // [esp+30h] [ebp+4h]
  TESChildCELL *v51; // [esp+34h] [ebp+8h]
  TESChildCELL *v52; // [esp+34h] [ebp+8h]

  if ( a6 )
  {
    if ( entry )
    {
      TESObjectREFR_GetContainer(a6); /*0x48da46*/
      ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a6); /*0x48da57*/
      if ( ContainerExtraDataForRef )
      {
        owner = a1->owner; /*0x48da61*/
        if ( owner ) /*0x48da66*/
          Container = TESObjectREFR_GetContainer(owner); /*0x48da68*/
        else
          Container = 0; /*0x48da6f*/
        p_list = (int **)&Container->list; /*0x48da71*/
        entrya = (EntryData *)&Container->list; /*0x48da76*/
        if ( Container != (TESContainer *)0xFFFFFFF8 )
        {
          do
          {
            if ( !p_list[1] && !*p_list ) /*0x48da86*/
              break; /*0x48da8a*/
            v10 = (*p_list)[1]; /*0x48da93*/
            OblivionDynamicCast( /*0x48daa7*/
              (void *)v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
            if ( v10 )
            {
              EntryForForm = ContainerExtraData_GetEntryForForm(a1, (TESForm *)v10, 1, 0); /*0x48dac5*/
              v12 = **p_list; /*0x48daca*/
              if ( v12 < 0 ) /*0x48dace*/
                v12 = -v12; /*0x48dad0*/
              if ( EntryForForm ) /*0x48dad4*/
                v13 = EntryForForm->countDelta + v12; /*0x48dad9*/
              else
                v13 = v12; /*0x48dade*/
              if ( v13 > 0 )
              {
                v14 = OblivionDynamicCast( /*0x48daf7*/
                        (void *)v10,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESScriptableForm `RTTI Type Descriptor',
                        0);
                if ( v14 && v14[1] )
                {
                  Dynamic = (TESForm *)TESForm_CreateDynamic(*(_BYTE *)(v10 + 4)); /*0x48db1b*/
                  ((void (__thiscall *)(TESForm *, int))Dynamic->vtbl->CopyFrom)(Dynamic, v10); /*0x48db2b*/
                  v16 = OblivionDynamicCast( /*0x48db3c*/
                          Dynamic,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESScriptableForm `RTTI Type Descriptor',
                          0);
                  if ( v16 ) /*0x48db46*/
                    v16[1] = 0; /*0x48db48*/
                  TESDataHandler_AddForm(g_TESDataHandler, a2, a3, a4, Dynamic); /*0x48db56*/
                  SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, (int)Dynamic); /*0x48db62*/
                  v17 = **p_list; /*0x48db6c*/
                  if ( EntryForForm ) /*0x48db6e*/
                    v17 += EntryForForm->countDelta; /*0x48db70*/
                  v18 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48db75*/
                  if ( v18 ) /*0x48db8b*/
                    v19 = (TESChildCELL *)ContainerEntryExtraData_constr(v18, (int)Dynamic, v17); /*0x48db96*/
                  else
                    v19 = 0; /*0x48db9a*/
                  v51 = v19; /*0x48dba6*/
                  if ( EntryForForm )
                  {
                    extendData = EntryForForm->extendData; /*0x48dbb0*/
                    if ( EntryForForm->extendData )
                    {
                      if ( BSSimpleList_Count(&EntryForForm->extendData->node.data) )
                      {
                        if ( extendData )
                        {
                          if ( extendData->node.data )
                          {
                            do
                            {
                              if ( !extendData->node.data ) /*0x48dbda*/
                                break; /*0x48dbdd*/
                              v21 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48dbe5*/
                              v22 = v21 ? (ExtraDataList *)ExtraDataList_constr(v21) : 0;
                              ExtraData = BaseExtraList_GetExtraData( /*0x48dc16*/
                                            (ExtraDataList *)extendData->node.data,
                                            kExtraData_Script);
                              v24 = ExtraData; /*0x48dc1b*/
                              if ( ExtraData ) /*0x48dc1f*/
                                BaseExtraList_RemoveExtraByPtr( /*0x48dc26*/
                                  (ExtraDataList *)extendData->node.data,
                                  (int)ExtraData,
                                  0);
                              ExtraDataList_CopyListForContainer(v22, (ExtraDataList *)extendData->node.data, 1); /*0x48dc32*/
                              BSSimpleList_PushBack(v19->vtbl, (int)v22); /*0x48dc3b*/
                              if ( v24 ) /*0x48dc42*/
                                BaseExtraList_AddExtra((ExtraDataList *)extendData->node.data, v24); /*0x48dc47*/
                              extendData = (tListVoid *)extendData->node.next; /*0x48dc4c*/
                            }
                            while ( extendData );
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v25 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48dc5a*/
                  if ( v25 ) /*0x48dc70*/
                    v26 = (TESChildCELL *)ContainerEntryExtraData_constr(v25, v10, v13); /*0x48dc7b*/
                  else
                    v26 = 0; /*0x48dc7f*/
                  v51 = v26; /*0x48dc8b*/
                  if ( EntryForForm )
                  {
                    next = EntryForForm->extendData; /*0x48dc91*/
                    if ( EntryForForm->extendData )
                    {
                      if ( BSSimpleList_Count(&EntryForForm->extendData->node.data) )
                      {
                        if ( next )
                        {
                          if ( next->node.data )
                          {
                            do
                            {
                              if ( !next->node.data ) /*0x48dcae*/
                                break; /*0x48dcb1*/
                              v28 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48dcb5*/
                              v29 = v28 ? (ExtraDataList *)ExtraDataList_constr(v28) : 0;
                              ExtraDataList_CopyListForContainer(v29, (ExtraDataList *)next->node.data, 1); /*0x48dce5*/
                              BSSimpleList_PushBack(v26->vtbl, (int)v29); /*0x48dcee*/
                              next = (tListVoid *)next->node.next; /*0x48dcf3*/
                            }
                            while ( next );
                          }
                        }
                      }
                    }
                  }
                }
                ContainerExtraData_AddEntry(ContainerExtraDataForRef, (EntryData *)v51, 1); /*0x48dd05*/
                p_list = (int **)entrya; /*0x48dd0a*/
              }
            }
            p_list = (int **)p_list[1]; /*0x48dd0e*/
            entrya = (EntryData *)p_list; /*0x48dd13*/
          }
          while ( p_list );
        }
        objList = (EntryData *)a1->objList; /*0x48dd21*/
        entryb = (EntryData *)a1->objList; /*0x48dd25*/
        if ( a1->objList )
        {
          do
          {
            if ( !objList->countDelta && !objList->extendData ) /*0x48dd36*/
              break; /*0x48dd39*/
            v31 = (int *)objList->extendData; /*0x48dd3f*/
            if ( objList->extendData )
            {
              if ( v31[1] > 0 )
              {
                sub_4847F0((ExtraDataList ***)objList->extendData); /*0x48dd55*/
                sub_484F20(v31); /*0x48dd5c*/
                if ( v32 )
                {
                  v33 = (TESForm *)TESForm_CreateDynamic(*(_BYTE *)(v31[2] + 4)); /*0x48dd76*/
                  ((void (__thiscall *)(TESForm *, int))v33->vtbl->CopyFrom)(v33, v31[2]); /*0x48dd89*/
                  v34 = OblivionDynamicCast( /*0x48dd9a*/
                          v33,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESScriptableForm `RTTI Type Descriptor',
                          0);
                  if ( v34 ) /*0x48dda4*/
                    v34[1] = 0; /*0x48dda6*/
                  TESDataHandler_AddForm(g_TESDataHandler, a2, a3, a4, v33); /*0x48ddb4*/
                  SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, (int)v33); /*0x48ddc0*/
                  v35 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48ddc7*/
                  if ( v35 ) /*0x48dddd*/
                    v36 = (TESChildCELL *)ContainerEntryExtraData_constr(v35, (int)v33, v31[1]); /*0x48ddeb*/
                  else
                    v36 = 0; /*0x48ddef*/
                  v37 = *v31; /*0x48ddf1*/
                  v52 = v36; /*0x48ddfd*/
                  if ( *v31 )
                  {
                    if ( BSSimpleList_Count((_DWORD *)v37) )
                    {
                      if ( v37 )
                      {
                        if ( *(_DWORD *)v37 )
                        {
                          do
                          {
                            if ( !*(_DWORD *)v37 ) /*0x48de27*/
                              break; /*0x48de2a*/
                            v38 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48de32*/
                            v39 = v38 ? (ExtraDataList *)ExtraDataList_constr(v38) : 0;
                            v40 = BaseExtraList_GetExtraData(*(ExtraDataList **)v37, kExtraData_Script); /*0x48de63*/
                            v41 = v40; /*0x48de68*/
                            if ( v40 ) /*0x48de6c*/
                              BaseExtraList_RemoveExtraByPtr(*(ExtraDataList **)v37, (int)v40, 0); /*0x48de73*/
                            ExtraDataList_CopyListForContainer(v39, *(ExtraDataList **)v37, 1); /*0x48de7f*/
                            BSSimpleList_PushBack(v36->vtbl, (int)v39); /*0x48de88*/
                            if ( v41 ) /*0x48de8f*/
                              BaseExtraList_AddExtra(*(ExtraDataList **)v37, v41); /*0x48de94*/
                            v37 = *(_DWORD *)(v37 + 4); /*0x48de99*/
                          }
                          while ( v37 );
                        }
                      }
                    }
                  }
                }
                else
                {
                  v42 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48dea7*/
                  if ( v42 ) /*0x48debd*/
                    v43 = (TESChildCELL *)ContainerEntryExtraData_constr(v42, v31[2], v31[1]); /*0x48dece*/
                  else
                    v43 = 0; /*0x48ded2*/
                  v44 = *v31; /*0x48ded4*/
                  v52 = v43; /*0x48dedf*/
                  if ( *v31 )
                  {
                    if ( BSSimpleList_Count((_DWORD *)v44) )
                    {
                      if ( v44 )
                      {
                        if ( *(_DWORD *)v44 )
                        {
                          do
                          {
                            if ( !*(_DWORD *)v44 ) /*0x48def9*/
                              break; /*0x48defc*/
                            v45 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48df00*/
                            v46 = v45 ? (ExtraDataList *)ExtraDataList_constr(v45) : 0;
                            ExtraDataList_CopyListForContainer(v46, *(ExtraDataList **)v44, 1); /*0x48df30*/
                            BSSimpleList_PushBack(v43->vtbl, (int)v46); /*0x48df38*/
                            v44 = *(_DWORD *)(v44 + 4); /*0x48df3d*/
                          }
                          while ( v44 );
                        }
                      }
                    }
                  }
                }
                ContainerExtraData_AddEntry(ContainerExtraDataForRef, (EntryData *)v52, 1); /*0x48df4f*/
                objList = entryb; /*0x48df54*/
              }
            }
            objList = (EntryData *)objList->countDelta; /*0x48df58*/
            entryb = objList; /*0x48df5d*/
          }
          while ( objList );
        }
      }
    }
  }
}
