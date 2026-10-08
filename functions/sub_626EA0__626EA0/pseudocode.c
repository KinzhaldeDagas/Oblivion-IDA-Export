unsigned __int16 __thiscall sub_626EA0(TESPackage *this)
{
  unsigned __int16 SaveSize; // di
  unsigned __int16 v3; // bx
  char *v4; // eax
  __int16 v5; // cx
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]

  SaveSize = TESPackage_GetSaveSize(this); /*0x626eb0*/
  v3 = SaveSize; /*0x626eb3*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x626eb6*/
    SaveSize += 6; /*0x626ebf*/
  v4 = (char *)this + 0x54; /*0x626ec2*/
  v5 = 0; /*0x626ec5*/
  if ( this != (TESPackage *)0xFFFFFFAC ) /*0x626ec9*/
  {
    do /*0x626edd*/
    {
      if ( *(_DWORD *)v4 ) /*0x626ed0*/
        ++v5; /*0x626ed5*/
      v4 = *((char **)v4 + 1); /*0x626ed8*/
    }
    while ( v4 ); /*0x626edd*/
  }
  v6 = SaveSize + 4 * v5 + 0x1F; /*0x626ee6*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x626ef1*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x626efe*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x626f1e*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x1D6,
                           ".\\AI\\FleePackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6 - v3,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x626f40*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6 - v3, 0x1D6, ".\\AI\\FleePackage.cpp");
  }
  return v6; /*0x626f3d*/
}
