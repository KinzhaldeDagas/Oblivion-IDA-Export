// CSpeedTreeRT::GetNumLeafLodLevels. Returns the 16-bit leaf LOD count at CTreeEngine+0xC0.
unsigned __int16 __thiscall CSpeedTreeRT__GetNumLeafLodLevels(const OB_CSpeedTreeRT_010201A0 *this)
{
  return *(_WORD *)(this->treeEngine + 0xC0); /*0x787209*/
}
