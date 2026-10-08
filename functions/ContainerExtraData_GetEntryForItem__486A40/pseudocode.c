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
  char HasDefaultContainerExtraList; // al
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

  owner = this->owner; /*0x486a6d*/
  p_list = 0; /*0x486a72*/
  v74 = 0; /*0x486a76*/
  if ( owner ) /*0x486a7a*/
  {
    if ( TESObjectREFR_GetContainer(owner) ) /*0x486a7c*/
    {
      v5 = this->owner; /*0x486a85*/
      if ( v5 ) /*0x486a8a*/
        Container = TESObjectREFR_GetContainer(v5); /*0x486a8c*/
      else
        Container = 0; /*0x486a93*/
      p_list = &Container->list; /*0x486a95*/
      v74 = &Container->list; /*0x486a98*/
    }
  }
  v69 = 0; /*0x486a9e*/
  v70 = 0; /*0x486aa2*/
  if ( !p_list )
  {
LABEL_105:
    objList = this->objList; /*0x486e5b*/
    if ( !this->objList ) /*0x486e67*/
      return v70; /*0x486e67*/
    v34 = a2; /*0x486e6d*/
    while ( 1 )
    {
      data = objList->node.data; /*0x486e75*/
      result = v70; /*0x486e79*/
      if ( !objList->node.data || v70 ) /*0x486e85*/
        return result; /*0x486e85*/
      v36 = this->owner; /*0x486e8f*/
      FormCount = 0; /*0x486e92*/
      v76 = 0; /*0x486e96*/
      if ( v36 && TESObjectREFR_GetContainer(v36) ) /*0x486e9c*/
      {
        if ( !data ) /*0x486ea7*/
          goto LABEL_218; /*0x486ea7*/
        v38 = this->owner; /*0x486eb1*/
        if ( v38 ) /*0x486eb6*/
          v39 = TESObjectREFR_GetContainer(v38); /*0x486eb8*/
        else
          v39 = 0; /*0x486ebf*/
        FormCount = TESContainer_GetFormCount(v39, data->type); /*0x486ecc*/
        v76 = FormCount; /*0x486ed0*/
        if ( FormCount < 0 ) /*0x486ed4*/
        {
          extendData = (ExtraDataList **)data->extendData; /*0x486ed6*/
          if ( data->extendData ) /*0x486ed6*/
          {
            while ( *extendData ) /*0x486ee4*/
            {
              if ( ExtraDataList_HasWorn(*extendData, 0) ) /*0x486ee8*/
              {
                ExtraDataList_SetExtraCount((ExtraDataList *)data->extendData->node.data, -FormCount); /*0x486f05*/
                break; /*0x486f05*/
              }
              extendData = (ExtraDataList **)extendData[1]; /*0x486ef1*/
              if ( !extendData ) /*0x486ef6*/
                break; /*0x486ef6*/
            }
          }
        }
      }
      if ( !data ) /*0x486f0c*/
        goto LABEL_218; /*0x486f0c*/
      if ( data->countDelta <= 0 && FormCount >= 0 ) /*0x486f1a*/
        goto LABEL_218; /*0x486f1a*/
      v41 = (TESForm **)data->extendData; /*0x486f20*/
      if ( (!data->extendData || !*v41 || !sub_41DEF0(*v41)) && FormCount >= 0 )
      {
        v42 = this->owner; /*0x486f3e*/
        if ( v42 )
        {
          if ( TESObjectREFR_GetContainer(v42) )
          {
            v43 = this->owner; /*0x486f4e*/
            v44 = v43 ? TESObjectREFR_GetContainer(v43) : 0;
            if ( TESContainer_HasForm(v44, data->type) ) /*0x486f64*/
              goto LABEL_218; /*0x486f6b*/
          }
        }
      }
      if ( data->extendData /*0x486f91*/
        && data->extendData->node.data
        && (int)v34 < (int)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data) )
      {
        v45 = (ExtraDataList **)data->extendData; /*0x486f97*/
        if ( data->extendData ) /*0x486f97*/
        {
          do /*0x487033*/
          {
            v46 = *v45; /*0x486fa1*/
            if ( !*v45 ) /*0x486fa1*/
              break; /*0x486fa5*/
            if ( v70 ) /*0x486fb0*/
              break; /*0x486fb0*/
            IsExtraDefaultForContainer = ExtraDataList_IsExtraDefaultForContainer(v46, 0); /*0x486fba*/
            if ( v69 == v34 ) /*0x486fc3*/
            {
              if ( !IsExtraDefaultForContainer && ExtraDataList_GetExtraCount(v46) > 0 ) /*0x486fd3*/
              {
                v48 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486fdc*/
                if ( v48 ) /*0x486fef*/
                {
                  ExtraCount = ExtraDataList_GetExtraCount(v46); /*0x486ff3*/
                  v50 = ContainerEntryExtraData_constr(v48, (int)data->type, ExtraCount); /*0x487002*/
                }
                else
                {
                  v50 = 0; /*0x487009*/
                }
                v70 = v50; /*0x487016*/
                BSSimpleList_PushFront((_DWORD *)*v50, (int)v46); /*0x48701a*/
                v34 = a2; /*0x48701f*/
              }
            }
            else if ( !IsExtraDefaultForContainer ) /*0x487027*/
            {
              v69 = (TESForm *)((char *)v69 + 1); /*0x487029*/
            }
            v45 = (ExtraDataList **)v45[1]; /*0x48702e*/
          }
          while ( v45 ); /*0x487033*/
        }
      }
      else
      {
        countDelta = data->countDelta; /*0x48703e*/
        if ( countDelta > InventoryEntryData_Cleanup((ExtraDataList ***)data) ) /*0x48704a*/
        {
          v52 = (ExtraDataList **)data->extendData; /*0x48705c*/
          v53 = 0; /*0x48705e*/
          v73 = 0; /*0x487062*/
          if ( data->extendData ) /*0x48705c*/
          {
            while ( *v52 ) /*0x48706c*/
            {
              if ( ExtraDataList_IsExtraDefaultForContainer_all(*v52) ) /*0x48706e*/
              {
                if ( ContainerEntryExtraData_HasWorn(data, 0) ) /*0x4870f8*/
                {
                  if ( !sub_484700((int *)data) ) /*0x487103*/
                    v69 = (TESForm *)((char *)v69 + 1); /*0x48710c*/
                }
                if ( v69 == v34 ) /*0x487115*/
                {
                  v58 = (_DWORD *)FormHeapAlloc(0xCu); /*0x487119*/
                  if ( v58 ) /*0x48712f*/
                    v59 = ContainerEntryExtraData_constr(v58, (int)data->type, 0); /*0x48713e*/
                  else
                    v59 = 0; /*0x487142*/
                  v70 = v59; /*0x48714e*/
                  v59[1] = sub_484780((ExtraDataList ***)data); /*0x487157*/
                  v60 = (ExtraDataList **)data->extendData; /*0x48715a*/
                  if ( data->extendData ) /*0x48715a*/
                  {
                    do /*0x48717f*/
                    {
                      v61 = (int)*v60; /*0x487160*/
                      if ( !*v60 ) /*0x487160*/
                        break; /*0x487165*/
                      if ( ExtraDataList_IsExtraDefaultForContainer_all(*v60) ) /*0x487169*/
                        BSSimpleList_PushBack((_DWORD *)*v59, v61); /*0x487175*/
                      v60 = (ExtraDataList **)v60[1]; /*0x48717a*/
                    }
                    while ( v60 ); /*0x48717f*/
                  }
                }
                if ( sub_484780((ExtraDataList ***)data) < v76 + data->countDelta ) /*0x487191*/
                {
                  v73 = sub_484780((ExtraDataList ***)data); /*0x48719c*/
                  if ( sub_484700((int *)data) ) /*0x4871a0*/
                  {
                    v69 = (TESForm *)((char *)v69 + 1); /*0x4871a9*/
                  }
                  else if ( !ContainerEntryExtraData_HasWorn(data, 0) ) /*0x4871b4*/
                  {
                    v69 = (TESForm *)((char *)v69 + 1); /*0x4871bd*/
                  }
                }
                goto LABEL_189; /*0x4871ae*/
              }
              v52 = (ExtraDataList **)v52[1]; /*0x487077*/
              if ( !v52 ) /*0x48707c*/
                break; /*0x48707c*/
            }
          }
          v54 = data->countDelta; /*0x48707e*/
          if ( v54 > InventoryEntryData_Cleanup((ExtraDataList ***)data) /*0x487099*/
            && InventoryEntryData_Cleanup((ExtraDataList ***)data) > 0 )
          {
            v55 = (ExtraDataList **)data->extendData; /*0x48709f*/
            if ( data->extendData ) /*0x48709f*/
            {
              do /*0x4870c9*/
              {
                v56 = *v55; /*0x4870a5*/
                if ( !*v55 ) /*0x4870a5*/
                  break; /*0x4870a9*/
                if ( !ExtraDataList_IsExtraDefaultForContainer(v56, 0) ) /*0x4870af*/
                  v53 += ExtraDataList_GetExtraCount(v56); /*0x4870c2*/
                v55 = (ExtraDataList **)v55[1]; /*0x4870c4*/
              }
              while ( v55 ); /*0x4870c9*/
              v73 = v53; /*0x4870cb*/
            }
            v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data)); /*0x4870d6*/
            if ( ContainerEntryExtraData_HasWorn(data, 0) ) /*0x4870de*/
            {
              v57 = sub_484EC0((int *)data, 0); /*0x4870ef*/
LABEL_187:
              if ( !v57 ) /*0x4871da*/
                v69 = (TESForm *)((char *)v69 + 0xFFFFFFFF); /*0x4871dc*/
            }
            else if ( ContainerEntryExtraData_HasWorn(data, 1) ) /*0x4871c6*/
            {
              v57 = sub_484EC0((int *)data, 1); /*0x4871d3*/
              goto LABEL_187; /*0x4871d3*/
            }
          }
LABEL_189:
          if ( ContainerEntryExtraData_HasWorn(data, 0) ) /*0x4871e5*/
          {
            v62 = data->countDelta; /*0x4871ee*/
            if ( v62 > 1 && v73 != v62 && !EntryData_HasDefaultContainerExtraList((int *)data) ) /*0x4871fe*/
              v69 = (TESForm *)((char *)v69 + 1); /*0x487207*/
          }
          v34 = a2; /*0x48720c*/
          if ( v69 != a2 || v70 || data->countDelta - v73 <= 0 ) /*0x487230*/
          {
            v69 = (TESForm *)((char *)v69 + 1); /*0x487311*/
          }
          else
          {
            v63 = (_DWORD *)FormHeapAlloc(0xCu); /*0x487238*/
            if ( v63 ) /*0x48724e*/
              v64 = ContainerEntryExtraData_constr(v63, (int)data->type, 0); /*0x48725d*/
            else
              v64 = 0; /*0x487261*/
            v64[1] = data->countDelta - v73; /*0x487268*/
            v70 = v64; /*0x487276*/
            if ( data->extendData ) /*0x48726b*/
            {
              HasDefaultContainerExtraList = EntryData_HasDefaultContainerExtraList((int *)data); /*0x487282*/
              v66 = (ExtraDataList **)data->extendData; /*0x487289*/
              if ( HasDefaultContainerExtraList ) /*0x48728b*/
              {
                for ( ; v66; v66 = (ExtraDataList **)v66[1] ) /*0x48728f*/
                {
                  v67 = *v66; /*0x487295*/
                  if ( !*v66 ) /*0x487295*/
                    break; /*0x487299*/
                  if ( !ExtraDataList_HasWorn(v67, 0) ) /*0x4872a3*/
                  {
                    if ( ExtraDataList_IsExtraDefaultForContainer(v67, 1) ) /*0x4872b0*/
                    {
                      if ( !ExtraDataList_IsExtraDefaultForContainer_all(v67) ) /*0x4872bb*/
                        BSSimpleList_PushBack((_DWORD *)*v64, (int)v67); /*0x4872c7*/
                    }
                  }
                }
              }
              else
              {
                for ( ; v66; v66 = (ExtraDataList **)v66[1] ) /*0x4872d7*/
                {
                  v68 = *v66; /*0x4872e0*/
                  if ( !*v66 ) /*0x4872e0*/
                    break; /*0x4872e4*/
                  if ( !ExtraDataList_HasWorn(v68, 0) ) /*0x4872ea*/
                  {
                    if ( ExtraDataList_IsExtraDefaultForContainer(v68, 1) ) /*0x4872f7*/
                      BSSimpleList_PushBack((_DWORD *)*v64, (int)v68); /*0x487303*/
                  }
                }
              }
            }
          }
          goto LABEL_218; /*0x4872d1*/
        }
        v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup((ExtraDataList ***)data)); /*0x487053*/
      }
LABEL_218:
      objList = (tListEntryData *)objList->node.next; /*0x487316*/
      if ( !objList ) /*0x487323*/
        return v70; /*0x487323*/
    }
  }
  do /*0x486aae*/
  {
    p_count = &p_list->data->count; /*0x486aae*/
    if ( !p_list->data ) /*0x486aae*/
      break; /*0x486aae*/
    result = v70; /*0x486ab8*/
    if ( v70 ) /*0x486abe*/
      return result; /*0x486abe*/
    v9 = p_count[1]; /*0x486ac4*/
    if ( *(_BYTE *)(v9 + 4) == 0x2B && v9 ) /*0x486acf*/
      goto LABEL_103; /*0x486acf*/
    next = this->objList; /*0x486ad9*/
    v11 = 1; /*0x486add*/
    if ( !this->objList ) /*0x486ad9*/
      goto LABEL_19; /*0x486ad9*/
    while ( v11 ) /*0x486ae3*/
    {
      if ( next->node.data && next->node.data->type == (TESForm *)v9 ) /*0x486aee*/
        v11 = 0; /*0x486af0*/
      else
        next = (tListEntryData *)next->node.next; /*0x486af4*/
      if ( !next ) /*0x486af9*/
        goto LABEL_19; /*0x486af9*/
    }
    if ( next ) /*0x486b23*/
      v12 = (ExtraDataList ***)next->node.data; /*0x486b25*/
    else
LABEL_19:
      v12 = 0; /*0x486afb*/
    v13 = *p_count; /*0x486afd*/
    v14 = *p_count; /*0x486b00*/
    v72 = *p_count; /*0x486b04*/
    if ( *p_count < 0 ) /*0x486b08*/
    {
      v14 = -v14; /*0x486b0a*/
      v72 = v14; /*0x486b0c*/
    }
    if ( v12 && v14 <= 0 ) /*0x486b16*/
    {
      v70 = 0; /*0x486b18*/
    }
    else
    {
      if ( v13 >= 0 ) /*0x486b2b*/
      {
        if ( v12 ) /*0x486b70*/
        {
          if ( (int)v12[1] + v13 <= 0 || (v17 = *v12) != 0 && *v17 && sub_41DEF0((TESForm *)*v17) ) /*0x486b87*/
          {
LABEL_39:
            v70 = 0; /*0x486b90*/
            goto LABEL_103; /*0x486b94*/
          }
        }
      }
      else if ( v12 ) /*0x486b2f*/
      {
        goto LABEL_39; /*0x486b2f*/
      }
      if ( v69 != a2 || v12 && InventoryEntryData_Cleanup(v12) ) /*0x486b45*/
      {
        if ( v12 ) /*0x486c60*/
        {
          v22 = 0; /*0x486c66*/
          if ( *v12 ) /*0x486c68*/
            v22 = InventoryEntryData_Cleanup(v12); /*0x486c6e*/
          if ( (int)a2 < (int)((char *)v69 + v22) ) /*0x486c7d*/
          {
            for ( i = *v12; i; v69 = (TESForm *)((char *)v69 + 1) ) /*0x486c83*/
            {
              v24 = *i; /*0x486c90*/
              if ( !*i ) /*0x486c90*/
                break; /*0x486c94*/
              if ( v70 ) /*0x486c9f*/
                break; /*0x486c9f*/
              if ( v69 == a2 ) /*0x486cad*/
              {
                if ( ExtraDataList_IsExtraDefaultForContainer(v24, 0) ) /*0x486cb3*/
                {
                  v69 = (TESForm *)((char *)v69 + 0xFFFFFFFF); /*0x486d17*/
                }
                else
                {
                  v25 = ExtraDataList_GetExtraCount(v24); /*0x486cc7*/
                  v26 = v12[1]; /*0x486cca*/
                  if ( v25 > (int)v26 + v72 ) /*0x486cd2*/
                    v25 = (int)v26 + v72; /*0x486cd4*/
                  v27 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486cd9*/
                  if ( v27 ) /*0x486cef*/
                    v28 = ContainerEntryExtraData_constr(v27, (int)v12[2], v25); /*0x486cf8*/
                  else
                    v28 = 0; /*0x486cff*/
                  v70 = v28; /*0x486d0c*/
                  BSSimpleList_PushFront((_DWORD *)*v28, (int)v24); /*0x486d10*/
                }
              }
              i = (ExtraDataList **)i[1]; /*0x486d1c*/
            }
            goto LABEL_103; /*0x486d26*/
          }
          v69 = (TESForm *)((char *)v69 + InventoryEntryData_Cleanup(v12)); /*0x486d38*/
          if ( !sub_4845D0((int *)v12) /*0x486d8f*/
            && ContainerEntryExtraData_HasWorn((EntryData *)v12, 0)
            && ((int)v12[1] <= 0 || *((_BYTE *)v12[2] + 4) == 0x22)
            || sub_4845D0((int *)v12) >= (int)v12[1] + *p_count
            || sub_4846D0((TESForm *)v12) && (int)v12[1] > *p_count )
          {
            goto LABEL_103; /*0x486d8f*/
          }
          if ( v69 == a2 ) /*0x486d9d*/
          {
            v29 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486da5*/
            if ( v29 ) /*0x486daf*/
            {
              v29[2] = 0; /*0x486db3*/
              *v29 = 0; /*0x486db6*/
              v29[1] = 0; /*0x486db8*/
              v30 = (_DWORD **)v29; /*0x486dbb*/
            }
            else
            {
              v30 = 0; /*0x486dbf*/
            }
            v70 = v30; /*0x486dc5*/
            v30[1] = (ExtraDataList **)((char *)v12[1] + *p_count - InventoryEntryData_Cleanup(v12)); /*0x486dd6*/
            v30[2] = (_DWORD *)p_count[1]; /*0x486dde*/
            sub_484F20((int *)v12); /*0x486de1*/
            if ( v31 ) /*0x486de8*/
            {
              if ( *v12 ) /*0x486dea*/
              {
                if ( BSSimpleList_Count(*v12) ) /*0x486df0*/
                {
                  if ( !*v30 ) /*0x486df9*/
                  {
                    v32 = (_DWORD *)FormHeapAlloc(8u); /*0x486dff*/
                    if ( v32 ) /*0x486e09*/
                    {
                      *v32 = 0; /*0x486e0b*/
                      v32[1] = 0; /*0x486e0d*/
                    }
                    else
                    {
                      v32 = 0; /*0x486e12*/
                    }
                    *v30 = v32; /*0x486e14*/
                  }
                  for ( j = (int *)*v12; j; j = (int *)j[1] ) /*0x486e1a*/
                  {
                    if ( !*j ) /*0x486e20*/
                      break; /*0x486e24*/
                    BSSimpleList_PushFront(*v30, *j); /*0x486e29*/
                  }
                }
              }
            }
            goto LABEL_103; /*0x486e33*/
          }
        }
        v69 = (TESForm *)((char *)v69 + 1); /*0x486e37*/
      }
      else
      {
        v15 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486b54*/
        if ( v15 ) /*0x486b5e*/
        {
          v15[2] = 0; /*0x486b62*/
          *v15 = 0; /*0x486b65*/
          v15[1] = 0; /*0x486b67*/
          v16 = (_DWORD **)v15; /*0x486b6a*/
        }
        else
        {
          v16 = 0; /*0x486b99*/
        }
        v70 = v16; /*0x486b9d*/
        if ( v12 ) /*0x486ba1*/
        {
          if ( *p_count >= 0 ) /*0x486ba7*/
            v16[1] = (ExtraDataList **)((char *)v12[1] + *p_count - InventoryEntryData_Cleanup(v12)); /*0x486bc2*/
          else
            v16[1] = (ExtraDataList **)((char *)v12[1] + v14); /*0x486bae*/
        }
        else
        {
          v18 = *p_count; /*0x486bc7*/
          if ( *p_count < 0 ) /*0x486bcc*/
            v18 = -v18; /*0x486bce*/
          v16[1] = (_DWORD *)v18; /*0x486bd0*/
        }
        v16[2] = (_DWORD *)p_count[1]; /*0x486bd8*/
        if ( v12 ) /*0x486bdb*/
        {
          sub_484F20((int *)v12); /*0x486be3*/
          if ( v19 ) /*0x486bea*/
          {
            if ( *v12 ) /*0x486bf0*/
            {
              if ( BSSimpleList_Count(*v12) ) /*0x486bfa*/
              {
                if ( !*v16 ) /*0x486c07*/
                {
                  v20 = (_DWORD *)FormHeapAlloc(8u); /*0x486c0e*/
                  if ( v20 ) /*0x486c18*/
                  {
                    *v20 = 0; /*0x486c1a*/
                    v20[1] = 0; /*0x486c20*/
                  }
                  else
                  {
                    v20 = 0; /*0x486c29*/
                  }
                  *v16 = v20; /*0x486c2b*/
                }
                for ( k = (int *)*v12; k; k = (int *)k[1] ) /*0x486c31*/
                {
                  if ( !*k ) /*0x486c40*/
                    break; /*0x486c44*/
                  BSSimpleList_PushFront(*v16, *k); /*0x486c4d*/
                }
              }
            }
          }
        }
      }
    }
LABEL_103:
    v74 = v74->next; /*0x486e3c*/
    p_list = v74; /*0x486e40*/
  }
  while ( v74 ); /*0x486aae*/
  if ( !v70 ) /*0x486e55*/
    goto LABEL_105; /*0x486e55*/
  return v70; /*0x48732d*/
}
