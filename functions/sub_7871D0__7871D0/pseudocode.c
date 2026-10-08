// CSpeedTreeRT::SetLodLimits thin wrapper. Forwards near/far limits to CTreeEngine::SetLodLimits at 0x7A24D0.
void __thiscall CSpeedTreeRT__SetLodLimits(OB_CSpeedTreeRT_010201A0 *this, float nearDistance, float farDistance)
{
  CTreeEngine__SetLodLimits(this->treeEngine, nearDistance, farDistance); /*0x7871e4*/
}
