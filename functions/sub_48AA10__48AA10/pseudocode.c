// Mutate ExtraContainerChanges from a live world reference. The routine resolves sourceRef->GetBaseForm(), copies the reference ExtraDataList, and inserts that base form. Consequently, ordinary pickup of an AMMO-backed thrown projectile returns proxy AMMO unless the companion intercepts this distinct path.
void __thiscall ContainerExtraData_AddItemFromWorldReference(
        ExtraContainerChanges_Data *this,
        TESObjectREFR *sourceRef,
        int count,
        int unusedArg,
        bool forceWorn)
{
  TESObjectREFR *owner; // ecx
  ExtraDataList *v7; // edi
  TESForm *v9; // eax
  tListEntryData *objList; // ecx
  TESForm *v11; // ebp
  char v12; // al
  unsigned int *data; // ebx
  _DWORD *v14; // eax
  ExtraContainerChanges_Data *v15; // ebp
  TESObjectREFR *v16; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v18; // eax
  TESForm *v19; // ebp
  _DWORD *v20; // eax
  unsigned int v21; // ebp
  bool v22; // zf
  char v23; // bl
  ExtraDataList *v24; // esi
  int v25; // eax
  int *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // ebp
  TESForm *v29; // eax
  _DWORD *v30; // ebp
  _DWORD *v31; // eax
  ExtraDataList *v32; // [esp+1Ch] [ebp-18h]
  int **v34; // [esp+38h] [ebp+4h]

  owner = this->owner; /*0x48aa3d*/
  v7 = 0; /*0x48aa46*/
  this->totalWeight = kTerrainLODQuadRayDirectionZ; /*0x48aa48*/
  if ( owner ) /*0x48aa4d*/
    owner->vtbl->super.MarkAsModified((TESForm *)owner, 0x8000000); /*0x48aa59*/
  v9 = sourceRef->vtbl->GetBaseForm(sourceRef); /*0x48aa69*/
  objList = this->objList; /*0x48aa6b*/
  v11 = v9; /*0x48aa6f*/
  v12 = 1; /*0x48aa71*/
  if ( !this->objList ) /*0x48aa6b*/
    goto LABEL_10; /*0x48aa6b*/
  while ( v12 ) /*0x48aa77*/
  {
    if ( objList->node.data && objList->node.data->type == v11 ) /*0x48aa86*/
      v12 = 0; /*0x48aa88*/
    else
      objList = (tListEntryData *)objList->node.next; /*0x48aa8c*/
    if ( !objList ) /*0x48aa91*/
      goto LABEL_10; /*0x48aa91*/
  }
  if ( objList ) /*0x48ab19*/
  {
    data = (unsigned int *)objList->node.data; /*0x48ab1f*/
    v34 = (int **)objList->node.data; /*0x48ab21*/
  }
  else
  {
LABEL_10:
    v34 = 0; /*0x48aa93*/
    data = 0; /*0x48aa97*/
  }
  sub_41F620(&sourceRef->member.baseExtraList.vtbl); /*0x48aa9e*/
  v14 = (_DWORD *)FormHeapAlloc(0x14u); /*0x48aaa5*/
  if ( v14 ) /*0x48aab7*/
    v7 = (ExtraDataList *)ExtraDataList_constr(v14); /*0x48aac0*/
  v32 = v7; /*0x48aace*/
  if ( sourceRef->member.baseExtraList.members.m_data /*0x48ab03*/
    && (ExtraDataList_CopyListForContainer(v7, &sourceRef->member.baseExtraList, 0),
        sub_423A30(v7, sourceRef->member.scale),
        ExtraDataList_GetOwner(v7) == (BSExtraDataVtbl *)reference) )
  {
    v15 = this; /*0x48ab05*/
    if ( (PlayerCharacter *)this->owner == reference ) /*0x48ab0c*/
      ExtraDataList_RemoveOwner(v7); /*0x48ab10*/
  }
  else
  {
    v15 = this; /*0x48ab2a*/
  }
  if ( v15->owner->vtbl->IsActor(v15->owner) /*0x48ab75*/
    && (v16 = v15->owner) != 0
    && (vtbl = v16[1].vtbl) != 0
    && (v18 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))vtbl->super.super.InitializeComponent + 0x3D))(
                vtbl,
                0)) != 0
    && (v19 = *(TESForm **)(v18 + 8), v19 == sourceRef->vtbl->GetBaseForm(sourceRef))
    || forceWorn )
  {
    SetWorn(v7, 1, 0); /*0x48ab7d*/
  }
  if ( !data ) /*0x48ab84*/
  {
    v28 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48ad31*/
    if ( v28 ) /*0x48ad48*/
    {
      v29 = sourceRef->vtbl->GetBaseForm(sourceRef);// Reference-add path resolves sourceRef->GetBaseForm() again for the EntryData path; instance extras do not replace this form key. /*0x48ad55*/
      v30 = ContainerEntryExtraData_constr(v28, (int)v29, count); /*0x48ad5f*/
    }
    else
    {
      v30 = 0; /*0x48ad63*/
    }
    if ( count > 1 ) /*0x48ad70*/
      ExtraDataList_SetExtraCount(v7, count); /*0x48ad75*/
    if ( TESObjectREFR_IsPersistent(sourceRef) ) /*0x48ad7c*/
    {
      ExtraDataList_SetReferencePointer(v7, sourceRef); /*0x48ad88*/
      if ( !*v30 ) /*0x48ad8d*/
      {
        v31 = (_DWORD *)FormHeapAlloc(8u); /*0x48ad95*/
        if ( v31 ) /*0x48ad9f*/
        {
          *v31 = 0; /*0x48ada1*/
          v31[1] = 0; /*0x48ada7*/
LABEL_83:
          *v30 = v31; /*0x48ade7*/
          goto LABEL_84; /*0x48ade7*/
        }
        goto LABEL_82; /*0x48ad9f*/
      }
      goto LABEL_84; /*0x48ad91*/
    }
    if ( v7 ) /*0x48adb2*/
    {
      if ( v7->members.m_data ) /*0x48adb6*/
      {
        if ( !*v30 ) /*0x48adcb*/
        {
          v31 = (_DWORD *)FormHeapAlloc(8u); /*0x48add2*/
          if ( v31 ) /*0x48addc*/
          {
            *v31 = 0; /*0x48adde*/
            v31[1] = 0; /*0x48ade0*/
            goto LABEL_83; /*0x48ade3*/
          }
LABEL_82:
          v31 = 0; /*0x48ade5*/
          goto LABEL_83; /*0x48ade5*/
        }
LABEL_84:
        BSSimpleList_PushFront((_DWORD *)*v30, (int)v7); /*0x48adea*/
        goto LABEL_85; /*0x48adee*/
      }
      (*(void (__thiscall **)(ExtraDataList *, int))v7->vtbl)(v7, 1); /*0x48adc3*/
      v32 = 0; /*0x48adc5*/
    }
LABEL_85:
    BSSimpleList_PushBack(&this->objList->node.data, (int)v30); /*0x48adf3*/
    goto LABEL_86; /*0x48adfa*/
  }
  data[1] += count; /*0x48ab8e*/
  if ( !TESObjectREFR_IsPersistent(sourceRef) ) /*0x48ab9a*/
  {
    v21 = *data; /*0x48abf1*/
    v22 = *data == 0; /*0x48abf3*/
    v23 = 1; /*0x48abf5*/
    if ( !v22 ) /*0x48abf7*/
    {
      do /*0x48ac58*/
      {
        v24 = *(ExtraDataList **)v21; /*0x48ac00*/
        if ( !*(_DWORD *)v21 ) /*0x48ac00*/
          break; /*0x48ac05*/
        if ( !v23 ) /*0x48ac09*/
          goto LABEL_54; /*0x48ac09*/
        if ( v7 && !ExtraDataList_CompareListForContainer(v7, *(ExtraDataList **)v21) ) /*0x48ac1d*/
        {
          LOWORD(v25) = count + ExtraDataList_GetExtraCount(v24); /*0x48ac2b*/
          ExtraDataList_SetExtraCount(v24, v25); /*0x48ac33*/
          if ( !v24->members.m_data ) /*0x48ac38*/
          {
            BSSimpleList_Remove(*v34, (int)v24); /*0x48ac45*/
            (*(void (__thiscall **)(ExtraDataList *, int))v24->vtbl)(v24, 1); /*0x48ac52*/
          }
          v23 = 0; /*0x48ac54*/
        }
        else
        {
          v21 = *(_DWORD *)(v21 + 4); /*0x48ac1f*/
        }
      }
      while ( v21 ); /*0x48ac58*/
      if ( v23 ) /*0x48ac5c*/
        goto LABEL_47; /*0x48ac5c*/
LABEL_54:
      if ( !v7 ) /*0x48aca8*/
        goto LABEL_56; /*0x48aca8*/
      goto LABEL_55; /*0x48aca8*/
    }
LABEL_47:
    if ( v7 && !v7->members.m_data ) /*0x48ac66*/
    {
LABEL_55:
      (*(void (__thiscall **)(ExtraDataList *, int))v7->vtbl)(v7, 1); /*0x48acaa*/
LABEL_56:
      v32 = 0; /*0x48acb4*/
      goto LABEL_57; /*0x48acb4*/
    }
    if ( !*v34 ) /*0x48ac6c*/
    {
      v26 = (int *)FormHeapAlloc(8u); /*0x48ac73*/
      if ( v26 ) /*0x48ac7d*/
      {
        *v26 = 0; /*0x48ac7f*/
        v26[1] = 0; /*0x48ac85*/
        *v34 = v26; /*0x48ac8f*/
        BSSimpleList_PushFront(v26, (int)v7); /*0x48ac91*/
LABEL_57:
        data = (unsigned int *)v34; /*0x48acbc*/
        goto LABEL_58; /*0x48acbc*/
      }
      *v34 = 0; /*0x48ac9a*/
    }
    BSSimpleList_PushFront(*v34, (int)v7); /*0x48ac9f*/
    goto LABEL_57; /*0x48aca4*/
  }
  ExtraDataList_SetReferencePointer(v7, sourceRef); /*0x48ab9f*/
  if ( count > 1 ) /*0x48aba7*/
    ExtraDataList_SetExtraCount(v7, count); /*0x48abac*/
  if ( *data ) /*0x48abb1*/
    goto LABEL_35; /*0x48abb4*/
  v20 = (_DWORD *)FormHeapAlloc(8u); /*0x48abb8*/
  if ( !v20 ) /*0x48abc2*/
  {
    *data = 0; /*0x48abe2*/
LABEL_35:
    BSSimpleList_PushFront((_DWORD *)*data, (int)v7); /*0x48abe4*/
    goto LABEL_58; /*0x48abec*/
  }
  *v20 = 0; /*0x48abc4*/
  v20[1] = 0; /*0x48abca*/
  *data = (unsigned int)v20; /*0x48abd4*/
  BSSimpleList_PushFront(v20, (int)v7); /*0x48abd6*/
LABEL_58:
  v27 = (_DWORD *)*data; /*0x48acc0*/
  if ( *data && !v27[1] && !*v27 && !data[1] ) /*0x48acdd*/
  {
    BSSimpleList_Remove((int *)this->objList, (int)data); /*0x48acee*/
    if ( v32 ) /*0x48acf9*/
      (*(void (__thiscall **)(ExtraDataList *, int))v32->vtbl)(v32, 1); /*0x48ad01*/
    if ( *data ) /*0x48ad03*/
      BSSimpleList_Clear((_DWORD *)*data); /*0x48ad09*/
    FormHeapFree(*data); /*0x48ad11*/
    *data = 0; /*0x48ad17*/
    FormHeapFree((unsigned int)data); /*0x48ad1d*/
    return; /*0x48ad25*/
  }
LABEL_86:
  if ( v32 ) /*0x48ae05*/
  {
    if ( !v32->members.m_data ) /*0x48ae07*/
      (*(void (__stdcall **)(int))v32->vtbl)(1); /*0x48ae13*/
  }
}
