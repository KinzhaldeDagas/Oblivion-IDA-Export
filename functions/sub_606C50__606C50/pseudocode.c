// Verified package persistence virtual SaveGame from vtable slot E0, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
// Verified: after base package data and optional BLOK envelope, saves UInt16 count then records {crimeType byte from Crime+4, UInt16 manager-list index};3 bytes per crime, not actor FormIDs. Alarm list nodes reference manager-owned crime records. Fallout old AlarmPackage writer8274B2B8 instead writes zero count without this loop; divergence verified from respective code.
void __thiscall AlarmPackage_SaveGame(AlarmPackage *self)
{
  bool v2; // zf
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  unsigned __int8 *v8; // ebp
  CrimeListNode *i; // esi
  Crime *crime; // edi
  TESSaveLoadGame_SerializationView *v11; // ecx
  unsigned __int16 CrimeIndex; // ax
  TESSaveLoadGame_SerializationView *v13; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  unsigned __int8 *v18; // edi
  unsigned __int8 *v19; // esi
  int v20; // [esp-Ch] [ebp-2Ch]
  int v21; // [esp-8h] [ebp-28h]
  const char *v22; // [esp-4h] [ebp-24h]
  char category; // [esp+Bh] [ebp-15h] BYREF
  int v24; // [esp+Ch] [ebp-14h] BYREF
  unsigned __int8 *v25; // [esp+10h] [ebp-10h]
  unsigned __int8 *v26; // [esp+14h] [ebp-Ch]
  int Src; // [esp+18h] [ebp-8h] BYREF
  int source; // [esp+1Ch] [ebp-4h] BYREF

  TESPackage_SaveGame(&self->base); /*0x606c57*/
  v2 = Global_DebugSaveBuffer == 0; /*0x606c5c*/
  v3 = g_TESSaveLoadGame; /*0x606c63*/
  source = 0; /*0x606c69*/
  bufferCursor = v3->bufferCursor; /*0x606c71*/
  v26 = 0; /*0x606c74*/
  v25 = bufferCursor; /*0x606c7c*/
  if ( !v2 ) /*0x606c80*/
    v25 = bufferCursor; /*0x606c82*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x606c86*/
  {
    v5 = g_TESSaveLoadGame; /*0x606c8f*/
    Src = 0x4B4F4C42; /*0x606c9c*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x606ca4*/
    v6 = g_TESSaveLoadGame; /*0x606ca9*/
    v26 = g_TESSaveLoadGame->bufferCursor; /*0x606cb9*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x606cbd*/
  }
  v7 = g_TESSaveLoadGame; /*0x606cc2*/
  v24 = 0; /*0x606ccf*/
  v8 = v7->bufferCursor; /*0x606cd7*/
  SaveLoad_SaveData(v7, &v24, 2u); /*0x606cdb*/
  for ( i = self->crimes; i; i = i->next ) /*0x606ce5*/
  {
    if ( !i->next && !i->crime ) /*0x606ced*/
      break; /*0x606cf0*/
    crime = i->crime; /*0x606cf2*/
    v11 = g_TESSaveLoadGame; /*0x606cfe*/
    category = i->crime->category; /*0x606d04*/
    SaveLoad_SaveData(v11, &category, 1u); /*0x606d08*/
    CrimeIndex = ActorProcessManager_GetCrimeIndex((ActorProcessManager *)&qword_B3BB2C[0x75], category, crime); /*0x606d19*/
    v13 = g_TESSaveLoadGame; /*0x606d28*/
    Src = CrimeIndex; /*0x606d2e*/
    SaveLoad_SaveData(v13, &Src, 2u); /*0x606d32*/
    ++v24; /*0x606d37*/
  }
  *(_WORD *)v8 = v24; /*0x606d48*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x606d5b*/
    v15 = g_TESSaveLoadGame->bufferCursor; /*0x606d63*/
    if ( currentlySavingFormHeader )
    {
      v16 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x606d6b*/
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)( /*0x606d8b*/
                            v16,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x216,
                            ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - v25,
        *currentlySavingFormHeader,
        v17,
        v20,
        v21,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - v25, 0x216, ".\\AI\\AlarmPackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x606dc7*/
  {
    v18 = v26; /*0x606dd6*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x606dda*/
    if ( v19 > v26 + 0xFFFF ) /*0x606de5*/
      PrintError( /*0x606df6*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\AlarmPackage.cpp",
        0x216);
    *(_WORD *)v18 = (_WORD)v19 - (_WORD)v18; /*0x606e00*/
  }
}
