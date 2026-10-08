char __userpurge BoundItemEffect_Load@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  _DWORD *v10; // eax
  int *v11; // eax
  unsigned int **v12; // edi
  _DWORD *v13; // eax
  int *v14; // eax
  int v15; // edx
  unsigned int v16; // esi
  TESSaveLoadGame_SerializationView *v17; // ecx
  unsigned __int8 *v18; // eax
  TESSaveLoadGame_SerializationView *v19; // ecx
  UInt32 *v20; // edi
  unsigned __int8 *v21; // esi
  TESForm *v22; // ecx
  const char *v23; // eax
  const char *v24; // eax
  unsigned __int8 *v25; // edx
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  int v29; // [esp-8h] [ebp-38h]
  int v30; // [esp-4h] [ebp-34h]
  int v31; // [esp-4h] [ebp-34h]
  int v32; // [esp-4h] [ebp-34h]
  int destination; // [esp+14h] [ebp-1Ch] BYREF
  int v34; // [esp+18h] [ebp-18h]
  _DWORD Dst[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v36; // [esp+2Ch] [ebp-4h]

  AssociatedItemEffect_Load(a5); /*0x69000e*/
  bufferCursor = 0; /*0x690019*/
  destination = 0; /*0x69001b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 4u); /*0x690039*/
    if ( Dst[0] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x69004d*/
      if ( currentlyLoadingFormHeader )
      {
        v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x69005a*/
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)( /*0x690075*/
                             v8,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Magic\\BoundItemEffect.cpp",
          0x2E4,
          *currentlyLoadingFormHeader,
          v9,
          v27,
          v30);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Magic\\BoundItemEffect.cpp",
          0x2E4,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x6900b6*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x6900c0*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &a5, 1u); /*0x6900d6*/
  if ( (_BYTE)a5 ) /*0x6900e0*/
  {
    v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x6900e4*/
    v34 = (int)v10; /*0x6900ec*/
    v36 = 0; /*0x6900f2*/
    if ( v10 ) /*0x6900fa*/
      v11 = sub_4842D0(v10); /*0x6900fe*/
    else
      v11 = 0; /*0x690105*/
    v36 = 0xFFFFFFFF; /*0x690109*/
    *(_DWORD *)(a1 + 0x3C) = v11; /*0x690111*/
    ContainerEntryExtraData_LoadModified(v11, a2, a3, a4); /*0x690114*/
  }
  v12 = (unsigned int **)(a1 + 0x40); /*0x690119*/
  v34 = 0x10; /*0x69011c*/
  do /*0x69019c*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a5, 1u); /*0x690130*/
    if ( (_BYTE)a5 ) /*0x69013a*/
    {
      v13 = (_DWORD *)FormHeapAlloc(0xCu); /*0x69013e*/
      Dst[1] = v13; /*0x690146*/
      v36 = 1; /*0x69014c*/
      if ( v13 ) /*0x690150*/
        v14 = sub_4842D0(v13); /*0x690154*/
      else
        v14 = 0; /*0x69015b*/
      v36 = 0xFFFFFFFF; /*0x69015f*/
      *v12 = (unsigned int *)v14; /*0x690167*/
      ContainerEntryExtraData_LoadModified(v14, a2, a3, a4); /*0x690169*/
      v16 = (unsigned int)*v12; /*0x69016e*/
      if ( !(*v12)[2] ) /*0x690170*/
      {
        if ( v16 ) /*0x690178*/
        {
          ContainerEntryExtraData_DestroyDataTable(*v12, v15); /*0x69017c*/
          FormHeapFree(v16); /*0x690182*/
        }
        *v12 = 0; /*0x69018a*/
      }
    }
    ++v12; /*0x690195*/
    --v34; /*0x690198*/
  }
  while ( v34 ); /*0x69019c*/
  *(_BYTE *)(a1 + 0x84) = 1; /*0x6901a4*/
  v17 = g_TESSaveLoadGame; /*0x6901a7*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x41u ) /*0x6901b1*/
  {
    SaveLoad_LoadData(v17, (void *)(a1 + 0x80), 4u); /*0x6901bc*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(a1 + 0x84), 1u); /*0x6901ca*/
    v17 = g_TESSaveLoadGame; /*0x6901cf*/
  }
  if ( v17->currentVersion >= 0x6Bu ) /*0x6901d9*/
    SaveLoad_LoadData(v17, (void *)(a1 + 0x88), 1u); /*0x6901e4*/
  LOBYTE(v18) = TESSaveLoadGame_UseSaveGameBlocks(); /*0x6901ef*/
  if ( (_BYTE)v18 ) /*0x6901f6*/
  {
    v19 = g_TESSaveLoadGame; /*0x6901fc*/
    v20 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x690202*/
    v21 = g_TESSaveLoadGame->bufferCursor; /*0x69020a*/
    if ( v20 ) /*0x69020d*/
    {
      v22 = TESForm_LookupByFormID(*v20); /*0x690220*/
      v18 = &bufferCursor[(unsigned __int16)destination]; /*0x690222*/
      if ( v21 <= v18 ) /*0x69022a*/
      {
        if ( v21 < v18 ) /*0x690269*/
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)( /*0x690280*/
                                v22,
                                *((unsigned __int8 *)v20 + 9),
                                *(UInt32 *)((char *)v20 + 5));
          LOBYTE(v18) = PrintError( /*0x69029f*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          &bufferCursor[(unsigned __int16)destination - (_DWORD)v21],
                          ".\\Magic\\BoundItemEffect.cpp",
                          0x30C,
                          *v20,
                          v24,
                          v29,
                          v32);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)( /*0x69023d*/
                              v22,
                              *((unsigned __int8 *)v20 + 9),
                              *(UInt32 *)((char *)v20 + 5));
        LOBYTE(v18) = PrintError( /*0x69025c*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        &v21[-(unsigned __int16)destination] - bufferCursor,
                        ".\\Magic\\BoundItemEffect.cpp",
                        0x30C,
                        *v20,
                        v23,
                        v28,
                        v31);
      }
    }
    else
    {
      LOBYTE(v18) = destination; /*0x6902a9*/
      v25 = &bufferCursor[(unsigned __int16)destination]; /*0x6902ae*/
      if ( v21 <= v25 ) /*0x6902b3*/
      {
        if ( v21 < v25 ) /*0x6902d0*/
          LOBYTE(v18) = PrintError( /*0x6902eb*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          &bufferCursor[(unsigned __int16)destination - (_DWORD)v21],
                          ".\\Magic\\BoundItemEffect.cpp",
                          0x30C,
                          v19->currentVersion);
      }
      else
      {
        LOBYTE(v18) = PrintError( /*0x6902ce*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        &v21[-(unsigned __int16)destination] - bufferCursor,
                        ".\\Magic\\BoundItemEffect.cpp",
                        0x30C,
                        v19->currentVersion);
      }
    }
  }
  return (char)v18; /*0x6902f3*/
}
