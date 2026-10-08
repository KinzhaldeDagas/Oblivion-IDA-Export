// Verified: ECX component receiver; one stack mask for save (RET 4), two stack words for load (RET 8). No extra register parameters. Mask 0x20 gates the spell-list serialization path; connected from TESActorBase save/load dispatcher.
void __thiscall TESSpellList_LoadModifiedComponent(
        TESSpellList *self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  unsigned __int16 v3; // bp
  int v4; // esi
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  SpellListEntry *p_spellList; // edi
  SpellListEntry *p_leveledSpellList; // ebx
  TESForm *v12; // eax
  TESForm *v13; // esi
  TESForm *v14; // eax
  TESForm *v15; // eax
  SpellListEntry *v16; // eax
  SpellListEntry *v17; // ecx
  TESSaveLoadGame_SerializationView *v18; // ecx
  UInt32 *v19; // edi
  unsigned __int8 *v20; // esi
  TESForm *v21; // ecx
  unsigned __int8 *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // edx
  int v26; // [esp-18h] [ebp-30h]
  int v27; // [esp-18h] [ebp-30h]
  int v28; // [esp-14h] [ebp-2Ch]
  int v29; // [esp-14h] [ebp-2Ch]
  int v30; // [esp-Ch] [ebp-24h]
  int v31; // [esp-8h] [ebp-20h]
  int v32; // [esp-4h] [ebp-1Ch]
  unsigned __int16 v33; // [esp+0h] [ebp-18h]
  char v34[4]; // [esp+4h] [ebp-14h]
  int destination; // [esp+8h] [ebp-10h] BYREF
  char ArgList[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v37; // [esp+10h] [ebp-8h]
  int Dst; // [esp+14h] [ebp-4h] BYREF

  if ( (changeMask & 0x20) != 0 )
  {
    v33 = v3; /*0x46f8f7*/
    bufferCursor = 0; /*0x46f8f8*/
    v32 = v4; /*0x46f8fa*/
    destination = 0; /*0x46f8fb*/
    if ( TESSaveLoadGame_UseSaveGameBlocks() )
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x46f919*/
      if ( Dst != 0x4B4F4C42 )
      {
        currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x46f92d*/
        if ( currentlyLoadingFormHeader )
        {
          v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x46f93a*/
          v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD, int))v8->vtbl->GetEditorName)( /*0x46f955*/
                               v8,
                               *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                               *(UInt32 *)((char *)currentlyLoadingFormHeader + 5),
                               v32);
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s w"
            "ith version %i and flags %08X",
            "..\\TES Shared\\TESSpellList.cpp",
            0x52F,
            *currentlyLoadingFormHeader,
            v9,
            v30,
            v31);
        }
        else
        {
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
            "..\\TES Shared\\TESSpellList.cpp",
            0x52F,
            g_TESSaveLoadGame->currentVersion);
        }
      }
      bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x46f996*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x46f9a0*/
    }
    p_spellList = &self->spellList; /*0x46f9a6*/
    BSSimpleList_Clear(&self->spellList.type); /*0x46f9ab*/
    p_leveledSpellList = &self->leveledSpellList; /*0x46f9b0*/
    BSSimpleList_Clear(p_leveledSpellList); /*0x46f9b5*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &changeMask, 2u); /*0x46f9c7*/
    v37 = 0;                                    // MEF v51 bridge-stack audit: direct JMP preserves entry ESP. Vanilla count is word [ESP+24h] (IDA renders [esp+20h+arg_0]); loop index is dword [ESP+18h]. Bridge uses those exact slots. /*0x46f9d2*/
    if ( (_WORD)changeMask ) /*0x46f9da*/
    {
      do /*0x46f9ed*/
      {
        SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)ArgList, 4u); /*0x46f9ed*/
        v12 = TESForm_LookupByFormID(*(UInt32 *)v34); /*0x46fa05*/
        v13 = (TESForm *)OblivionDynamicCast( /*0x46fa29*/
                           v12,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &SpellItem `RTTI Type Descriptor',
                           0);
        v14 = TESForm_LookupByFormID(*(UInt32 *)v34); /*0x46fa2b*/
        v15 = (TESForm *)OblivionDynamicCast( /*0x46fa34*/
                           v14,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESLevSpell `RTTI Type Descriptor',
                           0);
        if ( !v13 ) /*0x46fa3e*/
        {
          if ( v15 ) /*0x46fa7c*/
          {
            if ( g_TESSaveLoadGame->currentVersion < 0x47u && (v17 = p_leveledSpellList) != 0 ) /*0x46fa8e*/
            {
              while ( v17->type != v15 ) /*0x46fa92*/
              {
                v17 = v17->next; /*0x46fa94*/
                if ( !v17 ) /*0x46fa99*/
                  goto LABEL_20; /*0x46fa99*/
              }
            }
            else
            {
LABEL_20:
              BSSimpleList_PushFront(p_leveledSpellList, (int)v15); /*0x46fa9b*/
            }
          }
          else
          {
            PrintError("Could not find spell %08X", *(_DWORD *)v34); /*0x46faaf*/
          }
          goto LABEL_22; /*0x46fa92*/
        }
        if ( !p_spellList->type ) /*0x46fa43*/
          goto LABEL_14; /*0x46fa43*/
        v16 = (SpellListEntry *)FormHeapAlloc(8u); /*0x46fa47*/
        if ( !v16 ) /*0x46fa51*/
        {
          *(_DWORD *)4 = p_spellList->next; /*0x46fa70*/
          p_spellList->next = 0; /*0x46fa73*/
LABEL_14:
          p_spellList->type = v13; /*0x46fa76*/
          goto LABEL_22; /*0x46fa78*/
        }
        v16->type = p_spellList->type; /*0x46fa55*/
        v16->next = 0; /*0x46fa57*/
        v16->next = p_spellList->next; /*0x46fa61*/
        p_spellList->next = v16; /*0x46fa64*/
        p_spellList->type = v13; /*0x46fa67*/
LABEL_22:
        ++destination; /*0x46fab7*/
      }
      while ( destination < (unsigned __int16)Dst ); /*0x46f9ed*/
    }
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46fad5*/
    {
      v18 = g_TESSaveLoadGame; /*0x46fae2*/
      v19 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x46fae8*/
      v20 = g_TESSaveLoadGame->bufferCursor; /*0x46faf0*/
      if ( v19 ) /*0x46faf3*/
      {
        v21 = TESForm_LookupByFormID(*v19); /*0x46fb01*/
        v22 = &bufferCursor[v33]; /*0x46fb08*/
        if ( v20 <= v22 ) /*0x46fb0f*/
        {
          if ( v20 < v22 ) /*0x46fb53*/
          {
            v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x46fb6a*/
                                  v21,
                                  *((unsigned __int8 *)v19 + 9),
                                  *(UInt32 *)((char *)v19 + 5));
            PrintError( /*0x46fb89*/
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versio"
              "n %i and flags %08X",
              &bufferCursor[v33 - (_DWORD)v20],
              "..\\TES Shared\\TESSpellList.cpp",
              0x553,
              *v19,
              v24,
              v27,
              v29);
          }
        }
        else
        {
          v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x46fb22*/
                                v21,
                                *((unsigned __int8 *)v19 + 9),
                                *(UInt32 *)((char *)v19 + 5));
          PrintError( /*0x46fb41*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %"
            "i and flags %08X",
            &v20[-v33] - bufferCursor,
            "..\\TES Shared\\TESSpellList.cpp",
            0x553,
            *v19,
            v23,
            v26,
            v28);
        }
      }
      else
      {
        v25 = &bufferCursor[v33]; /*0x46fba0*/
        if ( v20 <= v25 ) /*0x46fba5*/
        {
          if ( v20 < v25 ) /*0x46fbd2*/
            PrintError( /*0x46fbed*/
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
              &bufferCursor[v33 - (_DWORD)v20],
              "..\\TES Shared\\TESSpellList.cpp",
              0x553,
              v18->currentVersion);
        }
        else
        {
          PrintError( /*0x46fbc0*/
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
            &v20[-v33] - bufferCursor,
            "..\\TES Shared\\TESSpellList.cpp",
            0x553,
            v18->currentVersion);
        }
      }
    }
  }
}
