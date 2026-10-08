char __thiscall sub_4410D0(char *this)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  char *v6; // esi
  int v7; // ecx
  char *i; // eax
  int *v9; // edi
  int v10; // eax
  bool v11; // zf
  TESSaveLoadGame_SerializationView *v12; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  char result; // al
  unsigned __int8 *v18; // edi
  unsigned __int8 *v19; // esi
  int v20; // [esp-Ch] [ebp-2Ch]
  int v21; // [esp-8h] [ebp-28h]
  const char *v22; // [esp-4h] [ebp-24h]
  unsigned int Src; // [esp+10h] [ebp-10h] BYREF
  unsigned __int8 *v24; // [esp+14h] [ebp-Ch]
  int source; // [esp+18h] [ebp-8h] BYREF
  int v26; // [esp+1Ch] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x4410d8*/
  source = 0; /*0x4410e0*/
  bufferCursor = v2->bufferCursor; /*0x4410e4*/
  v24 = 0; /*0x4410e8*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4410ec*/
  {
    v4 = g_TESSaveLoadGame; /*0x4410f5*/
    Src = 0x4B4F4C42; /*0x441102*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x44110a*/
    v5 = g_TESSaveLoadGame; /*0x44110f*/
    v24 = g_TESSaveLoadGame->bufferCursor; /*0x44111f*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x441123*/
  }
  v6 = this + 0x8C; /*0x441128*/
  v7 = 0; /*0x44112e*/
  for ( i = v6; i; i = *((char **)i + 1) ) /*0x441134*/
  {
    if ( *(_DWORD *)i ) /*0x441136*/
      ++v7; /*0x44113a*/
  }
  v26 = v7; /*0x441144*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v26, 4u); /*0x441155*/
  for ( ; v6; v6 = *((char **)v6 + 1) ) /*0x44115c*/
  {
    v9 = *(int **)v6; /*0x441160*/
    if ( *(_DWORD *)v6 ) /*0x441160*/
    {
      v10 = *v9; /*0x441166*/
      v11 = *v9 == 0; /*0x441168*/
      Src = 0; /*0x44116a*/
      if ( !v11 ) /*0x44116e*/
        Src = *(_DWORD *)(v10 + 0xC); /*0x441173*/
      SaveLoad_SaveFormID(g_TESSaveLoadGame, &Src, 4u); /*0x441184*/
      SaveLoad_SaveData(g_TESSaveLoadGame, v9 + 1, 2u); /*0x441195*/
    }
  }
  v12 = g_TESSaveLoadGame; /*0x4411a1*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x32u ) /*0x4411ab*/
  {
    SaveLoad_SaveData(v12, &::source, 4u); /*0x4411b4*/
    v12 = g_TESSaveLoadGame; /*0x4411b9*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v12->currentlySavingFormHeader; /*0x4411c7*/
    v14 = v12->bufferCursor; /*0x4411cf*/
    if ( currentlySavingFormHeader )
    {
      v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4411d7*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x4411f7*/
                            v15,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x15F0,
                            "..\\TES Shared\\TES.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - bufferCursor,
        *currentlySavingFormHeader,
        v16,
        v20,
        v21,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - bufferCursor, 0x15F0, "..\\TES Shared\\TES.cpp");
    }
  }
  result = TESSaveLoadGame_UseSaveGameBlocks(); /*0x44122f*/
  if ( result ) /*0x441236*/
  {
    v18 = v24; /*0x44123e*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x441242*/
    result = (_BYTE)v24 - 1; /*0x441245*/
    if ( v19 > v24 + 0xFFFF ) /*0x44124d*/
      result = PrintError( /*0x44125e*/
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 "..\\TES Shared\\TES.cpp",
                 0x15F0);
    *(_WORD *)v18 = (_WORD)v19 - (_WORD)v18; /*0x441268*/
  }
  return result; /*0x44126b*/
}
