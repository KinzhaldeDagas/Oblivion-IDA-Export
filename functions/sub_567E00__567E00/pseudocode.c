// Verified package persistence virtual SaveGame from vtable slot E0, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
void __thiscall TESPackage_SaveGame(TESPackage *self)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebx
  unsigned __int8 *v4; // ebp
  TESSaveLoadGame_SerializationView *v5; // ecx
  LocationData *location; // ecx
  TargetData *target; // ecx
  unsigned __int8 *v8; // esi
  UInt32 *currentlySavingFormHeader; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // [esp-10h] [ebp-28h]
  int v14; // [esp-Ch] [ebp-24h]
  const char *v15; // [esp-8h] [ebp-20h]
  char v16; // [esp+Fh] [ebp-9h] BYREF
  int Src; // [esp+10h] [ebp-8h] BYREF
  int source; // [esp+14h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x567e08*/
  source = 0; /*0x567e0e*/
  bufferCursor = v2->bufferCursor; /*0x567e16*/
  v4 = 0; /*0x567e19*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x567e1b*/
  {
    v5 = g_TESSaveLoadGame; /*0x567e24*/
    Src = 0x4B4F4C42; /*0x567e31*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x567e39*/
    v4 = g_TESSaveLoadGame->bufferCursor; /*0x567e44*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x567e4e*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->members.packageFlags, 8u); /*0x567e5f*/
  v16 = self->members.location != 0; /*0x567e6f*/
  if ( self->members.target ) /*0x567e74*/
    v16 |= 2u; /*0x567e7a*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &v16, 1u); /*0x567e88*/
  location = self->members.location; /*0x567e8d*/
  if ( location ) /*0x567e92*/
    sub_569CF0((char *)location); /*0x567e94*/
  target = self->members.target; /*0x567e99*/
  if ( target ) /*0x567e9e*/
    sub_56A290((char *)target); /*0x567ea0*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->members.procedureArrayIndex, 4u); /*0x567eb1*/
  if ( Global_DebugSaveBuffer )
  {
    v8 = g_TESSaveLoadGame->bufferCursor; /*0x567ec4*/
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x567ec8*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x567ed5*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x567ef5*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xEBA,
                            "..\\TES Shared\\Package.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v8 - bufferCursor,
        *currentlySavingFormHeader,
        v11,
        v13,
        v14,
        v15);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v8 - bufferCursor,
        0xEBA,
        "..\\TES Shared\\Package.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x567f2e*/
  {
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x567f3d*/
    if ( v12 > v4 + 0xFFFF ) /*0x567f48*/
      PrintError( /*0x567f59*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Package.cpp",
        0xEBA);
    *(_WORD *)v4 = (_WORD)v12 - (_WORD)v4; /*0x567f63*/
  }
}
