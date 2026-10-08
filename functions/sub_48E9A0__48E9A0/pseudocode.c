int **__thiscall sub_48E9A0(int ***this, ExtraContainerChanges_Data *a2, TESObjectREFR *originalReference, char a4)
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
  TESObjectREFR *v57; // [esp-4h] [ebp-34h]
  TESContainer_Entry *v58; // [esp+14h] [ebp-1Ch]
  int **v59; // [esp+14h] [ebp-1Ch]
  TESContainer_Data *v61; // [esp+1Ch] [ebp-14h]
  int *v62; // [esp+1Ch] [ebp-14h]
  int k; // [esp+3Ch] [ebp+Ch]
  int v64; // [esp+3Ch] [ebp+Ch]

  v4 = this; /*0x48e9c7*/
  v5 = (TESObjectREFR *)*(this + 1); /*0x48e9cd*/
  if ( v5 ) /*0x48e9d2*/
    Container = TESObjectREFR_GetContainer(v5); /*0x48e9d4*/
  else
    Container = 0; /*0x48e9db*/
  v7 = &Container->list == 0; /*0x48e9dd*/
  p_list = &Container->list; /*0x48e9dd*/
  v58 = p_list; /*0x48e9e0*/
  if ( !v7 ) /*0x48e9e4*/
  {
    while ( 1 ) /*0x48e9f4*/
    {
      data = p_list->data; /*0x48e9f4*/
      v10 = 0; /*0x48e9f6*/
      v61 = p_list->data; /*0x48e9fa*/
      if ( !p_list->data ) /*0x48e9fe*/
        goto LABEL_85; /*0x48e9fe*/
      v11 = OblivionDynamicCast( /*0x48ea1b*/
              data->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      v12 = (EntryData *)FormHeapAlloc(0xCu); /*0x48ea1d*/
      if ( v12 ) /*0x48ea27*/
      {
        v12->type = 0; /*0x48ea29*/
        v12->extendData = 0; /*0x48ea2c*/
        v12->countDelta = 0; /*0x48ea2e*/
        v10 = v12; /*0x48ea31*/
      }
      if ( !v10->extendData ) /*0x48ea33*/
      {
        v13 = (tListVoid *)FormHeapAlloc(8u); /*0x48ea3a*/
        if ( v13 ) /*0x48ea44*/
        {
          v13->node.data = 0; /*0x48ea46*/
          v13->node.next = 0; /*0x48ea4c*/
        }
        else
        {
          v13 = 0; /*0x48ea55*/
        }
        v10->extendData = v13; /*0x48ea57*/
      }
      if ( v11 ) /*0x48ea5b*/
      {
        extendData = v10->extendData; /*0x48ecde*/
        if ( v10->extendData ) /*0x48ecde*/
        {
          if ( extendData->node.next ) /*0x48ece4*/
          {
            do /*0x48ed04*/
            {
              next = extendData->node.next->next; /*0x48ecf3*/
              FormHeapFree((unsigned int)extendData->node.next); /*0x48ecf7*/
              extendData->node.next = next; /*0x48ed01*/
            }
            while ( next ); /*0x48ed04*/
          }
          extendData->node.data = 0; /*0x48ed06*/
        }
        goto LABEL_83; /*0x48ed06*/
      }
      v14 = *v4; /*0x48ea61*/
      v15 = 1; /*0x48ea69*/
      if ( !*v4 ) /*0x48ea61*/
        break; /*0x48ea61*/
      while ( v15 ) /*0x48ea6f*/
      {
        if ( *v14 && (TESForm *)(*v14)[2] == data->type ) /*0x48ea7a*/
          v15 = 0; /*0x48ea7c*/
        else
          v14 = (int **)v14[1]; /*0x48ea80*/
        if ( !v14 ) /*0x48ea85*/
          goto LABEL_23; /*0x48ea85*/
      }
      if ( !v14 ) /*0x48ea90*/
        break; /*0x48ea90*/
      v16 = (EntryData *)*v14; /*0x48ea92*/
      if ( !*v14 ) /*0x48ea96*/
        goto LABEL_46; /*0x48ea96*/
      for ( i = (int)v16->extendData; i; i = *(_DWORD *)(i + 4) ) /*0x48ea9c*/
      {
        v18 = *(ExtraDataList **)i; /*0x48eaa2*/
        if ( !*(_DWORD *)i ) /*0x48eaa2*/
          break; /*0x48eaa7*/
        if ( ExtraDataList_GetOriginalReference(*(ExtraDataList **)i) ) /*0x48eaab*/
          sub_4234B0(v18); /*0x48eab6*/
      }
      v19 = v16->extendData; /*0x48eac2*/
      if ( v16->extendData ) /*0x48eac2*/
      {
        while ( v19->node.data ) /*0x48eacd*/
        {
          if ( sub_41DEF0((TESForm *)v19->node.data) ) /*0x48eacf*/
          {
            if ( sub_484740((int *)v16) < 1 ) /*0x48eaeb*/
              break; /*0x48eaeb*/
            data = v61; /*0x48eafa*/
            goto LABEL_40; /*0x48eafa*/
          }
          v19 = (tListVoid *)v19->node.next; /*0x48ead8*/
          if ( !v19 ) /*0x48eadd*/
            break; /*0x48eadd*/
        }
      }
      data = v61; /*0x48eaed*/
      if ( !(v61->count + v16->countDelta) ) /*0x48eaf6*/
        goto LABEL_43; /*0x48eaf6*/
LABEL_40:
      if ( ((unsigned __int8 (__thiscall *)(TESForm *))v16->type->vtbl->Unk_1E)(v16->type) && a4 /*0x48eb17*/
        || ContainerEntryExtraData_HasWorn(v16, 0) )
      {
        goto LABEL_43; /*0x48eb1e*/
      }
      if ( !sub_4845D0((int *)v16) ) /*0x48eb36*/
        goto LABEL_46; /*0x48eb3d*/
      if ( v16->extendData ) /*0x48ec13*/
        sub_4845D0((int *)v16); /*0x48ec1a*/
      if ( sub_4845D0((int *)v16) < v16->countDelta + data->count ) /*0x48ec2e*/
      {
        if ( !v10->extendData ) /*0x48ec34*/
        {
          v25 = (tListVoid *)FormHeapAlloc(8u); /*0x48ec3b*/
          if ( v25 ) /*0x48ec45*/
          {
            v25->node.data = 0; /*0x48ec47*/
            v25->node.next = 0; /*0x48ec4d*/
          }
          else
          {
            v25 = 0; /*0x48ec56*/
          }
          v10->extendData = v25; /*0x48ec58*/
        }
        v10->countDelta = v16->countDelta + data->count - sub_4845D0((int *)v16); /*0x48ec6a*/
        v10->type = data->type; /*0x48ec72*/
        if ( !ContainerEntryExtraData_HasWorn(v10, 0) ) /*0x48ec75*/
        {
          v26 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48ec84*/
          if ( v26 ) /*0x48ec9a*/
            v23 = (ExtraDataList *)ExtraDataList_constr(v26); /*0x48eca3*/
          else
            v23 = 0; /*0x48eca7*/
          v57 = originalReference; /*0x48ecad*/
LABEL_77:
          ExtraDataList_SetOriginalReferenceExtra(v23, v57); /*0x48ecae*/
          ExtraDataList_SetExtraCount(v23, v10->countDelta); /*0x48ecc3*/
          BSSimpleList_PushFront(&v10->extendData->node.data, (int)v23); /*0x48eccb*/
LABEL_56:
          ContainerExtraData_AddEntry(a2, v10, 1); /*0x48ebb1*/
          goto LABEL_84; /*0x48ebbd*/
        }
LABEL_43:
        if ( v10->extendData ) /*0x48eb20*/
          BSSimpleList_Clear(&v10->extendData->node.data); /*0x48eb2a*/
LABEL_83:
        FormHeapFree((unsigned int)v10->extendData); /*0x48ed0c*/
        v10->extendData = 0; /*0x48ed14*/
        FormHeapFree((unsigned int)v10); /*0x48ed1b*/
      }
LABEL_84:
      v4 = this; /*0x48ed23*/
      v58 = v58->next; /*0x48ed30*/
      if ( !v58 ) /*0x48ed34*/
        goto LABEL_85; /*0x48ed34*/
      p_list = v58; /*0x48e9f0*/
    }
LABEL_23:
    v16 = 0; /*0x48ea87*/
LABEL_46:
    count = data->count; /*0x48eb43*/
    if ( data->count < 0 ) /*0x48eb47*/
      count = -count; /*0x48eb49*/
    if ( v16 ) /*0x48eb4d*/
      v10->countDelta = count + v16->countDelta - sub_4845D0((int *)v16); /*0x48eb5d*/
    else
      v10->countDelta = count; /*0x48eb62*/
    v10->type = data->type; /*0x48eb6a*/
    if ( v16 ) /*0x48eb6d*/
    {
      sub_484F20((int *)v16); /*0x48eb71*/
      if ( v21 ) /*0x48eb78*/
      {
        for ( j = v16->extendData; j; j = (tListVoid *)j->node.next ) /*0x48eb7e*/
        {
          if ( !j->node.data ) /*0x48eb90*/
            break; /*0x48eb94*/
          ExtraDataList_SetOriginalReferenceExtra((ExtraDataList *)j->node.data, originalReference); /*0x48eb9b*/
          BSSimpleList_PushBack(&v10->extendData->node.data, (int)j->node.data); /*0x48eba5*/
        }
        goto LABEL_56; /*0x48ebaf*/
      }
    }
    v23 = 0; /*0x48ebc2*/
    if ( !ContainerEntryExtraData_HasWorn(v10, 0) ) /*0x48ebc7*/
    {
      v24 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48ebd2*/
      if ( v24 ) /*0x48ebe4*/
        v23 = (ExtraDataList *)ExtraDataList_constr(v24); /*0x48ebed*/
      v57 = originalReference; /*0x48ebf3*/
      goto LABEL_77; /*0x48ebf4*/
    }
    if ( v10->extendData ) /*0x48ebf9*/
      BSSimpleList_Clear(&v10->extendData->node.data); /*0x48ebff*/
    goto LABEL_83; /*0x48ebff*/
  }
LABEL_85:
  result = *v4; /*0x48ed3a*/
  v59 = *v4; /*0x48ed3f*/
  if ( *v4 )
  {
    while ( 1 )
    {
      if ( !*result ) /*0x48ed58*/
        return result; /*0x48ed58*/
      v30 = (EntryData *)FormHeapAlloc(0xCu); /*0x48ed60*/
      if ( v30 ) /*0x48ed6a*/
      {
        v30->type = 0; /*0x48ed6c*/
        v30->extendData = 0; /*0x48ed6f*/
        v30->countDelta = 0; /*0x48ed71*/
        v31 = v30; /*0x48ed74*/
      }
      else
      {
        v31 = 0; /*0x48ed78*/
      }
      if ( !v31->extendData ) /*0x48ed7a*/
      {
        v32 = (tListVoid *)FormHeapAlloc(8u); /*0x48ed80*/
        if ( v32 ) /*0x48ed8a*/
        {
          v32->node.data = 0; /*0x48ed8c*/
          v32->node.next = 0; /*0x48ed8e*/
        }
        else
        {
          v32 = 0; /*0x48ed93*/
        }
        v31->extendData = v32; /*0x48ed95*/
      }
      v33 = *v59; /*0x48ed9b*/
      v62 = *v59; /*0x48ed9f*/
      if ( !*v59 ) /*0x48ed9f*/
        break; /*0x48ed9f*/
      if ( v33[1] <= 0 ) /*0x48edad*/
        break; /*0x48edad*/
      v34 = (TESObjectREFR *)*(this + 1); /*0x48edb7*/
      if ( v34 )
      {
        if ( TESObjectREFR_GetContainer(v34) )
        {
          v35 = (TESObjectREFR *)*(this + 1); /*0x48edc7*/
          v36 = v35 ? TESObjectREFR_GetContainer(v35) : 0;
          if ( TESContainer_HasForm(v36, (TESForm *)v33[2]) ) /*0x48eddd*/
            break; /*0x48eddd*/
        }
      }
      if ( sub_4845D0(v33) ) /*0x48edec*/
      {
        v37 = *v62; /*0x48edfd*/
        for ( k = 0; v37; k += ExtraDataList_GetExtraCount(v38) ) /*0x48edfd*/
        {
          v38 = *(ExtraDataList **)v37; /*0x48ee0b*/
          if ( !*(_DWORD *)v37 ) /*0x48ee0b*/
            break; /*0x48ee0f*/
          ExtraDataList_SetOriginalReferenceExtra(v38, originalReference); /*0x48ee18*/
          v39 = (ExtraDataList **)v31->extendData; /*0x48ee1f*/
          if ( v31->extendData->node.data ) /*0x48ee1f*/
          {
            v40 = (ExtraDataList **)FormHeapAlloc(8u); /*0x48ee2a*/
            if ( v40 ) /*0x48ee34*/
            {
              *v40 = *v39; /*0x48ee38*/
              v40[1] = 0; /*0x48ee3a*/
            }
            else
            {
              v40 = 0; /*0x48ee43*/
            }
            v40[1] = v39[1]; /*0x48ee48*/
            v39[1] = (ExtraDataList *)v40; /*0x48ee4b*/
          }
          *v39 = v38; /*0x48ee4e*/
          v37 = *(_DWORD *)(v37 + 4); /*0x48ee50*/
        }
        v31->type = (TESForm *)v62[2]; /*0x48ee6c*/
        v31->countDelta = v62[1]; /*0x48ee76*/
        if ( !ContainerEntryExtraData_HasWorn(v31, 0) && k < v62[1] ) /*0x48ee89*/
        {
          v41 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48ee8d*/
          if ( v41 ) /*0x48eea3*/
            v42 = (ExtraDataList *)ExtraDataList_constr(v41); /*0x48eeac*/
          else
            v42 = 0; /*0x48eeb0*/
          ExtraDataList_SetOriginalReferenceExtra(v42, originalReference); /*0x48eec1*/
          v43 = *((unsigned __int16 *)v62 + 2); /*0x48eeca*/
          LOWORD(v43) = v43 - k; /*0x48eece*/
          ExtraDataList_SetExtraCount(v42, v43); /*0x48eed6*/
          BSSimpleList_PushFront(&v31->extendData->node.data, (int)v42); /*0x48eede*/
        }
        if ( !ContainerEntryExtraData_HasWorn(v31, 0) ) /*0x48eee7*/
        {
          ContainerExtraData_AddEntry(a2, v31, 1); /*0x48eef7*/
          goto LABEL_166; /*0x48eefc*/
        }
        v44 = (ExtraDataList *)v31->extendData->node.data; /*0x48ef03*/
        if ( v44 ) /*0x48ef07*/
          sub_4234B0(v44); /*0x48ef09*/
        if ( v31->extendData ) /*0x48ef0e*/
          BSSimpleList_Clear(&v31->extendData->node.data); /*0x48ef14*/
        goto LABEL_165; /*0x48ef14*/
      }
      v45 = *v33; /*0x48ef21*/
      v46 = 0; /*0x48ef23*/
      if ( *v33 ) /*0x48ef21*/
      {
        v64 = 0; /*0x48ef2d*/
        do /*0x48ef60*/
        {
          if ( !*(_DWORD *)v45 ) /*0x48ef31*/
            break; /*0x48ef36*/
          if ( v46 ) /*0x48ef3a*/
            goto LABEL_135; /*0x48ef3a*/
          v46 = *(ExtraDataList **)v45; /*0x48ef3c*/
          v64 += ExtraDataList_GetExtraCount(*(ExtraDataList **)v45); /*0x48ef48*/
          if ( !ExtraDataList_IsExtraDefaultForContainer(v46, 0) ) /*0x48ef50*/
            v46 = 0; /*0x48ef59*/
          v45 = *(_DWORD *)(v45 + 4); /*0x48ef5b*/
        }
        while ( v45 ); /*0x48ef60*/
        if ( !v46 ) /*0x48ef64*/
        {
          v51 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48f007*/
          if ( v51 ) /*0x48f01d*/
            v49 = (ExtraDataList *)ExtraDataList_constr(v51); /*0x48f026*/
          else
            v49 = 0; /*0x48f02a*/
          ExtraDataList_SetOriginalReferenceExtra(v49, originalReference); /*0x48f03b*/
          ExtraDataList_SetExtraCount(v49, LOWORD(v31->countDelta)); /*0x48f047*/
          goto LABEL_150; /*0x48f047*/
        }
LABEL_135:
        if ( !v31->extendData ) /*0x48ef6a*/
        {
          v47 = (tListVoid *)FormHeapAlloc(8u); /*0x48ef71*/
          if ( v47 ) /*0x48ef7b*/
          {
            v47->node.data = 0; /*0x48ef7d*/
            v47->node.next = 0; /*0x48ef83*/
          }
          else
          {
            v47 = 0; /*0x48ef8c*/
          }
          v31->extendData = v47; /*0x48ef8e*/
        }
        ExtraDataList_SetOriginalReferenceExtra(v46, originalReference); /*0x48ef97*/
        BSSimpleList_PushFront(&v31->extendData->node.data, (int)v46); /*0x48ef9f*/
        if ( !ContainerEntryExtraData_HasWorn(v31, 0) && v64 < v33[1] ) /*0x48efbc*/
        {
          v48 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48efc4*/
          if ( v48 ) /*0x48efda*/
            v49 = (ExtraDataList *)ExtraDataList_constr(v48); /*0x48efe3*/
          else
            v49 = 0; /*0x48efe7*/
          ExtraDataList_SetOriginalReferenceExtra(v49, originalReference); /*0x48eff4*/
          v50 = *((unsigned __int16 *)v33 + 2); /*0x48eff9*/
          LOWORD(v50) = v50 - v64; /*0x48effd*/
          ExtraDataList_SetExtraCount(v49, v50); /*0x48f003*/
LABEL_150:
          BSSimpleList_PushFront(&v31->extendData->node.data, (int)v49); /*0x48f04c*/
        }
        v31->type = (TESForm *)v33[2]; /*0x48f054*/
        v31->countDelta = v33[1]; /*0x48f05d*/
        if ( !ContainerEntryExtraData_HasWorn(v31, 0) ) /*0x48f064*/
        {
          v31->countDelta = v33[1]; /*0x48f077*/
          ContainerExtraData_AddEntry(a2, v31, 1); /*0x48f07a*/
          goto LABEL_166; /*0x48f07f*/
        }
        v52 = (ExtraDataList *)v31->extendData->node.data; /*0x48f086*/
        if ( v52 ) /*0x48f08a*/
          sub_4234B0(v52); /*0x48f08c*/
        if ( v31->extendData ) /*0x48f091*/
          BSSimpleList_Clear(&v31->extendData->node.data); /*0x48f09b*/
        goto LABEL_165; /*0x48f0a0*/
      }
      v31->type = (TESForm *)v33[2]; /*0x48f0a8*/
      v31->countDelta = v33[1]; /*0x48f0b0*/
      v53 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48f0b3*/
      if ( v53 ) /*0x48f0c9*/
        v54 = (ExtraDataList *)ExtraDataList_constr(v53); /*0x48f0d2*/
      else
        v54 = 0; /*0x48f0d6*/
      ExtraDataList_SetOriginalReferenceExtra(v54, originalReference); /*0x48f0e7*/
      ExtraDataList_SetExtraCount(v54, LOWORD(v31->countDelta)); /*0x48f0f3*/
      BSSimpleList_PushFront(&v31->extendData->node.data, (int)v54); /*0x48f0fb*/
      ContainerExtraData_AddEntry(a2, v31, 1); /*0x48f107*/
LABEL_166:
      v59 = (int **)v59[1]; /*0x48f153*/
      result = v59; /*0x48f157*/
      if ( !v59 ) /*0x48f160*/
        return result; /*0x48f160*/
      result = v59; /*0x48ed50*/
    }
    v55 = v31->extendData; /*0x48f10e*/
    if ( v31->extendData ) /*0x48f10e*/
    {
      if ( v55->node.next ) /*0x48f114*/
      {
        do /*0x48f134*/
        {
          v56 = v55->node.next->next; /*0x48f123*/
          FormHeapFree((unsigned int)v55->node.next); /*0x48f127*/
          v55->node.next = v56; /*0x48f131*/
        }
        while ( v56 ); /*0x48f134*/
      }
      v55->node.data = 0; /*0x48f136*/
    }
LABEL_165:
    FormHeapFree((unsigned int)v31->extendData); /*0x48f13c*/
    v31->extendData = 0; /*0x48f145*/
    FormHeapFree((unsigned int)v31); /*0x48f14b*/
    goto LABEL_166; /*0x48f14b*/
  }
  return result; /*0x48f166*/
}
