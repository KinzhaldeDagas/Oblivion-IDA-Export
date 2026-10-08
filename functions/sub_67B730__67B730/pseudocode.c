unsigned __int16 __thiscall sub_67B730(_DWORD **this)
{
  __int16 v2; // di
  __int16 v3; // di
  _DWORD *v4; // eax
  __int16 j; // cx
  _DWORD *v6; // eax
  __int16 i; // cx
  unsigned __int16 v8; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-18h]
  int v14; // [esp-8h] [ebp-14h]
  const char *v15; // [esp-4h] [ebp-10h]
  __int16 v16; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x67b73b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67b73d*/
    v2 = 6; /*0x67b746*/
  v3 = v2 + 2; /*0x67b753*/
  if ( g_TESSaveLoadGame->currentVersion < 0x39u ) /*0x67b75d*/
  {
    v6 = *this; /*0x67b785*/
    for ( i = 0; v6; v6 = (_DWORD *)v6[1] ) /*0x67b785*/
    {
      if ( *v6 ) /*0x67b790*/
        ++i; /*0x67b795*/
    }
    v16 = i + v3 + 4 * i; /*0x67b7a5*/
  }
  else
  {
    v4 = *this; /*0x67b75f*/
    for ( j = 0; v4; v4 = (_DWORD *)v4[1] ) /*0x67b75f*/
    {
      if ( *v4 ) /*0x67b767*/
        ++j; /*0x67b76c*/
    }
    v16 = j + v3 + 8 * j; /*0x67b77f*/
  }
  v8 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0xDC))(*(this + 2)) + 0x20 + v16; /*0x67b7bf*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x67b7d1*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x67b7de*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x67b7fe*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x117,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v8,
        *currentlySavingFormHeader,
        v11,
        v13,
        v14,
        v15);
      return v8; /*0x67b81b*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8, 0x117, ".\\AI\\SpectatorPackage.cpp");
  }
  return v8; /*0x67b818*/
}
