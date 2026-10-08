// Verified 2026-10-04: MiddleLowProcess save role from Oblivion process vtable slot +0x3F4, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified: calls LowProcess_SaveGame, writes unk090 (+0x90) as4 bytes, and maxAVModifiers (+0x94) when mask0x100000. Optional independent BLOK header/length envelope surrounds derived payload.
void __thiscall MiddleLowProcess_SaveGame(
        MiddleLowProcess *self,
        ProcessSaveChangeMask changeMask,
        MobileObject *owner)
{
  ProcessSaveChangeMask v3; // edi
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned __int8 *v6; // ebp
  unsigned __int8 *bufferCursor; // ebx
  TESSaveLoadGame_SerializationView *v8; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v10; // esi
  TESForm *v11; // eax
  const char *v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // [esp-Ch] [ebp-1Ch]
  int v15; // [esp-8h] [ebp-18h]
  const char *v16; // [esp-4h] [ebp-14h]

  v3 = changeMask; /*0x658cb8*/
  LowProcess_SaveGame(self, changeMask, owner); /*0x658cc0*/
  v5 = g_TESSaveLoadGame; /*0x658cc5*/
  v6 = 0; /*0x658ccb*/
  changeMask = 0; /*0x658ccd*/
  bufferCursor = v5->bufferCursor; /*0x658cd1*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x658cd4*/
  {
    v8 = g_TESSaveLoadGame; /*0x658ce4*/
    owner = (MobileObject *)0x4B4F4C42; /*0x658cea*/
    SaveLoad_SaveData(v8, &owner, 4u); /*0x658cf2*/
    v6 = g_TESSaveLoadGame->bufferCursor; /*0x658cfd*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &changeMask, 2u); /*0x658d07*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->unk090, 4u); /*0x658d1b*/
  if ( (v3 & 0x100000) != 0 ) /*0x658d26*/
    AVCollection_Save(&self->maxAVModifiers); /*0x658d2e*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x658d41*/
    v10 = g_TESSaveLoadGame->bufferCursor; /*0x658d49*/
    if ( currentlySavingFormHeader )
    {
      v11 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x658d51*/
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)( /*0x658d71*/
                            v11,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x247,
                            ".\\AI\\MiddleLowProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v10 - bufferCursor,
        *currentlySavingFormHeader,
        v12,
        v14,
        v15,
        v16);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v10 - bufferCursor,
        0x247,
        ".\\AI\\MiddleLowProcess.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x658da9*/
  {
    v13 = g_TESSaveLoadGame->bufferCursor; /*0x658db8*/
    if ( v13 > v6 + 0xFFFF ) /*0x658dc3*/
      PrintError( /*0x658dd4*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\MiddleLowProcess.cpp",
        0x247);
    *(_WORD *)v6 = (_WORD)v13 - (_WORD)v6; /*0x658dde*/
  }
}
