void sub_5C0E30()
{
  TESSaveLoadGame_SerializationView *v1; // ecx
  bool v2; // zf
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned int i; // edi
  TESSaveLoadGame_SerializationView *v7; // ecx
  unsigned __int8 *v8; // ebp
  _DWORD *v9; // esi
  int v10; // eax
  TESSaveLoadGame_SerializationView *v11; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 *v17; // esi
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19; // [esp-8h] [ebp-28h]
  const char *v20; // [esp-4h] [ebp-24h]
  unsigned __int8 v21; // [esp+Fh] [ebp-11h] BYREF
  unsigned __int8 *v22; // [esp+10h] [ebp-10h]
  unsigned __int8 *v23; // [esp+14h] [ebp-Ch]
  unsigned int Src; // [esp+18h] [ebp-8h] BYREF
  int source; // [esp+1Ch] [ebp-4h] BYREF

  v1 = g_TESSaveLoadGame; /*0x5c0e33*/
  v2 = Global_DebugSaveBuffer == 0; /*0x5c0e3c*/
  source = 0; /*0x5c0e42*/
  bufferCursor = v1->bufferCursor; /*0x5c0e46*/
  v23 = 0; /*0x5c0e4b*/
  v22 = bufferCursor; /*0x5c0e4f*/
  if ( !v2 ) /*0x5c0e53*/
    v22 = bufferCursor; /*0x5c0e55*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5c0e59*/
  {
    v4 = g_TESSaveLoadGame; /*0x5c0e62*/
    Src = 0x4B4F4C42; /*0x5c0e6f*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x5c0e77*/
    v5 = g_TESSaveLoadGame; /*0x5c0e7c*/
    v23 = g_TESSaveLoadGame->bufferCursor; /*0x5c0e8c*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x5c0e90*/
  }
  for ( i = 0; i < 0x20; i += 4 ) /*0x5c0e95*/
  {
    v7 = g_TESSaveLoadGame; /*0x5c0ea0*/
    v21 = 0; /*0x5c0eac*/
    v8 = v7->bufferCursor; /*0x5c0eb0*/
    SaveLoad_SaveData(v7, &v21, 1u); /*0x5c0eb4*/
    v9 = (_DWORD *)unk_B3B444[i]; /*0x5c0eb9*/
    while ( v9 ) /*0x5c0ec1*/
    {
      v10 = v9[2]; /*0x5c0ec6*/
      v9 = (_DWORD *)*v9; /*0x5c0eca*/
      if ( v10 ) /*0x5c0ecc*/
      {
        v11 = g_TESSaveLoadGame; /*0x5c0ed8*/
        Src = *(_DWORD *)(v10 + 0xC); /*0x5c0ede*/
        SaveLoad_SaveFormID(v11, &Src, 4u); /*0x5c0ee2*/
        ++v21; /*0x5c0ee7*/
      }
    }
    *v8 = v21; /*0x5c0efd*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x5c0f10*/
    v13 = g_TESSaveLoadGame->bufferCursor; /*0x5c0f18*/
    if ( currentlySavingFormHeader )
    {
      v14 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x5c0f20*/
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x5c0f40*/
                            v14,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x389,
                            ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v22,
        *currentlySavingFormHeader,
        v15,
        v18,
        v19,
        v20);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v13 - v22,
        0x389,
        ".\\Interface\\Menus\\QuickKeysMenu.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5c0f7c*/
  {
    v16 = v23; /*0x5c0f8b*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x5c0f8f*/
    if ( v17 > v23 + 0xFFFF ) /*0x5c0f9a*/
      PrintError( /*0x5c0fab*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\Interface\\Menus\\QuickKeysMenu.cpp",
        0x389);
    *(_WORD *)v16 = (_WORD)v17 - (_WORD)v16; /*0x5c0fb5*/
  }
}
