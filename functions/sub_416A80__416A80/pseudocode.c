int sub_416A80()
{
  int v0; // ebx
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v0 = 0; /*0x416a88*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x416a8a*/
    v0 = 6; /*0x416a93*/
  v1 = v0 + 4; /*0x416a9e*/
  v2 = 0; /*0x416aa1*/
  if ( unk_B3350C ) /*0x416aa5*/
  {
    while ( !*(_DWORD *)(unk_B33510 + 4 * v2) ) /*0x416ab4*/
    {
      if ( ++v2 >= (unsigned int)unk_B3350C ) /*0x416abb*/
        goto LABEL_6; /*0x416abb*/
    }
    v3 = *(_DWORD **)(unk_B33510 + 4 * v2); /*0x416ad1*/
  }
  else
  {
LABEL_6:
    v3 = 0; /*0x416abd*/
  }
  while ( v3 ) /*0x416ac1*/
  {
    v4 = (_DWORD *)*v3; /*0x416ac4*/
    v5 = v3[2]; /*0x416ac8*/
    if ( !*v3 ) /*0x416acb*/
    {
      v6 = (*(int (__thiscall **)(void *, _DWORD))(MEMORY[0xB33508] + 4))(&MEMORY[0xB33508], v3[1]) + 1; /*0x416af0*/
      if ( v6 >= unk_B3350C ) /*0x416af5*/
      {
LABEL_14:
        v3 = 0; /*0x416b0e*/
        goto LABEL_15; /*0x416b0e*/
      }
      while ( 1 ) /*0x416b00*/
      {
        v4 = *(_DWORD **)(unk_B33510 + 4 * v6); /*0x416b00*/
        if ( v4 ) /*0x416b05*/
          break; /*0x416b05*/
        if ( ++v6 >= unk_B3350C ) /*0x416b0c*/
          goto LABEL_14; /*0x416b0c*/
      }
    }
    v3 = v4; /*0x416acd*/
LABEL_15:
    if ( v5 ) /*0x416b12*/
    {
      if ( (*(_DWORD *)(v5 + 0x58) & 0x200000) != 0 ) /*0x416b1d*/
        v1 += 4; /*0x416b1f*/
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x416b36*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x416b43*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x416b60*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x6D,
                           "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v1,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v1; /*0x416b78*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v1,
      0x6D,
      "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
  }
  return v1; /*0x416b74*/
}
