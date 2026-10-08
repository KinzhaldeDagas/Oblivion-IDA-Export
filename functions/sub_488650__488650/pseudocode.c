void __usercall sub_488650(int *this@<ecx>, double a2@<st0>)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  unsigned __int8 *v8; // edi
  int i; // esi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  unsigned __int8 *v14; // edi
  unsigned __int8 *v15; // esi
  int v16; // [esp-Ch] [ebp-28h]
  int v17; // [esp-8h] [ebp-24h]
  const char *v18; // [esp-4h] [ebp-20h]
  int v19; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int8 *v20; // [esp+10h] [ebp-Ch]
  int Src; // [esp+14h] [ebp-8h] BYREF
  int source; // [esp+18h] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x488657*/
  source = 0; /*0x48865d*/
  bufferCursor = v3->bufferCursor; /*0x488665*/
  v20 = 0; /*0x488669*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x488671*/
  {
    v5 = g_TESSaveLoadGame; /*0x48867a*/
    Src = 0x4B4F4C42; /*0x488687*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x48868f*/
    v6 = g_TESSaveLoadGame; /*0x488694*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x4886a4*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x4886a8*/
  }
  v7 = g_TESSaveLoadGame; /*0x4886ad*/
  v19 = 0; /*0x4886b9*/
  v8 = v7->bufferCursor; /*0x4886c1*/
  SaveLoad_SaveData(v7, &v19, 2u); /*0x4886c5*/
  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x4886ce*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x4886d6*/
      break; /*0x4886d9*/
    if ( *(_DWORD *)i ) /*0x4886db*/
    {
      SaveGame(*(int **)i, a2); /*0x4886e1*/
      ++v19; /*0x4886e6*/
    }
  }
  *(_WORD *)v8 = v19; /*0x4886f7*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x488708*/
    v11 = g_TESSaveLoadGame->bufferCursor; /*0x488710*/
    if ( currentlySavingFormHeader )
    {
      v12 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x488718*/
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)( /*0x488738*/
                            v12,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x214D,
                            "..\\TES Shared\\InventoryChanges.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - bufferCursor,
        *currentlySavingFormHeader,
        v13,
        v16,
        v17,
        v18);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v11 - bufferCursor,
        0x214D,
        "..\\TES Shared\\InventoryChanges.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x488770*/
  {
    v14 = v20; /*0x48877f*/
    v15 = g_TESSaveLoadGame->bufferCursor; /*0x488783*/
    if ( v15 > v20 + 0xFFFF ) /*0x48878e*/
      PrintError( /*0x48879f*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\InventoryChanges.cpp",
        0x214D);
    *(_WORD *)v14 = (_WORD)v15 - (_WORD)v14; /*0x4887a9*/
  }
}
