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
  int v34; // [esp+4h] [ebp-34h]
  int v35; // [esp+8h] [ebp-30h]
  int v36; // [esp+Ch] [ebp-2Ch]
  int v37; // [esp+10h] [ebp-28h]
  TESContainer_Entry *p_list; // [esp+18h] [ebp-20h]
  tListEntryData *v40; // [esp+18h] [ebp-20h]
  float v41; // [esp+1Ch] [ebp-1Ch]
  TESSoulGem *v42; // [esp+20h] [ebp-18h]
  UInt32 SoulLevel; // [esp+24h] [ebp-14h]
  float v44; // [esp+28h] [ebp-10h]
  float v45; // [esp+28h] [ebp-10h]
  TESNPC *v46; // [esp+2Ch] [ebp-Ch]
  double v47; // [esp+2Ch] [ebp-Ch]
  TESSoulGem *v48; // [esp+34h] [ebp-4h]
  TESSoulGem *a3a; // [esp+3Ch] [ebp+4h]

  v3 = a3->vtbl->super.super.GetBaseForm(a3);
  v4 = (TESCreature *)OblivionDynamicCast(
                        v3,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESCreature `RTTI Type Descriptor',
                        0);
  v5 = a3->vtbl->super.super.GetBaseForm(a3);
  v46 = (TESNPC *)OblivionDynamicCast(
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  if ( v4 )
  {
    SoulLevel = TESCreature::GetSoulLevel(v4);
    SoulValueFromLevel = (double)Actor::GetSoulValueFromLevel(SoulLevel);
  }
  else
  {
    LOBYTE(SoulLevel) = 5;
    SoulValueFromLevel = (double)Actor::GetSoulValueFromLevel(5);
  }
  owner = a1->owner;
  v41 = SoulValueFromLevel;
  a3a = 0;
  v42 = 0;
  if ( owner )
    Container = TESObjectREFR_GetContainer(owner);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      entry = p_list->data;
      if ( !p_list->data )
        goto LABEL_35;
      v10 = (TESSoulGem *)OblivionDynamicCast(
                            entry->type,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESSoulGem `RTTI Type Descriptor',
                            0);
      if ( !v10 )
        goto LABEL_35;
      objList = a1->objList;
      v12 = 1;
      if ( !a1->objList )
        goto LABEL_17;
      while ( v12 )
      {
        if ( objList->node.data && (TESSoulGem *)objList->node.data->type == v10 )
          v12 = 0;
        else
          objList = (tListEntryData *)objList->node.next;
        if ( !objList )
          goto LABEL_17;
      }
      if ( objList )
        data = objList->node.data;
      else
LABEL_17:
        data = 0;
      count = entry->count;
      if ( data )
        count += data->countDelta;
      if ( v10->members.soul )
        goto LABEL_35;
      if ( !data )
        goto LABEL_28;
      if ( p_list->data->count < 0 )
      {
        extendData = data->extendData;
        count = data->countDelta;
        while ( extendData )
        {
          if ( extendData->node.data )
          {
            if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)extendData->node.data) )
              break;
            extendData = (tListVoid *)extendData->node.next;
            --count;
          }
        }
LABEL_28:
        if ( count > 0 && (!v46 || data->type == (TESForm *)TESDataHandler_g_BlackSoulGem) )
        {
          v44 = (float)Actor::GetSoulValueFromLevel(v10->members.capacity);
          if ( v41 <= (double)v44 && (!a3a || v44 < (double)Actor::GetSoulValueFromLevel(a3a->members.capacity)) )
            a3a = v10;
        }
      }
LABEL_35:
      p_list = p_list->next;
    }
    while ( p_list );
  }
  v40 = a1->objList;
  if ( a1->objList )
  {
    do
    {
      v16 = v40->node.data;
      if ( v40->node.data )
      {
        v17 = (TESSoulGem *)OblivionDynamicCast(
                              v16->type,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESSoulGem `RTTI Type Descriptor',
                              0);
        v18 = v17;
        v48 = v17;
        if ( v17 )
        {
          if ( !v17->members.soul )
          {
            if ( v16->countDelta )
            {
              v19 = a1->owner;
              if ( v19 )
                v20 = TESObjectREFR_GetContainer(v19);
              else
                v20 = 0;
              if ( !TESContainer_HasForm(v20, (TESForm *)v18) )
              {
                next = v16->extendData;
                countDelta = v16->countDelta;
                if ( v16->extendData )
                {
                  do
                  {
                    v23 = (ExtraDataList *)next->node.data;
                    if ( !next->node.data )
                      break;
                    if ( !ExtraDataList_GetExtraSoul((ExtraDataList *)next->node.data) )
                      break;
                    ExtraCount = ExtraDataList_GetExtraCount(v23);
                    next = (tListVoid *)next->node.next;
                    countDelta -= ExtraCount;
                  }
                  while ( next );
                  v18 = v48;
                }
                if ( countDelta > 0 && (!v46 || v16->type == (TESForm *)TESDataHandler_g_BlackSoulGem) )
                {
                  v45 = (float)Actor::GetSoulValueFromLevel(v18->members.capacity);
                  if ( v41 <= (double)v45 && (!v42 || v45 < (double)Actor::GetSoulValueFromLevel(v42->members.capacity)) )
                    v42 = v18;
                }
              }
            }
          }
        }
      }
      v40 = (tListEntryData *)v40->node.next;
    }
    while ( v40 );
    if ( v42 )
    {
      if ( v42 != a3a )
      {
        if ( !a3a
          || (capacity = a3a->members.capacity,
              v47 = (double)Actor::GetSoulValueFromLevel(v42->members.capacity),
              (double)Actor::GetSoulValueFromLevel(capacity) > v47) )
        {
          a3a = v42;
        }
      }
    }
  }
  v26 = a1->objList;
  v27 = 1;
  if ( !a1->objList )
    goto LABEL_72;
  while ( v27 )
  {
    if ( v26->node.data && (TESSoulGem *)v26->node.data->type == a3a )
      v27 = 0;
    else
      v26 = (tListEntryData *)v26->node.next;
    if ( !v26 )
      goto LABEL_72;
  }
  if ( v26 )
    v28 = v26->node.data;
  else
LABEL_72:
    v28 = 0;
  v29 = 0;
  if ( a3a )
  {
    v30 = (EntryData *)FormHeapAlloc(0xCu);
    if ( v30 )
    {
      v30->type = 0;
      v30->extendData = 0;
      v30->countDelta = 0;
    }
    else
    {
      v30 = 0;
    }
    v29 = v30;
  }
  if ( v28 )
  {
    CreateSoulExtraData(v28, SoulLevel);
    return 1;
  }
  else if ( a3a )
  {
    v29->type = (TESForm *)a3a;
    v32 = a1->owner;
    if ( v32 )
      v33 = TESObjectREFR_GetContainer(v32);
    else
      v33 = 0;
    v29->countDelta = TESContainer_GetFormCount(v33, (TESForm *)a3a);
    CreateSoulExtraData(v29, SoulLevel);
    ContainerExtraData_AddEntry((float *)a1, (int *)v29, 1, v34, v35, v36, v37, (int)a1);
    return 1;
  }
  else
  {
    if ( a1->owner->vtbl->IsActor(a1->owner) && (PlayerCharacter *)a1->owner == TESDataHandler_g_PlayerRef )
      GameUI_QueueMessage((const char *)dword_B38C28, 0, 1u, flt_A30634);
    return 0;
  }
}
