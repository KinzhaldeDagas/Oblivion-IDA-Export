// Canonical form-based container add: item, optional instance ExtraDataList, and signed count. All four external callers enter only at this head; the formerly split interior blocks are one logical routine ending in retn 0x0C. A proxy-to-source conversion hook here covers actor-hit/form adds but not ordinary world-reference pickup.
void __thiscall ContainerExtraData_AddItem(
        ExtraContainerChanges_Data *this,
        TESForm *item,
        ExtraDataList *extraList,
        int count)
{
  ExtraContainerChanges_Data *v4; // edi
  ExtraDataList *v5; // ebx
  tListEntryData *objList; // eax
  char v7; // dl
  TESForm ***data; // ebp
  TESObjectREFR *owner; // esi
  int v10; // eax
  int v11; // esi
  ExtraDataList *v12; // edi
  int v13; // eax
  EntryData *v14; // esi
  TESObjectREFR *ReferencePointer; // eax
  _DWORD *v16; // eax
  tListVoid *v17; // eax
  TESForm **v18; // esi
  TESForm **v19; // edi
  char v20; // bl
  ExtraDataList *v21; // esi
  int v22; // eax
  TESObjectREFR *v23; // ecx
  TESContainer *Container; // eax
  TESForm **v25; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  TESForm **v28; // eax
  SInt32 FormCount; // eax
  int v30; // ecx
  int *v31; // eax

  v4 = this; /*0x48f7e5*/
  v5 = extraList; /*0x48f7eb*/
  this->totalWeight = kTerrainLODQuadRayDirectionZ; /*0x48f7f7*/
  if ( extraList ) /*0x48f7fa*/
  {
    if ( !BaseExtraList_Count(extraList) ) /*0x48f7fe*/
    {
      ((void (__thiscall *)(ExtraDataList *, int))*extraList->vtbl)(extraList, 1); /*0x48f80f*/
      extraList = 0; /*0x48f811*/
      v5 = 0; /*0x48f819*/
    }
  }
  if ( !count ) /*0x48f822*/
    count = 1; /*0x48f824*/
  objList = v4->objList; /*0x48f82c*/
  v7 = 1; /*0x48f830*/
  if ( !v4->objList ) /*0x48f82c*/
    goto LABEL_13; /*0x48f82c*/
  while ( v7 ) /*0x48f836*/
  {
    if ( objList->node.data && objList->node.data->type == item ) /*0x48f849*/
      v7 = 0; /*0x48f84b*/
    else
      objList = (tListEntryData *)objList->node.next; /*0x48f84f*/
    if ( !objList ) /*0x48f854*/
      goto LABEL_13; /*0x48f854*/
  }
  if ( objList ) /*0x48f97d*/
    data = (TESForm ***)objList->node.data; /*0x48f983*/
  else
LABEL_13:
    data = 0; /*0x48f856*/
  if ( v5 ) /*0x48f85a*/
  {
    if ( ExtraDataList_GetOwner(v5) == (BSExtraDataVtbl *)reference && (PlayerCharacter *)v4->owner == reference ) /*0x48f870*/
      ExtraDataList_RemoveOwner(v5); /*0x48f874*/
  }
  if ( v4->owner->vtbl->IsActor(v4->owner) ) /*0x48f884*/
  {
    owner = v4->owner; /*0x48f88a*/
    if ( owner ) /*0x48f88f*/
    {
      if ( owner[1].vtbl ) /*0x48f891*/
      {
        if ( !sub_45A500(g_TESSaveLoadGame) && (g_TESSaveLoadGame->flags & 0x1000) == 0 ) /*0x48f8b4*/
        {
          v10 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))owner[1].vtbl->super.super.InitializeComponent /*0x48f8c3*/
                 + 0x3D))(
                  owner[1].vtbl,
                  0);
          v11 = v10; /*0x48f8c5*/
          if ( v10 ) /*0x48f8c9*/
          {
            if ( *(TESForm **)(v10 + 8) == item ) /*0x48f8d2*/
            {
              v12 = **(ExtraDataList ***)v10; /*0x48f8d8*/
              LOWORD(v13) = count + ExtraDataList_GetExtraCount(v12); /*0x48f8df*/
              ExtraDataList_SetExtraCount(v12, v13); /*0x48f8e7*/
              v4 = this; /*0x48f8f3*/
              *(_DWORD *)(v11 + 4) += count; /*0x48f8f9*/
            }
          }
        }
      }
    }
  }
  v14 = 0; /*0x48f8fc*/
  if ( v5 ) /*0x48f900*/
  {
    if ( ExtraDataList_GetReferencePointer(v5) ) /*0x48f904*/
    {
      ReferencePointer = ExtraDataList_GetReferencePointer(v5); /*0x48f90f*/
      if ( ReferencePointer ) /*0x48f916*/
        ExtraDataList_SetReferencePointer(&ReferencePointer->member.baseExtraList, v4->owner); /*0x48f91f*/
    }
  }
  if ( !data ) /*0x48f926*/
  {
    v16 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48f92a*/
    if ( v16 ) /*0x48f93c*/
      v14 = (EntryData *)ContainerEntryExtraData_constr(v16, (int)item, count); /*0x48f94f*/
    if ( !v14->extendData ) /*0x48f951*/
    {
      v17 = (tListVoid *)FormHeapAlloc(8u); /*0x48f960*/
      if ( v17 ) /*0x48f96a*/
      {
        v17->node.data = 0; /*0x48f96c*/
        v17->node.next = 0; /*0x48f972*/
      }
      else
      {
        v17 = 0; /*0x48f98a*/
      }
      v14->extendData = v17; /*0x48f98c*/
    }
    BSSimpleList_PushFront(&v14->extendData->node.data, (int)v5); /*0x48f991*/
    ContainerExtraData_AddEntry(v4, v14, 1); /*0x48f99b*/
    return; /*0x48f9a0*/
  }
  if ( (int)data[1] >= 0 ) /*0x48f9a8*/
    goto LABEL_48; /*0x48f9a8*/
  if ( v5 ) /*0x48f9ac*/
  {
    if ( !ExtraDataList_GetOwner(v5) ) /*0x48f9b4*/
    {
      v18 = *data; /*0x48f9bd*/
      if ( *data ) /*0x48f9bd*/
      {
        if ( BSSimpleList_Count(*data) && sub_41DEF0(*v18) ) /*0x48f9d1*/
        {
          (*(void (__thiscall **)(ExtraDataList *, int))v5->vtbl)(v5, 1); /*0x48f9e2*/
          goto LABEL_63; /*0x48f9e4*/
        }
      }
    }
LABEL_48:
    if ( !v5 ) /*0x48f9eb*/
      goto LABEL_63; /*0x48f9eb*/
    if ( !*data ) /*0x48f9f6*/
    {
      v28 = (TESForm **)FormHeapAlloc(8u); /*0x48faf4*/
      if ( v28 ) /*0x48fafe*/
      {
        *v28 = 0; /*0x48fb00*/
        v28[1] = 0; /*0x48fb06*/
        *data = v28; /*0x48fb10*/
        BSSimpleList_PushFront(v28, (int)v5); /*0x48fb13*/
      }
      else
      {
        *data = 0; /*0x48fb22*/
        BSSimpleList_PushFront(0, (int)v5); /*0x48fb25*/
      }
      goto LABEL_63; /*0x48fb18*/
    }
    v19 = *data; /*0x48f9fc*/
    v20 = 1; /*0x48f9fe*/
    do /*0x48fa52*/
    {
      v21 = (ExtraDataList *)*v19; /*0x48fa00*/
      if ( !*v19 ) /*0x48fa00*/
        break; /*0x48fa04*/
      if ( !v20 ) /*0x48fa08*/
        goto LABEL_70; /*0x48fa08*/
      if ( ExtraDataList_CompareListForContainer(extraList, (ExtraDataList *)*v19) )// False means stack-compatible; merge count into the existing list. True means distinct and continues scanning. /*0x48fa13*/
      {
        v19 = (TESForm **)v19[1]; /*0x48fa1c*/
      }
      else
      {
        LOWORD(v22) = count + ExtraDataList_GetExtraCount(v21); /*0x48fa28*/
        ExtraDataList_SetExtraCount(v21, v22); /*0x48fa30*/
        if ( !v21->members.m_data ) /*0x48fa35*/
        {
          BSSimpleList_Remove((int *)*data, (int)v21); /*0x48fa3f*/
          (*(void (__thiscall **)(ExtraDataList *, int))v21->vtbl)(v21, 1); /*0x48fa4c*/
        }
        v20 = 0; /*0x48fa4e*/
      }
    }
    while ( v19 ); /*0x48fa52*/
    if ( v20 ) /*0x48fa56*/
    {
      if ( !extraList->members.m_data ) /*0x48fa5c*/
      {
LABEL_61:
        ((void (__stdcall *)(int))*extraList->vtbl)(1); /*0x48fa62*/
        goto LABEL_62; /*0x48fa6a*/
      }
      if ( !*data ) /*0x48fa85*/
      {
        v25 = (TESForm **)FormHeapAlloc(8u); /*0x48fa8d*/
        if ( v25 ) /*0x48fa97*/
        {
          *v25 = 0; /*0x48fa99*/
          v25[1] = 0; /*0x48fa9f*/
          *data = v25; /*0x48faa9*/
          BSSimpleList_PushFront(v25, (int)extraList); /*0x48faac*/
          goto LABEL_62; /*0x48fab1*/
        }
        *data = 0; /*0x48fab5*/
      }
      BSSimpleList_PushFront(*data, (int)extraList); /*0x48fabc*/
      goto LABEL_62; /*0x48fac1*/
    }
LABEL_70:
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x48fac3*/
    if ( !OpenMenuTile ) /*0x48fad2*/
      goto LABEL_61; /*0x48fad2*/
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x48fad6*/
    if ( !ParentMenu || !*(_BYTE *)(ParentMenu + 0x61) ) /*0x48fadf*/
      goto LABEL_61; /*0x48fae3*/
LABEL_62:
    v4 = this; /*0x48fa6c*/
  }
LABEL_63:
  v23 = v4->owner; /*0x48fa70*/
  if ( v23 ) /*0x48fa75*/
    Container = TESObjectREFR_GetContainer(v23); /*0x48fa7b*/
  else
    Container = 0; /*0x48fb2f*/
  FormCount = TESContainer_GetFormCount(Container, item); /*0x48fb38*/
  v30 = (int)data[1]; /*0x48fb3d*/
  if ( v30 >= 0 || FormCount > 0 ) /*0x48fb46*/
    data[1] = (TESForm **)(count + v30); /*0x48fb57*/
  else
    data[1] = (TESForm **)count; /*0x48fb4c*/
  v31 = (int *)*data; /*0x48fb5a*/
  if ( *data ) /*0x48fb5a*/
  {
    if ( !v31[1] && !*v31 && !data[1] ) /*0x48fb6c*/
    {
      BSSimpleList_Remove((int *)v4->objList, (int)data); /*0x48fb75*/
      if ( *data ) /*0x48fb7a*/
        BSSimpleList_Clear(*data); /*0x48fb81*/
      FormHeapFree((unsigned int)*data); /*0x48fb8a*/
      *data = 0; /*0x48fb90*/
      FormHeapFree((unsigned int)data); /*0x48fb97*/
    }
  }
}
