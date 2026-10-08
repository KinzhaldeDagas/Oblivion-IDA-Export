unsigned __int16 __thiscall sub_67C000(int *this)
{
  __int16 v2; // si
  int v3; // esi
  bool v4; // zf
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]
  unsigned __int16 v14; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x67c00b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x67c00d*/
    v2 = 6; /*0x67c016*/
  v14 = v2 + 2; /*0x67c01e*/
  v3 = *this; /*0x67c022*/
  v4 = *this == 0; /*0x67c024*/
  v5 = v14; /*0x67c026*/
  if ( !v4 ) /*0x67c02b*/
  {
    do /*0x67c04a*/
    {
      if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)v3 ) /*0x67c036*/
        break; /*0x67c039*/
      v6 = sub_67B730(*(_DWORD ***)v3); /*0x67c03d*/
      v3 = *(_DWORD *)(v3 + 4); /*0x67c042*/
      v5 += v6; /*0x67c045*/
    }
    while ( v3 ); /*0x67c04a*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x67c05a*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x67c067*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x67c087*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x218,
                           ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v5,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v5; /*0x67c0a4*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v5, 0x218, ".\\AI\\SpectatorPackage.cpp");
  }
  return v5; /*0x67c0a1*/
}
