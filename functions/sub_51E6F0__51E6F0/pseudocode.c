// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESActorBase_GetModifiedSize. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
unsigned __int16 __thiscall TESActorBase_GetModifiedSize_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESActorBase,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  return TESActorBase_GetModifiedSize(ADJ(self), changeMask);
}
