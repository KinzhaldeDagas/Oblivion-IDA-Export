// Verified 2026-10-04: BaseProcess revert role from Oblivion process vtable slot +0x404, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified reset semantics: mask0x20000 and created editorPackage FormID trigger reset. If mask0x10000 is clear, calls manager helper45C7A0 first; package pointer is then nulled. Unknown helper45C7A0 full ownership semantics; do not call it a destructor solely from this call.
// Verified continuation: helper45C7A0 is now DeleteForm; ordinary form retirement queues at manager+30 rather than immediate destruction. Deferred queue-drain timing remains Unknown.
// Verified continuation: ordinary deferred forms are ultimately destroyed by manager459870, which unlinks before destructor and orders TESBoundObject/SpellItem last. Queue insertion453910, removal453940 and load-completion call4668BA close ownership chain; prior queue-drain Unknown superseded for these anchors.
void __thiscall BaseProcess_Revert(BaseProcess *self, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  TESPackage *editorPackage; // eax

  if ( (changeMask & 0x20000) != 0 ) /*0x60d81e*/
  {
    editorPackage = self->editorPackage; /*0x60d820*/
    if ( editorPackage ) /*0x60d825*/
    {
      if ( TESDataHandler_IsFormIDCreated_(editorPackage->members.super.refID) ) /*0x60d831*/
      {
        if ( (changeMask & 0x10000) == 0 ) /*0x60d840*/
          TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, (TESForm *)self->editorPackage); /*0x60d84c*/
        self->editorPackage = 0; /*0x60d851*/
      }
    }
  }
}
