// Verified sets/clears stateFlags bit 0x01, the graph-search discovered/open-list marker.
void __thiscall GraphNode_SetFlag01(void *this, bool value)
{
  if ( value ) /*0x67ecd5*/
    *((_BYTE *)this + 0x10) |= 1u; /*0x67ecd7*/
  else
    *((_BYTE *)this + 0x10) &= ~1u; /*0x67ecde*/
}
