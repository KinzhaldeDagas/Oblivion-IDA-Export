unsigned __int16 __thiscall BoundItemEffect_GetSaveSize(int this, int a2)
{
  unsigned __int16 SaveSize; // di
  unsigned __int16 v5; // bx
  int *v6; // ecx
  int **v7; // esi
  int v8; // edi
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  unsigned __int8 currentVersion; // al
  int v14; // [esp-Ch] [ebp-18h]
  int v15; // [esp-8h] [ebp-14h]
  const char *v16; // [esp-4h] [ebp-10h]
  unsigned __int16 v17; // [esp+10h] [ebp+4h]

  SaveSize = AssociatedItemEffect_GetSaveSize(a2); /*0x68fcf5*/
  v5 = SaveSize; /*0x68fcfc*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x68fcff*/
    SaveSize += 6; /*0x68fd08*/
  v6 = *(int **)(this + 0x3C); /*0x68fd0b*/
  v17 = SaveSize + 1; /*0x68fd13*/
  if ( v6 ) /*0x68fd17*/
    v17 += sub_485660(v6); /*0x68fd1e*/
  v7 = (int **)(this + 0x40); /*0x68fd23*/
  v8 = 0x10; /*0x68fd26*/
  do /*0x68fd4b*/
  {
    ++v17; /*0x68fd32*/
    if ( *v7 ) /*0x68fd30*/
      v17 += sub_485660(*v7); /*0x68fd40*/
    ++v7; /*0x68fd45*/
    --v8; /*0x68fd48*/
  }
  while ( v8 ); /*0x68fd4b*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x68fd5c*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x68fd69*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x68fd89*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x2A5,
                            ".\\Magic\\BoundItemEffect.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v17 - v5,
        *currentlySavingFormHeader,
        v11,
        v14,
        v15,
        v16);
    }
    else
    {
      sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v17 - v5, 0x2A5, ".\\Magic\\BoundItemEffect.cpp");
    }
  }
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x68fdd0*/
  if ( currentVersion >= 0x41u ) /*0x68fdd8*/
    v17 += 5; /*0x68fdda*/
  if ( currentVersion >= 0x6Bu ) /*0x68fde1*/
    ++v17; /*0x68fde3*/
  return v17; /*0x68fdd5*/
}
