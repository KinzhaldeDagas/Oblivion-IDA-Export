// Verified: subtracts 0x24 from ECX; tail-forwards component serialization dispatch to full TESNPC object. Companion size/save/load bodies prove skill-array and combat-style payloads.
unsigned __int16 __thiscall TESNPC_GetModifiedSize_ActorBaseDataThunk(
        TESActorBaseData *__shifted(TESNPC,0x24) self,
        ActorBaseSaveChangeMask changeMask)
{
  return TESNPC_GetModifiedSize(ADJ(self), changeMask);
}
