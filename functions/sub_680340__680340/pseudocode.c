// Verified: clears allocation flag 0x04 for this AStarWorldNode's table slot and rewinds LowPathSearchGlobals.nextFreeStateIndex when the released slot is lower.
unsigned __int16 __thiscall AStarWorldNode_ReleaseSearchStateSlot(AStarWorldNode *this)
{
  unsigned __int16 result; // ax

  result = this->searchNodeIndex; /*0x680340*/
  if ( this->searchNodeIndex < MEMORY[0xB3BE00].stateCapacity ) /*0x68034a*/
  {
    MEMORY[0xB3BE00].states[result].flags &= ~4u; /*0x680358*/
    result = this->searchNodeIndex; /*0x680361*/
    if ( this->searchNodeIndex < MEMORY[0xB3BE00].nextFreeStateIndex ) /*0x68036b*/
      MEMORY[0xB3BE00].nextFreeStateIndex = result; /*0x68036d*/
  }
  return result; /*0x680373*/
}
