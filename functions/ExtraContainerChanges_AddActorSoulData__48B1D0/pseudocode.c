char __thiscall ExtraContainerChanges::AddActorSoulData(ExtraContainerChanges_Data *a1, Actor *a3)
{
  TESForm *v3; // eax
  TESCreature *v4; // edi
  TESForm *v5; // eax
  double SoulValueFromLevel; // st7
  TESObjectREFR *owner; // ecx
  TESContainer *Container; // eax
  TESContainer_Data *entry; // esi
  TESSoulGem *v10; // ebx
  tListEntryData *objList; // eax
  char v12; // dl
  EntryData *data; // ebp
  SInt32 count; // edi
  tListVoid *extendData; // esi
  EntryData *v16; // ebx
  TESSoulGem *v17; // eax
  TESSoulGem *v18; // edi
  TESObjectREFR *v19; // ecx
  TESContainer *v20; // eax
  tListVoid *next; // esi
  int countDelta; // ebp
  ExtraDataList *v23; // edi
  signed __int16 ExtraCount; // ax
  int capacity; // esi
  tListEntryData *v26; // eax
  char v27; // dl
  EntryData *v28; // edi
  EntryData *v29; // esi
  EntryData *v30; // eax
  TESObjectREFR *v32; // ecx
  TESContainer *v33; // eax
  TESContainer_Entry *p_list; // [esp+18h] [ebp-20h]
  tListEntryData *v36; // [esp+18h] [ebp-20h]
  float v37; // [esp+1Ch] [ebp-1Ch]
  TESSoulGem *v38; // [esp+20h] [ebp-18h]
  UInt32 SoulLevel; // [esp+24h] [ebp-14h]
  float v40; // [esp+28h] [ebp-10h]
  float v41; // [esp+28h] [ebp-10h]
  TESNPC *v42; // [esp+2Ch] [ebp-Ch]
  double v43; // [esp+2Ch] [ebp-Ch]
  TESSoulGem *v44; // [esp+34h] [ebp-4h]
  TESSoulGem *a3a; // [esp+3Ch] [ebp+4h]

  v3 = a3->vtbl->super.super.GetBaseForm(a3); /*0x48b1f9*/
  v4 = (TESCreature *)OblivionDynamicCast( /*0x48b20a*/
                        v3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESCreature `RTTI Type Descriptor',
                        0);
  v5 = a3->vtbl->super.super.GetBaseForm(a3); /*0x48b21c*/
  v42 = (TESNPC *)OblivionDynamicCast( /*0x48b229*/
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  if ( v4 ) /*0x48b22d*/
  {
    SoulLevel = TESCreature::GetSoulLevel(v4); /*0x48b237*/
    SoulValueFromLevel = (double)Actor::GetSoulValueFromLevel(SoulLevel); /*0x48b244*/
  }
  else
  {
    LOBYTE(SoulLevel) = 5; /*0x48b24c*/
    SoulValueFromLevel = (double)Actor::GetSoulValueFromLevel(5); /*0x48b25d*/
  }
  owner = a1->owner; /*0x48b261*/
  v37 = SoulValueFromLevel; /*0x48b264*/
  a3a = 0; /*0x48b26d*/
  v38 = 0; /*0x48b271*/
  if ( owner ) /*0x48b275*/
    Container = TESObjectREFR_GetContainer(owner); /*0x48b277*/
  else
    Container = 0; /*0x48b27e*/
  p_list = &Container->list; /*0x48b285*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x48b289*/
  {
    do /*0x48b294*/
    {
      entry = p_list->data; /*0x48b294*/
      if ( !p_list->data ) /*0x48b294*/
        goto LABEL_35; /*0x48b294*/
      v10 = (TESSoulGem *)OblivionDynamicCast( /*0x48b2b5*/
                            entry->type,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESSoulGem `RTTI Type Descriptor',
                            0);
      if ( !v10 ) /*0x48b2bc*/
        goto LABEL_35; /*0x48b2bc*/
      objList = a1->objList; /*0x48b2c6*/
      v12 = 1; /*0x48b2ca*/
      if ( !a1->objList ) /*0x48b2c6*/
        goto LABEL_17; /*0x48b2c6*/
      while ( v12 ) /*0x48b2d2*/
      {
        if ( objList->node.data && (TESSoulGem *)objList->node.data->type == v10 ) /*0x48b2e1*/
          v12 = 0; /*0x48b2e3*/
        else
          objList = (tListEntryData *)objList->node.next; /*0x48b2e7*/
        if ( !objList ) /*0x48b2ec*/
          goto LABEL_17; /*0x48b2ec*/
      }
      if ( objList ) /*0x48b42e*/
        data = objList->node.data; /*0x48b434*/
      else
LABEL_17:
        data = 0; /*0x48b2ee*/
      count = entry->count; /*0x48b2f2*/
      if ( data ) /*0x48b2f4*/
        count += data->countDelta; /*0x48b2f6*/
      if ( v10->members.soul ) /*0x48b2f9*/
        goto LABEL_35; /*0x48b2fd*/
      if ( !data ) /*0x48b305*/
        goto LABEL_28; /*0x48b305*/
      if ( p_list->data->count < 0 ) /*0x48b310*/
      {
        extendData = data->extendData; /*0x48b316*/
        count = data->countDelta; /*0x48b31b*/
        while ( extendData ) /*0x48b316*/
        {
          if ( extendData->node.data ) /*0x48b320*/
          {
            if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)extendData->node.data) ) /*0x48b32d*/
              break; /*0x48b32d*/
            extendData = (tListVoid *)extendData->node.next; /*0x48b32f*/
            --count; /*0x48b332*/
          }
        }
LABEL_28:
        if ( count > 0 && (!v42 || data->type == (TESForm *)MEMORY[0xB35EE0]) ) /*0x48b34d*/
        {
          v40 = (float)Actor::GetSoulValueFromLevel(v10->members.capacity); /*0x48b364*/
          if ( v37 <= (double)v40 && (!a3a || v40 < (double)Actor::GetSoulValueFromLevel(a3a->members.capacity)) ) /*0x48b3a1*/
            a3a = v10; /*0x48b3a3*/
        }
      }
LABEL_35:
      p_list = p_list->next; /*0x48b3a7*/
    }
    while ( p_list ); /*0x48b294*/
  }
  v36 = a1->objList; /*0x48b3ba*/
  if ( a1->objList ) /*0x48b3c2*/
  {
    do /*0x48b4f9*/
    {
      v16 = v36->node.data; /*0x48b3d4*/
      if ( v36->node.data ) /*0x48b3d4*/
      {
        v17 = (TESSoulGem *)OblivionDynamicCast( /*0x48b3f0*/
                              v16->type,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESSoulGem `RTTI Type Descriptor',
                              0);
        v18 = v17; /*0x48b3f5*/
        v44 = v17; /*0x48b3fc*/
        if ( v17 ) /*0x48b400*/
        {
          if ( !v17->members.soul ) /*0x48b406*/
          {
            if ( v16->countDelta ) /*0x48b410*/
            {
              v19 = a1->owner; /*0x48b41e*/
              if ( v19 ) /*0x48b423*/
                v20 = TESObjectREFR_GetContainer(v19); /*0x48b425*/
              else
                v20 = 0; /*0x48b43b*/
              if ( !TESContainer_HasForm(v20, (TESForm *)v18) ) /*0x48b440*/
              {
                next = v16->extendData; /*0x48b44d*/
                countDelta = v16->countDelta; /*0x48b451*/
                if ( v16->extendData ) /*0x48b44d*/
                {
                  do /*0x48b478*/
                  {
                    v23 = (ExtraDataList *)next->node.data; /*0x48b456*/
                    if ( !next->node.data ) /*0x48b456*/
                      break; /*0x48b45a*/
                    if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)next->node.data) ) /*0x48b45e*/
                      break; /*0x48b465*/
                    ExtraCount = ExtraDataList_GetExtraCount(v23); /*0x48b469*/
                    next = (tListVoid *)next->node.next; /*0x48b46e*/
                    countDelta -= ExtraCount; /*0x48b474*/
                  }
                  while ( next ); /*0x48b478*/
                  v18 = v44; /*0x48b47a*/
                }
                if ( countDelta > 0 && (!v42 || v16->type == (TESForm *)MEMORY[0xB35EE0]) ) /*0x48b492*/
                {
                  v41 = (float)Actor::GetSoulValueFromLevel(v18->members.capacity); /*0x48b4a9*/
                  if ( v37 <= (double)v41 && (!v38 || v41 < (double)Actor::GetSoulValueFromLevel(v38->members.capacity)) ) /*0x48b4e6*/
                    v38 = v18; /*0x48b4e8*/
                }
              }
            }
          }
        }
      }
      v36 = (tListEntryData *)v36->node.next; /*0x48b4f5*/
    }
    while ( v36 ); /*0x48b4f9*/
    if ( v38 ) /*0x48b505*/
    {
      if ( v38 != a3a ) /*0x48b50d*/
      {
        if ( !a3a /*0x48b547*/
          || (capacity = a3a->members.capacity,
              v43 = (double)Actor::GetSoulValueFromLevel(v38->members.capacity),
              (double)Actor::GetSoulValueFromLevel(capacity) > v43) )
        {
          a3a = v38; /*0x48b549*/
        }
      }
    }
  }
  v26 = a1->objList; /*0x48b551*/
  v27 = 1; /*0x48b55b*/
  if ( !a1->objList ) /*0x48b551*/
    goto LABEL_72; /*0x48b551*/
  while ( v27 ) /*0x48b562*/
  {
    if ( v26->node.data && (TESSoulGem *)v26->node.data->type == a3a ) /*0x48b56d*/
      v27 = 0; /*0x48b56f*/
    else
      v26 = (tListEntryData *)v26->node.next; /*0x48b573*/
    if ( !v26 ) /*0x48b578*/
      goto LABEL_72; /*0x48b578*/
  }
  if ( v26 ) /*0x48b59c*/
    v28 = v26->node.data; /*0x48b59e*/
  else
LABEL_72:
    v28 = 0; /*0x48b57a*/
  v29 = 0; /*0x48b57c*/
  if ( a3a ) /*0x48b580*/
  {
    v30 = (EntryData *)FormHeapAlloc(0xCu); /*0x48b584*/
    if ( v30 ) /*0x48b58e*/
    {
      v30->type = 0; /*0x48b590*/
      v30->extendData = 0; /*0x48b593*/
      v30->countDelta = 0; /*0x48b595*/
    }
    else
    {
      v30 = 0; /*0x48b5a2*/
    }
    v29 = v30; /*0x48b5a4*/
  }
  if ( v28 ) /*0x48b5a8*/
  {
    CreateSoulExtraData(v28, SoulLevel); /*0x48b5b1*/
    return 1; /*0x48b5b9*/
  }
  else if ( a3a ) /*0x48b5c4*/
  {
    v29->type = (TESForm *)a3a; /*0x48b5ca*/
    v32 = a1->owner; /*0x48b5cd*/
    if ( v32 ) /*0x48b5d2*/
      v33 = TESObjectREFR_GetContainer(v32); /*0x48b5d4*/
    else
      v33 = 0; /*0x48b5db*/
    v29->countDelta = TESContainer_GetFormCount(v33, (TESForm *)a3a); /*0x48b5ec*/
    CreateSoulExtraData(v29, SoulLevel); /*0x48b5ef*/
    ContainerExtraData_AddEntry(a1, v29, 1); /*0x48b5f9*/
    return 1; /*0x48b601*/
  }
  else
  {
    if ( a1->owner->vtbl->IsActor(a1->owner) && (PlayerCharacter *)a1->owner == reference ) /*0x48b628*/
      GameUI_QueueMessage(stru_B38C28.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x48b63e*/
    return 0; /*0x48b649*/
  }
}
