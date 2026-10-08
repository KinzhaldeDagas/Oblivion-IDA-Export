// Verified sets/clears stateFlags bit 0x02, the graph-search processed/closed marker.
void __thiscall GraphNode_SetFlag02(void *this, bool value)
{
  if ( value ) /*0x67eca5*/
    *((_BYTE *)this + 0x10) |= 2u; /*0x67eca7*/
  else
    *((_BYTE *)this + 0x10) &= ~2u; /*0x67ecae*/
}
