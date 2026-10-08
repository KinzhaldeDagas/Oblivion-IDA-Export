void __thiscall sub_48F180(unsigned int ***this)
{
  int *v1; // ebx
  unsigned int v2; // ebp
  int *i; // eax
  ExtraDataList *v4; // edi
  int *v5; // ecx
  TESObjectREFR *OriginalReference; // eax
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
  int *v21; // esi
  int v22; // edi
  int *v23; // [esp+4h] [ebp-4h]

  v1 = (int *)*this; /*0x48f182*/
  v23 = (int *)*this; /*0x48f188*/
  if ( *this ) /*0x48f188*/
  {
    do /*0x48f378*/
    {
      v2 = *v1; /*0x48f197*/
      if ( !*v1 ) /*0x48f197*/
        break; /*0x48f19b*/
      for ( i = *(int **)v2; *(_DWORD *)v2; v1 = v23 ) /*0x48f1a1*/
      {
        v4 = (ExtraDataList *)*i; /*0x48f1b0*/
        if ( !*i ) /*0x48f1b4*/
          break; /*0x48f1b4*/
        v5 = (int *)i[1]; /*0x48f1ba*/
        if ( v5 ) /*0x48f1bf*/
        {
          i[1] = v5[1]; /*0x48f1c4*/
          *i = *v5; /*0x48f1ca*/
          FormHeapFree((unsigned int)v5); /*0x48f1cc*/
        }
        else
        {
          *i = 0; /*0x48f1d6*/
        }
        if ( v4 ) /*0x48f1de*/
        {
          OriginalReference = (TESObjectREFR *)ExtraDataList_GetOriginalReference(v4); /*0x48f1e6*/
          v7 = OriginalReference; /*0x48f1eb*/
          if ( OriginalReference ) /*0x48f1ef*/
          {
            if ( TESObjectREFR_GetContainer(OriginalReference) ) /*0x48f1f7*/
            {
              sub_4234B0(v4); /*0x48f206*/
              if ( (unsigned int)BaseExtraList_Count(v4) < 2 ) /*0x48f215*/
              {
                if ( ExtraDataList_GetExtraCount(v4) ) /*0x48f219*/
                  sub_41F620(v4); /*0x48f225*/
              }
              BSSimpleList_Remove(*(int **)v2, (int)v4); /*0x48f22e*/
              ContainerChanges = ExtraDataList_GetContainerChanges(&v7->member.baseExtraList); /*0x48f236*/
              v9 = 1; /*0x48f23d*/
              if ( ContainerChanges ) /*0x48f23f*/
              {
                objList = ContainerChanges->objList; /*0x48f241*/
                v11 = 1; /*0x48f248*/
                if ( objList ) /*0x48f24a*/
                {
                  while ( v11 ) /*0x48f252*/
                  {
                    if ( objList->node.data && objList->node.data->type == *(TESForm **)(v2 + 8) ) /*0x48f25d*/
                      v11 = 0; /*0x48f25f*/
                    else
                      objList = (tListEntryData *)objList->node.next; /*0x48f263*/
                    if ( !objList ) /*0x48f268*/
                      goto LABEL_32; /*0x48f268*/
                  }
                  data = objList->node.data; /*0x48f270*/
                  if ( data ) /*0x48f274*/
                  {
                    extendData = (ExtraDataList **)data->extendData; /*0x48f276*/
                    if ( extendData ) /*0x48f27a*/
                    {
                      v14 = extendData; /*0x48f27c*/
                      do /*0x48f297*/
                      {
                        if ( !*v14 ) /*0x48f280*/
                          break; /*0x48f284*/
                        if ( !v9 ) /*0x48f288*/
                          break; /*0x48f288*/
                        if ( *v14 == v4 ) /*0x48f28c*/
                          v9 = 0; /*0x48f28e*/
                        else
                          v14 = (ExtraDataList **)v14[1]; /*0x48f292*/
                      }
                      while ( v14 ); /*0x48f297*/
                    }
                  }
                }
              }
LABEL_32:
              v15 = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x48f299*/
              if ( v15 ) /*0x48f2a9*/
              {
                next = v15->objList; /*0x48f2ab*/
                v17 = 1; /*0x48f2b2*/
                if ( next ) /*0x48f2b4*/
                {
                  while ( v17 ) /*0x48f2b8*/
                  {
                    if ( next->node.data && next->node.data->type == *(TESForm **)(v2 + 8) ) /*0x48f2c3*/
                      v17 = 0; /*0x48f2c5*/
                    else
                      next = (tListEntryData *)next->node.next; /*0x48f2c9*/
                    if ( !next ) /*0x48f2ce*/
                      goto LABEL_50; /*0x48f2ce*/
                  }
                  v18 = next->node.data; /*0x48f2d6*/
                  if ( v18 ) /*0x48f2da*/
                  {
                    v19 = (ExtraDataList **)v18->extendData; /*0x48f2dc*/
                    if ( v19 ) /*0x48f2e0*/
                    {
                      v20 = v19; /*0x48f2e2*/
                      do /*0x48f2fb*/
                      {
                        if ( !*v20 ) /*0x48f2e4*/
                          break; /*0x48f2e8*/
                        if ( !v9 ) /*0x48f2ec*/
                          goto LABEL_54; /*0x48f2ec*/
                        if ( *v20 == v4 ) /*0x48f2f0*/
                          v9 = 0; /*0x48f2f2*/
                        else
                          v20 = (ExtraDataList **)v20[1]; /*0x48f2f6*/
                      }
                      while ( v20 ); /*0x48f2fb*/
                    }
                  }
                }
              }
LABEL_50:
              if ( !v9 ) /*0x48f2ff*/
                goto LABEL_54; /*0x48f2ff*/
LABEL_53:
              (*(void (__thiscall **)(ExtraDataList *, int))v4->vtbl)(v4, 1); /*0x48f313*/
              goto LABEL_54; /*0x48f31b*/
            }
            sub_4234B0(v4); /*0x48f303*/
            if ( !ExtraDataList_GetExtraScript(v4) ) /*0x48f30a*/
              goto LABEL_53; /*0x48f311*/
          }
        }
LABEL_54:
        i = *(int **)v2; /*0x48f31d*/
      }
      BSSimpleList_Remove(v1, v2); /*0x48f32c*/
      v21 = *(int **)v2; /*0x48f334*/
      if ( *(_DWORD *)v2 ) /*0x48f334*/
      {
        if ( v21[1] ) /*0x48f33b*/
        {
          do /*0x48f355*/
          {
            v22 = *(_DWORD *)(v21[1] + 4); /*0x48f344*/
            FormHeapFree(v21[1]); /*0x48f348*/
            v21[1] = v22; /*0x48f352*/
          }
          while ( v22 ); /*0x48f355*/
        }
        *v21 = 0; /*0x48f357*/
      }
      FormHeapFree(*(_DWORD *)v2); /*0x48f361*/
      *(_DWORD *)v2 = 0; /*0x48f367*/
      FormHeapFree(v2); /*0x48f36e*/
    }
    while ( v1 ); /*0x48f378*/
  }
}
