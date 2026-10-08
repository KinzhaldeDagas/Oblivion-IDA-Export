// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESActorBase_LoadModified. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
void __thiscall TESActorBase_LoadModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESActorBase,0x24) self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  TESActorBase_LoadModified(ADJ(self), changeMask, currentFlags); /*0x51e743*/
}
