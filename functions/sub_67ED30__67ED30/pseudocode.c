// Verified sets/clears stateFlags bit 0x10 from the result of Actor_IsUnderwater during point traversal-cost evaluation.
void __thiscall PathGraphNode_SetUnderwaterCache(void *this, bool value)
{
  if ( value ) /*0x67ed35*/
    *((_BYTE *)this + 0x10) |= 0x10u; /*0x67ed37*/
  else
    *((_BYTE *)this + 0x10) &= ~0x10u; /*0x67ed3e*/
}
