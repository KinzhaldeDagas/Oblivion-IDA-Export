double __usercall ExtraContainerChanges_RunScripts@<st0>(
        ExtraContainerChanges_Data *this@<ecx>,
        double result@<st0>,
        double a3@<st1>)
{
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  bool v5; // zf
  TESContainer_Entry *p_list; // eax
  TESContainer_Data *data; // esi
  _DWORD *v8; // eax
  Script *v9; // ecx
  int v10; // ebx
  int *EntryForForm; // eax
  int *v12; // edi
  int v13; // eax
  int i; // ebp
  ExtraDataList *v15; // edi
  TESChildCELL *v16; // eax
  TESForm *v17; // esi
  char **ExtraScriptEventList; // eax
  _DWORD *v19; // eax
  EntryData *v20; // eax
  _DWORD *v21; // eax
  int v22; // ebp
  ExtraDataList *v23; // esi
  char *ExtraScript; // eax
  char **EventList; // eax
  TESChildCELL *v26; // eax
  TESForm *v27; // edi
  char **v28; // eax
  _DWORD *v29; // eax
  ExtraDataList *v30; // esi
  _DWORD *p_data; // edi
  _DWORD *v32; // eax
  char *v33; // eax
  char **v34; // eax
  TESChildCELL *v35; // eax
  TESForm *v36; // edi
  char **v37; // eax
  EntryData **v38; // eax
  EntryData *v39; // eax
  void *v40; // eax
  int v41; // ebx
  tListVoid *j; // esi
  ExtraDataList *v43; // edi
  tListVoid *v44; // eax
  tListVoid *extendData; // ebp
  ExtraDataList *v46; // esi
  char *v47; // eax
  char **v48; // eax
  TESChildCELL *v49; // eax
  TESForm *v50; // edi
  char **v51; // eax
  _DWORD *v52; // eax
  ExtraDataList *v53; // esi
  _DWORD *v54; // edi
  _DWORD *v55; // eax
  char *v56; // eax
  char **v57; // eax
  TESChildCELL *v58; // eax
  TESForm *v59; // edi
  char **v60; // eax
  tListVoid *k; // ebp
  ExtraDataList *v62; // edi
  TESChildCELL *v63; // eax
  TESForm *v64; // esi
  char **v65; // eax
  char v66; // [esp+1Fh] [ebp-25h]
  Script *v67; // [esp+20h] [ebp-24h]
  Script *v68; // [esp+20h] [ebp-24h]
  EntryData *entry; // [esp+24h] [ebp-20h]
  EntryData *entrya; // [esp+24h] [ebp-20h]
  TESContainer_Entry *v71; // [esp+28h] [ebp-1Ch]
  ExtraContainerChanges_Data *objList; // [esp+2Ch] [ebp-18h]
  int v74; // [esp+30h] [ebp-14h]
  int v75; // [esp+30h] [ebp-14h]

  owner = this->owner; /*0x48e08b*/
  if ( owner ) /*0x48e090*/
    Container = TESObjectREFR_GetContainer(owner); /*0x48e092*/
  else
    Container = 0; /*0x48e099*/
  v5 = &Container->list == 0; /*0x48e09b*/
  p_list = &Container->list; /*0x48e09b*/
  v71 = p_list; /*0x48e09e*/
  if ( !v5 )
  {
    while ( p_list->next || p_list->data )
    {
      data = p_list->data; /*0x48e0c3*/
      v8 = OblivionDynamicCast( /*0x48e0d7*/
             p_list->data->type,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
      v9 = v8 ? (Script *)v8[1] : 0;
      v10 = abs32(data->count); /*0x48e0f1*/
      v67 = v9; /*0x48e0f5*/
      if ( v9 )
      {
        if ( v10 > 0 )
        {
          EntryForForm = (int *)ContainerExtraData_GetEntryForForm(this, data->type, 1, 0); /*0x48e114*/
          v12 = EntryForForm; /*0x48e119*/
          entry = (EntryData *)EntryForForm; /*0x48e11d*/
          if ( EntryForForm && (sub_484F20(EntryForForm), v13) )
          {
            for ( i = *v12; i; i = *(_DWORD *)(i + 4) )
            {
              v15 = *(ExtraDataList **)i; /*0x48e140*/
              if ( !*(_DWORD *)i ) /*0x48e140*/
                break; /*0x48e145*/
              v16 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e14d*/
              v17 = v16 ? (TESForm *)TESObjectREFR_constr(v16) : 0;
              TESForm_MakeTemporary(v17); /*0x48e17c*/
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v15); /*0x48e187*/
              result = Script_Run(v67, result, a3, (TESObjectREFR *)v17, ExtraScriptEventList, 0, 0); /*0x48e192*/
              if ( v17 ) /*0x48e199*/
                v17->vtbl->Destroy(v17, 1); /*0x48e1a4*/
            }
          }
          else
          {
            v66 = 0; /*0x48e1b4*/
            if ( !v12 ) /*0x48e1b9*/
            {
              v66 = 1; /*0x48e1bd*/
              v19 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48e1c2*/
              if ( v19 ) /*0x48e1d4*/
                v20 = (EntryData *)ContainerEntryExtraData_constr(v19, (int)data->type, 0); /*0x48e1dd*/
              else
                v20 = 0; /*0x48e1e4*/
              v12 = (int *)v20; /*0x48e1ee*/
              entry = v20; /*0x48e1f0*/
            }
            if ( *v12 ) /*0x48e1f4*/
            {
              v22 = *v12; /*0x48e21d*/
              do /*0x48e2bf*/
              {
                v23 = *(ExtraDataList **)v22; /*0x48e220*/
                if ( !*(_DWORD *)v22 ) /*0x48e220*/
                  break; /*0x48e225*/
                if ( !ExtraDataList_GetExtraScript(*(ExtraDataList **)v22) ) /*0x48e22d*/
                {
                  ExtraDataList_AddScript(v23, (BSExtraDataVtbl *)v67); /*0x48e241*/
                  ExtraScript = (char *)ExtraDataList_GetExtraScript(v23); /*0x48e248*/
                  EventList = Script_CreateEventList(ExtraScript); /*0x48e24f*/
                  ExtraDataList_SetScriptEventList(v23, (int)EventList); /*0x48e257*/
                  v26 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e25e*/
                  if ( v26 ) /*0x48e274*/
                    v27 = (TESForm *)TESObjectREFR_constr(v26); /*0x48e27d*/
                  else
                    v27 = 0; /*0x48e281*/
                  TESForm_MakeTemporary(v27); /*0x48e28d*/
                  v28 = (char **)ExtraDataList_GetExtraScriptEventList(v23); /*0x48e298*/
                  result = Script_Run(v67, result, a3, (TESObjectREFR *)v27, v28, 0, 0); /*0x48e2a3*/
                  if ( v27 ) /*0x48e2aa*/
                    v27->vtbl->Destroy(v27, 1); /*0x48e2b5*/
                  --v10; /*0x48e2b7*/
                }
                v22 = *(_DWORD *)(v22 + 4); /*0x48e2ba*/
              }
              while ( v22 ); /*0x48e2bf*/
            }
            else
            {
              v21 = (_DWORD *)FormHeapAlloc(8u); /*0x48e1fc*/
              if ( v21 ) /*0x48e206*/
              {
                *v21 = 0; /*0x48e208*/
                v21[1] = 0; /*0x48e20a*/
                *v12 = (int)v21; /*0x48e20d*/
              }
              else
              {
                *v12 = 0; /*0x48e216*/
              }
            }
            if ( v10 ) /*0x48e2c7*/
            {
              v74 = v10; /*0x48e2cd*/
              do /*0x48e3ce*/
              {
                v29 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48e2d3*/
                if ( v29 ) /*0x48e2e9*/
                  v30 = (ExtraDataList *)ExtraDataList_constr(v29); /*0x48e2f2*/
                else
                  v30 = 0; /*0x48e2f6*/
                p_data = &entry->extendData->node.data; /*0x48e2fc*/
                if ( v30 ) /*0x48e307*/
                {
                  if ( *p_data ) /*0x48e309*/
                  {
                    v32 = (_DWORD *)FormHeapAlloc(8u); /*0x48e310*/
                    if ( v32 ) /*0x48e31a*/
                    {
                      *v32 = *p_data; /*0x48e31e*/
                      v32[1] = 0; /*0x48e320*/
                    }
                    else
                    {
                      v32 = 0; /*0x48e329*/
                    }
                    v32[1] = p_data[1]; /*0x48e32e*/
                    p_data[1] = v32; /*0x48e331*/
                  }
                  *p_data = v30; /*0x48e334*/
                }
                ExtraDataList_SetExtraCount(v30, 1); /*0x48e33a*/
                if ( v30 ) /*0x48e341*/
                {
                  if ( !ExtraDataList_GetExtraScript(v30) ) /*0x48e349*/
                  {
                    ExtraDataList_AddScript(v30, (BSExtraDataVtbl *)v67); /*0x48e359*/
                    v33 = (char *)ExtraDataList_GetExtraScript(v30); /*0x48e360*/
                    v34 = Script_CreateEventList(v33); /*0x48e367*/
                    ExtraDataList_SetScriptEventList(v30, (int)v34); /*0x48e36f*/
                    v35 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e376*/
                    if ( v35 ) /*0x48e38c*/
                      v36 = (TESForm *)TESObjectREFR_constr(v35); /*0x48e395*/
                    else
                      v36 = 0; /*0x48e399*/
                    TESForm_MakeTemporary(v36); /*0x48e3a1*/
                    v37 = (char **)ExtraDataList_GetExtraScriptEventList(v30); /*0x48e3ac*/
                    result = Script_Run(v67, result, a3, (TESObjectREFR *)v36, v37, 0, 0); /*0x48e3b5*/
                    if ( v36 ) /*0x48e3bc*/
                      v36->vtbl->Destroy(v36, 1); /*0x48e3c7*/
                  }
                }
                --v74; /*0x48e3c9*/
              }
              while ( v74 ); /*0x48e3ce*/
            }
            if ( v66 ) /*0x48e3d9*/
              ContainerExtraData_AddEntry(this, entry, 1); /*0x48e3e6*/
          }
        }
      }
      v71 = v71->next; /*0x48e3f4*/
      if ( !v71 ) /*0x48e3f8*/
        break; /*0x48e3f8*/
      p_list = v71; /*0x48e0b0*/
    }
  }
  v38 = &this->objList->node.data; /*0x48e402*/
  objList = (ExtraContainerChanges_Data *)this->objList; /*0x48e406*/
  if ( objList )
  {
    while ( 1 )
    {
      v39 = *v38; /*0x48e416*/
      entrya = v39; /*0x48e41a*/
      if ( !v39 ) /*0x48e41e*/
        break; /*0x48e41e*/
      v40 = OblivionDynamicCast( /*0x48e436*/
              v39->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESScriptableForm `RTTI Type Descriptor',
              0);
      if ( v40 ) /*0x48e440*/
        v68 = *((Script **)v40 + 1); /*0x48e445*/
      else
        v68 = 0; /*0x48e44b*/
      v41 = abs32(entrya->countDelta); /*0x48e45f*/
      if ( v68 && v41 > 0 )
      {
        for ( j = entrya->extendData; j; j = (tListVoid *)j->node.next )
        {
          v43 = (ExtraDataList *)j->node.data; /*0x48e480*/
          if ( !j->node.data ) /*0x48e480*/
            break; /*0x48e480*/
          if ( ExtraDataList_GetExtraScript((ExtraDataList *)j->node.data) )
          {
            if ( !ExtraDataList_GetExtraScript(v43) ) /*0x48e49c*/
              break; /*0x48e4a3*/
            for ( k = entrya->extendData; k; k = (tListVoid *)k->node.next )
            {
              v62 = (ExtraDataList *)k->node.data; /*0x48e6b0*/
              if ( !k->node.data ) /*0x48e6b0*/
                break; /*0x48e6b5*/
              v63 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e6b9*/
              v64 = v63 ? (TESForm *)TESObjectREFR_constr(v63) : 0;
              TESForm_MakeTemporary(v64); /*0x48e6e8*/
              v65 = (char **)ExtraDataList_GetExtraScriptEventList(v62); /*0x48e6f3*/
              result = Script_Run(v68, result, a3, (TESObjectREFR *)v64, v65, 0, 0); /*0x48e6fc*/
              if ( v64 ) /*0x48e703*/
                v64->vtbl->Destroy(v64, 1); /*0x48e70e*/
            }
            goto LABEL_125; /*0x48e715*/
          }
        }
        if ( entrya->extendData ) /*0x48e4a9*/
        {
          extendData = entrya->extendData; /*0x48e4dd*/
          do /*0x48e57f*/
          {
            v46 = (ExtraDataList *)extendData->node.data; /*0x48e4e0*/
            if ( !extendData->node.data ) /*0x48e4e0*/
              break; /*0x48e4e5*/
            if ( !ExtraDataList_GetExtraScript((ExtraDataList *)extendData->node.data) ) /*0x48e4ed*/
            {
              ExtraDataList_AddScript(v46, (BSExtraDataVtbl *)v68); /*0x48e501*/
              v47 = (char *)ExtraDataList_GetExtraScript(v46); /*0x48e508*/
              v48 = Script_CreateEventList(v47); /*0x48e50f*/
              ExtraDataList_SetScriptEventList(v46, (int)v48); /*0x48e517*/
              v49 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e51e*/
              if ( v49 ) /*0x48e534*/
                v50 = (TESForm *)TESObjectREFR_constr(v49); /*0x48e53d*/
              else
                v50 = 0; /*0x48e541*/
              TESForm_MakeTemporary(v50); /*0x48e54d*/
              v51 = (char **)ExtraDataList_GetExtraScriptEventList(v46); /*0x48e558*/
              result = Script_Run(v68, result, a3, (TESObjectREFR *)v50, v51, 0, 0); /*0x48e563*/
              if ( v50 ) /*0x48e56a*/
                v50->vtbl->Destroy(v50, 1); /*0x48e575*/
              --v41; /*0x48e577*/
            }
            extendData = (tListVoid *)extendData->node.next; /*0x48e57a*/
          }
          while ( extendData ); /*0x48e57f*/
        }
        else
        {
          v44 = (tListVoid *)FormHeapAlloc(8u); /*0x48e4b2*/
          if ( v44 ) /*0x48e4bc*/
          {
            v44->node.data = 0; /*0x48e4be*/
            v44->node.next = 0; /*0x48e4c4*/
            entrya->extendData = v44; /*0x48e4cb*/
          }
          else
          {
            entrya->extendData = 0; /*0x48e4d5*/
          }
        }
        if ( v41 ) /*0x48e587*/
        {
          v75 = v41; /*0x48e58d*/
          do /*0x48e692*/
          {
            v52 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48e593*/
            if ( v52 ) /*0x48e5a9*/
              v53 = (ExtraDataList *)ExtraDataList_constr(v52); /*0x48e5b2*/
            else
              v53 = 0; /*0x48e5b6*/
            v54 = &entrya->extendData->node.data; /*0x48e5bc*/
            if ( v53 ) /*0x48e5c7*/
            {
              if ( *v54 ) /*0x48e5c9*/
              {
                v55 = (_DWORD *)FormHeapAlloc(8u); /*0x48e5d0*/
                if ( v55 ) /*0x48e5da*/
                {
                  *v55 = *v54; /*0x48e5de*/
                  v55[1] = 0; /*0x48e5e0*/
                }
                else
                {
                  v55 = 0; /*0x48e5e9*/
                }
                v55[1] = v54[1]; /*0x48e5ee*/
                v54[1] = v55; /*0x48e5f1*/
              }
              *v54 = v53; /*0x48e5f4*/
            }
            ExtraDataList_SetExtraCount(v53, 1); /*0x48e5fa*/
            if ( v53 ) /*0x48e601*/
            {
              if ( !ExtraDataList_GetExtraScript(v53) ) /*0x48e609*/
              {
                ExtraDataList_AddScript(v53, (BSExtraDataVtbl *)v68); /*0x48e61d*/
                v56 = (char *)ExtraDataList_GetExtraScript(v53); /*0x48e624*/
                v57 = Script_CreateEventList(v56); /*0x48e62b*/
                ExtraDataList_SetScriptEventList(v53, (int)v57); /*0x48e633*/
                v58 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x48e63a*/
                if ( v58 ) /*0x48e650*/
                  v59 = (TESForm *)TESObjectREFR_constr(v58); /*0x48e659*/
                else
                  v59 = 0; /*0x48e65d*/
                TESForm_MakeTemporary(v59); /*0x48e665*/
                v60 = (char **)ExtraDataList_GetExtraScriptEventList(v53); /*0x48e670*/
                result = Script_Run(v68, result, a3, (TESObjectREFR *)v59, v60, 0, 0); /*0x48e679*/
                if ( v59 ) /*0x48e680*/
                  v59->vtbl->Destroy(v59, 1); /*0x48e68b*/
              }
            }
            --v75; /*0x48e68d*/
          }
          while ( v75 ); /*0x48e692*/
        }
      }
LABEL_125:
      objList = (ExtraContainerChanges_Data *)objList->owner; /*0x48e720*/
      if ( !objList ) /*0x48e724*/
        break; /*0x48e724*/
      v38 = (EntryData **)objList; /*0x48e412*/
    }
  }
  return result; /*0x48e72a*/
}
