// CSpeedTreeRT::SetLeafRockingState thin wrapper: writes the bool to CWindEngine+0x14.
void __thiscall CSpeedTreeRT__SetLeafRockingState(OB_CSpeedTreeRT_010201A0 *this, bool enabled)
{
  this->windEngine->rockingLeaves = enabled; /*0x7870d7*/
}
