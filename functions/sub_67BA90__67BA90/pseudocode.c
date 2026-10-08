void __thiscall sub_67BA90(char *this)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  TESSaveLoadGame_SerializationView *v10; // ecx
  UInt32 *v11; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // ecx
  unsigned __int8 *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edx
  int v18; // [esp-14h] [ebp-4Ch]
  int v19; // [esp-14h] [ebp-4Ch]
  int v20; // [esp-10h] [ebp-48h]
  int v21; // [esp-10h] [ebp-48h]
  int v22; // [esp+4h] [ebp-34h]
  int v23; // [esp+8h] [ebp-30h]
  unsigned __int16 v24; // [esp+8h] [ebp-30h]
  int a2; // [esp+10h] [ebp-28h]
  unsigned __int16 v26; // [esp+14h] [ebp-24h]
  unsigned int v27; // [esp+18h] [ebp-20h] BYREF
  int v28; // [esp+1Ch] [ebp-1Ch] BYREF
  int destination; // [esp+20h] [ebp-18h] BYREF
  int v30; // [esp+24h] [ebp-14h]
  int v31; // [esp+28h] [ebp-10h]
  unsigned int Dst; // [esp+2Ch] [ebp-Ch] BYREF
  unsigned int v33[2]; // [esp+30h] [ebp-8h] BYREF

  destination = 0; /*0x67baa1*/
  bufferCursor = 0; /*0x67baa5*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x67bac1*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x67bad5*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x67bae2*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x67bafd*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\SpectatorPackage.cpp",
          0x14D,
          *currentlyLoadingFormHeader,
          v5,
          v22,
          v23);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\SpectatorPackage.cpp",
          0x14D,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x67bb3e*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x67bb48*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &v28, 2u);// EngineFix analysis 2026-05-07: AI SpectatorPackage inner saved count; loop consumes at least FormID + 1 byte per entry, plus optional 4 bytes for save version >=0x39. Clamp to remaining / 5; allocation failures can write through NULL at 0x67BB97 and 0x67BBE4. /*0x67bb5a*/
  v30 = 0; /*0x67bb64*/
  if ( (_WORD)v28 ) /*0x67bb68*/
  {
    do /*0x67bbfe*/
    {
      v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x67bb87*/
      SaveLoad_LoadFormID(g_TESSaveLoadGame, v33, 4u); /*0x67bb89*/
      *v6 = v31; /*0x67bb97*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v6 + 1, 1u); /*0x67bba0*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x39u ) /*0x67bbaf*/
        SaveLoad_LoadData(g_TESSaveLoadGame, v6 + 2, 4u); /*0x67bbb7*/
      v7 = *(_DWORD **)this; /*0x67bbbc*/
      if ( **(_DWORD **)this ) /*0x67bbbf*/
      {
        v8 = (_DWORD *)FormHeapAlloc(8u); /*0x67bbc6*/
        if ( v8 )                               // EngineFix implementation 2026-05-07: SpectatorPackage non-empty list-node allocation-failure hook. On failed node allocation, free the just-created entry and continue loop tail without overwriting the existing head/list. /*0x67bbd0*/
        {
          *v8 = *v7; /*0x67bbd4*/
          v8[1] = 0; /*0x67bbd6*/
        }
        else
        {
          v8 = 0; /*0x67bbdf*/
        }
        v8[1] = v7[1]; /*0x67bbe4*/
        v7[1] = v8; /*0x67bbe7*/
      }
      v9 = v28; /*0x67bbea*/
      *v7 = v6; /*0x67bbee*/
      v28 = v9 + 1; /*0x67bbfa*/
    }
    while ( v9 + 1 < v26 ); /*0x67bbfe*/
  }
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dst, 4u); /*0x67bc11*/
  *((_DWORD *)this + 1) = v30; /*0x67bc20*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &v27, 4u); /*0x67bc2a*/
  sub_4606D0(g_TESSaveLoadGame, a2); /*0x67bc3a*/
  TESForm_SetFormID(*((TESForm **)this + 2), a2, 1); /*0x67bc49*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 0xE4))(*((_DWORD *)this + 2)); /*0x67bc59*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0xC, 4u); /*0x67bc67*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x10, 4u); /*0x67bc78*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x14, 0xCu); /*0x67bc89*/
  SaveLoad_LoadData(g_TESSaveLoadGame, this + 0x20, 4u); /*0x67bc9a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67bca5*/
  {
    v10 = g_TESSaveLoadGame; /*0x67bcb2*/
    v11 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x67bcb8*/
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x67bcc0*/
    if ( v11 ) /*0x67bcc3*/
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x67bcd6*/
      v14 = &bufferCursor[v24]; /*0x67bcd8*/
      if ( v12 <= v14 ) /*0x67bce0*/
      {
        if ( v12 < v14 ) /*0x67bd22*/
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x67bd39*/
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError( /*0x67bd58*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[v24 - (_DWORD)v12],
            ".\\AI\\SpectatorPackage.cpp",
            0x176,
            *v11,
            v16,
            v19,
            v21);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x67bcf3*/
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError( /*0x67bd12*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v12[-v24] - bufferCursor,
          ".\\AI\\SpectatorPackage.cpp",
          0x176,
          *v11,
          v15,
          v18,
          v20);
      }
    }
    else
    {
      v17 = &bufferCursor[v24]; /*0x67bd6d*/
      if ( v12 <= v17 ) /*0x67bd72*/
      {
        if ( v12 < v17 ) /*0x67bd9d*/
          PrintError( /*0x67bdb8*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[v24 - (_DWORD)v12],
            ".\\AI\\SpectatorPackage.cpp",
            0x176,
            v10->currentVersion);
      }
      else
      {
        PrintError( /*0x67bd8d*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v12[-v24] - bufferCursor,
          ".\\AI\\SpectatorPackage.cpp",
          0x176,
          v10->currentVersion);
      }
    }
  }
}
/* Orphan comments:
EngineFix implementation 2026-05-07: SpectatorPackage entry allocation-failure hook. If the 0x0C entry allocation fails before reads, discard exactly one serialized entry (FormID + byte + optional 4 bytes for save >=0x39), then resume loop accounting.
*/
