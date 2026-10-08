void __thiscall sub_627190(TESPackage *ecx0)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v5; // eax
  const char *v6; // eax
  int v7; // ebp
  UInt32 v8; // edi
  UInt32 *v9; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  UInt32 *v11; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // ecx
  unsigned __int8 *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edx
  int v18; // [esp-18h] [ebp-44h]
  int v19; // [esp-18h] [ebp-44h]
  int v20; // [esp-14h] [ebp-40h]
  int v21; // [esp-14h] [ebp-40h]
  int v22; // [esp+0h] [ebp-2Ch]
  unsigned __int16 v23; // [esp+0h] [ebp-2Ch]
  int v24; // [esp+4h] [ebp-28h]
  unsigned __int16 v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+10h] [ebp-1Ch]
  TESForm a1; // [esp+14h] [ebp-18h] BYREF

  TESPackage_LoadGame(ecx0); /*0x627198*/
  bufferCursor = 0; /*0x6271a3*/
  *(_DWORD *)&a1.member.type = 0; /*0x6271a5*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member.flags, 4u); /*0x6271c3*/
    if ( a1.member.flags != (kFormFlags_CantWait|kFormFlags_Compressed|kFormFlags_OffLimits|kFormFlags_Temporary|kFormFlags_InitiallyDisabled|kFormFlags_QuestItem|kFormFlags_BorderRegion|kFormFlags_FromActiveFile|0x4B410000) )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6271d7*/
      if ( currentlyLoadingFormHeader )
      {
        v5 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x6271e4*/
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)( /*0x6271ff*/
                             v5,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\FleePackage.cpp",
          0x211,
          *currentlyLoadingFormHeader,
          v6,
          v22,
          v24);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\FleePackage.cpp",
          0x211,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x627240*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member, 2u); /*0x62724a*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &a1, 2u); /*0x627259*/
  v7 = 0; /*0x62725e*/
  if ( LOWORD(a1.vtbl) ) /*0x627265*/
  {
    do /*0x6272ca*/
    {
      TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, &a1.member.refID, 4u); /*0x627270*/
      v8 = *(_DWORD *)&a1.member.type; /*0x62727b*/
      if ( *(_DWORD *)&a1.member.type ) /*0x62727d*/
      {
        if ( ecx0[1].members.procedureArrayIndex ) /*0x62727f*/
        {
          v9 = (UInt32 *)FormHeapAlloc(8u); /*0x627287*/
          if ( v9 ) /*0x627291*/
          {
            *v9 = ecx0[1].members.procedureArrayIndex; /*0x627296*/
            v9[1] = 0; /*0x627298*/
            v9[1] = ecx0[1].members.packageFlags; /*0x6272a2*/
            ecx0[1].members.packageFlags = (UInt32)v9; /*0x6272a5*/
          }
          else
          {
            *(_DWORD *)4 = ecx0[1].members.packageFlags; /*0x6272b2*/
            ecx0[1].members.packageFlags = 0; /*0x6272b5*/
          }
          ecx0[1].members.procedureArrayIndex = v8; /*0x6272a8*/
        }
        else
        {
          ecx0[1].members.procedureArrayIndex = *(_DWORD *)&a1.member.type; /*0x6272bd*/
        }
      }
      ++v7; /*0x6272c5*/
    }
    while ( v7 < v25 ); /*0x6272ca*/
  }
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&a1.member.flags, 4u); /*0x6272d5*/
  ecx0[1].members.location = (LocationData *)a1.vtbl; /*0x6272e7*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&a1.member, 4u); /*0x6272ea*/
  *(_DWORD *)&ecx0[1].members.type = v26; /*0x6272f8*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)&ecx0[1].__vftable + 1, 1u); /*0x6272fe*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].members.target, 1u); /*0x62730b*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].members.super.modlist.next, 1u); /*0x627318*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].members.super.modlist, 4u); /*0x627325*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].members, 0xCu); /*0x627332*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1], 1u); /*0x62733f*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x62734f*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)&ecx0[1].members.target + 1, 1u); /*0x627359*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x627364*/
  {
    v10 = g_TESSaveLoadGame; /*0x627371*/
    v11 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x627377*/
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x62737f*/
    if ( v11 ) /*0x627382*/
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x627395*/
      v14 = &bufferCursor[v23]; /*0x627397*/
      if ( v12 <= v14 ) /*0x62739f*/
      {
        if ( v12 < v14 ) /*0x6273e0*/
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x6273f7*/
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError( /*0x627416*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[v23 - (_DWORD)v12],
            ".\\AI\\FleePackage.cpp",
            0x239,
            *v11,
            v16,
            v19,
            v21);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x6273b2*/
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError( /*0x6273d1*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v12[-v23] - bufferCursor,
          ".\\AI\\FleePackage.cpp",
          0x239,
          *v11,
          v15,
          v18,
          v20);
      }
    }
    else
    {
      v17 = &bufferCursor[v23]; /*0x62742a*/
      if ( v12 <= v17 ) /*0x62742f*/
      {
        if ( v12 < v17 ) /*0x627459*/
          PrintError( /*0x627474*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[v23 - (_DWORD)v12],
            ".\\AI\\FleePackage.cpp",
            0x239,
            v10->currentVersion);
      }
      else
      {
        PrintError( /*0x62744a*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v12[-v23] - bufferCursor,
          ".\\AI\\FleePackage.cpp",
          0x239,
          v10->currentVersion);
      }
    }
  }
}
