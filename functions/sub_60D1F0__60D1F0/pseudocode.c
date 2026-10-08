// Verified 2026-10-04: BaseProcess save role from Oblivion process vtable slot +0x3F4, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
void __thiscall BaseProcess_SaveGame(BaseProcess *self, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  TESSaveLoadGame_SerializationView *v4; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESPackage *editorPackage; // eax
  ProcessSaveChangeMask v9; // edi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  unsigned __int8 *v14; // edi
  unsigned __int8 *v15; // esi
  int v16; // [esp-Ch] [ebp-28h]
  int v17; // [esp-8h] [ebp-24h]
  const char *v18; // [esp-4h] [ebp-20h]
  unsigned int refID; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int8 *v20; // [esp+10h] [ebp-Ch]
  int Src; // [esp+14h] [ebp-8h] BYREF
  int source; // [esp+18h] [ebp-4h] BYREF

  v4 = g_TESSaveLoadGame; /*0x60d1f7*/
  source = 0; /*0x60d1fd*/
  bufferCursor = v4->bufferCursor; /*0x60d205*/
  v20 = 0; /*0x60d209*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60d211*/
  {
    v6 = g_TESSaveLoadGame; /*0x60d21a*/
    Src = 0x4B4F4C42; /*0x60d227*/
    SaveLoad_SaveData(v6, &Src, 4u); /*0x60d22f*/
    v7 = g_TESSaveLoadGame; /*0x60d234*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x60d244*/
    SaveLoad_SaveData(v7, &source, 2u); /*0x60d248*/
  }
  editorPackage = self->editorPackage; /*0x60d24d*/
  refID = 0; /*0x60d252*/
  if ( editorPackage ) /*0x60d25a*/
    refID = editorPackage->members.super.refID; /*0x60d25f*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &refID, 4u); /*0x60d270*/
  if ( refID ) /*0x60d27b*/
  {
    v9 = changeMask; /*0x60d27d*/
    if ( (changeMask & 0x20000) != 0 && TESDataHandler_IsFormIDCreated_(refID) ) /*0x60d290*/
    {
      LOBYTE(changeMask) = self->editorPackage->members.type; /*0x60d2a5*/
      SaveLoad_SaveData(g_TESSaveLoadGame, &changeMask, 1u); /*0x60d2b0*/
      if ( (v9 & 0x10000) == 0 ) /*0x60d2bb*/
        self->editorPackage->__vftable->SaveGame(self->editorPackage); /*0x60d2c8*/
    }
    SaveLoad_SaveData(g_TESSaveLoadGame, &self->editorPackProcedure, 4u); /*0x60d2d6*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, self + 1, 4u); /*0x60d2e7*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (char *)self + 0x10, 4u); /*0x60d2f8*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x60d30b*/
    v11 = g_TESSaveLoadGame->bufferCursor; /*0x60d313*/
    if ( currentlySavingFormHeader )
    {
      v12 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x60d31b*/
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)( /*0x60d33b*/
                            v12,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x122,
                            ".\\AI\\BaseProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - bufferCursor,
        *currentlySavingFormHeader,
        v13,
        v16,
        v17,
        v18);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v11 - bufferCursor, 0x122, ".\\AI\\BaseProcess.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60d373*/
  {
    v14 = v20; /*0x60d382*/
    v15 = g_TESSaveLoadGame->bufferCursor; /*0x60d386*/
    if ( v15 > v20 + 0xFFFF ) /*0x60d391*/
      PrintError( /*0x60d3a2*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\BaseProcess.cpp",
        0x122);
    *(_WORD *)v14 = (_WORD)v15 - (_WORD)v14; /*0x60d3ac*/
  }
}
