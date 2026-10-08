// Verified local behavior: after 0x6478E0, mask0x100000 clears maxAVModifiers +0x94. Candidate: process preload/reset phase; enclosing virtual lifecycle not established in this pass, so function name retained.
// Verified 2026-10-04: MiddleLowProcess revert role from Oblivion process vtable slot +0x404, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified role upgrade from Candidate: MiddleLowProcess_Revert at vslot404 called by parent-chain dispatch; clears maxAVModifiers +0x94 under mask0x100000 after LowProcess_Revert. Size658BC0/save658CB0/load658DF0 consume the same collection mask. Previous preload/reset uncertainty superseded for role, not all global reset policy.
void __thiscall MiddleLowProcess_Revert(MiddleLowProcess *self, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  LowProcess_Revert(self, changeMask, owner); /*0x65894e*/
  if ( (changeMask & 0x100000) != 0 ) /*0x658959*/
    AVCollection_Clear(&self->maxAVModifiers); /*0x658961*/
}
