unsigned __int16 __thiscall sub_488580(int *this)
{
  __int16 v3; // si
  int v4; // esi
  bool v5; // zf
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]
  unsigned __int16 v14; // [esp+8h] [ebp-4h]

  v3 = 0; /*0x48858b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x48858d*/
    v3 = 6; /*0x488596*/
  v14 = v3 + 2; /*0x48859e*/
  v4 = *this; /*0x4885a2*/
  v5 = *this == 0; /*0x4885a4*/
  v6 = v14; /*0x4885a6*/
  if ( !v5 ) /*0x4885ab*/
  {
    do /*0x4885ce*/
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 ) /*0x4885b6*/
        break; /*0x4885b9*/
      if ( *(_DWORD *)v4 ) /*0x4885bb*/
        v6 += sub_485660(*(int **)v4); /*0x4885c6*/
      v4 = *(_DWORD *)(v4 + 4); /*0x4885c9*/
    }
    while ( v4 ); /*0x4885ce*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4885de*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4885eb*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x48860b*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x2131,
                           "..\\TES Shared\\InventoryChanges.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x488628*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x2131, "..\\TES Shared\\InventoryChanges.cpp");
  }
  return v6; /*0x488625*/
}
