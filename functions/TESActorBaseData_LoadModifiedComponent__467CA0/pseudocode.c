// Verified: mask 0x10 restores 16 bytes at component +4, including NoBloodSpray/NoBloodDecal; mask 0x40 rebuilds faction list from UInt16 count plus FormID/rank pairs. This is savegame delta serialization, separate from creature record NAM0/NAM1 path loading. Updated prototypes use 32-bit counts; no extra EBX argument.
// Probable parameter naming: currentFlags is the second forwarded load argument (Oblivion calling convention verified; meaning suggested by Fallout aiCurrentFlags and matching parent/component chain). Higher-level policy remains Unknown.
void __thiscall TESActorBaseData_LoadModifiedComponent(
        TESActorBaseData *self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v6; // eax
  const char *v7; // eax
  TESForm *v8; // ebx
  FactionListData *v9; // edi
  FactionListEntry *v10; // eax
  TESSaveLoadGame_SerializationView *v11; // ecx
  UInt32 *v12; // edi
  unsigned __int8 *v13; // esi
  TESForm *v14; // ecx
  unsigned __int8 *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  unsigned __int8 *v18; // edx
  int v19; // [esp-10h] [ebp-30h]
  int v20; // [esp-10h] [ebp-30h]
  int v21; // [esp-Ch] [ebp-2Ch]
  int v22; // [esp-Ch] [ebp-2Ch]
  int v23; // [esp-8h] [ebp-28h]
  int v24; // [esp-4h] [ebp-24h]
  unsigned __int16 v25; // [esp+4h] [ebp-1Ch]
  unsigned __int16 v26; // [esp+8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-14h] BYREF
  int destination; // [esp+10h] [ebp-10h] BYREF
  int a1; // [esp+14h] [ebp-Ch]
  int Dst; // [esp+18h] [ebp-8h] BYREF
  unsigned int v31; // [esp+1Ch] [ebp-4h] BYREF

  bufferCursor = 0; /*0x467cad*/
  destination = 0; /*0x467cb0*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x467cce*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x467ce2*/
      if ( currentlyLoadingFormHeader )
      {
        v6 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x467cef*/
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)( /*0x467d0a*/
                             v6,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x678,
          *currentlyLoadingFormHeader,
          v7,
          v23,
          v24);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x678,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x467d4b*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x467d55*/
  }
  if ( (changeMask & 0x10) != 0 )               // 3DTheft decode 2026-05-13: Save/load modified actor-base flags bit 0x10 reloads the 4-byte flags dword at component +0x04. /*0x467d62*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &self->flags, 0x10u); /*0x467d70*/
  if ( (changeMask & 0x40) != 0 ) /*0x467d78*/
  {
    TESActorBaseData_ClearFactionList((unsigned int *)self); /*0x467d80*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &v27, 2u);// EngineFix analysis 2026-05-07: TESActorBaseData faction-list count is save-controlled UInt16; loop consumes FormID + rank byte (5 bytes) and does lookup/allocation per entry. Candidate count clamp to remaining / 5. /*0x467d92*/
    a1 = 0; /*0x467d9d*/
    if ( (_WORD)v27 ) /*0x467da5*/
    {
      do /*0x467e3e*/
      {
        SaveLoad_LoadFormID(g_TESSaveLoadGame, &v31, 4u); /*0x467dbd*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v31, 1u); /*0x467dcf*/
        v8 = TESForm_LookupByFormID(a1); /*0x467dde*/
        if ( v8 ) /*0x467de5*/
        {
          v9 = (FactionListData *)FormHeapAlloc(8u);// EngineFix implementation 2026-05-07: narrow allocation-failure hook. If faction entry allocation fails after FormID+rank are consumed, pop the allocation argument and resume at loop tail 0x467E2C without writing through NULL. /*0x467dee*/
          v9->faction = v8;                     // EngineFix analysis 2026-05-07: FormHeapAlloc result for faction entry is used before a null check; allocation failure would write through NULL. /*0x467df0*/
          v9->rank = v31; /*0x467df9*/
          if ( self->factionList.data ) /*0x467dfc*/
          {
            v10 = (FactionListEntry *)FormHeapAlloc(8u); /*0x467e04*/
            if ( v10 )                          // EngineFix implementation 2026-05-07: narrow allocation-failure hook for non-empty faction list node. On node allocation failure, free the just-created entry and resume at 0x467E2C, leaving the existing list unchanged. /*0x467e0e*/
            {
              v10->data = self->factionList.data; /*0x467e13*/
              v10->next = 0; /*0x467e15*/
            }
            else
            {
              v10 = 0; /*0x467e1e*/
            }
            v10->next = self->factionList.next; // EngineFix analysis 2026-05-07: list-node allocation failure path zeroes eax then writes [eax+4]. Patch allocation failure to leave list unchanged after entry bytes are consumed. /*0x467e23*/
            self->factionList.next = v10; /*0x467e26*/
          }
          self->factionList.data = v9; /*0x467e29*/
        }
        ++v27; /*0x467e3a*/
      }
      while ( v27 < v25 ); /*0x467e3e*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x467e4a*/
  {
    v11 = g_TESSaveLoadGame; /*0x467e58*/
    v12 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x467e5e*/
    v13 = g_TESSaveLoadGame->bufferCursor; /*0x467e66*/
    if ( v12 ) /*0x467e69*/
    {
      v14 = TESForm_LookupByFormID(*v12); /*0x467e77*/
      v15 = &bufferCursor[v26]; /*0x467e7e*/
      if ( v13 <= v15 ) /*0x467e85*/
      {
        if ( v13 < v15 ) /*0x467ec8*/
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x467edf*/
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          PrintError( /*0x467efe*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[v26 - (_DWORD)v13],
            "..\\TES Shared\\TESActorBaseData.cpp",
            0x69A,
            *v12,
            v17,
            v20,
            v22);
        }
      }
      else
      {
        v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)( /*0x467e98*/
                              v14,
                              *((unsigned __int8 *)v12 + 9),
                              *(UInt32 *)((char *)v12 + 5));
        PrintError( /*0x467eb7*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v13[-v26] - bufferCursor,
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x69A,
          *v12,
          v16,
          v19,
          v21);
      }
    }
    else
    {
      v18 = &bufferCursor[v26]; /*0x467f14*/
      if ( v13 <= v18 ) /*0x467f19*/
      {
        if ( v13 < v18 ) /*0x467f45*/
          PrintError( /*0x467f60*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[v26 - (_DWORD)v13],
            "..\\TES Shared\\TESActorBaseData.cpp",
            0x69A,
            v11->currentVersion);
      }
      else
      {
        PrintError( /*0x467f34*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v13[-v26] - bufferCursor,
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x69A,
          v11->currentVersion);
      }
    }
  }
}
