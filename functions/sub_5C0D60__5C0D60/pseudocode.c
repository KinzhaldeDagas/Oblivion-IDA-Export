__int16 sub_5C0D60()
{
  int v0; // edi
  unsigned int i; // edx
  _DWORD *v2; // eax
  bool v3; // zf
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  int v8; // [esp-10h] [ebp-14h]
  int v9; // [esp-Ch] [ebp-10h]
  const char *v10; // [esp-8h] [ebp-Ch]

  v0 = 0; /*0x5c0d67*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x5c0d69*/
    v0 = 6; /*0x5c0d72*/
  for ( i = 0; i < 0x20; i += 4 ) /*0x5c0d77*/
  {
    v2 = (_DWORD *)unk_B3B444[i]; /*0x5c0d80*/
    ++v0; /*0x5c0d86*/
    while ( v2 ) /*0x5c0d8b*/
    {
      v3 = v2[2] == 0; /*0x5c0d90*/
      v2 = (_DWORD *)*v2; /*0x5c0d97*/
      if ( !v3 ) /*0x5c0d99*/
        v0 += 4; /*0x5c0d9b*/
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x5c0dbc*/
    if ( currentlySavingFormHeader )
    {
      v5 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x5c0dc9*/
      v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v5->vtbl->GetEditorName)( /*0x5c0de9*/
                           v5,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x368,
                           ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        (unsigned __int16)v0,
        *currentlySavingFormHeader,
        v6,
        v8,
        v9,
        v10);
      return v0; /*0x5c0e05*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v0,
      0x368,
      ".\\Interface\\Menus\\QuickKeysMenu.cpp");
  }
  return v0; /*0x5c0e04*/
}
