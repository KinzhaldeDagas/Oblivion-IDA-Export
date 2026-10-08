unsigned __int16 __thiscall sub_441000(char *this)
{
  __int16 v2; // di
  char *v3; // eax
  __int16 v4; // di
  __int16 v5; // cx
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x44100a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x44100c*/
    v2 = 6; /*0x441015*/
  v3 = this + 0x8C; /*0x44101a*/
  v4 = v2 + 4; /*0x441020*/
  v5 = 0; /*0x441023*/
  if ( this != (char *)0xFFFFFF74 ) /*0x441027*/
  {
    do /*0x44103d*/
    {
      if ( *(_DWORD *)v3 ) /*0x441030*/
        ++v5; /*0x441035*/
      v3 = *((char **)v3 + 1); /*0x441038*/
    }
    while ( v3 ); /*0x44103d*/
  }
  v6 = v4 + 6 * v5; /*0x441042*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x32u ) /*0x44104e*/
    v6 += 4; /*0x441050*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x44105c*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x441069*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x441089*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x1591,
                           "..\\TES Shared\\TES.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x4410a5*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x1591, "..\\TES Shared\\TES.cpp");
  }
  return v6; /*0x4410a3*/
}
