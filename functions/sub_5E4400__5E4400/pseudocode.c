void __thiscall sub_5E4400(_BYTE *this)
{
  ExtraContainerChanges_Data *v1; // ebx
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  TESForm *v5; // ebp
  _BYTE *v6; // eax
  _BYTE *v7; // edi
  int v8; // ebx
  tListEntryData *objList; // eax
  char v10; // dl
  _DWORD *v11; // eax
  EntryData *data; // eax
  tListEntryData *next; // esi
  TESForm *v14; // eax
  TESForm *v15; // edi
  TESObjectREFR *v16; // ecx
  TESContainer *v17; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraContainerChanges_Data *v19; // [esp+0h] [ebp-10h]

  ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( ContainerChanges )
  {
    v1 = ContainerChanges;
    v19 = ContainerChanges;
    owner = ContainerChanges->owner;
    if ( owner )
      Container = TESObjectREFR_GetContainer(owner);
    else
      Container = 0;
    p_list = &Container->list;
    v5 = 0;
    while ( p_list && (p_list->next || p_list->data) )
    {
      v6 = OblivionDynamicCast(
             p_list->data->type,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &IngredientItem `RTTI Type Descriptor',
             0);
      v7 = v6;
      if ( v6 )
      {
        v8 = (int)v6;
      }
      else
      {
        v5 = (TESForm *)OblivionDynamicCast(
                          p_list->data->type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &AlchemyItem `RTTI Type Descriptor',
                          0);
        v8 = (int)v5;
      }
      if ( v5 && (v5[5].member.type & 2) != 0 && !(unsigned __int8)EffectItemList_AllEffectsHostile(&v5[2].vtbl)
        || v7 && (v7[0x7C] & 2) != 0 )
      {
        objList = v19->objList;
        v10 = 1;
        if ( !v19->objList )
          goto LABEL_24;
        while ( v10 )
        {
          if ( objList->node.data && objList->node.data->type == (TESForm *)v8 )
            v10 = 0;
          else
            objList = (tListEntryData *)objList->node.next;
          if ( !objList )
            goto LABEL_24;
        }
        if ( !objList || (data = objList->node.data) == 0 )
        {
LABEL_24:
          v11 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v11 )
            ContainerEntryExtraData_constr(v11, v8, 0);
          return;
        }
        if ( data->countDelta + p_list->data->count )
          return;
      }
      p_list = p_list->next;
      v1 = v19;
    }
    next = v1->objList;
    if ( !v1->objList )
      return;
    while ( 1 )
    {
      if ( !next->node.next && !next->node.data )
        return;
      v14 = (TESForm *)OblivionDynamicCast(
                         next->node.data->type,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &IngredientItem `RTTI Type Descriptor',
                         0);
      if ( !v14 )
        break;
      v15 = v14;
      if ( (v14[5].member.type & 2) == 0 )
        goto LABEL_36;
LABEL_39:
      v16 = v1->owner;
      if ( v16 )
        v17 = TESObjectREFR_GetContainer(v16);
      else
        v17 = 0;
      if ( !TESContainer_HasForm(v17, v15) && next->node.data->countDelta > 0 )
        return;
LABEL_44:
      next = (tListEntryData *)next->node.next;
      if ( !next )
        return;
    }
    v5 = (TESForm *)OblivionDynamicCast(
                      next->node.data->type,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &AlchemyItem `RTTI Type Descriptor',
                      0);
    v15 = v5;
LABEL_36:
    if ( !v5 || (v5[5].member.type & 2) == 0 || (unsigned __int8)EffectItemList_AllEffectsHostile(&v5[2].vtbl) )
      goto LABEL_44;
    goto LABEL_39;
  }
}
