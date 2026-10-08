// CTreeEngine::GetSize: returns tree size and variance from CTreeEngine+0x4C/+0x50.
void __thiscall CTreeEngine__GetSize(const OB_CTreeEngine_010201A0 *this, float *sizeOut, float *varianceOut)
{
  *sizeOut = this->treeSizeScalar; /*0x7a2407*/
  *varianceOut = this->treeSizeVariance; /*0x7a2410*/
}
