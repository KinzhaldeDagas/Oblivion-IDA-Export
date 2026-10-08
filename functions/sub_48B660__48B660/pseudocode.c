unsigned int *__thiscall sub_48B660(ExtraDataList *****this, TESActorBase *a2, float a3)
{
  ExtraContainerChanges_Data *v3; // edi
  unsigned int *EquippedInstance; // esi
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebp
  TESForm *v8; // ebx
  tListEntryData *objList; // eax
  char v10; // dl
  EntryData *data; // edi
  ExtraDataList **extendData; // eax
  ExtraDataList *v13; // esi
  ExtraDataList **v14; // eax
  ExtraDataList *v15; // esi
  int *v16; // eax
  int count; // eax
  tListEntryData *next; // ebx
  EntryData *v19; // esi
  TESForm *v20; // ebp
  ExtraDataList **v21; // eax
  ExtraDataList *v22; // edi
  ExtraDataList **v23; // eax
  ExtraDataList *v24; // edi
  int *v25; // eax
  TESObjectREFR *v26; // ecx
  TESContainer *v27; // eax
  TESForm *v28; // edi
  EntryData *EntryForForm; // edi
  unsigned int *v30; // eax
  _DWORD *v31; // eax
  TESObjectREFR *v33; // ecx
  TESContainer *v34; // eax
  TESForm *form; // [esp+10h] [ebp-10h]
  float v37; // [esp+14h] [ebp-Ch]
  TESForm *item; // [esp+18h] [ebp-8h]
  double itema; // [esp+18h] [ebp-8h]
  float EquippableItemRating; // [esp+28h] [ebp+8h]
  float v41; // [esp+28h] [ebp+8h]

  v37 = flt_A3B888; /*0x48b66f*/
  v3 = (ExtraContainerChanges_Data *)this; /*0x48b674*/
  form = 0; /*0x48b67a*/
  item = 0; /*0x48b682*/
  if ( LOBYTE(a3) ) /*0x48b68a*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, 0xE, 0); /*0x48b695*/
    if ( EquippedInstance ) /*0x48b699*/
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) ) /*0x48b69f*/
        return EquippedInstance; /*0x48b6a6*/
      if ( *EquippedInstance ) /*0x48b6ac*/
        BSSimpleList_Clear((_DWORD *)*EquippedInstance); /*0x48b6b2*/
      FormHeapFree(*EquippedInstance); /*0x48b6ba*/
      *EquippedInstance = 0; /*0x48b6c0*/
      FormHeapFree((unsigned int)EquippedInstance); /*0x48b6c6*/
    }
  }
  owner = v3->owner; /*0x48b6ce*/
  if ( owner ) /*0x48b6d3*/
    Container = TESObjectREFR_GetContainer(owner); /*0x48b6d5*/
  else
    Container = 0; /*0x48b6dc*/
  p_list = &Container->list; /*0x48b6e0*/
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( p_list->data )
      {
        v8 = (TESForm *)OblivionDynamicCast( /*0x48b712*/
                          p_list->data->type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESObjectLIGH `RTTI Type Descriptor',
                          0);
        if ( v8 )
        {
          objList = v3->objList; /*0x48b71f*/
          v10 = 1; /*0x48b723*/
          if ( !v3->objList ) /*0x48b71f*/
            goto LABEL_35; /*0x48b71f*/
          while ( v10 ) /*0x48b732*/
          {
            if ( objList->node.data && objList->node.data->type == v8 ) /*0x48b73d*/
              v10 = 0; /*0x48b73f*/
            else
              objList = (tListEntryData *)objList->node.next; /*0x48b743*/
            if ( !objList ) /*0x48b748*/
              goto LABEL_35; /*0x48b748*/
          }
          if ( !objList
            || (data = objList->node.data) == 0
            || ((extendData = (ExtraDataList **)data->extendData) == 0
             || (v13 = *extendData) == 0
             || !ExtraDataList_GetOwner(*extendData)
             || !ExtraDataList_GetOwner(v13)
             || ((v14 = (ExtraDataList **)data->extendData) == 0 || (v15 = *v14) == 0 || !ExtraDataList_GetOwner(*v14)
               ? (v16 = 0)
               : (v16 = (int *)ExtraDataList_GetOwner(v15)),
                 v16 == (int *)a2))
            && ((count = p_list->data->count, count + data->countDelta > 0) || count < 0) )
          {
LABEL_35:
            EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v8); /*0x48b7b2*/
            if ( v37 < (double)EquippableItemRating ) /*0x48b7cf*/
            {
              v37 = EquippableItemRating; /*0x48b7d1*/
              form = v8; /*0x48b7d5*/
            }
          }
        }
      }
      p_list = p_list->next; /*0x48b7dd*/
      v3 = (ExtraContainerChanges_Data *)this; /*0x48b7e2*/
    }
    while ( p_list );
  }
  next = v3->objList; /*0x48b7ec*/
  if ( v3->objList )
  {
    do
    {
      v19 = next->node.data; /*0x48b7f6*/
      if ( next->node.data )
      {
        v20 = (TESForm *)OblivionDynamicCast( /*0x48b817*/
                           v19->type,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESObjectLIGH `RTTI Type Descriptor',
                           0);
        if ( v20 )
        {
          v21 = (ExtraDataList **)v19->extendData; /*0x48b824*/
          if ( !v19->extendData
            || (v22 = *v21) == 0
            || !ExtraDataList_GetOwner(*v21)
            || !ExtraDataList_GetOwner(v22)
            || ((v23 = (ExtraDataList **)v19->extendData) == 0 || (v24 = *v23) == 0 || !ExtraDataList_GetOwner(*v23)
              ? (v25 = 0)
              : (v25 = (int *)ExtraDataList_GetOwner(v24)),
                v25 == (int *)a2) )
          {
            if ( v19->countDelta ) /*0x48b86e*/
            {
              v26 = (TESObjectREFR *)*(this + 1); /*0x48b878*/
              if ( v26 ) /*0x48b87d*/
                v27 = TESObjectREFR_GetContainer(v26); /*0x48b87f*/
              else
                v27 = 0; /*0x48b886*/
              if ( !TESContainer_HasForm(v27, v20) ) /*0x48b88b*/
              {
                v41 = TESActorBase_GetEquippableItemRating(a2, v20); /*0x48b89e*/
                if ( v37 < (double)v41 ) /*0x48b8b1*/
                {
                  v37 = v41; /*0x48b8b3*/
                  item = v20; /*0x48b8b7*/
                }
              }
            }
          }
        }
      }
      next = (tListEntryData *)next->node.next; /*0x48b8bf*/
    }
    while ( next );
    v28 = item; /*0x48b8ca*/
    if ( item ) /*0x48b8d0*/
    {
      if ( item != form ) /*0x48b8d8*/
      {
        itema = TESActorBase_GetEquippableItemRating(a2, item); /*0x48b8e6*/
        if ( TESActorBase_GetEquippableItemRating(a2, form) < itema ) /*0x48b8fb*/
          form = v28; /*0x48b8fd*/
      }
    }
    v3 = (ExtraContainerChanges_Data *)this; /*0x48b901*/
  }
  EquippedInstance = 0; /*0x48b91b*/
  EntryForForm = ContainerExtraData_GetEntryForForm(v3, form, 1, 0); /*0x48b91f*/
  if ( form ) /*0x48b921*/
  {
    v30 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48b925*/
    if ( v30 ) /*0x48b92f*/
    {
      v30[2] = 0; /*0x48b931*/
      *v30 = 0; /*0x48b934*/
      v30[1] = 0; /*0x48b936*/
    }
    else
    {
      v30 = 0; /*0x48b93b*/
    }
    EquippedInstance = v30; /*0x48b93d*/
  }
  if ( !EntryForForm ) /*0x48b941*/
  {
    if ( form ) /*0x48b98c*/
    {
      EquippedInstance[2] = (unsigned int)form; /*0x48b992*/
      v33 = (TESObjectREFR *)*(this + 1); /*0x48b995*/
      if ( v33 ) /*0x48b99a*/
        v34 = TESObjectREFR_GetContainer(v33); /*0x48b99c*/
      else
        v34 = 0; /*0x48b9a3*/
      EquippedInstance[1] = TESContainer_GetFormCount(v34, form); /*0x48b9ad*/
    }
    return EquippedInstance; /*0x48b9ad*/
  }
  EquippedInstance[2] = (unsigned int)EntryForForm->type; /*0x48b946*/
  if ( !EntryForForm->extendData || !EntryForForm->extendData->node.data ) /*0x48b94f*/
    return EquippedInstance; /*0x48b9b3*/
  v31 = (_DWORD *)FormHeapAlloc(8u); /*0x48b955*/
  if ( v31 ) /*0x48b95f*/
  {
    *v31 = 0; /*0x48b961*/
    v31[1] = 0; /*0x48b963*/
  }
  else
  {
    v31 = 0; /*0x48b968*/
  }
  *EquippedInstance = (unsigned int)v31; /*0x48b96a*/
  BSSimpleList_PushFront(v31, (int)EntryForForm->extendData->node.data); /*0x48b973*/
  EquippedInstance[1] = EntryForForm->countDelta; /*0x48b97d*/
  return EquippedInstance; /*0x48b983*/
}
