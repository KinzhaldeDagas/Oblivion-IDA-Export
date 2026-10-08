// Verified sets/clears stateFlags bit 0x40. PathGrid graph loading sets it when WorldSpace/Cell SubSpace lookup finds a containing TESSubSpace; actor-aware edge cost adds a penalty when endpoints differ on this bit.
void __thiscall PathGraphNode_SetSubSpaceMembershipFlag(void *this, bool value)
{
  if ( value ) /*0x67ed55*/
    *((_BYTE *)this + 0x10) |= 0x40u; /*0x67ed57*/
  else
    *((_BYTE *)this + 0x10) &= ~0x40u; /*0x67ed5e*/
}
