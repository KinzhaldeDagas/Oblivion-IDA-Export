// CTreeEngine::SetLodLimits: stores caller near/far limits at CTreeEngine+0x44/+0x40.
void __thiscall CTreeEngine__SetLodLimits(OB_CTreeEngine_010201A0 *this, float nearDistance, float farDistance)
{
  this->treeNearLodDistance = nearDistance; /*0x7a24d4*/
  this->treeFarLodDistance = farDistance; /*0x7a24db*/
}
