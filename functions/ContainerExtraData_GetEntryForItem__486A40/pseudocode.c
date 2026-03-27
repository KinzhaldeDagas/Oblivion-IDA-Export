_DWORD *__thiscall ContainerExtraData_GetEntryForItem(ExtraContainerChanges_Data *this, TESForm *a2)
{
  TESObjectREFR *owner; // ecx
  TESContainer_Entry *p_list; // esi
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  int *p_count; // ebp
  _DWORD *result; // eax
  int v9; // esi
  tListEntryData *next; // eax
  char v11; // dl
  ExtraDataList ***v12; // esi
  int v13; // eax
  int v14; // ebx
  _DWORD *v15; // eax
  _DWORD **v16; // edi
  ExtraDataList **v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int *k; // esi
  int v22; // eax
  ExtraDataList **i; // ebx
  ExtraDataList *v24; // ebp
  int v25; // edi
  ExtraDataList **v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD **v30; // edi
  int v31; // eax
  _DWORD *v32; // eax
  int *j; // esi
  TESForm *v34; // ebp
  EntryData *data; // esi
  TESObjectREFR *v36; // ecx
  SInt32 FormCount; // ebx
  TESObjectREFR *v38; // ecx
  TESContainer *v39; // eax
  ExtraDataList **extendData; // edi
  TESForm **v41; // eax
  TESObjectREFR *v42; // ecx
  TESObjectREFR *v43; // ecx
  TESContainer *v44; // eax
  ExtraDataList **v45; // ebx
  ExtraDataList *v46; // edi
  char IsExtraDefaultForContainer; // al
  _DWORD *v48; // ebp
  signed __int16 ExtraCount; // ax
  _DWORD *v50; // eax
  int countDelta; // edi
  ExtraDataList **v52; // edi
  int v53; // ebx
  int v54; // edi
  ExtraDataList **v55; // edi
  ExtraDataList *v56; // ebp
  bool v57; // al
  _DWORD *v58; // eax
  _DWORD *v59; // ebx
  ExtraDataList **v60; // ebp
  int v61; // edi
  int v62; // eax
  _DWORD *v63; // eax
  _DWORD *v64; // ebx
  char v65; // al
  ExtraDataList **v66; // esi
  ExtraDataList *v67; // edi
  ExtraDataList *v68; // edi
  TESForm *v69; // [esp+14h] [ebp-24h]
  _DWORD *v70; // [esp+18h] [ebp-20h]
  int v72; // [esp+20h] [ebp-18h]
  int v73; // [esp+20h] [ebp-18h]
  TESContainer_Entry *v74; // [esp+24h] [ebp-14h]
  tListEntryData *objList; // [esp+24h] [ebp-14h]
  SInt32 v76; // [esp+28h] [ebp-10h]

  owner = this->owner;
  p_list = 0;
  v74 = 0;
  if ( owner )
  {
    if ( TESObjectREFR_GetContainer(owner) )
    {
      v5 = this->owner;
      if ( v5 )
        Container = TESObjectREFR_GetContainer(v5);
      else
        Container = 0;
      p_list = &Container->list;
      v74 = &Container->list;
    }
  }
  v69 = 0;
  v70 = 0;
  if ( !p_list )
  {
LABEL_105:
    objList = this->objList;
    if ( !this->objList )
      return v70;
    v34 = a2;
    while ( 1 )
    {
      data = objList->node.data;
      result = v70;
      if ( !objList->node.data || v70 )
        return result;
      v36 = this->owner;
      FormCount = 0;
      v76 = 0;
      if ( v36 && TESObjectREFR_GetContainer(v36) )
      {
        if ( !data )
          goto LABEL_218;
        v38 = this->owner;
        if ( v38 )
          v39 = TESObjectREFR_GetContainer(v38);
        else
          v39 = 0;
        FormCount = TESContainer_GetFormCount(v39, data->type);
        v76 = FormCount;
        if ( FormCount < 0 )
        {
          extendData = (ExtraDataList **)data->extendData;
          if ( data->extendData )
          {
            while ( *extendData )
            {
              if ( ExtraDataList_HasWorn(*extendData, 0) )
              {
                ExtraDataList_SetExtraCount((ExtraDataList *)data->extendData->node.data, -FormCount);
                break;
              }
              extendData = (ExtraDataList **)extendData[1];
              if ( !extendData )
                break;
            }
          }
        }
      }
      if ( !data )
        goto LABEL_218;
      if ( data->countDelta <= 0 && FormCount >= 0 )
        goto LABEL_218;
      v41 = (TESForm **)data->extendData;
      if ( (!data->extendData || !*v41 || !sub_41DEF0(*v41)) && FormCount >= 0 )
      {
        v42 = this->owner;
        if ( v42 )
        {
          if ( TESObjectREFR_GetContainer(v42) )
          {
            v43 = this->owner;
            v44 = v43 ? TESObjectREFR_GetContainer(v43) : 0;
            if ( TESContainer_HasForm(v44, data->type) )
              goto LABEL_218;
          }
        }
      }
      if ( data->extendData
        && data->extendData->node.data
        && (int)v34 < (int)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data) )
      {
        v45 = (ExtraDataList **)data->extendData;
        if ( data->extendData )
        {
          do
          {
            v46 = *v45;
            if ( !*v45 )
              break;
            if ( v70 )
              break;
            IsExtraDefaultForContainer = ExtraDataList_IsExtraDefaultForContainer(v46, 0);
            if ( v69 == v34 )
            {
              if ( !IsExtraDefaultForContainer && ExtraDataList_GetExtraCount(v46) > 0 )
              {
                v48 = (_DWORD *)FormHeapAlloc(0xCu);
                if ( v48 )
                {
                  ExtraCount = ExtraDataList_GetExtraCount(v46);
                  v50 = ContainerEntryExtraData_constr(v48, (int)data->type, ExtraCount);
                }
                else
                {
                  v50 = 0;
                }
                v70 = v50;
                BSSimpleList_PushFront((_DWORD *)*v50, (int)v46);
                v34 = a2;
              }
            }
            else if ( !IsExtraDefaultForContainer )
            {
              v69 = (TESForm *)((char *)v69 + 1);
            }
            v45 = (ExtraDataList **)v45[1];
          }
          while ( v45 );
        }
      }
      else
      {
        countDelta = data->countDelta;
        if ( countDelta > InventoryEntryData_Cleanup((ExtraDataList ***)data) )
        {
          v52 = (ExtraDataList **)data->extendData;
          v53 = 0;
          v73 = 0;
          if ( data->extendData )
          {
            while ( *v52 )
            {
              if ( ExtraDataList_IsExtraDefaultForContainer_all(*v52) )
              {
                if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
                {
                  if ( !sub_484700((int *)data) )
                    v69 = (TESForm *)((char *)v69 + 1);
                }
                if ( v69 == v34 )
                {
                  v58 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v58 )
                    v59 = ContainerEntryExtraData_constr(v58, (int)data->type, 0);
                  else
                    v59 = 0;
                  v70 = v59;
                  v59[1] = sub_484780((ExtraDataList ***)data);
                  v60 = (ExtraDataList **)data->extendData;
                  if ( data->extendData )
                  {
                    do
                    {
                      v61 = (int)*v60;
                      if ( !*v60 )
                        break;
                      if ( ExtraDataList_IsExtraDefaultForContainer_all(*v60) )
                        BSSimpleList_PushBack((_DWORD *)*v59, v61);
                      v60 = (ExtraDataList **)v60[1];
                    }
                    while ( v60 );
                  }
                }
                if ( sub_484780((ExtraDataList ***)data) < v76 + data->countDelta )
                {
                  v73 = sub_484780((ExtraDataList ***)data);
                  if ( sub_484700((int *)data) )
                  {
                    v69 = (TESForm *)((char *)v69 + 1);
                  }
                  else if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
                  {
                    v69 = (TESForm *)((char *)v69 + 1);
                  }
                }
                goto LABEL_189;
              }
              v52 = (ExtraDataList **)v52[1];
              if ( !v52 )
                break;
            }
          }
          v54 = data->countDelta;
          if ( v54 > InventoryEntryData_Cleanup((ExtraDataList ***)data)
            && InventoryEntryData_Cleanup((ExtraDataList ***)data) > 0 )
          {
            v55 = (ExtraDataList **)data->extendData;
            if ( data->extendData )
            {
              do
              {
                v56 = *v55;
                if ( !*v55 )
                  break;
                if ( !ExtraDataList_IsExtraDefaultForContainer(v56, 0) )
                  v53 += ExtraDataList_GetExtraCount(v56);
                v55 = (ExtraDataList **)v55[1];
              }
              while ( v55 );
              v73 = v53;
            }
            v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data));
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
            {
              v57 = sub_484EC0((int *)data, 0);
LABEL_187:
              if ( !v57 )
                v69 = (TESForm *)((char *)v69 + 0xFFFFFFFF);
            }
            else if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 1) )
            {
              v57 = sub_484EC0((int *)data, 1);
              goto LABEL_187;
            }
          }
LABEL_189:
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
          {
            v62 = data->countDelta;
            if ( v62 > 1 && v73 != v62 && !sub_4847C0((int *)data) )
              v69 = (TESForm *)((char *)v69 + 1);
          }
          v34 = a2;
          if ( v69 != a2 || v70 || data->countDelta - v73 <= 0 )
          {
            v69 = (TESForm *)((char *)v69 + 1);
          }
          else
          {
            v63 = (_DWORD *)FormHeapAlloc(0xCu);
            if ( v63 )
              v64 = ContainerEntryExtraData_constr(v63, (int)data->type, 0);
            else
              v64 = 0;
            v64[1] = data->countDelta - v73;
            v70 = v64;
            if ( data->extendData )
            {
              v65 = sub_4847C0((int *)data);
              v66 = (ExtraDataList **)data->extendData;
              if ( v65 )
              {
                for ( ; v66; v66 = (ExtraDataList **)v66[1] )
                {
                  v67 = *v66;
                  if ( !*v66 )
                    break;
                  if ( !ExtraDataList_HasWorn(v67, 0) )
                  {
                    if ( ExtraDataList_IsExtraDefaultForContainer(v67, 1) )
                    {
                      if ( !ExtraDataList_IsExtraDefaultForContainer_all(v67) )
                        BSSimpleList_PushBack((_DWORD *)*v64, (int)v67);
                    }
                  }
                }
              }
              else
              {
                for ( ; v66; v66 = (ExtraDataList **)v66[1] )
                {
                  v68 = *v66;
                  if ( !*v66 )
                    break;
                  if ( !ExtraDataList_HasWorn(v68, 0) )
                  {
                    if ( ExtraDataList_IsExtraDefaultForContainer(v68, 1) )
                      BSSimpleList_PushBack((_DWORD *)*v64, (int)v68);
                  }
                }
              }
            }
          }
          goto LABEL_218;
        }
        v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data));
      }
LABEL_218:
      objList = (tListEntryData *)objList->node.next;
      if ( !objList )
        return v70;
    }
  }
  do
  {
    p_count = &p_list->data->count;
    if ( !p_list->data )
      break;
    result = v70;
    if ( v70 )
      return result;
    v9 = p_count[1];
    if ( *(_BYTE *)(v9 + 4) == 0x2B && v9 )
      goto LABEL_103;
    next = this->objList;
    v11 = 1;
    if ( !this->objList )
      goto LABEL_19;
    while ( v11 )
    {
      if ( next->node.data && next->node.data->type == (TESForm *)v9 )
        v11 = 0;
      else
        next = (tListEntryData *)next->node.next;
      if ( !next )
        goto LABEL_19;
    }
    if ( next )
      v12 = (ExtraDataList ***)next->node.data;
    else
LABEL_19:
      v12 = 0;
    v13 = *p_count;
    v14 = *p_count;
    v72 = *p_count;
    if ( *p_count < 0 )
    {
      v14 = -v14;
      v72 = v14;
    }
    if ( v12 && v14 <= 0 )
    {
      v70 = 0;
    }
    else
    {
      if ( v13 >= 0 )
      {
        if ( v12 )
        {
          if ( (int)v12[1] + v13 <= 0 || (v17 = *v12) != 0 && *v17 && sub_41DEF0((TESForm *)*v17) )
          {
LABEL_39:
            v70 = 0;
            goto LABEL_103;
          }
        }
      }
      else if ( v12 )
      {
        goto LABEL_39;
      }
      if ( v69 != a2 || v12 && InventoryEntryData_Cleanup(v12) )
      {
        if ( v12 )
        {
          v22 = 0;
          if ( *v12 )
            v22 = InventoryEntryData_Cleanup(v12);
          if ( (int)a2 < (int)((char *)v69 + v22) )
          {
            for ( i = *v12; i; v69 = (TESForm *)((char *)v69 + 1) )
            {
              v24 = *i;
              if ( !*i )
                break;
              if ( v70 )
                break;
              if ( v69 == a2 )
              {
                if ( ExtraDataList_IsExtraDefaultForContainer(v24, 0) )
                {
                  v69 = (TESForm *)((char *)v69 + 0xFFFFFFFF);
                }
                else
                {
                  v25 = ExtraDataList_GetExtraCount(v24);
                  v26 = v12[1];
                  if ( v25 > (int)v26 + v72 )
                    v25 = (int)v26 + v72;
                  v27 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v27 )
                    v28 = ContainerEntryExtraData_constr(v27, (int)v12[2], v25);
                  else
                    v28 = 0;
                  v70 = v28;
                  BSSimpleList_PushFront((_DWORD *)*v28, (int)v24);
                }
              }
              i = (ExtraDataList **)i[1];
            }
            goto LABEL_103;
          }
          v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup(v12));
          if ( !sub_4845D0((int *)v12)
            && (unsigned __int8)ContainerEntryExtraData_HasWorn((EntryData *)v12, 0)
            && ((int)v12[1] <= 0 || *((_BYTE *)v12[2] + 4) == 0x22)
            || sub_4845D0((int *)v12) >= (int)v12[1] + *p_count
            || sub_4846D0((TESForm *)v12) && (int)v12[1] > *p_count )
          {
            goto LABEL_103;
          }
          if ( v69 == a2 )
          {
            v29 = (_DWORD *)FormHeapAlloc(0xCu);
            if ( v29 )
            {
              v29[2] = 0;
              *v29 = 0;
              v29[1] = 0;
              v30 = (_DWORD **)v29;
            }
            else
            {
              v30 = 0;
            }
            v70 = v30;
            v30[1] = (ExtraDataList **)((char *)v12[1] + *p_count - InventoryEntryData_Cleanup(v12));
            v30[2] = (_DWORD *)p_count[1];
            sub_484F20((int *)v12);
            if ( v31 )
            {
              if ( *v12 )
              {
                if ( BSSimpleList_Count(*v12) )
                {
                  if ( !*v30 )
                  {
                    v32 = (_DWORD *)FormHeapAlloc(8u);
                    if ( v32 )
                    {
                      *v32 = 0;
                      v32[1] = 0;
                    }
                    else
                    {
                      v32 = 0;
                    }
                    *v30 = v32;
                  }
                  for ( j = (int *)*v12; j; j = (int *)j[1] )
                  {
                    if ( !*j )
                      break;
                    BSSimpleList_PushFront(*v30, *j);
                  }
                }
              }
            }
            goto LABEL_103;
          }
        }
        v69 = (TESForm *)((char *)v69 + 1);
      }
      else
      {
        v15 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v15 )
        {
          v15[2] = 0;
          *v15 = 0;
          v15[1] = 0;
          v16 = (_DWORD **)v15;
        }
        else
        {
          v16 = 0;
        }
        v70 = v16;
        if ( v12 )
        {
          if ( *p_count >= 0 )
            v16[1] = (ExtraDataList **)((char *)v12[1] + *p_count - InventoryEntryData_Cleanup(v12));
          else
            v16[1] = (ExtraDataList **)((char *)v12[1] + v14);
        }
        else
        {
          v18 = *p_count;
          if ( *p_count < 0 )
            v18 = -v18;
          v16[1] = (_DWORD *)v18;
        }
        v16[2] = (_DWORD *)p_count[1];
        if ( v12 )
        {
          sub_484F20((int *)v12);
          if ( v19 )
          {
            if ( *v12 )
            {
              if ( BSSimpleList_Count(*v12) )
              {
                if ( !*v16 )
                {
                  v20 = (_DWORD *)FormHeapAlloc(8u);
                  if ( v20 )
                  {
                    *v20 = 0;
                    v20[1] = 0;
                  }
                  else
                  {
                    v20 = 0;
                  }
                  *v16 = v20;
                }
                for ( k = (int *)*v12; k; k = (int *)k[1] )
                {
                  if ( !*k )
                    break;
                  BSSimpleList_PushFront(*v16, *k);
                }
              }
            }
          }
        }
      }
    }
LABEL_103:
    v74 = v74->next;
    p_list = v74;
  }
  while ( v74 );
  if ( !v70 )
    goto LABEL_105;
  return v70;
}
