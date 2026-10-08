void __thiscall TESObjectCELL_LoadModifiedForm(int this, int Dst, int a3)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  char v9; // al
  BSExtraDataVtbl *SeenData; // edi
  _DWORD *v11; // eax
  BSExtraDataVtbl *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  TESPathGrid *v15; // eax
  TESPathGrid *v16; // eax
  int v17; // ecx
  TESSaveLoadGame_SerializationView *v18; // ecx
  UInt32 *v19; // edi
  unsigned __int8 *v20; // esi
  TESForm *v21; // ecx
  unsigned __int8 *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // edx
  int v26; // [esp-8h] [ebp-144h]
  int v27; // [esp-8h] [ebp-144h]
  int v28; // [esp-8h] [ebp-144h]
  int v29; // [esp-8h] [ebp-144h]
  int v30; // [esp-4h] [ebp-140h]
  int v31; // [esp-4h] [ebp-140h]
  int v32; // [esp-4h] [ebp-140h]
  int v33; // [esp-4h] [ebp-140h]
  _BYTE a1[277]; // [esp+17h] [ebp-125h] BYREF
  int v35; // [esp+138h] [ebp-4h]

  if ( g_TESSaveLoadGame->currentVersion >= 0x5Au && (Dst & 0x8000000) != 0 ) /*0x4d2284*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1[5], 4u); /*0x4d228f*/
    ExtraDataList_SetDetachTime((ExtraDataList *)(this + 0x28), *(unsigned int *)&a1[5]); /*0x4d229c*/
  }
  TESForm_LoadModifiedForm((TESForm *)this, Dst, a3); /*0x4d22b3*/
  bufferCursor = 0; /*0x4d22be*/
  *(_DWORD *)&a1[1] = 0; /*0x4d22c0*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[5], 4u); /*0x4d22de*/
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4d22f2*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x4d22ff*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x4d231a*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x318B,
          *currentlyLoadingFormHeader,
          v8,
          v26,
          v30);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x318B,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x4d235b*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[1], 2u); /*0x4d2365*/
  }
  if ( (Dst & 8) != 0 ) /*0x4d2372*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, a1, 1u); /*0x4d237d*/
    v9 = a1[0]; /*0x4d2385*/
    *(_BYTE *)(this + 0x24) ^= (a1[0] ^ *(_BYTE *)(this + 0x24)) & 0x60; /*0x4d238e*/
    *(_BYTE *)(this + 0x25) = v9 & 0x9F; /*0x4d2393*/
  }
  if ( (Dst & 0x10000000) != 0 ) /*0x4d23a1*/
  {
    SeenData = ExtraDataList_GetSeenData((ExtraDataList *)(this + 0x28)); /*0x4d23b1*/
    if ( SeenData ) /*0x4d23b5*/
    {
LABEL_21:
      (*((void (__thiscall **)(BSExtraDataVtbl *, int))SeenData->Destructor + 4))(SeenData, 0xFFFF); /*0x4d241e*/
      goto LABEL_22; /*0x4d242a*/
    }
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4d23bb*/
    {
      v11 = (_DWORD *)FormHeapAlloc(0x2Cu); /*0x4d23bf*/
      *(_DWORD *)&a1[9] = v11; /*0x4d23c7*/
      v35 = 0; /*0x4d23cd*/
      if ( v11 ) /*0x4d23d4*/
      {
        v12 = (BSExtraDataVtbl *)sub_411F60(v11, 0, 0); /*0x4d23da*/
LABEL_20:
        SeenData = v12; /*0x4d2409*/
        v35 = 0xFFFFFFFF; /*0x4d240e*/
        ExtraDataList_SetSeenData((ExtraDataList *)(this + 0x28), v12); /*0x4d2419*/
        goto LABEL_21; /*0x4d2419*/
      }
    }
    else
    {
      v13 = (_DWORD *)FormHeapAlloc(0x24u); /*0x4d23e3*/
      *(_DWORD *)&a1[9] = v13; /*0x4d23eb*/
      v35 = 1; /*0x4d23f1*/
      if ( v13 ) /*0x4d23fc*/
      {
        v12 = (BSExtraDataVtbl *)SeenData::SeenData__(v13); /*0x4d2400*/
        goto LABEL_20; /*0x4d2405*/
      }
    }
    v12 = 0; /*0x4d2407*/
    goto LABEL_20; /*0x4d2407*/
  }
LABEL_22:
  if ( g_TESSaveLoadGame->currentVersion < 0x5Au && (Dst & 0x8000000) != 0 ) /*0x4d2442*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1[0xD], 4u); /*0x4d244d*/
    ExtraDataList_SetDetachTime((ExtraDataList *)(this + 0x28), *(unsigned int *)&a1[0xD]); /*0x4d245a*/
  }
  if ( (Dst & 0x10) != 0 ) /*0x4d2467*/
  {
    _memset((int)&a1[0x11], 0, 0x104u); /*0x4d2475*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, a1, 1u); /*0x4d2486*/
    if ( a1[0] ) /*0x4d2491*/
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1[0x11], a1[0]); /*0x4d249e*/
    BSStringT_Set((BSStringT *)(this + 0x1C), &a1[0x11], 0); /*0x4d24ad*/
  }
  if ( (Dst & 0x20) != 0 ) /*0x4d24ba*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, (unsigned int *)&a1[9], 4u); /*0x4d24c5*/
    ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)(this + 0x28), *(TESForm **)&a1[1]); /*0x4d24d2*/
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)this + 0x40))(this, 0x20, v27, v31); /*0x4d24e0*/
  }
  if ( (Dst & 0x1000000) != 0 ) /*0x4d24ed*/
  {
    v14 = *(_DWORD **)(this + 0x44); /*0x4d24ef*/
    if ( v14 ) /*0x4d24f4*/
    {
      sub_4E5CC0(v14); /*0x4d24f6*/
    }
    else
    {
      v15 = (TESPathGrid *)FormHeapAlloc(0x54u); /*0x4d24ff*/
      *(_DWORD *)&a1[0xD] = v15; /*0x4d2507*/
      v35 = 2; /*0x4d250d*/
      if ( v15 ) /*0x4d2518*/
        v16 = TESPathGrid::TESPathGrid(v15); /*0x4d251c*/
      else
        v16 = 0; /*0x4d2523*/
      v35 = 0xFFFFFFFF; /*0x4d2527*/
      *(_DWORD *)(this + 0x44) = v16; /*0x4d2532*/
      sub_4E5CC0(v16); /*0x4d2535*/
      v17 = *(_DWORD *)(this + 0x44); /*0x4d253a*/
      if ( v17 ) /*0x4d253f*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x10))(v17, 1); /*0x4d2548*/
      *(_DWORD *)(this + 0x44) = 0; /*0x4d254a*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4d2557*/
  {
    v18 = g_TESSaveLoadGame; /*0x4d2564*/
    v19 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4d256a*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x4d2572*/
    if ( v19 ) /*0x4d2575*/
    {
      v21 = TESForm_LookupByFormID(*v19); /*0x4d2588*/
      v22 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x4d258a*/
      if ( v20 <= v22 ) /*0x4d2592*/
      {
        if ( v20 < v22 ) /*0x4d25d1*/
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x4d25e8*/
                                v21,
                                *((unsigned __int8 *)v19 + 9),
                                *(UInt32 *)((char *)v19 + 5));
          PrintError( /*0x4d2607*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v20],
            "..\\TES Shared\\TESObjectCELL.cpp",
            0x31D1,
            *v19,
            v24,
            v29,
            v33);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)( /*0x4d25a5*/
                              v21,
                              *((unsigned __int8 *)v19 + 9),
                              *(UInt32 *)((char *)v19 + 5));
        PrintError( /*0x4d25c4*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v20[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x31D1,
          *v19,
          v23,
          v28,
          v32);
      }
    }
    else
    {
      v25 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x4d2616*/
      if ( v20 <= v25 ) /*0x4d261b*/
      {
        if ( v20 < v25 ) /*0x4d2638*/
          PrintError( /*0x4d2653*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v20],
            "..\\TES Shared\\TESObjectCELL.cpp",
            0x31D1,
            v18->currentVersion);
      }
      else
      {
        PrintError( /*0x4d2636*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v20[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x31D1,
          v18->currentVersion);
      }
    }
  }
}
