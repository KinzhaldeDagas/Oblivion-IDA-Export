// Verified package persistence virtual GetSaveSize from vtable slot DC, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
unsigned __int16 __thiscall AlarmPackage_GetSaveSize(AlarmPackage *self)
{
  unsigned __int16 SaveSize; // di
  unsigned __int16 v3; // bx
  CrimeListNode *crimes; // eax
  __int16 i; // cx
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]

  SaveSize = TESPackage_GetSaveSize(&self->base); /*0x606b90*/
  v3 = SaveSize; /*0x606b93*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x606b96*/
    SaveSize += 6; /*0x606b9f*/
  crimes = self->crimes; /*0x606ba2*/
  for ( i = 0; crimes; crimes = crimes->next ) /*0x606ba9*/
  {
    if ( crimes->crime ) /*0x606bb0*/
      ++i; /*0x606bb5*/
  }
  v6 = i + SaveSize + 2 * i + 2; /*0x606bc9*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x606bd5*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x606be2*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x606c02*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x1F3,
                           ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6 - v3,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x606c24*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6 - v3, 0x1F3, ".\\AI\\AlarmPackage.cpp");
  }
  return v6; /*0x606c21*/
}
