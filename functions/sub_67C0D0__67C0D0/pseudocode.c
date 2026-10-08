void __thiscall sub_67C0D0(int *this)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  unsigned __int8 *v7; // edi
  int i; // esi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v10; // esi
  TESForm *v11; // eax
  const char *v12; // eax
  unsigned __int8 *v13; // edi
  unsigned __int8 *v14; // esi
  int v15; // [esp-Ch] [ebp-28h]
  int v16; // [esp-8h] [ebp-24h]
  const char *v17; // [esp-4h] [ebp-20h]
  int v18; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int8 *v19; // [esp+10h] [ebp-Ch]
  int Src; // [esp+14h] [ebp-8h] BYREF
  int source; // [esp+18h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x67c0d7*/
  source = 0; /*0x67c0dd*/
  bufferCursor = v2->bufferCursor; /*0x67c0e5*/
  v19 = 0; /*0x67c0e9*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67c0f1*/
  {
    v4 = g_TESSaveLoadGame; /*0x67c0fa*/
    Src = 0x4B4F4C42; /*0x67c107*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x67c10f*/
    v5 = g_TESSaveLoadGame; /*0x67c114*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x67c124*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x67c128*/
  }
  v6 = g_TESSaveLoadGame; /*0x67c12d*/
  v18 = 0; /*0x67c139*/
  v7 = v6->bufferCursor; /*0x67c141*/
  SaveLoad_SaveData(v6, &v18, 2u); /*0x67c145*/
  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x67c14e*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x67c156*/
      break; /*0x67c159*/
    sub_67B840(*(_DWORD **)i); /*0x67c15d*/
    ++v18; /*0x67c162*/
  }
  *(_WORD *)v7 = v18; /*0x67c173*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x67c184*/
    v10 = g_TESSaveLoadGame->bufferCursor; /*0x67c18c*/
    if ( currentlySavingFormHeader )
    {
      v11 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x67c194*/
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)( /*0x67c1b4*/
                            v11,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x233,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v10 - bufferCursor,
        *currentlySavingFormHeader,
        v12,
        v15,
        v16,
        v17);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v10 - bufferCursor,
        0x233,
        ".\\AI\\SpectatorPackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67c1ec*/
  {
    v13 = v19; /*0x67c1fb*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x67c1ff*/
    if ( v14 > v19 + 0xFFFF ) /*0x67c20a*/
      PrintError( /*0x67c21b*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\SpectatorPackage.cpp",
        0x233);
    *(_WORD *)v13 = (_WORD)v14 - (_WORD)v13; /*0x67c225*/
  }
}
