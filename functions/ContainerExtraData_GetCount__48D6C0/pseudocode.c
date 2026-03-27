int __thiscall ContainerExtraData_GetCount(int ***this)
{
  int ***v1; // edi
  TESObjectREFR *v2; // ecx
  int v3; // ebp
  TESObjectREFR *v4; // ecx
  TESContainer *v5; // eax
  TESContainer_Entry *p_list; // ebx
  TESContainer_Data *data; // edi
  int **v8; // eax
  char v9; // dl
  int *v10; // esi
  int count; // ecx
  int v12; // eax
  int v13; // edx
  int **v14; // ebx
  ExtraDataList ***v15; // esi
  TESObjectREFR *v16; // ecx
  TESObjectREFR *v17; // ecx
  TESContainer *Container; // eax
  int v19; // eax
  ExtraDataList **v20; // edi
  int v21; // edi
  TESForm *v22; // eax
  int v24; // [esp+10h] [ebp-8h]
  int ***v25; // [esp+14h] [ebp-4h]

  v1 = this;
  v2 = (TESObjectREFR *)*(this + 1);
  v3 = 0;
  v25 = v1;
  v24 = 0;
  if ( v2 )
  {
    if ( TESObjectREFR_GetContainer(v2) )
    {
      v4 = (TESObjectREFR *)v1[1];
      v5 = v4 ? TESObjectREFR_GetContainer(v4) : 0;
      p_list = &v5->list;
      if ( v5 != (TESContainer *)0xFFFFFFF8 )
      {
        do
        {
          data = p_list->data;
          if ( !p_list->data )
            break;
          if ( !OblivionDynamicCast(
                  data->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESLevItem `RTTI Type Descriptor',
                  0) )
          {
            v8 = *v25;
            v9 = 1;
            if ( !*v25 )
              goto LABEL_16;
            while ( v9 )
            {
              if ( *v8 && (TESForm *)(*v8)[2] == data->type )
                v9 = 0;
              else
                v8 = (int **)v8[1];
              if ( !v8 )
                goto LABEL_16;
            }
            if ( v8 )
              v10 = *v8;
            else
LABEL_16:
              v10 = 0;
            count = data->count;
            v12 = data->count;
            if ( data->count < 0 )
              v12 = -v12;
            if ( !v10 )
              goto LABEL_29;
            v13 = v10[1];
            if ( v13 + v12 > 0 && (count >= 0 || v13 > count) )
            {
              if ( !*v10 )
                goto LABEL_29;
              if ( !*(_DWORD *)*v10 )
                goto LABEL_29;
              v24 += InventoryEntryData_Cleanup((ExtraDataList ***)v10);
              if ( sub_4847C0(v10) )
                ++v24;
              if ( sub_4845D0(v10) < data->count + v10[1]
                && !(unsigned __int8)ContainerEntryExtraData_HasWorn((EntryData *)v10, 0) )
              {
LABEL_29:
                ++v24;
              }
            }
          }
          p_list = p_list->next;
        }
        while ( p_list );
        v1 = v25;
        v3 = v24;
      }
    }
  }
  v14 = *v1;
  if ( *v1 )
  {
    while ( 1 )
    {
      v15 = (ExtraDataList ***)*v14;
      if ( !*v14 )
        return v24 + 1;
      if ( (int)v15[1] > 0 )
      {
        v16 = (TESObjectREFR *)v1[1];
        if ( !v16
          || !TESObjectREFR_GetContainer(v16)
          || ((v17 = (TESObjectREFR *)v1[1]) == 0 ? (Container = 0) : (Container = TESObjectREFR_GetContainer(v17)),
              !TESContainer_HasForm(Container, (TESForm *)v15[2])) )
        {
          v19 = InventoryEntryData_Cleanup(v15);
          v20 = *v15;
          v24 += v19;
          if ( *v15 )
          {
            while ( *v20 )
            {
              if ( ExtraDataList_IsExtraDefaultForContainer_all(*v20) )
              {
                ++v24;
                break;
              }
              v20 = (ExtraDataList **)v20[1];
              if ( !v20 )
                break;
            }
          }
          v21 = (int)v15[1];
          if ( sub_4845D0((int *)v15) < v21 )
            ++v24;
          if ( v21 < 0 && (!*v15 || (v22 = (TESForm *)**v15) == 0 || !sub_41DEF0(v22)) )
          {
            v1 = v25;
            BSSimpleList_Remove(*v25, (int)v15);
            ContainerEntryExtraData_ClearDataTable((int *)v15);
            if ( *v15 )
              BSSimpleList_Clear(*v15);
            FormHeapFree((unsigned int)*v15);
            *v15 = 0;
            FormHeapFree((unsigned int)v15);
            v14 = *v25;
            v24 = v3;
            goto LABEL_60;
          }
          v1 = v25;
        }
      }
      v14 = (int **)v14[1];
LABEL_60:
      if ( !v14 )
        return v24 + 1;
    }
  }
  return v3 + 1;
}
