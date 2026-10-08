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

  if ( Actor_GetActorBaseForm((Actor *)*(this + 0xF), 0) ) /*0x61b19b*/
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)*(this + 0xF), 0); /*0x61b1ad*/
    p_modlist = &ActorBaseForm[3].member.modlist; /*0x61b1b4*/
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 ) /*0x61b1b7*/
    {
      do /*0x61b231*/
      {
        if ( !p_modlist->next && !p_modlist->data ) /*0x61b1c6*/
          break; /*0x61b1c9*/
        data = p_modlist->data; /*0x61b1cb*/
        if ( p_modlist->data ) /*0x61b1cb*/
        {
          v5 = *(int (__thiscall **)(int))(data->unkFile018 + 0x18); /*0x61b1d4*/
          p_unkFile018 = (int)&data->unkFile018; /*0x61b1d7*/
          if ( v5(p_unkFile018) != 4 && (*(int (__thiscall **)(int))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) != 1 ) /*0x61b1ef*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF) /*0x61b204*/
                                                                                          + 0x17)
                                                                                        + 0x1C))(
                   (char *)*(this + 0xF) + 0x5C,
                   p_unkFile018,
                   0,
                   0,
                   0) )
            {
              CombatController_CategorizeAvailableMagicItem((char *)this, p_unkFile018, 0); /*0x61b20f*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) == 1 ) /*0x61b220*/
            CombatController_CategorizeAvailableMagicItem((char *)this, p_unkFile018, 0); /*0x61b227*/
        }
        p_modlist = p_modlist->next; /*0x61b22c*/
      }
      while ( p_modlist ); /*0x61b231*/
    }
  }
  if ( Actor_IsNPC((Actor *)*(this + 0xF)) ) /*0x61b236*/
  {
    v7 = Game_RandomLargeInteger(0) % 0x64 < (int)stru_B37200.value; /*0x61b25e*/
    if ( Actor::GetRaceIfNPC((Actor *)*(this + 0xF)) ) /*0x61b261*/
    {
      RaceIfNPC = Actor::GetRaceIfNPC((Actor *)*(this + 0xF)); /*0x61b271*/
      p_spellList = &RaceIfNPC->spells.spellList; /*0x61b278*/
      if ( RaceIfNPC != (TESRace *)0xFFFFFFD0 ) /*0x61b27b*/
      {
        do /*0x61b318*/
        {
          if ( !p_spellList->next && !p_spellList->type ) /*0x61b287*/
            break; /*0x61b28b*/
          type = p_spellList->type; /*0x61b291*/
          if ( p_spellList->type ) /*0x61b291*/
          {
            Unk_06 = type[1].vtbl->Unk_06; /*0x61b29b*/
            v12 = (int)&type[1]; /*0x61b29e*/
            if ( ((int (__thiscall *)(int))Unk_06)(v12) != 4 /*0x61b2b6*/
              && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 1 )
            {
              if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF) /*0x61b2cb*/
                                                                                            + 0x17)
                                                                                          + 0x1C))(
                     (char *)*(this + 0xF) + 0x5C,
                     v12,
                     0,
                     0,
                     0) )
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 2 /*0x61b2ef*/
                  && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) != 3
                  || v7 )
                {
                  CombatController_CategorizeAvailableMagicItem((char *)this, v12, 0); /*0x61b2f6*/
                }
              }
            }
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x18))(v12) == 1 ) /*0x61b307*/
              CombatController_CategorizeAvailableMagicItem((char *)this, v12, 0); /*0x61b30e*/
          }
          p_spellList = p_spellList->next; /*0x61b313*/
        }
        while ( p_spellList ); /*0x61b318*/
      }
    }
  }
  for ( i = (int *)(*(int (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)*(this + 0xF) + 0x16) + 0x454))( /*0x61b335*/
                     *((_DWORD *)*(this + 0xF) + 0x16),
                     *(this + 0xF),
                     1); i; i = (int *)i[1] )
  {
    if ( !i[1] && !*i ) /*0x61b33d*/
      break; /*0x61b340*/
    v14 = *i; /*0x61b342*/
    if ( *i ) /*0x61b342*/
    {
      v15 = *(int (__thiscall **)(int))(*(_DWORD *)(v14 + 0x18) + 0x18); /*0x61b34b*/
      v16 = v14 + 0x18; /*0x61b34e*/
      if ( v15(v16) == 1 /*0x61b36d*/
        || (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD, _DWORD, _DWORD))(*((_DWORD *)*(this + 0xF) + 0x17)
                                                                                  + 0x1C))(
             (char *)*(this + 0xF) + 0x5C,
             v16,
             0,
             0,
             0) )
      {
        CombatController_CategorizeAvailableMagicItem((char *)this, v16, 0); /*0x61b378*/
      }
    }
  }
  TotalEntryCountForITem = TESObjectREF_GetTotalEntryCountForITem((TESObjectREFR *)*(this + 0xF), 0); /*0x61b38e*/
  for ( j = 0; (int)j < TotalEntryCountForITem; j = (TESForm *)((char *)j + 1) ) /*0x61b394*/
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)*(this + 0xF), j, 0); /*0x61b39c*/
    v21 = (ExtraDataList ***)InventoryEntryOfItem; /*0x61b3a1*/
    if ( InventoryEntryOfItem ) /*0x61b3a5*/
    {
      v22 = InventoryEntryOfItem->type; /*0x61b3a7*/
      switch ( v22->member.type ) /*0x61b3bd*/
      {
        case kFormType_Book: /*0x61b3bd*/
          v32 = OblivionDynamicCast( /*0x61b4cb*/
                  v22,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectBOOK `RTTI Type Descriptor',
                  0);
          if ( !v32 ) /*0x61b4d5*/
            goto LABEL_42; /*0x61b4d5*/
          v33 = v32[0x19]; /*0x61b4db*/
          if ( !v33 ) /*0x61b4e0*/
            goto LABEL_42; /*0x61b4e0*/
          CombatController_CategorizeAvailableMagicItem((char *)this, v33 + 0x18, v21); /*0x61b4ed*/
          break; /*0x61b4f2*/
        case kFormType_AlchemyItem: /*0x61b3bd*/
          v23 = OblivionDynamicCast( /*0x61b3d3*/
                  v22,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &AlchemyItem `RTTI Type Descriptor',
                  0);
          if ( v23 ) /*0x61b3dd*/
            CombatController_CategorizeAvailableMagicItem((char *)this, (int)v23 + 0x24, v21); /*0x61b3e6*/
          goto LABEL_42; /*0x61b3e6*/
        default:
LABEL_42:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v21, v20); /*0x61b3eb*/
          FormHeapFree((unsigned int)v21); /*0x61b3f3*/
          break; /*0x61b3f3*/
      }
    }
  }
  v24 = (char **)*(this + 0x28); /*0x61b402*/
  if ( v24 ) /*0x61b40a*/
    MagicItem_LoadVFXModels(*v24, 0); /*0x61b410*/
  v25 = (char **)*(this + 0x27); /*0x61b415*/
  if ( v25 ) /*0x61b41d*/
    MagicItem_LoadVFXModels(*v25, 0); /*0x61b423*/
  v26 = (char **)*(this + 0x24); /*0x61b428*/
  if ( v26 ) /*0x61b430*/
    MagicItem_LoadVFXModels(*v26, 0); /*0x61b436*/
  v27 = (char **)*(this + 0x25); /*0x61b43b*/
  if ( v27 ) /*0x61b443*/
    MagicItem_LoadVFXModels(*v27, 0); /*0x61b449*/
  result = (TESForm *)*(this + 0x26); /*0x61b44e*/
  if ( result ) /*0x61b456*/
  {
    MagicItem_LoadVFXModels((char *)result->vtbl, 0); /*0x61b460*/
    result = (TESForm *)*(this + 0x26); /*0x61b465*/
    if ( result->vtbl ) /*0x61b46b*/
    {
      p_CompareTo = &result->vtbl->super.CompareTo; /*0x61b476*/
      if ( result->vtbl != (TESFormVtbl *)0xFFFFFFF4 ) /*0x61b479*/
      {
        do /*0x61b512*/
        {
          if ( !p_CompareTo[2] && !p_CompareTo[1] ) /*0x61b486*/
            break; /*0x61b48a*/
          if ( *(this + 0x2A) ) /*0x61b490*/
            break; /*0x61b497*/
          result = (TESForm *)p_CompareTo[1]; /*0x61b499*/
          if ( result ) /*0x61b49e*/
          {
            v30 = *(_DWORD *)&result[1].member.type; /*0x61b4a0*/
            result = *(TESForm **)(v30 + 0x58); /*0x61b4a3*/
            if ( (BYTE2(result) & 1) != 0 ) /*0x61b4ae*/
            {
              if ( ((unsigned int)result & 0x70000) != 0 ) /*0x61b4b5*/
                v31 = *(_DWORD *)(v30 + 0x60); /*0x61b4b7*/
              else
                v31 = 0; /*0x61b4f7*/
              result = TESForm_LookupByFormID(v31); /*0x61b4fa*/
              *(this + 0x2A) = result; /*0x61b502*/
            }
          }
          v34 = p_CompareTo[2]; /*0x61b508*/
          if ( !v34 ) /*0x61b50d*/
            break; /*0x61b50d*/
          p_CompareTo = (unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))((char *)v34 + 0xFFFFFFFC); /*0x61b50f*/
        }
        while ( p_CompareTo ); /*0x61b512*/
      }
    }
  }
  return result; /*0x61b518*/
}
