unsigned int *__thiscall sub_48B9C0(ExtraDataList *****this, int *a2, char a3)
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
  unsigned __int8 *v20; // esi
  ExtraDataList ****v21; // ebx
  ExtraDataList ***v22; // edi
  unsigned __int8 *v23; // ebp
  ExtraDataList **v24; // esi
  ExtraDataList **v25; // eax
  ExtraDataList *v26; // esi
  ExtraDataList **v27; // eax
  ExtraDataList *v28; // esi
  int *v29; // eax
  TESObjectREFR *v30; // ecx
  TESContainer *v31; // eax
  unsigned __int8 *v32; // esi
  int v33; // eax
  int v34; // edi
  unsigned int *v35; // eax
  _DWORD *v36; // eax
  TESObjectREFR *v38; // ecx
  TESContainer *v39; // eax
  SInt32 FormCount; // eax
  float v41; // [esp+8h] [ebp-18h]
  unsigned __int8 *v42; // [esp+Ch] [ebp-14h]
  unsigned __int8 *v44; // [esp+14h] [ebp-Ch]
  float EquippableItemRating; // [esp+14h] [ebp-Ch]
  unsigned __int8 *v46; // [esp+18h] [ebp-8h]
  double v47; // [esp+18h] [ebp-8h]
  TESContainer_Entry *v48; // [esp+28h] [ebp+8h]
  float v49; // [esp+28h] [ebp+8h]

  v41 = flt_A3B888;
  v42 = 0;
  v46 = 0;
  if ( a3 )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(this, 0xC, 0);
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
  v5 = (TESObjectREFR *)*(this + 1);
  if ( v5 )
    Container = TESObjectREFR_GetContainer(v5);
  else
    Container = 0;
  p_list = &Container->list;
  v48 = p_list;
  if ( p_list )
  {
    while ( 1 )
    {
      data = p_list->data;
      if ( data )
      {
        v44 = (unsigned __int8 *)OblivionDynamicCast(
                                   data->type,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESAmmo `RTTI Type Descriptor',
                                   0);
        if ( v44 )
        {
          v9 = *this;
          v10 = 1;
          if ( !*this )
            goto LABEL_22;
          while ( v10 )
          {
            if ( *v9 && (*v9)[2] == (ExtraDataList **)v44 )
              v10 = 0;
            else
              v9 = (ExtraDataList ****)v9[1];
            if ( !v9 )
              goto LABEL_22;
          }
          if ( v9 )
            v11 = *v9;
          else
LABEL_22:
            v11 = 0;
          v12 = 0;
          if ( !v11 )
            goto LABEL_45;
          v13 = *v11;
          if ( *v11 && (v14 = *v13) != 0 && ExtraDataList_GetOwner(*v13) )
            Owner = (int *)ExtraDataList_GetOwner(v14);
          else
            Owner = 0;
          if ( Owner != a2 && (int)v11[1] > 0 )
          {
            for ( i = *v11; i; i = (ExtraDataList **)i[1] )
            {
              if ( !*i )
                break;
              if ( ExtraDataList_GetOwner(*i) )
                ++v12;
            }
          }
          v17 = *v11;
          if ( !*v11
            || (v18 = *v17) == 0
            || !ExtraDataList_GetOwner(*v17)
            || !ExtraDataList_GetOwner(v18)
            || v12 < (int)v11[1] + v48->data->count )
          {
            count = v48->data->count;
            if ( (int)v11[1] + count > 0 || count < 0 )
            {
LABEL_45:
              v20 = v44;
              EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v44);
              if ( v41 < (double)EquippableItemRating )
              {
                v41 = EquippableItemRating;
                v42 = v20;
              }
            }
          }
        }
      }
      v48 = v48->next;
      if ( !v48 )
        break;
      p_list = v48;
    }
  }
  v21 = *this;
  if ( *this )
  {
    do
    {
      v22 = *v21;
      if ( *v21 )
      {
        v23 = (unsigned __int8 *)OblivionDynamicCast(
                                   v22[2],
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESAmmo `RTTI Type Descriptor',
                                   0);
        if ( v23 )
        {
          v24 = *v22;
          if ( *v22 )
          {
            while ( *v24 )
            {
              if ( sub_41DEF0((TESForm *)*v24) )
              {
                if ( (int)v22[1] < 0 )
                  goto LABEL_74;
                break;
              }
              v24 = (ExtraDataList **)v24[1];
              if ( !v24 )
                break;
            }
          }
          v25 = *v22;
          if ( !*v22
            || (v26 = *v25) == 0
            || !ExtraDataList_GetOwner(*v25)
            || !ExtraDataList_GetOwner(v26)
            || ((v27 = *v22) == 0 || (v28 = *v27) == 0 || !ExtraDataList_GetOwner(*v27)
              ? (v29 = 0)
              : (v29 = (int *)ExtraDataList_GetOwner(v28)),
                v29 == a2) )
          {
            if ( v22[1] )
            {
              v30 = (TESObjectREFR *)*(this + 1);
              if ( v30 )
                v31 = TESObjectREFR_GetContainer(v30);
              else
                v31 = 0;
              if ( !TESContainer_HasForm(v31, (TESForm *)v23) )
              {
                v49 = TESActorBase_GetEquippableItemRating(a2, v23);
                if ( v41 < (double)v49 )
                {
                  v41 = v49;
                  v46 = v23;
                }
              }
            }
          }
        }
      }
LABEL_74:
      v21 = (ExtraDataList ****)v21[1];
    }
    while ( v21 );
    v32 = v46;
    if ( v46 )
    {
      if ( v46 != v42 )
      {
        v47 = TESActorBase_GetEquippableItemRating(a2, v46);
        if ( TESActorBase_GetEquippableItemRating(a2, v42) < v47 )
          v42 = v32;
      }
    }
  }
  ContainerExtraData_GetEntryForForm(this, (int)v42, 1, 0);
  EquippedInstance = 0;
  v34 = v33;
  if ( v42 )
  {
    v35 = (unsigned int *)FormHeapAlloc(0xCu);
    if ( v35 )
    {
      v35[2] = 0;
      *v35 = 0;
      v35[1] = 0;
    }
    else
    {
      v35 = 0;
    }
    EquippedInstance = v35;
  }
  if ( !v34 )
  {
    if ( v42 )
    {
      EquippedInstance[2] = (unsigned int)v42;
      v38 = (TESObjectREFR *)*(this + 1);
      if ( v38 )
        v39 = TESObjectREFR_GetContainer(v38);
      else
        v39 = 0;
      FormCount = TESContainer_GetFormCount(v39, (TESForm *)v42);
      if ( FormCount < 0 )
        FormCount = -FormCount;
      EquippedInstance[1] = FormCount;
    }
    return EquippedInstance;
  }
  EquippedInstance[2] = *(_DWORD *)(v34 + 8);
  if ( !*(_DWORD *)v34 || !**(_DWORD **)v34 )
    return EquippedInstance;
  v36 = (_DWORD *)FormHeapAlloc(8u);
  if ( v36 )
  {
    *v36 = 0;
    v36[1] = 0;
  }
  else
  {
    v36 = 0;
  }
  *EquippedInstance = (unsigned int)v36;
  BSSimpleList_PushFront(v36, **(_DWORD **)v34);
  EquippedInstance[1] = *(_DWORD *)(v34 + 4);
  return EquippedInstance;
}
