void __thiscall sub_67D040(char ***this)
{
  UInt32 v1; // ebx
  UInt32 *v2; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  float *v5; // eax
  float *v6; // edi
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  TESSaveLoad *v9; // ecx
  UInt32 *v10; // edi
  UInt32 v11; // esi
  TESForm *v12; // ecx
  UInt32 v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  UInt32 v16; // edx
  int v17; // [esp-8h] [ebp-40h]
  int v18; // [esp-8h] [ebp-40h]
  int v19; // [esp-8h] [ebp-40h]
  size_t v20; // [esp-4h] [ebp-3Ch]
  size_t v21; // [esp-4h] [ebp-3Ch]
  int v22; // [esp-4h] [ebp-3Ch]
  int v23; // [esp-4h] [ebp-3Ch]
  int v24; // [esp-4h] [ebp-3Ch]
  unsigned __int16 v25; // [esp+14h] [ebp-24h] BYREF
  int v26; // [esp+18h] [ebp-20h] BYREF
  int v27; // [esp+1Ch] [ebp-1Ch]
  int Dst; // [esp+20h] [ebp-18h] BYREF
  char ***v29; // [esp+24h] [ebp-14h]
  float *v30; // [esp+28h] [ebp-10h]
  unsigned int v31; // [esp+34h] [ebp-4h]

  v29 = this; /*0x67d067*/
  v26 = 0; /*0x67d073*/
  v1 = 0; /*0x67d077*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v20) = 4; /*0x67d08c*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v20); /*0x67d093*/
    if ( Dst != 0x4B4F4C42 )
    {
      v2 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x67d0a7*/
      if ( v2 )
      {
        v3 = TESForm_LookupByFormID(*v2); /*0x67d0b4*/
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)( /*0x67d0cf*/
                             v3,
                             *((unsigned __int8 *)v2 + 9),
                             *(UInt32 *)((char *)v2 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\SpectatorPackage.cpp",
          0x239,
          *v2,
          v4,
          v17,
          v22);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\SpectatorPackage.cpp",
          0x239,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v1 = g_TESSaveLoadGame->unk000[5]; /*0x67d110*/
    LODWORD(v21) = 2; /*0x67d113*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v26, v21); /*0x67d11a*/
  }
  LODWORD(v20) = 2; /*0x67d11f*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v25, v20); /*0x67d12c*/
  v27 = 0; /*0x67d136*/
  if ( v25 ) /*0x67d13a*/
  {
    do /*0x67d1b6*/
    {
      v5 = (float *)FormHeapAlloc(0x24u); /*0x67d142*/
      v30 = v5; /*0x67d14a*/
      v31 = 0; /*0x67d150*/
      if ( v5 ) /*0x67d154*/
        v6 = sub_67CBC0(v5); /*0x67d15d*/
      else
        v6 = 0; /*0x67d161*/
      v31 = 0xFFFFFFFF; /*0x67d165*/
      sub_67BA90((char *)v6); /*0x67d16d*/
      v7 = *v29; /*0x67d178*/
      if ( v6 ) /*0x67d17a*/
      {
        if ( *v7 ) /*0x67d17c*/
        {
          v8 = (_DWORD *)FormHeapAlloc(8u); /*0x67d182*/
          if ( v8 ) /*0x67d18c*/
          {
            *v8 = *v7; /*0x67d190*/
            v8[1] = 0; /*0x67d192*/
          }
          else
          {
            v8 = 0; /*0x67d197*/
          }
          v8[1] = v7[1]; /*0x67d19c*/
          v7[1] = v8; /*0x67d19f*/
        }
        *v7 = v6; /*0x67d1a2*/
      }
      ++v27; /*0x67d1b2*/
    }
    while ( v27 < v25 ); /*0x67d1b6*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67d1be*/
  {
    v9 = g_TESSaveLoadGame; /*0x67d1cb*/
    v10 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x67d1d1*/
    v11 = g_TESSaveLoadGame->unk000[5]; /*0x67d1d9*/
    if ( v10 ) /*0x67d1dc*/
    {
      v12 = TESForm_LookupByFormID(*v10); /*0x67d1ea*/
      v13 = v1 + (unsigned __int16)v26; /*0x67d1f1*/
      if ( v11 <= v13 ) /*0x67d1f8*/
      {
        if ( v11 < v13 ) /*0x67d246*/
        {
          v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x67d25d*/
                                v12,
                                *((unsigned __int8 *)v10 + 9),
                                *(UInt32 *)((char *)v10 + 5));
          PrintError( /*0x67d27c*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v1 + (unsigned __int16)v26 - v11,
            ".\\AI\\SpectatorPackage.cpp",
            0x248,
            *v10,
            v15,
            v19,
            v24);
        }
      }
      else
      {
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x67d20b*/
                              v12,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError( /*0x67d22a*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v11 - (unsigned __int16)v26 - v1,
          ".\\AI\\SpectatorPackage.cpp",
          0x248,
          *v10,
          v14,
          v18,
          v23);
      }
    }
    else
    {
      v16 = (unsigned __int16)v26 + v1; /*0x67d29d*/
      if ( v11 <= v16 ) /*0x67d2a2*/
      {
        if ( v11 < v16 ) /*0x67d2bf*/
          PrintError( /*0x67d2da*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v1 + (unsigned __int16)v26 - v11,
            ".\\AI\\SpectatorPackage.cpp",
            0x248,
            LOBYTE(v9[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x67d2bd*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v11 - (unsigned __int16)v26 - v1,
          ".\\AI\\SpectatorPackage.cpp",
          0x248,
          LOBYTE(v9[1].createdObjectList.next));
      }
    }
  }
}
