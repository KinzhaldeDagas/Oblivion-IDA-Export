// Returns whether ActorAnimData has any deferred KFModel install state: first model at +0xB4 or linked-list head at +0xB8. ActorAnimData_Update uses this after each budgeted install.
BOOL __thiscall ActorAnimData_HasPendingKFModels(_DWORD *this)
{
  return *(this + 0x2E) || *(this + 0x2D); /*0x471750*/
}
