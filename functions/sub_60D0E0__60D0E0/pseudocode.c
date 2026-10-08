// Verified 2026-10-04: BaseProcess size role from Oblivion process vtable slot +0x3F0, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
unsigned __int16 __thiscall BaseProcess_GetSaveSize(
        BaseProcess *self,
        ProcessSaveChangeMask changeMask,
        MobileObject *owner)
{
  __int16 v4; // si
  TESPackage *editorPackage; // eax
  __int16 v6; // si
  UInt32 refID; // eax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]
  unsigned __int16 changeMaska; // [esp+Ch] [ebp+4h]

  v4 = 0; /*0x60d0ea*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60d0ec*/
    v4 = 6; /*0x60d0f5*/
  editorPackage = self->editorPackage; /*0x60d0fa*/
  v6 = v4 + 4; /*0x60d0fd*/
  if ( editorPackage ) /*0x60d102*/
  {
    refID = editorPackage->members.super.refID; /*0x60d104*/
    if ( (changeMask & 0x20000) != 0 && TESDataHandler_IsFormIDCreated_(refID) ) /*0x60d11b*/
    {
      ++v6; /*0x60d124*/
      if ( (changeMask & 0x10000) == 0 ) /*0x60d131*/
        v6 += self->editorPackage->__vftable->GetSaveSize(self->editorPackage); /*0x60d145*/
    }
    v6 += 4; /*0x60d149*/
  }
  changeMaska = v6 + 8; /*0x60d157*/
  if ( !Global_DebugSaveBuffer ) /*0x60d150*/
    return v6 + 8; /*0x60d1db*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x60d162*/
  if ( currentlySavingFormHeader )
  {
    v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x60d16f*/
    v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x60d18f*/
                          v9,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0xFE,
                          ".\\AI\\BaseProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      changeMaska,
      *currentlySavingFormHeader,
      v10,
      v12,
      v13,
      v14);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", changeMaska, 0xFE, ".\\AI\\BaseProcess.cpp");
  }
  return changeMaska; /*0x60d1ab*/
}
