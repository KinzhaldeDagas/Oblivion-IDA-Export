// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESActorBase_SaveModified. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
void __thiscall TESActorBase_SaveModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESActorBase,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  TESActorBase_SaveModified(ADJ(self), changeMask); /*0x51e783*/
}
