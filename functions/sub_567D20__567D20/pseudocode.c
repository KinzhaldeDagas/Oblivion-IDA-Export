// Verified package persistence virtual GetSaveSize from vtable slot DC, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
unsigned __int16 __thiscall TESPackage_GetSaveSize(TESPackage *self)
{
  __int16 v2; // di
  LocationData *location; // ecx
  TargetData *target; // ecx
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v6; // eax
  const char *v7; // eax
  int v9; // [esp-Ch] [ebp-18h]
  int v10; // [esp-8h] [ebp-14h]
  const char *v11; // [esp-4h] [ebp-10h]
  __int16 v12; // [esp+8h] [ebp-4h]
  unsigned __int16 v13; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x567d2b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x567d2d*/
    v2 = 6; /*0x567d36*/
  location = self->members.location; /*0x567d3b*/
  v12 = v2 + 9; /*0x567d43*/
  if ( location ) /*0x567d47*/
    v12 += sub_569A20((char *)location); /*0x567d4e*/
  target = self->members.target; /*0x567d53*/
  if ( target ) /*0x567d58*/
    v12 += sub_56A000(&target->targetType); /*0x567d5f*/
  v13 = v12 + 4; /*0x567d64*/
  if ( !Global_DebugSaveBuffer ) /*0x567d69*/
    return v13; /*0x567dee*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x567d77*/
  if ( currentlySavingFormHeader )
  {
    v6 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x567d84*/
    v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v6->vtbl->GetEditorName)( /*0x567da4*/
                         v6,
                         *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                         0xE9D,
                         "..\\TES Shared\\Package.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v13,
      *currentlySavingFormHeader,
      v7,
      v9,
      v10,
      v11);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v13, 0xE9D, "..\\TES Shared\\Package.cpp");
  }
  return v13; /*0x567dc0*/
}
