unsigned __int16 __thiscall sub_46E9F0(char *this, char a2)
{
  __int16 v2; // si
  char *v4; // eax
  __int16 v5; // si
  __int16 v6; // cx
  unsigned __int16 v7; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x46e9f1*/
  if ( (a2 & 8) == 0 ) /*0x46e9fb*/
    return 0; /*0x46eab1*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46ea07*/
    v2 = 6; /*0x46ea10*/
  v4 = this + 4; /*0x46ea15*/
  v5 = v2 + 2; /*0x46ea18*/
  v6 = 0; /*0x46ea1b*/
  if ( this != (char *)0xFFFFFFFC ) /*0x46ea1f*/
  {
    do /*0x46ea2e*/
    {
      if ( *(_DWORD *)v4 ) /*0x46ea21*/
        ++v6; /*0x46ea26*/
      v4 = *((char **)v4 + 1); /*0x46ea29*/
    }
    while ( v4 ); /*0x46ea2e*/
  }
  v7 = v5 + 8 * v6; /*0x46ea37*/
  if ( !Global_DebugSaveBuffer ) /*0x46ea3a*/
    return v7; /*0x46ea3a*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x46ea41*/
  if ( currentlySavingFormHeader )
  {
    v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x46ea4e*/
    v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x46ea6e*/
                          v9,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0x4E9,
                          "..\\TES Shared\\TESReactionForm.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v7,
      *currentlySavingFormHeader,
      v10,
      v12,
      v13,
      v14);
    return v7; /*0x46ea8a*/
  }
  sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7, 0x4E9, "..\\TES Shared\\TESReactionForm.cpp");
  return v7; /*0x46ea88*/
}
