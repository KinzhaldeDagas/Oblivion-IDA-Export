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

  ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e4406*/
  if ( ContainerChanges ) /*0x5e440d*/
  {
    v1 = ContainerChanges;                      // RadiantAI: edible inventory/container-change helper used by sub_62DA10; returns edible Ingredient/AlchemyItem entry or null. /*0x4873c5*/
    v19 = ContainerChanges; /*0x4873c7*/
    owner = ContainerChanges->owner; /*0x4873cb*/
    if ( owner ) /*0x4873d0*/
      Container = TESObjectREFR_GetContainer(owner); /*0x4873d2*/
    else
      Container = 0; /*0x4873d9*/
    p_list = &Container->list; /*0x4873db*/
    v5 = 0; /*0x4873de*/
    while ( p_list && (p_list->next || p_list->data) ) /*0x4873f1*/
    {
      v6 = OblivionDynamicCast( /*0x48740b*/
             p_list->data->type,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &IngredientItem `RTTI Type Descriptor',
             0);
      v7 = v6; /*0x487410*/
      if ( v6 ) /*0x487417*/
      {
        v8 = (int)v6; /*0x487439*/
      }
      else
      {
        v5 = (TESForm *)OblivionDynamicCast( /*0x487430*/
                          p_list->data->type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &AlchemyItem `RTTI Type Descriptor',
                          0);
        v8 = (int)v5; /*0x487435*/
      }
      if ( v5 && (v5[5].member.type & 2) != 0 && !EffectItemList_AllEffectsHostile(&v5[2].vtbl) /*0x48745d*/
        || v7 && (v7[0x7C] & 2) != 0 )
      {
        objList = v19->objList; /*0x487467*/
        v10 = 1; /*0x48746b*/
        if ( !v19->objList ) /*0x487467*/
          goto LABEL_24; /*0x487467*/
        while ( v10 ) /*0x487472*/
        {
          if ( objList->node.data && objList->node.data->type == (TESForm *)v8 ) /*0x48747d*/
            v10 = 0; /*0x48747f*/
          else
            objList = (tListEntryData *)objList->node.next; /*0x487483*/
          if ( !objList ) /*0x487488*/
            goto LABEL_24; /*0x487488*/
        }
        if ( !objList || (data = objList->node.data) == 0 ) /*0x4874ce*/
        {
LABEL_24:
          v11 = (_DWORD *)FormHeapAlloc(0xCu); /*0x48748a*/
          if ( v11 ) /*0x4874a2*/
            ContainerEntryExtraData_constr(v11, v8, 0); /*0x4874ad*/
          return; /*0x4874c5*/
        }
        if ( data->countDelta + p_list->data->count ) /*0x4874d7*/
          return; /*0x4874d9*/
      }
      p_list = p_list->next; /*0x4874df*/
      v1 = v19; /*0x4874e2*/
    }
    next = v1->objList; /*0x4874eb*/
    if ( !v1->objList ) /*0x4874ef*/
      return; /*0x4874ef*/
    while ( 1 ) /*0x4874f5*/
    {
      if ( !next->node.next && !next->node.data ) /*0x4874fe*/
        return; /*0x4874fe*/
      v14 = (TESForm *)OblivionDynamicCast( /*0x487518*/
                         next->node.data->type,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                         &IngredientItem `RTTI Type Descriptor',
                         0);
      if ( !v14 ) /*0x487522*/
        break; /*0x487522*/
      v15 = v14; /*0x48754a*/
      if ( (v14[5].member.type & 2) == 0 ) /*0x48754c*/
        goto LABEL_36; /*0x48754c*/
LABEL_39:
      v16 = v1->owner; /*0x487564*/
      if ( v16 ) /*0x487569*/
        v17 = TESObjectREFR_GetContainer(v16); /*0x48756b*/
      else
        v17 = 0; /*0x487572*/
      if ( !TESContainer_HasForm(v17, v15) && next->node.data->countDelta > 0 ) /*0x487586*/
        return; /*0x487586*/
LABEL_44:
      next = (tListEntryData *)next->node.next; /*0x487588*/
      if ( !next ) /*0x48758d*/
        return; /*0x48758d*/
    }
    v5 = (TESForm *)OblivionDynamicCast( /*0x48753d*/
                      next->node.data->type,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &AlchemyItem `RTTI Type Descriptor',
                      0);
    v15 = v5; /*0x487542*/
LABEL_36:
    if ( !v5 || (v5[5].member.type & 2) == 0 || EffectItemList_AllEffectsHostile(&v5[2].vtbl) ) /*0x48755b*/
      goto LABEL_44; /*0x487562*/
    goto LABEL_39; /*0x487562*/
  }
}
