// Verified 2026-10-04: MiddleLowProcess size role from Oblivion process vtable slot +0x3F0, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified: size = LowProcess size + optional6-byte BLOK envelope +4 bytes for member+0x90 + AVCollection size when mask0x100000. Matches save/load. Unknown semantic name of +0x90 word; retain unk090.
unsigned __int16 __thiscall MiddleLowProcess_GetSaveSize(
        MiddleLowProcess *self,
        ProcessSaveChangeMask changeMask,
        MobileObject *owner)
{
  unsigned __int16 SaveSize; // di
  unsigned __int16 v5; // bp
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-1Ch]
  int v12; // [esp-8h] [ebp-18h]
  const char *v13; // [esp-4h] [ebp-14h]

  SaveSize = LowProcess_GetSaveSize(self, changeMask, owner); /*0x658bdb*/
  v5 = SaveSize; /*0x658be2*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x658be5*/
    SaveSize += 6; /*0x658bee*/
  v6 = SaveSize + 4; /*0x658bf1*/
  if ( (changeMask & 0x100000) != 0 ) /*0x658bfe*/
    v6 += AVCollection_GetSaveSize(&self->maxAVModifiers); /*0x658c0b*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x658c24*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x658c31*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x658c51*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x230,
                           ".\\AI\\MiddleLowProcess.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6 - v5,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x658c74*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6 - v5, 0x230, ".\\AI\\MiddleLowProcess.cpp");
  }
  return v6; /*0x658c70*/
}
