// Verified returns stateFlags bit 0x10, used as an actor-specific cached underwater result.
bool __thiscall PathGraphNode_IsUnderwaterCacheSet(void *this)
{
  return (*((_BYTE *)this + 0x10) & 0x10) != 0; /*0x67ed29*/
}
