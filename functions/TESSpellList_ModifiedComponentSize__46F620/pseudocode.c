__int16 __thiscall TESSpellList_ModifiedComponentSize(char *this, int a2)
{
  __int16 v2; // si
  char *v4; // eax
  __int16 v5; // si
  __int16 v6; // cx
  __int16 v7; // dx
  char *v8; // eax
  __int16 v9; // cx
  unsigned __int16 v10; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  int v15; // [esp-Ch] [ebp-14h]
  int v16; // [esp-8h] [ebp-10h]
  const char *v17; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x46f621*/
  if ( (a2 & 0x20) == 0 ) /*0x46f62b*/
    return TESSpellList_ModifiedComponentSize_::Done(0, a2); /*0x46f62b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46f637*/
    v2 = 6; /*0x46f640*/
  v4 = this + 4; /*0x46f645*/
  v5 = v2 + 2; /*0x46f648*/
  v6 = 0; /*0x46f64b*/
  if ( this != (char *)0xFFFFFFFC ) /*0x46f64f*/
  {
    do /*0x46f65e*/
    {
      if ( *(_DWORD *)v4 ) /*0x46f651*/
        ++v6; /*0x46f656*/
      v4 = *((char **)v4 + 1); /*0x46f659*/
    }
    while ( v4 ); /*0x46f65e*/
  }
  v7 = v5 + 4 * v6; /*0x46f660*/
  v8 = this + 0xC; /*0x46f663*/
  v9 = 0; /*0x46f666*/
  if ( this != (char *)0xFFFFFFF4 ) /*0x46f66a*/
  {
    do /*0x46f67d*/
    {
      if ( *(_DWORD *)v8 ) /*0x46f670*/
        ++v9; /*0x46f675*/
      v8 = *((char **)v8 + 1); /*0x46f678*/
    }
    while ( v8 ); /*0x46f67d*/
  }
  v10 = v7 + 4 * v9; /*0x46f686*/
  if ( !Global_DebugSaveBuffer ) /*0x46f689*/
    return v10; /*0x46f689*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x46f690*/
  if ( currentlySavingFormHeader )
  {
    v12 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x46f69d*/
    v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)( /*0x46f6bd*/
                          v12,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0x4EF,
                          "..\\TES Shared\\TESSpellList.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v10,
      *currentlySavingFormHeader,
      v13,
      v15,
      v16,
      v17);
    return v10; /*0x46f6d9*/
  }
  sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v10, 0x4EF, "..\\TES Shared\\TESSpellList.cpp");
  return v10; /*0x46f6d7*/
}
