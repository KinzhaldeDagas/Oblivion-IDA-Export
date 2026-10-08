// CSpeedTreeRT::GetTreeSize thin wrapper. Forwards to CTreeEngine::GetSize at 0x7A2400, reading CTreeEngine+0x4C/+0x50.
void __thiscall CSpeedTreeRT__GetTreeSize(OB_CSpeedTreeRT_010201A0 *this, float *size, float *variance)
{
  CTreeEngine__GetSize(this->treeEngine, size, variance); /*0x787062*/
}
