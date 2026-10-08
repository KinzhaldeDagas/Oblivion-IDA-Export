// Verified package persistence virtual LoadGame from vtable slot E4, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
// Verified: reads UInt16 count then3-byte crime references, resolves via675D00, inserts only nonnull results into head at+3C. Does not allocate Crime payloads here; allocates only8-byte list nodes as needed.
void __thiscall AlarmPackage_LoadGame(AlarmPackage *self)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  Crime *CrimeByIndex; // edi
  TESForm::ModReferenceList *next; // esi
  TESForm::ModReferenceList *v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  UInt32 *v10; // edi
  unsigned __int8 *v11; // esi
  TESForm *v12; // ecx
  unsigned __int8 *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // edx
  int v17; // [esp-8h] [ebp-34h]
  int v18; // [esp-8h] [ebp-34h]
  int v19; // [esp-8h] [ebp-34h]
  int v20; // [esp-4h] [ebp-30h]
  int v21; // [esp-4h] [ebp-30h]
  int v22; // [esp-4h] [ebp-30h]
  char Dst; // [esp+13h] [ebp-19h] BYREF
  TESForm a1; // [esp+14h] [ebp-18h] BYREF

  a1.member.modlist.next = (TESForm::ModReferenceList *)self; /*0x606e19*/
  TESPackage_LoadGame(&self->base); /*0x606e1d*/
  *(_DWORD *)&a1.member.type = 0; /*0x606e2a*/
  bufferCursor = 0; /*0x606e2e*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member.refID, 4u); /*0x606e4a*/
    if ( a1.member.refID != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x606e5e*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x606e6b*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x606e86*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\AlarmPackage.cpp",
          0x21E,
          *currentlyLoadingFormHeader,
          v5,
          v17,
          v20);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\AlarmPackage.cpp",
          0x21E,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x606ec7*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member, 2u); /*0x606ed1*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &a1, 2u); /*0x606edf*/
  a1.member.flags = 0; /*0x606ee9*/
  if ( LOWORD(a1.vtbl) ) /*0x606eed*/
  {
    do /*0x606f73*/
    {
      SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 1u); /*0x606f00*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member.modlist, 2u); /*0x606f12*/
      CrimeByIndex = ActorProcessManager_GetCrimeByIndex( /*0x606f2c*/
                       (ActorProcessManager *)&qword_B3BB2C[0x75],
                       Dst,
                       (unsigned __int16)a1.member.modlist.data);
      if ( CrimeByIndex ) /*0x606f30*/
      {
        next = a1.member.modlist.next[7].next; /*0x606f36*/
        if ( next->data ) /*0x606f39*/
        {
          v8 = (TESForm::ModReferenceList *)FormHeapAlloc(8u); /*0x606f3f*/
          if ( v8 ) /*0x606f49*/
          {
            v8->data = next->data; /*0x606f4d*/
            v8->next = 0; /*0x606f4f*/
          }
          else
          {
            v8 = 0; /*0x606f54*/
          }
          v8->next = next->next; /*0x606f59*/
          next->next = v8; /*0x606f5c*/
        }
        next->data = (Data *)CrimeByIndex; /*0x606f5f*/
      }
      ++a1.member.flags; /*0x606f6f*/
    }
    while ( a1.member.flags < LOWORD(a1.vtbl) ); /*0x606f73*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x606f7f*/
  {
    v9 = g_TESSaveLoadGame; /*0x606f8c*/
    v10 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x606f92*/
    v11 = g_TESSaveLoadGame->bufferCursor; /*0x606f9a*/
    if ( v10 ) /*0x606f9d*/
    {
      v12 = TESForm_LookupByFormID(*v10); /*0x606fab*/
      v13 = &bufferCursor[*(unsigned __int16 *)&a1.member.type]; /*0x606fb2*/
      if ( v11 <= v13 ) /*0x606fb9*/
      {
        if ( v11 < v13 ) /*0x606ffb*/
        {
          v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x607012*/
                                v12,
                                *((unsigned __int8 *)v10 + 9),
                                *(UInt32 *)((char *)v10 + 5));
          PrintError( /*0x607031*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[*(unsigned __int16 *)&a1.member.type - (_DWORD)v11],
            ".\\AI\\AlarmPackage.cpp",
            0x232,
            *v10,
            v15,
            v19,
            v22);
        }
      }
      else
      {
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x606fcc*/
                              v12,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError( /*0x606feb*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v11[-*(unsigned __int16 *)&a1.member.type] - bufferCursor,
          ".\\AI\\AlarmPackage.cpp",
          0x232,
          *v10,
          v14,
          v18,
          v21);
      }
    }
    else
    {
      v16 = &bufferCursor[*(unsigned __int16 *)&a1.member.type]; /*0x607046*/
      if ( v11 <= v16 ) /*0x60704b*/
      {
        if ( v11 < v16 ) /*0x607076*/
          PrintError( /*0x607091*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[*(unsigned __int16 *)&a1.member.type - (_DWORD)v11],
            ".\\AI\\AlarmPackage.cpp",
            0x232,
            v9->currentVersion);
      }
      else
      {
        PrintError( /*0x607066*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v11[-*(unsigned __int16 *)&a1.member.type] - bufferCursor,
          ".\\AI\\AlarmPackage.cpp",
          0x232,
          v9->currentVersion);
      }
    }
  }
}
