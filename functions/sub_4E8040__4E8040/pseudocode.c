// Verified preferred-node predicate: reads the least-significant bit of the Z float at graph-node+0x1C. The registered fPathPreferredPointBonus setting applies a bonus to this marked point for non-creature actors.
bool __thiscall PathGraphNode_IsPreferred(void *this)
{
  return (int)*((float *)this + 7) & 1; /*0x4e8056*/
}
