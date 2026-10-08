void __usercall sub_5C1420(int ebp0@<ebp>)
{
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v2; // eax
  const char *v3; // eax
  TESSaveLoadGame_SerializationView *v4; // ecx
  char *v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  TESSaveLoadGame_SerializationView *v8; // ecx
  TESForm *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  TESSaveLoadGame_SerializationView *v12; // ecx
  UInt32 *v13; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v15; // eax
  int v16; // ebx
  TESForm *v17; // ecx
  unsigned int v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  unsigned int v21; // edx
  int v22; // [esp-14h] [ebp-38h]
  int v23; // [esp-14h] [ebp-38h]
  int v24; // [esp-10h] [ebp-34h]
  int v25; // [esp-10h] [ebp-34h]
  int v26; // [esp-8h] [ebp-2Ch]
  int v27; // [esp-4h] [ebp-28h]
  int v28; // [esp-4h] [ebp-28h]
  unsigned __int8 v29; // [esp+2h] [ebp-22h]
  unsigned __int8 v30; // [esp+3h] [ebp-21h]
  unsigned __int16 v31; // [esp+4h] [ebp-20h]
  int v32; // [esp+8h] [ebp-1Ch] BYREF
  int v33; // [esp+Ch] [ebp-18h]
  int destination; // [esp+10h] [ebp-14h] BYREF
  int a1; // [esp+14h] [ebp-10h]
  int v36; // [esp+18h] [ebp-Ch]
  unsigned int Dst[2]; // [esp+1Ch] [ebp-8h] BYREF

  destination = 0; /*0x5c142e*/
  a1 = 0; /*0x5c1432*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 4u); /*0x5c1450*/
    if ( Dst[0] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x5c1464*/
      if ( currentlyLoadingFormHeader )
      {
        v2 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x5c1471*/
        v3 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v2->vtbl->GetEditorName)( /*0x5c148c*/
                             v2,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x38F,
          *currentlyLoadingFormHeader,
          v3,
          v26,
          v27);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x38F,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v4 = g_TESSaveLoadGame; /*0x5c14c7*/
    a1 = (int)g_TESSaveLoadGame->bufferCursor; /*0x5c14d7*/
    SaveLoad_LoadData(v4, &destination, 2u); /*0x5c14db*/
  }
  v5 = MEMORY[0xB3B440]; /*0x5c14e0*/
  v36 = 8; /*0x5c14e5*/
  v28 = ebp0; /*0x5c14ed*/
  do /*0x5c1597*/
  {
    v6 = *((_DWORD **)v5 + 1); /*0x5c14f0*/
    while ( v6 ) /*0x5c14f5*/
    {
      v7 = v6; /*0x5c14f9*/
      v6 = (_DWORD *)*v6; /*0x5c14fb*/
      (*(void (__thiscall **)(char *, _DWORD *, int))(*(_DWORD *)v5 + 8))(v5, v7, v28); /*0x5c1503*/
    }
    v8 = g_TESSaveLoadGame; /*0x5c1514*/
    *((_DWORD *)v5 + 3) = 0; /*0x5c151a*/
    *((_DWORD *)v5 + 1) = 0; /*0x5c151d*/
    *((_DWORD *)v5 + 2) = 0; /*0x5c1520*/
    SaveLoad_LoadData(v8, (char *)&v32 + 3, 1u); /*0x5c1523*/
    BYTE2(v32) = 0; /*0x5c152c*/
    if ( HIBYTE(v32) ) /*0x5c1530*/
    {
      do /*0x5c158e*/
      {
        SaveLoad_LoadFormID(g_TESSaveLoadGame, Dst, 4u); /*0x5c153f*/
        v9 = TESForm_LookupByFormID(a1); /*0x5c154e*/
        if ( v9 ) /*0x5c1555*/
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5); /*0x5c155e*/
          v10[2] = v9; /*0x5c1560*/
          v10[1] = 0; /*0x5c1563*/
          *v10 = *((_DWORD *)v5 + 1); /*0x5c1569*/
          v11 = *((_DWORD *)v5 + 1); /*0x5c156b*/
          if ( v11 ) /*0x5c1570*/
            *(_DWORD *)(v11 + 4) = v10; /*0x5c1572*/
          else
            *((_DWORD *)v5 + 2) = v10; /*0x5c1577*/
          ++*((_DWORD *)v5 + 3); /*0x5c157a*/
          *((_DWORD *)v5 + 1) = v10; /*0x5c157d*/
        }
        ++v29; /*0x5c158a*/
      }
      while ( v29 < v30 ); /*0x5c158e*/
    }
    v5 += 0x10; /*0x5c1590*/
    --v33; /*0x5c1593*/
  }
  while ( v33 ); /*0x5c1597*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5c15a3*/
  {
    v12 = g_TESSaveLoadGame; /*0x5c15b1*/
    v13 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x5c15b7*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x5c15bf*/
    if ( v13 ) /*0x5c15c2*/
    {
      v15 = TESForm_LookupByFormID(*v13); /*0x5c15cb*/
      v16 = v32; /*0x5c15d0*/
      v17 = v15; /*0x5c15d4*/
      v18 = v32 + v31; /*0x5c15db*/
      if ( (unsigned int)bufferCursor <= v18 ) /*0x5c15e2*/
      {
        if ( (unsigned int)bufferCursor < v18 ) /*0x5c1623*/
        {
          v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v17->vtbl->GetEditorName)( /*0x5c163a*/
                                v17,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError( /*0x5c1659*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v16 + v31 - (_DWORD)bufferCursor,
            ".\\Interface\\Menus\\QuickKeysMenu.cpp",
            0x3A3,
            *v13,
            v20,
            v23,
            v25);
        }
      }
      else
      {
        v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v17->vtbl->GetEditorName)( /*0x5c15f5*/
                              v17,
                              *((unsigned __int8 *)v13 + 9),
                              *(UInt32 *)((char *)v13 + 5));
        PrintError( /*0x5c1614*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &bufferCursor[-v31 - v16],
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x3A3,
          *v13,
          v19,
          v22,
          v24);
      }
    }
    else
    {
      v21 = v31 + v32; /*0x5c1671*/
      if ( (unsigned int)bufferCursor <= v21 ) /*0x5c1676*/
      {
        if ( (unsigned int)bufferCursor < v21 ) /*0x5c16a0*/
          PrintError( /*0x5c16bb*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v32 + v31 - (_DWORD)bufferCursor,
            ".\\Interface\\Menus\\QuickKeysMenu.cpp",
            0x3A3,
            v12->currentVersion);
      }
      else
      {
        PrintError( /*0x5c1691*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &bufferCursor[-v31 - v32],
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x3A3,
          v12->currentVersion);
      }
    }
  }
}
