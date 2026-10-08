// Verified sets/clears the PathGrid linked-points-disabled flag (0x20). SetLinkedPointsEnabled stores the inverse of its enabled argument.
void __thiscall PathGraphNode_SetLinkedPointsDisabled(void *this, bool value)
{
  if ( value ) /*0x67ed85*/
    *((_BYTE *)this + 0x10) |= 0x20u; /*0x67ed87*/
  else
    *((_BYTE *)this + 0x10) &= ~0x20u; /*0x67ed8e*/
}
