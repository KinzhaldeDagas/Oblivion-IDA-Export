TESForm *__thiscall sub_61B190(void **this)
{
  TESForm *ActorBaseForm; // eax
  TESForm::ModReferenceList *p_modlist; // ebx
  Data *data; // esi
  int (__thiscall *v5)(int); // edx
  int p_unkFile018; // esi
  bool v7; // bl
  TESRace *RaceIfNPC; // eax
  SpellListEntry *p_spellList; // ebp
  TESForm *type; // esi
  void (__thiscall *Unk_06)(TESForm *); // eax
  int v12; // esi
  int *i; // ebx
  int v14; // esi
  int (__thiscall *v15)(int); // eax
  int v16; // esi
  int TotalEntryCountForITem; // ebp
  TESForm *j; // ebx
  EntryData *InventoryEntryOfItem; // eax
  int v20; // edx
  ExtraDataList ***v21; // esi
  TESForm *v22; // eax
  void *v23; // eax
  char **v24; // eax
  char **v25; // eax
  char **v26; // eax
  char **v27; // eax
  TESForm *result; // eax
  unsigned int (__thiscall **p_CompareTo)(BaseFormComponent *, BaseFormComponent *); // esi
  int v30; // ecx
  UInt32 v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  unsigned int (__thiscall *v34)(BaseFormComponent *, BaseFormComponent *); // esi

  if ( Actor_GetActorBaseForm((Actor *)*(this + 0xF), 0) )
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)*(this + 0xF), 0);
    p_modlist = &ActorBaseForm[3].member.modlist;
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 )
    {
      do
      {
        if ( !p_modlist->next && !p_modlist->data )
          break;
        data = p_modlist->data;
        if ( p_modlist->data )
        {
          v5 = *(int (__thiscall **)(int))(data->unkFile018 + 0x18);
          p_unkFile018 = (int)&data->unkFile018;
          if ( v5(p_unkFile018) != 4 && (*(int (__thiscall **)(int))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) != 1 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF)
                                                                                          + 0x17)
                                                                                        + 0x1C))(
                   (char *)*(this + 0xF) + 0x5C,
                   p_unkFile018,
                   0,
                   0,
                   0) )
            {
              sub_616DB0((char *)this, p_unkFile018, 0);
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) == 1 )
            sub_616DB0((char *)this, p_unkFile018, 0);
        }
        p_modlist = p_modlist->next;
      }
      while ( p_modlist );
    }
  }
  if ( Actor_IsNPC((Actor *)*(this + 0xF)) )
  {
    v7 = GetRandomLargeInteger_(0) % 0x64 < dword_B37200;
    if ( Actor::GetRaceIfNPC((Actor *)*(this + 0xF)) )
    {
      RaceIfNPC = Actor::GetRaceIfNPC((Actor *)*(this + 0xF));
      p_spellList = &RaceIfNPC->spells.spellList;
      if ( RaceIfNPC != (TESRace *)0xFFFFFFD0 )
      {
        do
        {
          if ( !p_spellList->next && !p_spellList->type )
            break;
          type = p_spellList->type;
          if ( p_spellList->type )
          {
            Unk_06 = type[1].vtbl->Unk_06;
            v12 = (int)&type[1];
            if ( ((int (__thiscall *)(int))Unk_06)(v12) != 4
              && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 1 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF)
                                                                                            + 0x17)
                                                                                          + 0x1C))(
                     (char *)*(this + 0xF) + 0x5C,
                     v12,
                     0,
                     0,
                     0) )
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 2
                  && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 3
                  || v7 )
                {
                  sub_616DB0((char *)this, v12, 0);
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) == 1 )
              sub_616DB0((char *)this, v12, 0);
          }
          p_spellList = p_spellList->next;
        }
        while ( p_spellList );
      }
    }
  }
  for ( i = (int *)(*(int (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)*(this + 0xF) + 0x16) + 0x454))(
                     *((_DWORD *)*(this + 0xF) + 0x16),
                     *(this + 0xF),
                     1); i; i = (int *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v14 = *i;
    if ( *i )
    {
      v15 = *(int (__thiscall **)(int))(*(_DWORD *)(v14 + 0x18) + 0x18);
      v16 = v14 + 0x18;
      if ( v15(v16) == 1
        || (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF) + 0x17)
                                                                                  + 0x1C))(
             (char *)*(this + 0xF) + 0x5C,
             v16,
             0,
             0,
             0) )
      {
        sub_616DB0((char *)this, v16, 0);
      }
    }
  }
  TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)*(this + 0xF), 0);
  for ( j = 0; (int)j < TotalEntryCountForITem; j = (TESForm *)((char *)j + 1) )
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)*(this + 0xF), j, 0);
    v21 = (ExtraDataList ***)InventoryEntryOfItem;
    if ( InventoryEntryOfItem )
    {
      v22 = InventoryEntryOfItem->type;
      switch ( v22->member.type )
      {
        case kFormType_Book:
          v32 = OblivionDynamicCast(
                  v22,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          if ( !v32 )
            goto LABEL_42;
          v33 = v32[0x19];
          if ( !v33 )
            goto LABEL_42;
          sub_616DB0((char *)this, v33 + 0x18, v21);
          break;
        case kFormType_AlchemyItem:
          v23 = OblivionDynamicCast(
                  v22,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &AlchemyItem `RTTI Type Descriptor',
                  0);
          if ( v23 )
            sub_616DB0((char *)this, (int)v23 + 0x24, v21);
          goto LABEL_42;
        default:
LABEL_42:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v21, v20);
          FormHeapFree((unsigned int)v21);
          break;
      }
    }
  }
  v24 = (char **)*(this + 0x28);
  if ( v24 )
    sub_41A610(*v24, 0);
  v25 = (char **)*(this + 0x27);
  if ( v25 )
    sub_41A610(*v25, 0);
  v26 = (char **)*(this + 0x24);
  if ( v26 )
    sub_41A610(*v26, 0);
  v27 = (char **)*(this + 0x25);
  if ( v27 )
    sub_41A610(*v27, 0);
  result = (TESForm *)*(this + 0x26);
  if ( result )
  {
    sub_41A610((char *)result->vtbl, 0);
    result = (TESForm *)*(this + 0x26);
    if ( result->vtbl )
    {
      p_CompareTo = &result->vtbl->super.CompareTo;
      if ( result->vtbl != (TESFormVtbl *)0xFFFFFFF4 )
      {
        do
        {
          if ( !p_CompareTo[2] && !p_CompareTo[1] )
            break;
          if ( *(this + 0x2A) )
            break;
          result = (TESForm *)p_CompareTo[1];
          if ( result )
          {
            v30 = *(_DWORD *)&result[1].member.type;
            result = *(TESForm **)(v30 + 0x58);
            if ( (BYTE2(result) & 1) != 0 )
            {
              if ( ((unsigned int)result & 0x70000) != 0 )
                v31 = *(_DWORD *)(v30 + 0x60);
              else
                v31 = 0;
              result = TESForm_LookupByFormID(v31);
              *(this + 0x2A) = result;
            }
          }
          v34 = p_CompareTo[2];
          if ( !v34 )
            break;
          p_CompareTo = (unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))((char *)v34 + 0xFFFFFFFC);
        }
        while ( p_CompareTo );
      }
    }
  }
  return result;
}
