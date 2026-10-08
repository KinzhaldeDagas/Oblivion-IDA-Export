void __usercall ContainerEntryExtraData_LoadModified(
        int *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
  int v5; // edi
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  TESForm *v10; // eax
  _DWORD *v11; // eax
  bool v12; // cc
  _DWORD *v13; // eax
  ExtraDataList *v14; // esi
  TESSaveLoadGame_SerializationView *v15; // ecx
  UInt32 *v16; // edi
  unsigned __int8 *v17; // esi
  TESForm *v18; // ecx
  unsigned __int8 *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  unsigned __int8 *v22; // edx
  int v23; // [esp-10h] [ebp-44h]
  int v24; // [esp-10h] [ebp-44h]
  int v25; // [esp-Ch] [ebp-40h]
  int v26; // [esp-Ch] [ebp-40h]
  int v27; // [esp-8h] [ebp-3Ch]
  int v28; // [esp-4h] [ebp-38h]
  unsigned __int16 v29; // [esp+Ch] [ebp-28h]
  int v30; // [esp+10h] [ebp-24h] BYREF
  _DWORD destination[2]; // [esp+14h] [ebp-20h] BYREF
  _DWORD *Dst; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v33; // [esp+20h] [ebp-14h] BYREF
  unsigned int v34; // [esp+28h] [ebp-Ch]

  v5 = 0; /*0x4858ff*/
  destination[0] = 0; /*0x485901*/
  bufferCursor = 0; /*0x485905*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x485921*/
    if ( Dst != (_DWORD *)0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x485935*/
      if ( currentlyLoadingFormHeader )
      {
        v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x485942*/
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)( /*0x48595d*/
                             v8,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5B1,
          *currentlyLoadingFormHeader,
          v9,
          v27,
          v28);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5B1,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x48599e*/
    SaveLoad_LoadData(g_TESSaveLoadGame, destination, 2u); /*0x4859a8*/
  }
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &v33, 4u); /*0x4859ba*/
  SaveLoad_LoadData(g_TESSaveLoadGame, ecx0 + 1, 4u); /*0x4859cb*/
  v10 = TESForm_LookupByFormID(destination[1]); /*0x4859e1*/
  ecx0[2] = (int)OblivionDynamicCast( /*0x4859f8*/
                   v10,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                   0);
  *ecx0 = 0; /*0x4859fb*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v30, 4u); /*0x485a04*/
  if ( v30 ) /*0x485a0d*/
  {
    v11 = (_DWORD *)FormHeapAlloc(8u); /*0x485a11*/
    if ( v11 )                                  // EnginePatch patchability note: if the BSSimpleList root allocation fails, the following positive-count loop uses a null list root. Non-crash patch is possible, but cursor-faithful discard needs format-aware handling. /*0x485a1b*/
    {
      *v11 = 0; /*0x485a1d*/
      v11[1] = 0; /*0x485a1f*/
    }
    else
    {
      v11 = 0; /*0x485a24*/
    }
    v12 = v30 <= 0; /*0x485a26*/
    *ecx0 = (int)v11; /*0x485a2a*/
    if ( !v12 ) /*0x485a2c*/
    {
      do /*0x485a75*/
      {
        v13 = (_DWORD *)FormHeapAlloc(0x14u); /*0x485a32*/
        Dst = v13; /*0x485a3a*/
        v14 = 0; /*0x485a3e*/
        v34 = 0; /*0x485a42*/
        if ( v13 )                              // EnginePatch patchability note: if ExtraDataList allocation fails, original calls ExtraDataList_LoadModified with ecx=0. Avoiding the crash without desync requires consuming the nested serialized entry correctly. /*0x485a46*/
          v14 = (ExtraDataList *)ExtraDataList_constr(v13); /*0x485a4f*/
        v34 = 0xFFFFFFFF; /*0x485a59*/
        ExtraDataList_LoadModified(v14, a2, a3, a4, 0x20, 0, 0); /*0x485a61*/
        BSSimpleList_PushBack((_DWORD *)*ecx0, (int)v14); /*0x485a69*/
        ++v5; /*0x485a6e*/
      }
      while ( v5 < v30 ); /*0x485a75*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x485a7d*/
  {
    v15 = g_TESSaveLoadGame; /*0x485a8a*/
    v16 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x485a90*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x485a98*/
    if ( v16 ) /*0x485a9b*/
    {
      v18 = TESForm_LookupByFormID(*v16); /*0x485aa9*/
      v19 = &bufferCursor[v29]; /*0x485ab0*/
      if ( v17 <= v19 ) /*0x485ab7*/
      {
        if ( v17 < v19 ) /*0x485b05*/
        {
          v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)( /*0x485b1c*/
                                v18,
                                *((unsigned __int8 *)v16 + 9),
                                *(UInt32 *)((char *)v16 + 5));
          PrintError( /*0x485b3b*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[v29 - (_DWORD)v17],
            "..\\TES Shared\\InventoryChanges.cpp",
            0x5D5,
            *v16,
            v21,
            v24,
            v26);
        }
      }
      else
      {
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)( /*0x485aca*/
                              v18,
                              *((unsigned __int8 *)v16 + 9),
                              *(UInt32 *)((char *)v16 + 5));
        PrintError( /*0x485ae9*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v17[-v29] - bufferCursor,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5D5,
          *v16,
          v20,
          v23,
          v25);
      }
    }
    else
    {
      v22 = &bufferCursor[v29]; /*0x485b5c*/
      if ( v17 <= v22 ) /*0x485b61*/
      {
        if ( v17 < v22 ) /*0x485b7e*/
          PrintError( /*0x485b99*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[v29 - (_DWORD)v17],
            "..\\TES Shared\\InventoryChanges.cpp",
            0x5D5,
            v15->currentVersion);
      }
      else
      {
        PrintError( /*0x485b7c*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v17[-v29] - bufferCursor,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5D5,
          v15->currentVersion);
      }
    }
  }
}
