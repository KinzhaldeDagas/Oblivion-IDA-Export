int **__thiscall sub_48E9A0(int ***this, float *a2, BSExtraDataVtbl *a3, char a4)
{
  int ***v4; // ebp
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  bool v7; // zf
  TESContainer_Entry *p_list; // eax
  TESContainer_Data *data; // ebx
  EntryData *v10; // esi
  void *v11; // edi
  EntryData *v12; // eax
  tListVoid *v13; // eax
  int **v14; // eax
  char v15; // dl
  EntryData *v16; // edi
  int i; // ebp
  ExtraDataList *v18; // ebx
  tListVoid *v19; // ebp
  int count; // ebp
  int v21; // eax
  tListVoid *j; // edi
  ExtraDataList *v23; // edi
  _DWORD *v24; // eax
  tListVoid *v25; // eax
  _DWORD *v26; // eax
  tListVoid *extendData; // edi
  NodeVoid *next; // ebp
  int **result; // eax
  EntryData *v30; // eax
  EntryData *v31; // esi
  tListVoid *v32; // eax
  int *v33; // ebx
  TESObjectREFR *v34; // ecx
  TESObjectREFR *v35; // ecx
  TESContainer *v36; // eax
  int v37; // ebx
  ExtraDataList *v38; // ebp
  ExtraDataList **v39; // edi
  ExtraDataList **v40; // eax
  _DWORD *v41; // eax
  ExtraDataList *v42; // edi
  int v43; // ecx
  ExtraDataList *v44; // ecx
  int v45; // ebp
  ExtraDataList *v46; // edi
  tListVoid *v47; // eax
  _DWORD *v48; // eax
  ExtraDataList *v49; // edi
  int v50; // eax
  _DWORD *v51; // eax
  ExtraDataList *v52; // ecx
  _DWORD *v53; // eax
  ExtraDataList *v54; // edi
  tListVoid *v55; // edi
  NodeVoid *v56; // ebp
  BSExtraDataVtbl *v57; // [esp-4h] [ebp-34h]
  int v58; // [esp+0h] [ebp-30h]
  int v59; // [esp+4h] [ebp-2Ch]
  int v60; // [esp+8h] [ebp-28h]
  int v61; // [esp+Ch] [ebp-24h]
  int v62; // [esp+10h] [ebp-20h]
  TESContainer_Entry *v63; // [esp+14h] [ebp-1Ch]
  int **v64; // [esp+14h] [ebp-1Ch]
  TESContainer_Data *v66; // [esp+1Ch] [ebp-14h]
  int *v67; // [esp+1Ch] [ebp-14h]
  int k; // [esp+3Ch] [ebp+Ch]
  int v69; // [esp+3Ch] [ebp+Ch]

  v4 = this;
  v5 = (TESObjectREFR *)*(this + 1);
  if ( v5 )
    Container = TESObjectREFR_GetContainer(v5);
  else
    Container = 0;
  v7 = &Container->list == 0;
  p_list = &Container->list;
  v63 = p_list;
  if ( !v7 )
  {
    while ( 1 )
    {
      data = p_list->data;
      v10 = 0;
      v66 = p_list->data;
      if ( !p_list->data )
        goto LABEL_85;
      v11 = OblivionDynamicCast(
              data->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      v12 = (EntryData *)FormHeapAlloc(0xCu);
      if ( v12 )
      {
        v12->type = 0;
        v12->extendData = 0;
        v12->countDelta = 0;
        v10 = v12;
      }
      if ( !v10->extendData )
      {
        v13 = (tListVoid *)FormHeapAlloc(8u);
        if ( v13 )
        {
          v13->node.data = 0;
          v13->node.next = 0;
        }
        else
        {
          v13 = 0;
        }
        v10->extendData = v13;
      }
      if ( v11 )
      {
        extendData = v10->extendData;
        if ( v10->extendData )
        {
          if ( extendData->node.next )
          {
            do
            {
              next = extendData->node.next->next;
              FormHeapFree((unsigned int)extendData->node.next);
              extendData->node.next = next;
            }
            while ( next );
          }
          extendData->node.data = 0;
        }
        goto LABEL_83;
      }
      v14 = *v4;
      v15 = 1;
      if ( !*v4 )
        break;
      while ( v15 )
      {
        if ( *v14 && (TESForm *)(*v14)[2] == data->type )
          v15 = 0;
        else
          v14 = (int **)v14[1];
        if ( !v14 )
          goto LABEL_23;
      }
      if ( !v14 )
        break;
      v16 = (EntryData *)*v14;
      if ( !*v14 )
        goto LABEL_46;
      for ( i = (int)v16->extendData; i; i = *(_DWORD *)(i + 4) )
      {
        v18 = *(ExtraDataList **)i;
        if ( !*(_DWORD *)i )
          break;
        if ( sub_41E790(*(ExtraDataList **)i) )
          sub_4234B0(v18);
      }
      v19 = v16->extendData;
      if ( v16->extendData )
      {
        while ( v19->node.data )
        {
          if ( sub_41DEF0((TESForm *)v19->node.data) )
          {
            if ( sub_484740((int *)v16) < 1 )
              break;
            data = v66;
            goto LABEL_40;
          }
          v19 = (tListVoid *)v19->node.next;
          if ( !v19 )
            break;
        }
      }
      data = v66;
      if ( !(v66->count + v16->countDelta) )
        goto LABEL_43;
LABEL_40:
      if ( ((unsigned __int8 (__thiscall *)(TESForm *))v16->type->vtbl->Unk_1E)(v16->type) && a4
        || (unsigned __int8)ContainerEntryExtraData_HasWorn(v16, 0) )
      {
        goto LABEL_43;
      }
      if ( !sub_4845D0((int *)v16) )
        goto LABEL_46;
      if ( v16->extendData )
        sub_4845D0((int *)v16);
      if ( sub_4845D0((int *)v16) < v16->countDelta + data->count )
      {
        if ( !v10->extendData )
        {
          v25 = (tListVoid *)FormHeapAlloc(8u);
          if ( v25 )
          {
            v25->node.data = 0;
            v25->node.next = 0;
          }
          else
          {
            v25 = 0;
          }
          v10->extendData = v25;
        }
        v10->countDelta = v16->countDelta + data->count - sub_4845D0((int *)v16);
        v10->type = data->type;
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v10, 0) )
        {
          v26 = (_DWORD *)FormHeapAlloc(0x14u);
          if ( v26 )
            v23 = (ExtraDataList *)ExtraDataList_constr(v26);
          else
            v23 = 0;
          v57 = a3;
LABEL_77:
          sub_41E710(v23, v57);
          ExtraDataList_SetExtraCount(v23, v10->countDelta);
          BSSimpleList_PushFront(&v10->extendData->node.data, (int)v23);
LABEL_56:
          ContainerExtraData_AddEntry(a2, (int *)v10, 1, v58, v59, v60, v61, v62);
          goto LABEL_84;
        }
LABEL_43:
        if ( v10->extendData )
          BSSimpleList_Clear(&v10->extendData->node.data);
LABEL_83:
        FormHeapFree((unsigned int)v10->extendData);
        v10->extendData = 0;
        FormHeapFree((unsigned int)v10);
      }
LABEL_84:
      v4 = this;
      v63 = v63->next;
      if ( !v63 )
        goto LABEL_85;
      p_list = v63;
    }
LABEL_23:
    v16 = 0;
LABEL_46:
    count = data->count;
    if ( data->count < 0 )
      count = -count;
    if ( v16 )
      v10->countDelta = count + v16->countDelta - sub_4845D0((int *)v16);
    else
      v10->countDelta = count;
    v10->type = data->type;
    if ( v16 )
    {
      sub_484F20((int *)v16);
      if ( v21 )
      {
        for ( j = v16->extendData; j; j = (tListVoid *)j->node.next )
        {
          if ( !j->node.data )
            break;
          sub_41E710((ExtraDataList *)j->node.data, a3);
          BSSimpleList_PushBack(&v10->extendData->node.data, (int)j->node.data);
        }
        goto LABEL_56;
      }
    }
    v23 = 0;
    if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v10, 0) )
    {
      v24 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v24 )
        v23 = (ExtraDataList *)ExtraDataList_constr(v24);
      v57 = a3;
      goto LABEL_77;
    }
    if ( v10->extendData )
      BSSimpleList_Clear(&v10->extendData->node.data);
    goto LABEL_83;
  }
LABEL_85:
  result = *v4;
  v64 = *v4;
  if ( *v4 )
  {
    while ( 1 )
    {
      if ( !*result )
        return result;
      v30 = (EntryData *)FormHeapAlloc(0xCu);
      if ( v30 )
      {
        v30->type = 0;
        v30->extendData = 0;
        v30->countDelta = 0;
        v31 = v30;
      }
      else
      {
        v31 = 0;
      }
      if ( !v31->extendData )
      {
        v32 = (tListVoid *)FormHeapAlloc(8u);
        if ( v32 )
        {
          v32->node.data = 0;
          v32->node.next = 0;
        }
        else
        {
          v32 = 0;
        }
        v31->extendData = v32;
      }
      v33 = *v64;
      v67 = *v64;
      if ( !*v64 )
        break;
      if ( v33[1] <= 0 )
        break;
      v34 = (TESObjectREFR *)*(this + 1);
      if ( v34 )
      {
        if ( TESObjectREFR_GetContainer(v34) )
        {
          v35 = (TESObjectREFR *)*(this + 1);
          v36 = v35 ? TESObjectREFR_GetContainer(v35) : 0;
          if ( TESContainer_HasForm(v36, (TESForm *)v33[2]) )
            break;
        }
      }
      if ( sub_4845D0(v33) )
      {
        v37 = *v67;
        for ( k = 0; v37; k += ExtraDataList_GetExtraCount(v38) )
        {
          v38 = *(ExtraDataList **)v37;
          if ( !*(_DWORD *)v37 )
            break;
          sub_41E710(v38, a3);
          v39 = (ExtraDataList **)v31->extendData;
          if ( v31->extendData->node.data )
          {
            v40 = (ExtraDataList **)FormHeapAlloc(8u);
            if ( v40 )
            {
              *v40 = *v39;
              v40[1] = 0;
            }
            else
            {
              v40 = 0;
            }
            v40[1] = v39[1];
            v39[1] = (ExtraDataList *)v40;
          }
          *v39 = v38;
          v37 = *(_DWORD *)(v37 + 4);
        }
        v31->type = (TESForm *)v67[2];
        v31->countDelta = v67[1];
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v31, 0) && k < v67[1] )
        {
          v41 = (_DWORD *)FormHeapAlloc(0x14u);
          if ( v41 )
            v42 = (ExtraDataList *)ExtraDataList_constr(v41);
          else
            v42 = 0;
          sub_41E710(v42, a3);
          v43 = *((unsigned __int16 *)v67 + 2);
          LOWORD(v43) = v43 - k;
          ExtraDataList_SetExtraCount(v42, v43);
          BSSimpleList_PushFront(&v31->extendData->node.data, (int)v42);
        }
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v31, 0) )
        {
          ContainerExtraData_AddEntry(a2, (int *)v31, 1, v58, v59, v60, v61, v62);
          goto LABEL_166;
        }
        v44 = (ExtraDataList *)v31->extendData->node.data;
        if ( v44 )
          sub_4234B0(v44);
        if ( v31->extendData )
          BSSimpleList_Clear(&v31->extendData->node.data);
        goto LABEL_165;
      }
      v45 = *v33;
      v46 = 0;
      if ( *v33 )
      {
        v69 = 0;
        do
        {
          if ( !*(_DWORD *)v45 )
            break;
          if ( v46 )
            goto LABEL_135;
          v46 = *(ExtraDataList **)v45;
          v69 += ExtraDataList_GetExtraCount(*(ExtraDataList **)v45);
          if ( !ExtraDataList_IsExtraDefaultForContainer(v46, 0) )
            v46 = 0;
          v45 = *(_DWORD *)(v45 + 4);
        }
        while ( v45 );
        if ( !v46 )
        {
          v51 = (_DWORD *)FormHeapAlloc(0x14u);
          if ( v51 )
            v49 = (ExtraDataList *)ExtraDataList_constr(v51);
          else
            v49 = 0;
          sub_41E710(v49, a3);
          ExtraDataList_SetExtraCount(v49, LOWORD(v31->countDelta));
          goto LABEL_150;
        }
LABEL_135:
        if ( !v31->extendData )
        {
          v47 = (tListVoid *)FormHeapAlloc(8u);
          if ( v47 )
          {
            v47->node.data = 0;
            v47->node.next = 0;
          }
          else
          {
            v47 = 0;
          }
          v31->extendData = v47;
        }
        sub_41E710(v46, a3);
        BSSimpleList_PushFront(&v31->extendData->node.data, (int)v46);
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v31, 0) && v69 < v33[1] )
        {
          v48 = (_DWORD *)FormHeapAlloc(0x14u);
          if ( v48 )
            v49 = (ExtraDataList *)ExtraDataList_constr(v48);
          else
            v49 = 0;
          sub_41E710(v49, a3);
          v50 = *((unsigned __int16 *)v33 + 2);
          LOWORD(v50) = v50 - v69;
          ExtraDataList_SetExtraCount(v49, v50);
LABEL_150:
          BSSimpleList_PushFront(&v31->extendData->node.data, (int)v49);
        }
        v31->type = (TESForm *)v33[2];
        v31->countDelta = v33[1];
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v31, 0) )
        {
          v31->countDelta = v33[1];
          ContainerExtraData_AddEntry(a2, (int *)v31, 1, v58, v59, v60, v61, v62);
          goto LABEL_166;
        }
        v52 = (ExtraDataList *)v31->extendData->node.data;
        if ( v52 )
          sub_4234B0(v52);
        if ( v31->extendData )
          BSSimpleList_Clear(&v31->extendData->node.data);
        goto LABEL_165;
      }
      v31->type = (TESForm *)v33[2];
      v31->countDelta = v33[1];
      v53 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v53 )
        v54 = (ExtraDataList *)ExtraDataList_constr(v53);
      else
        v54 = 0;
      sub_41E710(v54, a3);
      ExtraDataList_SetExtraCount(v54, LOWORD(v31->countDelta));
      BSSimpleList_PushFront(&v31->extendData->node.data, (int)v54);
      ContainerExtraData_AddEntry(a2, (int *)v31, 1, v58, v59, v60, v61, v62);
LABEL_166:
      v64 = (int **)v64[1];
      result = v64;
      if ( !v64 )
        return result;
      result = v64;
    }
    v55 = v31->extendData;
    if ( v31->extendData )
    {
      if ( v55->node.next )
      {
        do
        {
          v56 = v55->node.next->next;
          FormHeapFree((unsigned int)v55->node.next);
          v55->node.next = v56;
        }
        while ( v56 );
      }
      v55->node.data = 0;
    }
LABEL_165:
    FormHeapFree((unsigned int)v31->extendData);
    v31->extendData = 0;
    FormHeapFree((unsigned int)v31);
    goto LABEL_166;
  }
  return result;
}
