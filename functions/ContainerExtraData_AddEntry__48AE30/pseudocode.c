// Merge or append a complete EntryData into ExtraContainerChanges. Native ABI is two stack arguments (entry, destroyEntryIfMerged) and retn 0x08; all 14 callers pass exactly two. If a matching form entry exists, it merges counts/extra-data chains and conditionally destroys the supplied entry; otherwise it appends that entry directly. Return register has no contract.
void __thiscall ContainerExtraData_AddEntry(
        ExtraContainerChanges_Data *this,
        EntryData *entry,
        bool destroyEntryIfMerged)
{
  unsigned int *v3; // ebx
  ExtraContainerChanges_Data *v4; // edi
  TESObjectREFR *owner; // ecx
  EntryData *EntryForForm; // esi
  tListVoid *extendData; // eax
  tListVoid *v8; // eax
  ExtraDataList *data; // edi
  char v10; // bl
  ExtraDataList *v11; // esi
  int ExtraCount; // ebx
  tListVoid *v13; // eax
  _DWORD *p_data; // esi
  _DWORD *v15; // eax
  EntryData *v16; // eax
  unsigned int *v17; // esi
  tListVoid *v18; // eax
  tListVoid *next; // [esp+18h] [ebp-14h]
  TESForm *form; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  TESForm *type; // [esp+28h] [ebp-4h]

  v3 = (unsigned int *)entry; /*0x48ae3a*/
  v4 = this; /*0x48ae40*/
  this->totalWeight = kTerrainLODQuadRayDirectionZ; /*0x48ae44*/
  if ( entry ) /*0x48ae4d*/
  {
    owner = this->owner; /*0x48ae53*/
    if ( owner ) /*0x48ae58*/
      owner->vtbl->super.MarkAsModified((TESForm *)owner, 0x8000000); /*0x48ae64*/
    EntryForForm = ContainerExtraData_GetEntryForForm(v4, entry->type, 1, 0); /*0x48ae75*/
    type = entry->type; /*0x48ae7a*/
    extendData = entry->extendData; /*0x48ae7e*/
    v22 = (int)EntryForForm; /*0x48ae82*/
    if ( entry->extendData ) /*0x48ae7e*/
    {
      if ( !extendData->node.next && !extendData->node.data ) /*0x48ae8d*/
      {
        FormHeapFree((unsigned int)extendData); /*0x48ae92*/
        entry->extendData = 0; /*0x48ae9a*/
      }
    }
    if ( EntryForForm ) /*0x48ae9e*/
    {
      EntryForForm->countDelta += entry->countDelta; /*0x48aea7*/
      v8 = entry->extendData; /*0x48aeaa*/
      if ( !entry->extendData || v8->node.next || v8->node.data ) /*0x48aeb5*/
      {
        next = EntryForForm->extendData; /*0x48aec1*/
        form = (TESForm *)entry->extendData; /*0x48aec5*/
        if ( v8 ) /*0x48aec9*/
        {
          while ( 1 ) /*0x48aed9*/
          {
            data = (ExtraDataList *)v8->node.data; /*0x48aed9*/
            if ( !v8->node.data ) /*0x48aedd*/
            {
LABEL_41:
              v4 = this; /*0x48afc2*/
              break; /*0x48afc2*/
            }
            v10 = 1; /*0x48aee5*/
            if ( ExtraDataList_GetReferencePointer((ExtraDataList *)v8->node.data) ) /*0x48aee7*/
              ExtraDataList_SetReferencePointer(data, this->owner); /*0x48aefa*/
            if ( !next ) /*0x48af03*/
              goto LABEL_28; /*0x48af03*/
            do /*0x48af56*/
            {
              v11 = (ExtraDataList *)next->node.data; /*0x48af09*/
              if ( !next->node.data ) /*0x48af09*/
                break; /*0x48af0d*/
              if ( !v10 ) /*0x48af11*/
                goto ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next; /*0x48af11*/
              if ( !data || ExtraDataList_CompareListForContainer(data, (ExtraDataList *)next->node.data) )// False means these two ExtraDataLists are stack-compatible; then native code adds their ExtraCount values. True advances to the next candidate. /*0x48af1e*/
              {
                next = (tListVoid *)next->node.next; /*0x48af4e*/
              }
              else
              {
                ExtraCount = (unsigned __int16)ExtraDataList_GetExtraCount(v11); /*0x48af30*/
                LOWORD(ExtraCount) = ExtraDataList_GetExtraCount(data) + ExtraCount; /*0x48af38*/
                ExtraDataList_SetExtraCount(v11, ExtraCount); /*0x48af3e*/
                v10 = 0; /*0x48af43*/
              }
            }
            while ( next ); /*0x48af56*/
            if ( v10 ) /*0x48af5a*/
            {
              EntryForForm = (EntryData *)v22; /*0x48af5c*/
LABEL_28:
              if ( !EntryForForm->extendData ) /*0x48af60*/
              {
                v13 = (tListVoid *)FormHeapAlloc(8u); /*0x48af66*/
                if ( v13 ) /*0x48af70*/
                {
                  v13->node.data = 0; /*0x48af72*/
                  v13->node.next = 0; /*0x48af74*/
                }
                else
                {
                  v13 = 0; /*0x48af79*/
                }
                EntryForForm->extendData = v13; /*0x48af7b*/
              }
              p_data = &EntryForForm->extendData->node.data; /*0x48af7f*/
              if ( data ) /*0x48af81*/
              {
                if ( *p_data ) /*0x48af83*/
                {
                  v15 = (_DWORD *)FormHeapAlloc(8u); /*0x48af89*/
                  if ( v15 ) /*0x48af93*/
                  {
                    *v15 = *p_data; /*0x48af97*/
                    v15[1] = 0; /*0x48af99*/
                  }
                  else
                  {
                    v15 = 0; /*0x48af9e*/
                  }
                  v15[1] = p_data[1]; /*0x48afa3*/
                  p_data[1] = v15; /*0x48afa6*/
                }
                *p_data = data; /*0x48afa9*/
              }
            }
ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next:
            v3 = (unsigned int *)entry; /*0x48afab*/
            form = *(TESForm **)&form->member.type; /*0x48afb8*/
            if ( !form ) /*0x48afbc*/
              goto LABEL_41; /*0x48afbc*/
            v8 = (tListVoid *)form; /*0x48aed1*/
            EntryForForm = (EntryData *)v22; /*0x48aed5*/
          }
        }
        if ( destroyEntryIfMerged ) /*0x48afcb*/
        {
          if ( *v3 ) /*0x48afcd*/
            BSSimpleList_Clear((_DWORD *)*v3); /*0x48afd3*/
          FormHeapFree(*v3); /*0x48afdb*/
          *v3 = 0; /*0x48afe1*/
          FormHeapFree((unsigned int)v3); /*0x48afe3*/
          v3 = 0; /*0x48afeb*/
        }
      }
      v16 = ContainerExtraData_GetEntryForForm(v4, type, 1, 0); /*0x48aff7*/
      v17 = (unsigned int *)v16; /*0x48affc*/
      if ( v16 ) /*0x48b000*/
      {
        v18 = v16->extendData; /*0x48b002*/
        if ( (!*v17 || !v18->node.next && !v18->node.data) && !v17[1] ) /*0x48b011*/
        {
          BSSimpleList_Remove((int *)this->objList, (int)v17); /*0x48b01d*/
          if ( *v17 ) /*0x48b022*/
            BSSimpleList_Clear((_DWORD *)*v17); /*0x48b028*/
          FormHeapFree(*v17); /*0x48b030*/
          *v17 = 0; /*0x48b036*/
          FormHeapFree((unsigned int)v17); /*0x48b038*/
          if ( v3 ) /*0x48b042*/
          {
            if ( *v3 ) /*0x48b044*/
              BSSimpleList_Clear((_DWORD *)*v3); /*0x48b04a*/
            FormHeapFree(*v3); /*0x48b052*/
            *v3 = 0; /*0x48b058*/
            FormHeapFree((unsigned int)v3); /*0x48b05a*/
          }
        }
      }
    }
    else
    {
      BSSimpleList_PushBack(&v4->objList->node.data, (int)entry); /*0x48b06f*/
    }
  }
}
