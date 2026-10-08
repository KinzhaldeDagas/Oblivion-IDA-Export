void __thiscall sub_67B840(_DWORD *this)
{
  bool v1; // zf
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  _DWORD *v8; // esi
  TESSaveLoadGame_SerializationView *v9; // ecx
  int v10; // edi
  int v11; // eax
  TESSaveLoadGame_SerializationView *v12; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // esi
  int v19; // [esp-Ch] [ebp-38h]
  int v20; // [esp-8h] [ebp-34h]
  const char *v21; // [esp-4h] [ebp-30h]
  int v22; // [esp+Ch] [ebp-20h] BYREF
  unsigned __int8 *v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+14h] [ebp-18h] BYREF
  unsigned __int8 *v25; // [esp+18h] [ebp-14h]
  unsigned int Src; // [esp+1Ch] [ebp-10h] BYREF
  int source; // [esp+20h] [ebp-Ch] BYREF
  unsigned __int8 *v28; // [esp+24h] [ebp-8h]
  unsigned int v29; // [esp+28h] [ebp-4h] BYREF

  v1 = Global_DebugSaveBuffer == 0; /*0x67b848*/
  v3 = g_TESSaveLoadGame; /*0x67b851*/
  source = 0; /*0x67b857*/
  bufferCursor = v3->bufferCursor; /*0x67b85b*/
  v25 = 0; /*0x67b85e*/
  v23 = bufferCursor; /*0x67b862*/
  if ( !v1 ) /*0x67b866*/
    v23 = bufferCursor; /*0x67b868*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67b86c*/
  {
    v5 = g_TESSaveLoadGame; /*0x67b875*/
    Src = 0x4B4F4C42; /*0x67b882*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x67b88a*/
    v6 = g_TESSaveLoadGame; /*0x67b88f*/
    v25 = g_TESSaveLoadGame->bufferCursor; /*0x67b89f*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x67b8a3*/
  }
  v7 = g_TESSaveLoadGame; /*0x67b8a8*/
  v22 = 0; /*0x67b8ae*/
  v28 = v7->bufferCursor; /*0x67b8bc*/
  SaveLoad_SaveData(v7, &v22, 2u); /*0x67b8c0*/
  v8 = (_DWORD *)*this; /*0x67b8c5*/
  if ( *this ) /*0x67b8c5*/
  {
    v9 = g_TESSaveLoadGame; /*0x67b8cc*/
    do /*0x67b92c*/
    {
      if ( !v8[1] && !*v8 ) /*0x67b8d8*/
        break; /*0x67b8db*/
      v10 = *v8; /*0x67b8dd*/
      Src = *(_DWORD *)(*(_DWORD *)*v8 + 0xC); /*0x67b8eb*/
      SaveLoad_SaveFormID(v9, &Src, 4u); /*0x67b8ef*/
      SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(v10 + 4), 1u); /*0x67b900*/
      v9 = g_TESSaveLoadGame; /*0x67b905*/
      if ( g_TESSaveLoadGame->currentVersion >= 0x39u ) /*0x67b90f*/
      {
        SaveLoad_SaveData(v9, (const void *)(v10 + 8), 4u); /*0x67b917*/
        v9 = g_TESSaveLoadGame; /*0x67b91c*/
      }
      ++v22; /*0x67b922*/
      v8 = (_DWORD *)v8[1]; /*0x67b927*/
    }
    while ( v8 ); /*0x67b92c*/
  }
  *(_WORD *)v28 = v22; /*0x67b937*/
  v11 = *(this + 1); /*0x67b93a*/
  v24 = 0; /*0x67b93f*/
  if ( v11 ) /*0x67b947*/
    v24 = *(_DWORD *)(v11 + 0xC); /*0x67b94c*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &v24, 4u); /*0x67b95d*/
  v12 = g_TESSaveLoadGame; /*0x67b96f*/
  v29 = *(_DWORD *)(*(this + 2) + 0xC); /*0x67b975*/
  SaveLoad_SaveFormID(v12, &v29, 4u); /*0x67b979*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE0))(*(this + 2)); /*0x67b989*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 3, 4u); /*0x67b997*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 4, 4u); /*0x67b9a8*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 5, 0xCu); /*0x67b9b9*/
  SaveLoad_SaveData(g_TESSaveLoadGame, this + 8, 4u); /*0x67b9ca*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x67b9dd*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x67b9e5*/
    if ( currentlySavingFormHeader )
    {
      v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x67b9ed*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x67ba0d*/
                            v15,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x147,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - v23,
        *currentlySavingFormHeader,
        v16,
        v19,
        v20,
        v21);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - v23, 0x147, ".\\AI\\SpectatorPackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67ba49*/
  {
    v17 = v25; /*0x67ba58*/
    v18 = g_TESSaveLoadGame->bufferCursor; /*0x67ba5c*/
    if ( v18 > v25 + 0xFFFF ) /*0x67ba67*/
      PrintError( /*0x67ba78*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\SpectatorPackage.cpp",
        0x147);
    *(_WORD *)v17 = (_WORD)v18 - (_WORD)v17; /*0x67ba82*/
  }
}
