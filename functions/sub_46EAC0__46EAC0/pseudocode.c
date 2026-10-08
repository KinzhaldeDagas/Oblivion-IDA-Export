void __thiscall sub_46EAC0(char *this, int a2)
{
  bool v4; // zf
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  unsigned __int8 *v8; // ebp
  char *v9; // edi
  int v10; // esi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // [esp-14h] [ebp-28h]
  int v17; // [esp-10h] [ebp-24h]
  const char *v18; // [esp-Ch] [ebp-20h]
  unsigned __int8 *bufferCursor; // [esp+4h] [ebp-10h]
  unsigned __int8 *v20; // [esp+8h] [ebp-Ch]
  unsigned int Src; // [esp+Ch] [ebp-8h] BYREF
  int source; // [esp+10h] [ebp-4h] BYREF

  if ( (a2 & 8) != 0 )
  {
    v4 = Global_DebugSaveBuffer == 0; /*0x46ead1*/
    v5 = g_TESSaveLoadGame; /*0x46ead8*/
    source = 0; /*0x46eade*/
    v20 = 0; /*0x46eae9*/
    bufferCursor = v5->bufferCursor; /*0x46eaf1*/
    if ( !v4 ) /*0x46eaf5*/
      bufferCursor = v5->bufferCursor; /*0x46eaf7*/
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46eafb*/
    {
      v6 = g_TESSaveLoadGame; /*0x46eb04*/
      Src = 0x4B4F4C42; /*0x46eb11*/
      SaveLoad_SaveData(v6, &Src, 4u); /*0x46eb19*/
      v20 = g_TESSaveLoadGame->bufferCursor; /*0x46eb2e*/
      SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x46eb32*/
    }
    v7 = g_TESSaveLoadGame; /*0x46eb37*/
    a2 = 0; /*0x46eb45*/
    v8 = v7->bufferCursor; /*0x46eb4d*/
    SaveLoad_SaveData(v7, &a2, 2u); /*0x46eb51*/
    v9 = this + 4; /*0x46eb56*/
    if ( this != (char *)0xFFFFFFFC ) /*0x46eb5b*/
    {
      do /*0x46eb9c*/
      {
        v10 = *(_DWORD *)v9; /*0x46eb60*/
        if ( *(_DWORD *)v9 ) /*0x46eb60*/
        {
          Src = *(_DWORD *)(*(_DWORD *)v10 + 0xC); /*0x46eb71*/
          SaveLoad_SaveFormID(g_TESSaveLoadGame, &Src, 4u); /*0x46eb7c*/
          SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(v10 + 4), 4u); /*0x46eb8d*/
          ++a2; /*0x46eb92*/
        }
        v9 = *((char **)v9 + 1); /*0x46eb97*/
      }
      while ( v9 ); /*0x46eb9c*/
    }
    *(_WORD *)v8 = a2; /*0x46eba3*/
    if ( Global_DebugSaveBuffer )
    {
      currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x46ebb5*/
      v12 = g_TESSaveLoadGame->bufferCursor; /*0x46ebbd*/
      if ( currentlySavingFormHeader )
      {
        v13 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x46ebc5*/
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x46ebe5*/
                              v13,
                              *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                              0x50D,
                              "..\\TES Shared\\TESReactionForm.cpp");
        sub_40FEC0(
          "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
          v12 - bufferCursor,
          *currentlySavingFormHeader,
          v14,
          v16,
          v17,
          v18);
      }
      else
      {
        sub_40FEC0(
          "SaveGame(): %-5i ending at line %i in file %s",
          v12 - bufferCursor,
          0x50D,
          "..\\TES Shared\\TESReactionForm.cpp");
      }
    }
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46ec21*/
    {
      v15 = g_TESSaveLoadGame->bufferCursor; /*0x46ec34*/
      if ( v15 > v20 + 0xFFFF ) /*0x46ec3f*/
        PrintError( /*0x46ec50*/
          "Save Game Block in file %s on line %i is greater than maximum short size",
          "..\\TES Shared\\TESReactionForm.cpp",
          0x50D);
      *(_WORD *)v20 = (_WORD)v15 - (_WORD)v20; /*0x46ec5a*/
    }
  }
}
