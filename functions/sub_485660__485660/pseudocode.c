unsigned __int16 __thiscall sub_485660(int *this)
{
  __int16 v3; // si
  int v4; // esi
  bool v5; // zf
  unsigned __int16 v6; // di
  __int16 SaveSize; // ax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp-8h] [ebp-14h]
  const char *v14; // [esp-4h] [ebp-10h]
  unsigned __int16 v15; // [esp+8h] [ebp-4h]

  v3 = 0; /*0x48566b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x48566d*/
    v3 = 6; /*0x485676*/
  v15 = v3 + 0xC; /*0x48567e*/
  v4 = *this; /*0x485682*/
  v5 = *this == 0; /*0x485684*/
  v6 = v15; /*0x485686*/
  if ( !v5 ) /*0x48568b*/
  {
    do /*0x4856ae*/
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 ) /*0x485696*/
        break; /*0x485699*/
      SaveSize = ExtraDataList_GetSaveSize(*(_DWORD **)v4, 0x20, 0); /*0x4856a1*/
      v4 = *(_DWORD *)(v4 + 4); /*0x4856a6*/
      v6 += SaveSize; /*0x4856a9*/
    }
    while ( v4 ); /*0x4856ae*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4856be*/
    if ( currentlySavingFormHeader )
    {
      v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4856cb*/
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x4856eb*/
                            v9,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x58C,
                            "..\\TES Shared\\InventoryChanges.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v10,
        v12,
        v13,
        v14);
      return v6; /*0x485708*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x58C, "..\\TES Shared\\InventoryChanges.cpp");
  }
  return v6; /*0x485705*/
}
