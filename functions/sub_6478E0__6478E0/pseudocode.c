// Verified 2026-10-04: LowProcess revert role from Oblivion process vtable slot +0x404, parent call chain and matching serialization/reset behavior. ECX receiver and RET8 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert).
// Verified: calls BaseProcess_Revert; singleton field +0x44 values1FFFF000 or7FFFF000 gate broad path/list/runtime-state cleanup. Independently mask0x400000 clears avDamageModifiers +0x70. Fallout LowProcess::Revert82695FB8 is a Probable homolog but uses damage mask0x200000 and a different reset-state predicate.
void __thiscall LowProcess_Revert(LowProcess *self, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  unsigned int resetSelector; // eax
  PathLow *pathing; // ecx
  int *p_unk03C; // edi
  unsigned int v7; // ebp

  BaseProcess_Revert(self, changeMask, owner); /*0x6478ef*/
  resetSelector = g_TESSaveLoadGame->resetSelector; /*0x6478fa*/
  if ( resetSelector == 0x1FFFF000 || resetSelector == 0x7FFFF000 ) /*0x647909*/
  {
    pathing = self->pathing; /*0x64790f*/
    if ( pathing ) /*0x647919*/
      (**(void (__thiscall ***)(PathLow *, int))pathing)(pathing, 1); /*0x647921*/
    self->pathing = 0; /*0x647923*/
    self->unk038 = 0; /*0x647926*/
    p_unk03C = (int *)&self->unk03C; /*0x647929*/
    while ( self->unk040 || *p_unk03C ) /*0x647937*/
    {
      v7 = *p_unk03C; /*0x647939*/
      BSSimpleList_Remove((int *)&self->unk03C, *p_unk03C); /*0x64793e*/
      if ( v7 ) /*0x647945*/
        FormHeapFree(v7); /*0x647948*/
    }
    BSSimpleList_Clear(&self->unk04C); /*0x647955*/
    self->curHour = kTerrainLODQuadRayDirectionZ; /*0x647960*/
    self->unk088 = 0.0; /*0x647967*/
    self->unk044 = 0; /*0x64796d*/
    self->unk028 = 0.0; /*0x647970*/
    self->unk048 = 0; /*0x647973*/
    self->unk084 = 0; /*0x647976*/
    self->unk08C = 0.0; /*0x64797c*/
    self->follow = 0; /*0x647982*/
    self->unk030 = 0; /*0x647985*/
    self->curPackedDate = 0; /*0x647988*/
    self->unk01C = 0; /*0x64798b*/
    self->procedureCompleted = 0; /*0x64798e*/
    self->isAlerted = 0; /*0x647991*/
    self->unk020 = 0; /*0x647994*/
    self->usedItem = 0; /*0x647997*/
    self->unk01E = 0; /*0x64799a*/
  }
  if ( (changeMask & 0x400000) != 0 ) /*0x6479a6*/
    AVCollection_Clear(&self->avDamageModifiers); /*0x6479ab*/
}
