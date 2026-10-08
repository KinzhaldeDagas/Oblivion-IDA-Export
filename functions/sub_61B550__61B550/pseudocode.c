void __usercall sub_61B550(_DWORD *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  int v9; // edi
  TESSaveLoadGame_SerializationView *v10; // ecx
  int v11; // eax
  TESSaveLoadGame_SerializationView *v12; // ecx
  TESSaveLoadGame_SerializationView *v13; // ecx
  TESSaveLoadGame_SerializationView *v14; // ecx
  TESSaveLoadGame_SerializationView *v15; // ecx
  TESSaveLoadGame_SerializationView *v16; // ecx
  TESSaveLoadGame_SerializationView *v17; // ecx
  TESSaveLoadGame_SerializationView *v18; // ecx
  UInt32 *v19; // edi
  unsigned __int8 *v20; // esi
  TESForm *v21; // ecx
  unsigned __int8 *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // edx
  int v26; // [esp-20h] [ebp-74h]
  int v27; // [esp-20h] [ebp-74h]
  int v28; // [esp-1Ch] [ebp-70h]
  int v29; // [esp-1Ch] [ebp-70h]
  unsigned __int16 v30; // [esp+0h] [ebp-54h]
  int v31; // [esp+10h] [ebp-44h]
  unsigned int v32[2]; // [esp+18h] [ebp-3Ch] BYREF
  unsigned int v33; // [esp+20h] [ebp-34h] BYREF
  unsigned int destination; // [esp+28h] [ebp-2Ch] BYREF
  int v35; // [esp+2Ch] [ebp-28h]
  unsigned int v36; // [esp+30h] [ebp-24h] BYREF
  TESForm a1; // [esp+34h] [ebp-20h] BYREF
  int Dst; // [esp+50h] [ebp-4h] BYREF

  TESPackage_LoadGame((TESPackage *)ecx0); /*0x61b559*/
  *(_DWORD *)&a1.member.type = 0; /*0x61b566*/
  bufferCursor = 0; /*0x61b56a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x61b586*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x61b59a*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x61b5a7*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x61b5c2*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\CombatController.cpp",
          0x28B5,
          *currentlyLoadingFormHeader,
          v8,
          v32[0],
          v32[1]);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\CombatController.cpp",
          0x28B5,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x61b603*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member, 2u);// EngineFix analysis 2026-05-07: AI CombatController saved target/state count; loop consumes at least FormID + 4-byte value (8 bytes), with additional versioned fields. Clamp to remaining / 8 before 0x61B633; allocation at 0x61B6B7 is used without null check. /*0x61b60d*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &a1, 2u);// EngineFix implementation 2026-05-07: this call tail-jumps through TESForm_LoadDataFromCurrentSaveGame into SaveLoad_LoadData, so the SaveGameFixes return-address count rule observes return address 0x61B620 for the CombatController target/state count. Minimum entry size remains 8 bytes from loop 0x61B633-0x61B6FC. /*0x61b61b*/
  v9 = 0; /*0x61b620*/
  if ( LOWORD(a1.vtbl) ) /*0x61b627*/
  {
    v10 = g_TESSaveLoadGame; /*0x61b62d*/
    do /*0x61b6fc*/
    {
      *(float *)&a1.member.modlist.data = 0.0; /*0x61b63b*/
      *(float *)&a1.member.modlist.next = 0.0; /*0x61b640*/
      HIBYTE(v36) = 0; /*0x61b644*/
      SaveLoad_LoadFormID(v10, &a1.member.refID, 4u); /*0x61b648*/
      SaveLoad_LoadData(g_TESSaveLoadGame, &a1, 4u); /*0x61b65a*/
      if ( (int)a1.vtbl < 0 ) /*0x61b663*/
        a1.vtbl = 0; /*0x61b665*/
      v10 = g_TESSaveLoadGame; /*0x61b669*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x1Eu ) /*0x61b673*/
      {
        SaveLoad_LoadData(v10, (char *)&destination + 3, 1u); /*0x61b67c*/
        v10 = g_TESSaveLoadGame; /*0x61b681*/
      }
      if ( v10->currentVersion >= 0x29u ) /*0x61b68b*/
      {
        SaveLoad_LoadData(v10, &a1.member.flags, 4u); /*0x61b694*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member.refID, 4u); /*0x61b6a6*/
        v10 = g_TESSaveLoadGame; /*0x61b6ab*/
      }
      if ( *(_DWORD *)&a1.member.type ) /*0x61b6b5*/
      {
        v11 = FormHeapAlloc(0x14u); /*0x61b6b9*/
        *(_DWORD *)v11 = *(_DWORD *)&a1.member.type;// EngineFix implementation 2026-05-07: narrow allocation-failure hook for CombatController 0x14-byte entry. Serialized entry fields are already consumed; failed allocation now pops the size argument and resumes at 0x61B6F2. /*0x61b6c2*/
        *(_DWORD *)(v11 + 4) = a1.vtbl; /*0x61b6c8*/
        *(_BYTE *)(v11 + 8) = HIBYTE(destination); /*0x61b6cf*/
        *(float *)(v11 + 0xC) = *(float *)&a1.member.flags; /*0x61b6d6*/
        *(float *)(v11 + 0x10) = *(float *)&a1.member.refID; /*0x61b6e1*/
        BSSimpleList_PushBack((_DWORD *)ecx0[0x10], v11); /*0x61b6e7*/
        v10 = g_TESSaveLoadGame; /*0x61b6ec*/
      }
      ++v9; /*0x61b6f7*/
    }
    while ( v9 < (unsigned __int16)v35 ); /*0x61b6fc*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x11, 4u); /*0x61b70a*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x12, 1u); /*0x61b717*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x49, 1u); /*0x61b724*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x4A, 1u); /*0x61b731*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x4B, 1u); /*0x61b73e*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x13, 1u); /*0x61b74b*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x4D, 1u); /*0x61b758*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x4E, 1u); /*0x61b765*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x4F, 1u); /*0x61b772*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x14, 4u); /*0x61b783*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x15, 4u); /*0x61b790*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x16, 1u); /*0x61b79d*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x59, 1u); /*0x61b7aa*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x1B, 4u); /*0x61b7bb*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x1C, 4u); /*0x61b7cc*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x1D, 4u); /*0x61b7dd*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x2C, 0x14u); /*0x61b7ed*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x33, 4u); /*0x61b7fd*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x34, 4u); /*0x61b80d*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x35, 0xCu); /*0x61b821*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x38, 0xCu); /*0x61b835*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x3B, 0xCu); /*0x61b849*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x3E, 0xCu); /*0x61b85d*/
  v12 = g_TESSaveLoadGame; /*0x61b862*/
  a1.member.modlist.data = 0; /*0x61b86f*/
  SaveLoad_LoadFormID(v12, (unsigned int *)&a1.member.modlist, 4u); /*0x61b873*/
  if ( a1.member.flags ) /*0x61b87e*/
    ecx0[0x4B] = a1.member.flags; /*0x61b880*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 0x59, 0xCu); /*0x61b895*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x45, 1u); /*0x61b8a5*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Au ) /*0x61b8b3*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0 + 0x5C, 4u); /*0x61b8c0*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Du ) /*0x61b8cf*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)ecx0 + 0x17D, 1u); /*0x61b8dc*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Fu ) /*0x61b8eb*/
  {
    sub_6181F0(a2, a3, a4, ecx0 + 0x17); /*0x61b8f7*/
    sub_6181F0(a2, a3, a4, ecx0 + 0x18); /*0x61b902*/
    sub_6181F0(a2, a3, a4, ecx0 + 0x19); /*0x61b90d*/
    v13 = g_TESSaveLoadGame; /*0x61b912*/
    *(_DWORD *)&a1.member.type = 0; /*0x61b91f*/
    SaveLoad_LoadFormID(v13, (unsigned int *)&a1.member, 4u); /*0x61b923*/
    ecx0[0x1F] = v36; /*0x61b932*/
    v14 = g_TESSaveLoadGame; /*0x61b936*/
    v36 = 0; /*0x61b93c*/
    SaveLoad_LoadFormID(v14, &v36, 4u); /*0x61b940*/
    ecx0[0x20] = destination; /*0x61b94f*/
    v15 = g_TESSaveLoadGame; /*0x61b955*/
    destination = 0; /*0x61b95c*/
    SaveLoad_LoadFormID(v15, &destination, 4u); /*0x61b960*/
    ecx0[0x21] = v33; /*0x61b96f*/
    v16 = g_TESSaveLoadGame; /*0x61b975*/
    v33 = 0; /*0x61b97c*/
    SaveLoad_LoadFormID(v16, &v33, 4u); /*0x61b980*/
    ecx0[0x22] = v32[0]; /*0x61b98f*/
    v17 = g_TESSaveLoadGame; /*0x61b996*/
    v32[0] = 0; /*0x61b99c*/
    SaveLoad_LoadFormID(v17, v32, 4u); /*0x61b9a0*/
    ecx0[0x23] = v31; /*0x61b9b2*/
    sub_618290(a2, a3, a4, ecx0 + 0x24); /*0x61b9b8*/
    sub_618290(a2, a3, a4, ecx0 + 0x25); /*0x61b9c6*/
    sub_618290(a2, a3, a4, ecx0 + 0x26); /*0x61b9d4*/
    sub_618290(a2, a3, a4, ecx0 + 0x27); /*0x61b9e2*/
    sub_618290(a2, a3, a4, ecx0 + 0x28); /*0x61b9f0*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x66u ) /*0x61b9ff*/
    sub_6181F0(a2, a3, a4, ecx0 + 0x1A); /*0x61ba07*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x61ba12*/
  {
    v18 = g_TESSaveLoadGame; /*0x61ba1f*/
    v19 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x61ba25*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x61ba2d*/
    if ( v19 ) /*0x61ba30*/
    {
      v21 = TESForm_LookupByFormID(*v19); /*0x61ba43*/
      v22 = &bufferCursor[v30]; /*0x61ba45*/
      if ( v20 <= v22 ) /*0x61ba4d*/
      {
        if ( v20 < v22 ) /*0x61ba8f*/
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x61baa6*/
                                v21,
                                *((unsigned __int8 *)v19 + 9),
                                *(UInt32 *)((char *)v19 + 5));
          PrintError( /*0x61bac5*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[v30 - (_DWORD)v20],
            ".\\AI\\CombatController.cpp",
            0x2922,
            *v19,
            v24,
            v27,
            v29);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x61ba60*/
                              v21,
                              *((unsigned __int8 *)v19 + 9),
                              *(UInt32 *)((char *)v19 + 5));
        PrintError( /*0x61ba7f*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v20[-v30] - bufferCursor,
          ".\\AI\\CombatController.cpp",
          0x2922,
          *v19,
          v23,
          v26,
          v28);
      }
    }
    else
    {
      v25 = &bufferCursor[v30]; /*0x61bada*/
      if ( v20 <= v25 ) /*0x61badf*/
      {
        if ( v20 < v25 ) /*0x61bb0a*/
          PrintError( /*0x61bb25*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[v30 - (_DWORD)v20],
            ".\\AI\\CombatController.cpp",
            0x2922,
            v18->currentVersion);
      }
      else
      {
        PrintError( /*0x61bafa*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v20[-v30] - bufferCursor,
          ".\\AI\\CombatController.cpp",
          0x2922,
          v18->currentVersion);
      }
    }
  }
}
