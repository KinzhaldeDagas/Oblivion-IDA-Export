// Verified sets/clears stateFlags bit 0x08. TESPathGrid_LoadSerializedGraphChunks sets it when point Z is below the cell water height; actor-aware edge scoring treats it as a boundary trait.
void __thiscall PathGraphNode_SetBelowWaterFlag(void *this, bool value)
{
  if ( value ) /*0x67ed05*/
    *((_BYTE *)this + 0x10) |= 8u; /*0x67ed07*/
  else
    *((_BYTE *)this + 0x10) &= ~8u; /*0x67ed0e*/
}
