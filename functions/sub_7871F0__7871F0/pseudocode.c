// CSpeedTreeRT::GetNumBranchLodLevels. Returns the 16-bit branch LOD count at CTreeEngine+0x70.
unsigned __int16 __thiscall CSpeedTreeRT__GetNumBranchLodLevels(const OB_CSpeedTreeRT_010201A0 *this)
{
  return *(_WORD *)(this->treeEngine + 0x70); /*0x7871f6*/
}
