int __thiscall ContainerExtraData_GetCount(int ***this)
{
  int ***v1; // edi
  TESObjectREFR *v2; // ecx
  int v3; // ebp
  TESObjectREFR *v4; // ecx
  TESContainer *v5; // eax
  TESContainer_Entry *p_list; // ebx
  TESContainer_Data *data; // edi
  int *v8; // eax
  char v9; // dl
  int v10; // esi
  int count; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // ebx
  ExtraDataList ***v15; // esi
  TESObjectREFR *v16; // ecx
  TESObjectREFR *v17; // ecx
  TESContainer *Container; // eax
  int v19; // eax
  ExtraDataList **v20; // edi
  int v21; // edi
  TESForm *v22; // eax
  int v24; // [esp+10h] [ebp-8h]
  int **v25; // [esp+14h] [ebp-4h]

  v1 = this; /*0x48d6c7*/
  v2 = (TESObjectREFR *)*(this + 1); /*0x48d6c9*/
  v3 = 0; /*0x48d6cc*/
  v25 = (int **)v1; /*0x48d6d0*/
  v24 = 0; /*0x48d6d4*/
  if ( v2 )
  {
    if ( TESObjectREFR_GetContainer(v2) )
    {
      v4 = (TESObjectREFR *)v1[1]; /*0x48d6eb*/
      v5 = v4 ? TESObjectREFR_GetContainer(v4) : 0;
      p_list = &v5->list; /*0x48d6fb*/
      if ( v5 != (TESContainer *)0xFFFFFFF8 ) /*0x48d700*/
      {
        do /*0x48d7cc*/
        {
          data = p_list->data; /*0x48d706*/
          if ( !p_list->data ) /*0x48d706*/
            break; /*0x48d70a*/
          if ( !OblivionDynamicCast( /*0x48d722*/
                  data->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESLevItem `RTTI Type Descriptor',
                  0) )
          {
            v8 = *v25; /*0x48d736*/
            v9 = 1; /*0x48d73d*/
            if ( !*v25 ) /*0x48d736*/
              goto LABEL_16; /*0x48d736*/
            while ( v9 ) /*0x48d743*/
            {
              if ( *v8 && *(TESForm **)(*v8 + 8) == data->type ) /*0x48d752*/
                v9 = 0; /*0x48d754*/
              else
                v8 = (int *)v8[1]; /*0x48d758*/
              if ( !v8 ) /*0x48d75d*/
                goto LABEL_16; /*0x48d75d*/
            }
            if ( v8 ) /*0x48d818*/
              v10 = *v8; /*0x48d81e*/
            else
LABEL_16:
              v10 = 0; /*0x48d75f*/
            count = data->count; /*0x48d761*/
            v12 = data->count; /*0x48d763*/
            if ( data->count < 0 ) /*0x48d767*/
              v12 = -v12; /*0x48d769*/
            if ( !v10 ) /*0x48d76d*/
              goto LABEL_29; /*0x48d76d*/
            v13 = *(_DWORD *)(v10 + 4); /*0x48d76f*/
            if ( v13 + v12 > 0 && (count >= 0 || v13 > count) ) /*0x48d77e*/
            {
              if ( !*(_DWORD *)v10 ) /*0x48d780*/
                goto LABEL_29; /*0x48d780*/
              if ( !**(_DWORD **)v10 ) /*0x48d786*/
                goto LABEL_29; /*0x48d786*/
              v24 += InventoryEntryData_Cleanup((ExtraDataList ***)v10); /*0x48d791*/
              if ( EntryData_HasDefaultContainerExtraList((int *)v10) ) /*0x48d797*/
                ++v24; /*0x48d7a0*/
              if ( sub_4845D0((int *)v10) < data->count + *(_DWORD *)(v10 + 4) /*0x48d7b9*/
                && !ContainerEntryExtraData_HasWorn((EntryData *)v10, 0) )
              {
LABEL_29:
                ++v24; /*0x48d7c2*/
              }
            }
          }
          p_list = p_list->next; /*0x48d7c7*/
        }
        while ( p_list ); /*0x48d7cc*/
        v1 = (int ***)v25; /*0x48d7d2*/
        v3 = v24; /*0x48d7d6*/
      }
    }
  }
  v14 = (int *)*v1; /*0x48d7da*/
  if ( *v1 )
  {
    while ( 1 )
    {
      v15 = (ExtraDataList ***)*v14; /*0x48d7e4*/
      if ( !*v14 ) /*0x48d7e8*/
        return v24 + 1; /*0x48d8f5*/
      if ( (int)v15[1] > 0 )
      {
        v16 = (TESObjectREFR *)v1[1]; /*0x48d7f8*/
        if ( !v16
          || !TESObjectREFR_GetContainer(v16)
          || ((v17 = (TESObjectREFR *)v1[1]) == 0 ? (Container = 0) : (Container = TESObjectREFR_GetContainer(v17)),
              !TESContainer_HasForm(Container, (TESForm *)v15[2])) )
        {
          v19 = InventoryEntryData_Cleanup(v15); /*0x48d83c*/
          v20 = *v15; /*0x48d841*/
          v24 += v19; /*0x48d843*/
          if ( *v15 ) /*0x48d841*/
          {
            while ( *v20 ) /*0x48d854*/
            {
              if ( ExtraDataList_IsExtraDefaultForContainer_all(*v20) ) /*0x48d856*/
              {
                ++v24; /*0x48d868*/
                break; /*0x48d868*/
              }
              v20 = (ExtraDataList **)v20[1]; /*0x48d85f*/
              if ( !v20 ) /*0x48d864*/
                break; /*0x48d864*/
            }
          }
          v21 = (int)v15[1]; /*0x48d86d*/
          if ( sub_4845D0((int *)v15) < v21 ) /*0x48d879*/
            ++v24; /*0x48d87b*/
          if ( v21 < 0 && (!*v15 || (v22 = (TESForm *)**v15) == 0 || !sub_41DEF0(v22)) ) /*0x48d892*/
          {
            v1 = (int ***)v25; /*0x48d89b*/
            BSSimpleList_Remove(*v25, (int)v15); /*0x48d8a2*/
            ContainerEntryExtraData_ClearDataTable((int *)v15); /*0x48d8a9*/
            if ( *v15 ) /*0x48d8ae*/
              BSSimpleList_Clear(*v15); /*0x48d8b4*/
            FormHeapFree((unsigned int)*v15); /*0x48d8bc*/
            *v15 = 0; /*0x48d8c2*/
            FormHeapFree((unsigned int)v15); /*0x48d8c8*/
            v14 = *v25; /*0x48d8cd*/
            v24 = v3; /*0x48d8d2*/
            goto LABEL_60; /*0x48d8d6*/
          }
          v1 = (int ***)v25; /*0x48d8d8*/
        }
      }
      v14 = (int *)v14[1]; /*0x48d8dc*/
LABEL_60:
      if ( !v14 ) /*0x48d8e1*/
        return v24 + 1; /*0x48d8e1*/
    }
  }
  return v3 + 1; /*0x48d8eb*/
}
