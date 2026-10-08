unsigned int *__thiscall sub_48B9C0(ExtraDataList *****this, TESActorBase *a2, char a3)
{
  unsigned int *EquippedInstance; // esi
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // eax
  TESContainer_Data *data; // eax
  ExtraDataList ****v9; // eax
  char v10; // dl
  ExtraDataList ***v11; // edi
  int v12; // ebp
  ExtraDataList **v13; // eax
  ExtraDataList *v14; // esi
  int *Owner; // eax
  ExtraDataList **i; // esi
  ExtraDataList **v17; // eax
  ExtraDataList *v18; // esi
  int count; // eax
  TESForm *v20; // esi
  ExtraDataList ****v21; // ebx
  ExtraDataList ***v22; // edi
  TESForm *v23; // ebp
  ExtraDataList **v24; // esi
  ExtraDataList **v25; // eax
  ExtraDataList *v26; // esi
  ExtraDataList **v27; // eax
  ExtraDataList *v28; // esi
  int *v29; // eax
  TESObjectREFR *v30; // ecx
  TESContainer *v31; // eax
  TESForm *v32; // esi
  EntryData *EntryForForm; // edi
  unsigned int *v34; // eax
  _DWORD *v35; // eax
  TESObjectREFR *v37; // ecx
  TESContainer *v38; // eax
  SInt32 FormCount; // eax
  float v40; // [esp+8h] [ebp-18h]
  TESForm *form; // [esp+Ch] [ebp-14h]
  TESForm *item; // [esp+14h] [ebp-Ch]
  float itema; // [esp+14h] [ebp-Ch]
  TESForm *v45; // [esp+18h] [ebp-8h]
  double v46; // [esp+18h] [ebp-8h]
  TESContainer_Entry *v47; // [esp+28h] [ebp+8h]
  float EquippableItemRating; // [esp+28h] [ebp+8h]

  v40 = flt_A3B888; /*0x48b9cb*/
  form = 0; /*0x48b9dc*/
  v45 = 0; /*0x48b9e0*/
  if ( a3 ) /*0x48b9e4*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, 0xC, 0); /*0x48b9ee*/
    if ( EquippedInstance ) /*0x48b9f2*/
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) ) /*0x48b9f8*/
        return EquippedInstance; /*0x48b9ff*/
      if ( *EquippedInstance ) /*0x48ba05*/
        BSSimpleList_Clear((_DWORD *)*EquippedInstance); /*0x48ba0b*/
      FormHeapFree(*EquippedInstance); /*0x48ba13*/
      *EquippedInstance = 0; /*0x48ba19*/
      FormHeapFree((unsigned int)EquippedInstance); /*0x48ba1b*/
    }
  }
  v5 = (TESObjectREFR *)*(this + 1); /*0x48ba23*/
  if ( v5 ) /*0x48ba28*/
    Container = TESObjectREFR_GetContainer(v5); /*0x48ba2a*/
  else
    Container = 0; /*0x48ba31*/
  p_list = &Container->list; /*0x48ba33*/
  v47 = p_list; /*0x48ba39*/
  if ( p_list ) /*0x48ba3d*/
  {
    while ( 1 ) /*0x48ba49*/
    {
      data = p_list->data; /*0x48ba49*/
      if ( data ) /*0x48ba4d*/
      {
        item = (TESForm *)OblivionDynamicCast( /*0x48ba6d*/
                            data->type,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESAmmo `RTTI Type Descriptor',
                            0);
        if ( item ) /*0x48ba71*/
        {
          v9 = *this; /*0x48ba7b*/
          v10 = 1; /*0x48ba7f*/
          if ( !*this ) /*0x48ba7b*/
            goto LABEL_22; /*0x48ba7b*/
          while ( v10 ) /*0x48ba89*/
          {
            if ( *v9 && (*v9)[2] == (ExtraDataList **)item ) /*0x48ba94*/
              v10 = 0; /*0x48ba96*/
            else
              v9 = (ExtraDataList ****)v9[1]; /*0x48ba9a*/
            if ( !v9 ) /*0x48ba9f*/
              goto LABEL_22; /*0x48ba9f*/
          }
          if ( v9 ) /*0x48bacf*/
            v11 = *v9; /*0x48bad1*/
          else
LABEL_22:
            v11 = 0; /*0x48baa1*/
          v12 = 0; /*0x48baa3*/
          if ( !v11 ) /*0x48baa7*/
            goto LABEL_45; /*0x48baa7*/
          v13 = *v11; /*0x48baad*/
          if ( *v11 && (v14 = *v13) != 0 && ExtraDataList_GetOwner(*v13) ) /*0x48babb*/
            Owner = (int *)ExtraDataList_GetOwner(v14); /*0x48bac6*/
          else
            Owner = 0; /*0x48bad5*/
          if ( Owner != (int *)a2 && (int)v11[1] > 0 ) /*0x48bae0*/
          {
            for ( i = *v11; i; i = (ExtraDataList **)i[1] ) /*0x48bae2*/
            {
              if ( !*i ) /*0x48bae8*/
                break; /*0x48baec*/
              if ( ExtraDataList_GetOwner(*i) ) /*0x48baee*/
                ++v12; /*0x48baf7*/
            }
          }
          v17 = *v11; /*0x48bb01*/
          if ( !*v11 /*0x48bb30*/
            || (v18 = *v17) == 0
            || !ExtraDataList_GetOwner(*v17)
            || !ExtraDataList_GetOwner(v18)
            || v12 < (int)v11[1] + v47->data->count )
          {
            count = v47->data->count; /*0x48bb38*/
            if ( (int)v11[1] + count > 0 || count < 0 ) /*0x48bb45*/
            {
LABEL_45:
              v20 = item; /*0x48bb47*/
              itema = TESActorBase_GetEquippableItemRating(a2, item); /*0x48bb55*/
              if ( v40 < (double)itema ) /*0x48bb68*/
              {
                v40 = itema; /*0x48bb6a*/
                form = v20; /*0x48bb6e*/
              }
            }
          }
        }
      }
      v47 = v47->next; /*0x48bb7f*/
      if ( !v47 ) /*0x48bb83*/
        break; /*0x48bb83*/
      p_list = v47; /*0x48ba45*/
    }
  }
  v21 = *this; /*0x48bb8d*/
  if ( *this )
  {
    do
    {
      v22 = *v21; /*0x48bba0*/
      if ( *v21 )
      {
        v23 = (TESForm *)OblivionDynamicCast( /*0x48bbc1*/
                           v22[2],
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESAmmo `RTTI Type Descriptor',
                           0);
        if ( v23 )
        {
          v24 = *v22; /*0x48bbce*/
          if ( *v22 ) /*0x48bbce*/
          {
            while ( *v24 ) /*0x48bbd8*/
            {
              if ( sub_41DEF0((TESForm *)*v24) ) /*0x48bbda*/
              {
                if ( (int)v22[1] < 0 ) /*0x48bbf0*/
                  goto LABEL_74; /*0x48bbf0*/
                break; /*0x48bbf0*/
              }
              v24 = (ExtraDataList **)v24[1]; /*0x48bbe3*/
              if ( !v24 ) /*0x48bbe8*/
                break; /*0x48bbe8*/
            }
          }
          v25 = *v22; /*0x48bbf6*/
          if ( !*v22
            || (v26 = *v25) == 0
            || !ExtraDataList_GetOwner(*v25)
            || !ExtraDataList_GetOwner(v26)
            || ((v27 = *v22) == 0 || (v28 = *v27) == 0 || !ExtraDataList_GetOwner(*v27)
              ? (v29 = 0)
              : (v29 = (int *)ExtraDataList_GetOwner(v28)),
                v29 == (int *)a2) )
          {
            if ( v22[1] ) /*0x48bc40*/
            {
              v30 = (TESObjectREFR *)*(this + 1); /*0x48bc4a*/
              if ( v30 ) /*0x48bc4f*/
                v31 = TESObjectREFR_GetContainer(v30); /*0x48bc51*/
              else
                v31 = 0; /*0x48bc58*/
              if ( !TESContainer_HasForm(v31, v23) ) /*0x48bc5d*/
              {
                EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v23); /*0x48bc70*/
                if ( v40 < (double)EquippableItemRating ) /*0x48bc83*/
                {
                  v40 = EquippableItemRating; /*0x48bc85*/
                  v45 = v23; /*0x48bc89*/
                }
              }
            }
          }
        }
      }
LABEL_74:
      v21 = (ExtraDataList ****)v21[1]; /*0x48bc91*/
    }
    while ( v21 );
    v32 = v45; /*0x48bc9c*/
    if ( v45 ) /*0x48bca2*/
    {
      if ( v45 != form ) /*0x48bcaa*/
      {
        v46 = TESActorBase_GetEquippableItemRating(a2, v45); /*0x48bcb8*/
        if ( TESActorBase_GetEquippableItemRating(a2, form) < v46 ) /*0x48bccd*/
          form = v32; /*0x48bccf*/
      }
    }
  }
  EquippedInstance = 0; /*0x48bce7*/
  EntryForForm = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)this, form, 1, 0); /*0x48bceb*/
  if ( form ) /*0x48bced*/
  {
    v34 = (unsigned int *)FormHeapAlloc(0xCu); /*0x48bcf1*/
    if ( v34 ) /*0x48bcfd*/
    {
      v34[2] = 0; /*0x48bcff*/
      *v34 = 0; /*0x48bd02*/
      v34[1] = 0; /*0x48bd04*/
    }
    else
    {
      v34 = 0; /*0x48bd09*/
    }
    EquippedInstance = v34; /*0x48bd0b*/
  }
  if ( !EntryForForm ) /*0x48bd0f*/
  {
    if ( form ) /*0x48bd63*/
    {
      EquippedInstance[2] = (unsigned int)form; /*0x48bd65*/
      v37 = (TESObjectREFR *)*(this + 1); /*0x48bd68*/
      if ( v37 ) /*0x48bd6d*/
        v38 = TESObjectREFR_GetContainer(v37); /*0x48bd6f*/
      else
        v38 = 0; /*0x48bd76*/
      FormCount = TESContainer_GetFormCount(v38, form); /*0x48bd7b*/
      if ( FormCount < 0 ) /*0x48bd82*/
        FormCount = -FormCount; /*0x48bd84*/
      EquippedInstance[1] = FormCount; /*0x48bd86*/
    }
    return EquippedInstance; /*0x48bd86*/
  }
  EquippedInstance[2] = (unsigned int)EntryForForm->type; /*0x48bd14*/
  if ( !EntryForForm->extendData || !EntryForForm->extendData->node.data ) /*0x48bd1d*/
    return EquippedInstance; /*0x48bd8b*/
  v35 = (_DWORD *)FormHeapAlloc(8u); /*0x48bd24*/
  if ( v35 ) /*0x48bd2e*/
  {
    *v35 = 0; /*0x48bd30*/
    v35[1] = 0; /*0x48bd36*/
  }
  else
  {
    v35 = 0; /*0x48bd3f*/
  }
  *EquippedInstance = (unsigned int)v35; /*0x48bd41*/
  BSSimpleList_PushFront(v35, (int)EntryForForm->extendData->node.data); /*0x48bd4a*/
  EquippedInstance[1] = EntryForForm->countDelta; /*0x48bd53*/
  return EquippedInstance; /*0x48bd59*/
}
