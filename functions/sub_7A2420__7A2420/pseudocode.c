// CTreeEngine::SetSize: stores tree size and variance at CTreeEngine+0x4C/+0x50.
void __thiscall CTreeEngine__SetSize(OB_CTreeEngine_010201A0 *this, float size, float variance)
{
  this->treeSizeScalar = size; /*0x7a2424*/
  this->treeSizeVariance = variance; /*0x7a242b*/
}
