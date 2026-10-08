// Verified 2026-10-04: LowProcess save role from Oblivion process vtable slot +0x3F4, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified versioned low-process payload: +14 float,+18 date,+1C/+1D/+84 bytes; >=34 adds+1F byte, >=37 +20 byte, >=4B +88 float, >=4F +28 float and usedItem FormID, >=56 +38 dword; always follow/unk030 FormIDs; mask400000 damage collection; >=74 +8C float; >=76 +1E byte. Sizes agree with647060. Semantic names of unknown fields not inferred from wire order.
void __thiscall LowProcess_SaveGame(LowProcess *self, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  ProcessSaveChangeMask v3; // edi
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v7; // ecx
  TESSaveLoadGame_SerializationView *v8; // ecx
  TESSaveLoadGame_SerializationView *v9; // ecx
  TESForm *usedItem; // eax
  Actor *follow; // eax
  TESObjectREFR *unk030; // eax
  TESSaveLoadGame_SerializationView *v13; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  unsigned __int8 *v18; // edi
  unsigned __int8 *v19; // esi
  int v20; // [esp-Ch] [ebp-28h]
  int v21; // [esp-8h] [ebp-24h]
  const char *v22; // [esp-4h] [ebp-20h]
  unsigned int refID; // [esp+10h] [ebp-Ch] BYREF
  unsigned __int8 *v24; // [esp+14h] [ebp-8h]
  int source; // [esp+18h] [ebp-4h] BYREF

  v3 = changeMask; /*0x6471ab*/
  BaseProcess_SaveGame(self, changeMask, owner); /*0x6471b3*/
  v5 = g_TESSaveLoadGame; /*0x6471b8*/
  source = 0; /*0x6471c0*/
  bufferCursor = v5->bufferCursor; /*0x6471c4*/
  v24 = 0; /*0x6471c7*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6471cb*/
  {
    v7 = g_TESSaveLoadGame; /*0x6471db*/
    owner = (MobileObject *)0x4B4F4C42; /*0x6471e1*/
    SaveLoad_SaveData(v7, &owner, 4u); /*0x6471e9*/
    v8 = g_TESSaveLoadGame; /*0x6471ee*/
    v24 = g_TESSaveLoadGame->bufferCursor; /*0x6471fe*/
    SaveLoad_SaveData(v8, &source, 2u); /*0x647202*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->curHour, 4u); /*0x647213*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->curPackedDate, 4u); /*0x647224*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->unk01C, 1u); /*0x647235*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->procedureCompleted, 1u); /*0x647246*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &self->unk084, 1u); /*0x64725a*/
  v9 = g_TESSaveLoadGame; /*0x64725f*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x34u ) /*0x647269*/
  {
    SaveLoad_SaveData(v9, &self->isAlerted, 1u); /*0x647271*/
    v9 = g_TESSaveLoadGame; /*0x647276*/
  }
  if ( v9->currentVersion >= 0x37u ) /*0x647280*/
  {
    SaveLoad_SaveData(v9, &self->unk020, 1u); /*0x647288*/
    v9 = g_TESSaveLoadGame; /*0x64728d*/
  }
  if ( v9->currentVersion >= 0x4Bu ) /*0x647297*/
  {
    SaveLoad_SaveData(v9, &self->unk088, 4u); /*0x6472a2*/
    v9 = g_TESSaveLoadGame; /*0x6472a7*/
  }
  if ( v9->currentVersion >= 0x4Fu ) /*0x6472b1*/
  {
    SaveLoad_SaveData(v9, &self->unk028, 4u); /*0x6472b9*/
    usedItem = self->usedItem; /*0x6472be*/
    owner = 0; /*0x6472c3*/
    if ( usedItem ) /*0x6472c7*/
      owner = (MobileObject *)usedItem->member.refID; /*0x6472cc*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, (const unsigned int *)&owner, 4u); /*0x6472dd*/
    v9 = g_TESSaveLoadGame; /*0x6472e2*/
  }
  if ( v9->currentVersion >= 0x56u ) /*0x6472ec*/
  {
    SaveLoad_SaveData(v9, &self->unk038, 4u); /*0x6472f4*/
    v9 = g_TESSaveLoadGame; /*0x6472f9*/
  }
  follow = self->follow; /*0x6472ff*/
  changeMask = 0; /*0x647304*/
  if ( follow ) /*0x647308*/
  {
    if ( !self->unk044 ) /*0x64730a*/
      changeMask = follow->members.super.super.super.refID; /*0x647312*/
  }
  SaveLoad_SaveFormID(v9, (const unsigned int *)&changeMask, 4u); /*0x64731d*/
  unk030 = self->unk030; /*0x647322*/
  refID = 0; /*0x647327*/
  if ( unk030 ) /*0x64732b*/
    refID = unk030->member.super.refID; /*0x647330*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &refID, 4u); /*0x647341*/
  if ( (v3 & 0x400000) != 0 ) /*0x64734c*/
    AVCollection_Save(&self->avDamageModifiers); /*0x647351*/
  v13 = g_TESSaveLoadGame; /*0x647356*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x74u ) /*0x647360*/
  {
    SaveLoad_SaveData(v13, &self->unk08C, 4u); /*0x64736b*/
    v13 = g_TESSaveLoadGame; /*0x647370*/
  }
  if ( v13->currentVersion >= 0x76u ) /*0x64737a*/
  {
    SaveLoad_SaveData(v13, &self->unk01E, 1u); /*0x647382*/
    v13 = g_TESSaveLoadGame; /*0x647387*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)v13->currentlySavingFormHeader; /*0x647395*/
    v15 = v13->bufferCursor; /*0x64739d*/
    if ( currentlySavingFormHeader )
    {
      v16 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x6473a5*/
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)( /*0x6473c5*/
                            v16,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xF2B,
                            ".\\AI\\LowProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - bufferCursor,
        *currentlySavingFormHeader,
        v17,
        v20,
        v21,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - bufferCursor, 0xF2B, ".\\AI\\LowProcess.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6473fd*/
  {
    v18 = v24; /*0x64740c*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x647410*/
    if ( v19 > v24 + 0xFFFF ) /*0x64741b*/
      PrintError( /*0x64742c*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\LowProcess.cpp",
        0xF2B);
    *(_WORD *)v18 = (_WORD)v19 - (_WORD)v18; /*0x647436*/
  }
}
