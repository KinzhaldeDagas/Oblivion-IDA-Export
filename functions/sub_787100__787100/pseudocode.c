// CSpeedTreeRT::SetLeafDimmingScalar. Writes CTreeEngine+0x88 when the engine exists.
void __thiscall CSpeedTreeRT__SetLeafDimmingScalar(OB_CSpeedTreeRT_010201A0 *this, float scalar)
{
  if ( this->treeEngine ) /*0x787100*/
    *(float *)(this->treeEngine + 0x88) = scalar;// CSpeedTreeRT::SetLeafDimmingScalar direct store: treeEngine+0x88, which is OB_CTreeEngine::leafInfo.dimmingScalar. No quantization is performed here. /*0x78710a*/
}
