// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESCreature_SaveModified. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
void __thiscall TESCreature_SaveModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESCreature,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  TESCreature_SaveModified(ADJ(self), changeMask); /*0x51eb63*/
}
