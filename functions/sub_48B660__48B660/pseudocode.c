unsigned int *__thiscall sub_48B660(ExtraDataList *****this, int *a2, float a3)
{
  int *v3; // edi
  unsigned int *EquippedInstance; // esi
  TESObjectREFR *v5; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebp
  unsigned __int8 *v8; // ebx
  _DWORD *v9; // eax
  char v10; // dl
  int v11; // edi
  ExtraDataList **v12; // eax
  ExtraDataList *v13; // esi
  ExtraDataList **v14; // eax
  ExtraDataList *v15; // esi
  BSExtraDataVtbl *Owner; // eax
  int count; // eax
  int *v18; // ebx
  int v19; // esi
  unsigned __int8 *v20; // ebp
  ExtraDataList **v21; // eax
  ExtraDataList *v22; // edi
  ExtraDataList **v23; // eax
  ExtraDataList *v24; // edi
  BSExtraDataVtbl *v25; // eax
  TESObjectREFR *v26; // ecx
  TESContainer *v27; // eax
  unsigned __int8 *v28; // edi
  int v29; // eax
  int v30; // edi
  unsigned int *v31; // eax
  _DWORD *v32; // eax
  TESObjectREFR *v34; // ecx
  TESContainer *v35; // eax
  unsigned __int8 *v37; // [esp+10h] [ebp-10h]
  float v38; // [esp+14h] [ebp-Ch]
  unsigned __int8 *v39; // [esp+18h] [ebp-8h]
  double v40; // [esp+18h] [ebp-8h]
  float EquippableItemRating; // [esp+28h] [ebp+8h]
  float v42; // [esp+28h] [ebp+8h]

  v38 = flt_A3B888;
  v3 = (int *)this;
  v37 = 0;
  v39 = 0;
  if ( LOBYTE(a3) )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, 0xE, 0);
    if ( EquippedInstance )
    {
      if ( sub_41DF40(*(_BYTE **)*EquippedInstance) )
        return EquippedInstance;
      if ( *EquippedInstance )
        BSSimpleList_Clear((_DWORD *)*EquippedInstance);
      FormHeapFree(*EquippedInstance);
      *EquippedInstance = 0;
      FormHeapFree((unsigned int)EquippedInstance);
    }
  }
  v5 = (TESObjectREFR *)v3[1];
  if ( v5 )
    Container = TESObjectREFR_GetContainer(v5);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( p_list->data )
      {
        v8 = (unsigned __int8 *)OblivionDynamicCast(
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectLIGH `RTTI Type Descriptor',
                                  0);
        if ( v8 )
        {
          v9 = (_DWORD *)*v3;
          v10 = 1;
          if ( !*v3 )
            goto LABEL_35;
          while ( v10 )
          {
            if ( *v9 && *(unsigned __int8 **)(*v9 + 8) == v8 )
              v10 = 0;
            else
              v9 = (_DWORD *)v9[1];
            if ( !v9 )
              goto LABEL_35;
          }
          if ( !v9
            || (v11 = *v9) == 0
            || ((v12 = *(ExtraDataList ***)v11) == 0
             || (v13 = *v12) == 0
             || !ExtraDataList_GetOwner(*v12)
             || !ExtraDataList_GetOwner(v13)
             || ((v14 = *(ExtraDataList ***)v11) == 0 || (v15 = *v14) == 0 || !ExtraDataList_GetOwner(*v14)
               ? (Owner = 0)
               : (Owner = ExtraDataList_GetOwner(v15)),
                 Owner == (BSExtraDataVtbl *)a2))
            && ((count = p_list->data->count, count + *(_DWORD *)(v11 + 4) > 0) || count < 0) )
          {
LABEL_35:
            EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v8);
            if ( v38 < (double)EquippableItemRating )
            {
              v38 = EquippableItemRating;
              v37 = v8;
            }
          }
        }
      }
      p_list = p_list->next;
      v3 = (int *)this;
    }
    while ( p_list );
  }
  v18 = (int *)*v3;
  if ( *v3 )
  {
    do
    {
      v19 = *v18;
      if ( *v18 )
      {
        v20 = (unsigned __int8 *)OblivionDynamicCast(
                                   *(void **)(v19 + 8),
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESObjectLIGH `RTTI Type Descriptor',
                                   0);
        if ( v20 )
        {
          v21 = *(ExtraDataList ***)v19;
          if ( !*(_DWORD *)v19
            || (v22 = *v21) == 0
            || !ExtraDataList_GetOwner(*v21)
            || !ExtraDataList_GetOwner(v22)
            || ((v23 = *(ExtraDataList ***)v19) == 0 || (v24 = *v23) == 0 || !ExtraDataList_GetOwner(*v23)
              ? (v25 = 0)
              : (v25 = ExtraDataList_GetOwner(v24)),
                v25 == (BSExtraDataVtbl *)a2) )
          {
            if ( *(_DWORD *)(v19 + 4) )
            {
              v26 = (TESObjectREFR *)*(this + 1);
              if ( v26 )
                v27 = TESObjectREFR_GetContainer(v26);
              else
                v27 = 0;
              if ( !TESContainer_HasForm(v27, (TESForm *)v20) )
              {
                v42 = TESActorBase_GetEquippableItemRating(a2, v20);
                if ( v38 < (double)v42 )
                {
                  v38 = v42;
                  v39 = v20;
                }
              }
            }
          }
        }
      }
      v18 = (int *)v18[1];
    }
    while ( v18 );
    v28 = v39;
    if ( v39 )
    {
      if ( v39 != v37 )
      {
        v40 = TESActorBase_GetEquippableItemRating(a2, v39);
        if ( TESActorBase_GetEquippableItemRating(a2, v37) < v40 )
          v37 = v28;
      }
    }
    v3 = (int *)this;
  }
  ContainerExtraData_GetEntryForForm((_DWORD **)v3, (int)v37, 1, 0);
  EquippedInstance = 0;
  v30 = v29;
  if ( v37 )
  {
    v31 = (unsigned int *)FormHeapAlloc(0xCu);
    if ( v31 )
    {
      v31[2] = 0;
      *v31 = 0;
      v31[1] = 0;
    }
    else
    {
      v31 = 0;
    }
    EquippedInstance = v31;
  }
  if ( !v30 )
  {
    if ( v37 )
    {
      EquippedInstance[2] = (unsigned int)v37;
      v34 = (TESObjectREFR *)*(this + 1);
      if ( v34 )
        v35 = TESObjectREFR_GetContainer(v34);
      else
        v35 = 0;
      EquippedInstance[1] = TESContainer_GetFormCount(v35, (TESForm *)v37);
    }
    return EquippedInstance;
  }
  EquippedInstance[2] = *(_DWORD *)(v30 + 8);
  if ( !*(_DWORD *)v30 || !**(_DWORD **)v30 )
    return EquippedInstance;
  v32 = (_DWORD *)FormHeapAlloc(8u);
  if ( v32 )
  {
    *v32 = 0;
    v32[1] = 0;
  }
  else
  {
    v32 = 0;
  }
  *EquippedInstance = (unsigned int)v32;
  BSSimpleList_PushFront(v32, **(_DWORD **)v30);
  EquippedInstance[1] = *(_DWORD *)(v30 + 4);
  return EquippedInstance;
}
