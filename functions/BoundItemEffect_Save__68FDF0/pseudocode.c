char __userpurge BoundItemEffect_Save@<al>(int **a1@<ecx>, double a2@<st0>, int a3)
{
  TESSaveLoadGame_SerializationView *v5; // ecx
  bool v6; // zf
  TESSaveLoadGame_SerializationView *v7; // ecx
  int **v8; // esi
  int v9; // ebp
  TESSaveLoadGame_SerializationView *v10; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  char result; // al
  unsigned __int8 *v16; // esi
  int v17; // [esp-Ch] [ebp-24h]
  int v18; // [esp-8h] [ebp-20h]
  const char *v19; // [esp-4h] [ebp-1Ch]
  unsigned __int8 *bufferCursor; // [esp+8h] [ebp-10h]
  unsigned __int8 *v21; // [esp+Ch] [ebp-Ch]
  int Src; // [esp+10h] [ebp-8h] BYREF
  int source; // [esp+14h] [ebp-4h] BYREF

  AssociatedItemEffect_Save(a3); /*0x68fdfc*/
  v5 = g_TESSaveLoadGame; /*0x68fe01*/
  v6 = Global_DebugSaveBuffer == 0; /*0x68fe09*/
  source = 0; /*0x68fe10*/
  v21 = 0; /*0x68fe17*/
  bufferCursor = v5->bufferCursor; /*0x68fe1b*/
  if ( !v6 ) /*0x68fe1f*/
    bufferCursor = v5->bufferCursor; /*0x68fe21*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68fe25*/
  {
    v7 = g_TESSaveLoadGame; /*0x68fe35*/
    Src = 0x4B4F4C42; /*0x68fe3b*/
    SaveLoad_SaveData(v7, &Src, 4u); /*0x68fe43*/
    v21 = g_TESSaveLoadGame->bufferCursor; /*0x68fe58*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x68fe5c*/
  }
  LOBYTE(a3) = a1[0xF] != 0; /*0x68fe6b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &a3, 1u); /*0x68fe7d*/
  if ( (_BYTE)a3 ) /*0x68fe87*/
    SaveGame(a1[0xF], a2); /*0x68fe8c*/
  v8 = a1 + 0x10; /*0x68fe92*/
  v9 = 0x10; /*0x68fe95*/
  do /*0x68fed5*/
  {
    LOBYTE(a3) = *v8 != 0; /*0x68feaa*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &a3, 1u); /*0x68febc*/
    if ( (_BYTE)a3 ) /*0x68fec6*/
      SaveGame(*v8, a2); /*0x68feca*/
    ++v8; /*0x68fecf*/
    --v9; /*0x68fed2*/
  }
  while ( v9 ); /*0x68fed5*/
  v10 = g_TESSaveLoadGame; /*0x68fed7*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x41u ) /*0x68fee2*/
  {
    SaveLoad_SaveData(v10, a1 + 0x20, 4u); /*0x68feed*/
    SaveLoad_SaveData(g_TESSaveLoadGame, a1 + 0x21, 1u); /*0x68ff01*/
    v10 = g_TESSaveLoadGame; /*0x68ff06*/
  }
  if ( v10->currentVersion >= 0x6Bu ) /*0x68ff10*/
  {
    SaveLoad_SaveData(v10, a1 + 0x22, 1u); /*0x68ff1b*/
    v10 = g_TESSaveLoadGame; /*0x68ff20*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v10->currentlySavingFormHeader; /*0x68ff2f*/
    v12 = v10->bufferCursor; /*0x68ff37*/
    if ( currentlySavingFormHeader )
    {
      v13 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x68ff3f*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x68ff5f*/
                            v13,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x2DB,
                            ".\\Magic\\BoundItemEffect.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - bufferCursor,
        *currentlySavingFormHeader,
        v14,
        v17,
        v18,
        v19);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v12 - bufferCursor,
        0x2DB,
        ".\\Magic\\BoundItemEffect.cpp");
    }
  }
  result = TESSaveLoadGame_UseSaveGameBlocks(); /*0x68ff9b*/
  if ( result ) /*0x68ffa2*/
  {
    v16 = g_TESSaveLoadGame->bufferCursor; /*0x68ffae*/
    result = (_BYTE)v21 - 1; /*0x68ffb1*/
    if ( v16 > v21 + 0xFFFF ) /*0x68ffb9*/
      result = PrintError( /*0x68ffca*/
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 ".\\Magic\\BoundItemEffect.cpp",
                 0x2DB);
    *(_WORD *)v21 = (_WORD)v16 - (_WORD)v21; /*0x68ffd4*/
  }
  return result; /*0x68ffd7*/
}
