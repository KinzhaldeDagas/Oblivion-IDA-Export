// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESCreature_LoadModified. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
void __thiscall TESCreature_LoadModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESCreature,0x24) self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  TESCreature_LoadModified(ADJ(self), changeMask, currentFlags); /*0x51eae3*/
}
