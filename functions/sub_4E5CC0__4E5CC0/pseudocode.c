// Verified load path for linked-point state: reads the u16 count and indices, range-checks each against the point array capacity, then sets linkedPointsDisabled on valid non-null points. Save-block boundary diagnostics are performed after the payload read.
void __thiscall TESPathGrid_LoadModifiedForm(TESPathGrid *this)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  unsigned int i; // esi
  NiTArray_TESPathGridPoint *pointArray; // eax
  TESPathGridPoint *v8; // ecx
  TESSaveLoadGame_SerializationView *v9; // ecx
  UInt32 *v10; // edi
  unsigned __int8 *v11; // esi
  TESForm *v12; // ecx
  unsigned __int8 *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // edx
  int v17; // [esp-8h] [ebp-24h]
  int v18; // [esp-8h] [ebp-24h]
  int v19; // [esp-8h] [ebp-24h]
  int v20; // [esp-4h] [ebp-20h]
  int v21; // [esp-4h] [ebp-20h]
  int v22; // [esp-4h] [ebp-20h]
  unsigned __int16 v23; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int16 v24; // [esp+10h] [ebp-Ch] BYREF
  int destination; // [esp+14h] [ebp-8h] BYREF
  int Dst; // [esp+18h] [ebp-4h] BYREF

  destination = 0; /*0x4e5cce*/
  bufferCursor = 0; /*0x4e5cd6*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x4e5cf2*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4e5d06*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x4e5d13*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x4e5d2e*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD63,
          *currentlyLoadingFormHeader,
          v5,
          v17,
          v20);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD63,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x4e5d6f*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x4e5d79*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &v23, 2u); /*0x4e5d8b*/
  for ( i = 0; i < v23; ++i )                   // EnginePatch v1: byte-checked TESPathGrid modified point-count guard. Clamps save-controlled UInt16 loop count to remaining tracked save buffer bytes / 2 before per-point reads. /*0x4e5d97*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &v24, 2u);// Loading review: per-point path-grid loop driven by save-controlled UInt16 count; plugin clamps count at 0x4E5D90. /*0x4e5dad*/
    pointArray = this->pointArray; /*0x4e5db2*/
    if ( pointArray ) /*0x4e5db7*/
    {
      if ( v24 < HIWORD(pointArray->capacity) ) /*0x4e5dc2*/
      {
        v8 = pointArray->data[v24]; /*0x4e5dca*/
        if ( v8 ) /*0x4e5dcf*/
          PathGraphNode_SetLinkedPointsDisabled(v8, 1); /*0x4e5dd3*/
      }
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e5dea*/
  {
    v9 = g_TESSaveLoadGame; /*0x4e5df7*/
    v10 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4e5dfd*/
    v11 = g_TESSaveLoadGame->bufferCursor; /*0x4e5e05*/
    if ( v10 ) /*0x4e5e08*/
    {
      v12 = TESForm_LookupByFormID(*v10); /*0x4e5e1b*/
      v13 = &bufferCursor[(unsigned __int16)destination]; /*0x4e5e1d*/
      if ( v11 <= v13 ) /*0x4e5e25*/
      {
        if ( v11 < v13 ) /*0x4e5e66*/
        {
          v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x4e5e7d*/
                                v12,
                                *((unsigned __int8 *)v10 + 9),
                                *(UInt32 *)((char *)v10 + 5));
          PrintError( /*0x4e5e9c*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v11],
            "..\\TES Shared\\TESPathGrid.cpp",
            0xD75,
            *v10,
            v15,
            v19,
            v22);
        }
      }
      else
      {
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x4e5e38*/
                              v12,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError( /*0x4e5e57*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v11[-(unsigned __int16)destination] - bufferCursor,
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD75,
          *v10,
          v14,
          v18,
          v21);
      }
    }
    else
    {
      v16 = &bufferCursor[(unsigned __int16)destination]; /*0x4e5eb0*/
      if ( v11 <= v16 ) /*0x4e5eb5*/
      {
        if ( v11 < v16 ) /*0x4e5edf*/
          PrintError( /*0x4e5efa*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)destination - (_DWORD)v11],
            "..\\TES Shared\\TESPathGrid.cpp",
            0xD75,
            v9->currentVersion);
      }
      else
      {
        PrintError( /*0x4e5ed0*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v11[-(unsigned __int16)destination] - bufferCursor,
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD75,
          v9->currentVersion);
      }
    }
  }
}
