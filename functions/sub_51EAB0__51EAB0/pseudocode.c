// Verified: component vtable serialization thunk subtracts 0x24 from ECX and tail-jumps to TESCreature_GetModifiedSize. Full-object dispatch; not the nonvirtual TESActorBaseData component serializer.
unsigned __int16 __thiscall TESCreature_GetModifiedSize_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESCreature,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  return TESCreature_GetModifiedSize(ADJ(self), changeMask);
}
