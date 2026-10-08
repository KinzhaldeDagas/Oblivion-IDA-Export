// Verified package persistence virtual LoadGame from vtable slot E4, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
void __thiscall TESPackage_LoadGame(TESPackage *self)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  _DWORD *v6; // eax
  LocationData *v7; // eax
  _DWORD *v8; // eax
  TargetData *v9; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  UInt32 *v11; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // ecx
  unsigned __int8 *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edx
  int v18; // [esp-8h] [ebp-34h]
  int v19; // [esp-8h] [ebp-34h]
  int v20; // [esp-8h] [ebp-34h]
  int v21; // [esp-4h] [ebp-30h]
  int v22; // [esp-4h] [ebp-30h]
  int v23; // [esp-4h] [ebp-30h]
  _BYTE a1[25]; // [esp+13h] [ebp-19h] BYREF

  *(_DWORD *)&a1[1] = 0; /*0x567f9e*/
  bufferCursor = 0; /*0x567fa6*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[5], 4u); /*0x567fc2*/
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x567fd6*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x567fe3*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x567ffe*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Package.cpp",
          0xEC0,
          *currentlyLoadingFormHeader,
          v5,
          v18,
          v21);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Package.cpp",
          0xEC0,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x56803f*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[1], 2u); /*0x568049*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->members.packageFlags, 8u); /*0x56805a*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, a1, 1u); /*0x568068*/
  if ( (a1[0] & 1) != 0 ) /*0x568075*/
  {
    v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x568079*/
    *(_DWORD *)&a1[9] = v6; /*0x568081*/
    *(_DWORD *)&a1[0x15] = 0; /*0x568087*/
    if ( v6 ) /*0x56808f*/
      v7 = (LocationData *)TESPackage_LocationData_constr(v6); /*0x568093*/
    else
      v7 = 0; /*0x56809a*/
    *(_DWORD *)&a1[0x15] = 0xFFFFFFFF; /*0x56809e*/
    self->members.location = v7; /*0x5680a2*/
    sub_569A40(v7); /*0x5680a5*/
  }
  if ( (a1[0] & 2) != 0 ) /*0x5680af*/
  {
    v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5680b3*/
    *(_DWORD *)&a1[9] = v8; /*0x5680bb*/
    *(_DWORD *)&a1[0x15] = 1; /*0x5680c1*/
    if ( v8 ) /*0x5680c9*/
      v9 = (TargetData *)TESPackage_TargetData_constr(v8); /*0x5680cd*/
    else
      v9 = 0; /*0x5680d4*/
    *(_DWORD *)&a1[0x15] = 0xFFFFFFFF; /*0x5680d8*/
    self->members.target = v9; /*0x5680dc*/
    sub_56A020(v9); /*0x5680df*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->members.procedureArrayIndex, 4u); /*0x5680f0*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5680fb*/
  {
    v10 = g_TESSaveLoadGame; /*0x568108*/
    v11 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x56810e*/
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x568116*/
    if ( v11 ) /*0x568119*/
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x56812c*/
      v14 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x56812e*/
      if ( v12 <= v14 ) /*0x568136*/
      {
        if ( v12 < v14 ) /*0x568183*/
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x56819a*/
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError( /*0x5681b9*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v12],
            "..\\TES Shared\\Package.cpp",
            0xED7,
            *v11,
            v16,
            v20,
            v23);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x568149*/
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError( /*0x568168*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v12[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\Package.cpp",
          0xED7,
          *v11,
          v15,
          v19,
          v22);
      }
    }
    else
    {
      v17 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x5681d9*/
      if ( v12 <= v17 ) /*0x5681de*/
      {
        if ( v12 < v17 ) /*0x5681fb*/
          PrintError( /*0x568216*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v12],
            "..\\TES Shared\\Package.cpp",
            0xED7,
            v10->currentVersion);
      }
      else
      {
        PrintError( /*0x5681f9*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v12[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\Package.cpp",
          0xED7,
          v10->currentVersion);
      }
    }
  }
}
