// Verified: subtracts 0x24 from ECX; tail-forwards component serialization dispatch to full TESNPC object. Companion size/save/load bodies prove skill-array and combat-style payloads.
void __thiscall TESNPC_LoadModified_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESNPC,0x24) self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  TESNPC_LoadModifiedForm(ADJ(self), changeMask, currentFlags); /*0x526cb3*/
}
