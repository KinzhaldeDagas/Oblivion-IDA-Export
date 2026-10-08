// Verified: subtracts 0x24 from ECX; tail-forwards component serialization dispatch to full TESNPC object. Companion size/save/load bodies prove skill-array and combat-style payloads.
void __thiscall TESNPC_SaveModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESNPC,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  TESNPC_SaveModified(ADJ(self), changeMask); /*0x526c93*/
}
