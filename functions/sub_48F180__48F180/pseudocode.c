void __thiscall sub_48F180(unsigned int ***this)
{
  unsigned int **v1; // ebx
  unsigned int *v2; // ebp
  unsigned int i; // eax
  ExtraDataList *v4; // edi
  _DWORD *v5; // ecx
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // esi
  ExtraContainerChanges_Data *ContainerChanges; // eax
  char v9; // bl
  tListEntryData *objList; // eax
  char v11; // dl
  EntryData *data; // eax
  ExtraDataList **extendData; // eax
  ExtraDataList **v14; // ecx
  ExtraContainerChanges_Data *v15; // eax
  tListEntryData *next; // eax
  char v17; // dl
  EntryData *v18; // eax
  ExtraDataList **v19; // eax
  ExtraDataList **v20; // ecx
  _DWORD *v21; // esi
  int v22; // edi
  unsigned int **v23; // [esp+4h] [ebp-4h]

  v1 = *this;
  v23 = *this;
  while ( v1 )
  {
    v2 = *v1;
    if ( !*v1 )
      break;
    for ( i = *v2; *v2; v1 = v23 )
    {
      v4 = *(ExtraDataList **)i;
      if ( !*(_DWORD *)i )
        break;
      v5 = *(_DWORD **)(i + 4);
      if ( v5 )
      {
        *(_DWORD *)(i + 4) = v5[1];
        *(_DWORD *)i = *v5;
        FormHeapFree((unsigned int)v5);
      }
      else
      {
        *(_DWORD *)i = 0;
      }
      if ( v4 )
      {
        v6 = (TESObjectREFR *)sub_41E790(v4);
        v7 = v6;
        if ( v6 )
        {
          if ( TESObjectREFR_GetContainer(v6) )
          {
            sub_4234B0(v4);
            if ( (unsigned int)BaseExtraList_Count(v4) < 2 )
            {
              if ( ExtraDataList_GetExtraCount(v4) )
                sub_41F620(v4);
            }
            BSSimpleList_Remove((_DWORD *)*v2, (int)v4);
            ContainerChanges = ExtraDataList_GetContainerChanges(&v7->member.baseExtraList);
            v9 = 1;
            if ( ContainerChanges )
            {
              objList = ContainerChanges->objList;
              v11 = 1;
              if ( objList )
              {
                while ( v11 )
                {
                  if ( objList->node.data && objList->node.data->type == (TESForm *)v2[2] )
                    v11 = 0;
                  else
                    objList = (tListEntryData *)objList->node.next;
                  if ( !objList )
                    goto LABEL_32;
                }
                data = objList->node.data;
                if ( data )
                {
                  extendData = (ExtraDataList **)data->extendData;
                  if ( extendData )
                  {
                    v14 = extendData;
                    do
                    {
                      if ( !*v14 )
                        break;
                      if ( !v9 )
                        break;
                      if ( *v14 == v4 )
                        v9 = 0;
                      else
                        v14 = (ExtraDataList **)v14[1];
                    }
                    while ( v14 );
                  }
                }
              }
            }
LABEL_32:
            v15 = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
            if ( v15 )
            {
              next = v15->objList;
              v17 = 1;
              if ( next )
              {
                while ( v17 )
                {
                  if ( next->node.data && next->node.data->type == (TESForm *)v2[2] )
                    v17 = 0;
                  else
                    next = (tListEntryData *)next->node.next;
                  if ( !next )
                    goto LABEL_50;
                }
                v18 = next->node.data;
                if ( v18 )
                {
                  v19 = (ExtraDataList **)v18->extendData;
                  if ( v19 )
                  {
                    v20 = v19;
                    do
                    {
                      if ( !*v20 )
                        break;
                      if ( !v9 )
                        goto LABEL_54;
                      if ( *v20 == v4 )
                        v9 = 0;
                      else
                        v20 = (ExtraDataList **)v20[1];
                    }
                    while ( v20 );
                  }
                }
              }
            }
LABEL_50:
            if ( !v9 )
              goto LABEL_54;
LABEL_53:
            (*(void (__thiscall **)(ExtraDataList *, int))v4->vtbl)(v4, 1);
            goto LABEL_54;
          }
          sub_4234B0(v4);
          if ( !ExtraDataList_GetExtraScript(v4) )
            goto LABEL_53;
        }
      }
LABEL_54:
      i = *v2;
    }
    BSSimpleList_Remove(v1, (int)v2);
    v21 = (_DWORD *)*v2;
    if ( *v2 )
    {
      if ( v21[1] )
      {
        do
        {
          v22 = *(_DWORD *)(v21[1] + 4);
          FormHeapFree(v21[1]);
          v21[1] = v22;
        }
        while ( v22 );
      }
      *v21 = 0;
    }
    FormHeapFree(*v2);
    *v2 = 0;
    FormHeapFree((unsigned int)v2);
  }
}
