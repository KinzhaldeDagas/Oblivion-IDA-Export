// OBLIVION AUTHORITY (2026-08-30): Initializes the exact 0x34-byte SIdvTreeInfo embedded at CTreeEngine+0x24. The compact layout is stString28 followed by far, near, seed, size, variance, and flareSeed.
OB_SIdvTreeInfo_010201A0 *__thiscall OB_SIdvTreeInfo_ctor_010201A0(OB_SIdvTreeInfo_010201A0 *this)
{
  double v1; // st7
  double v3; // st7

  v1 = flt_A8CB04; /*0x7a8620*/
  this->m_strBranchTextureFilename.capacity = 0xF; /*0x7a862a*/
  this->m_strBranchTextureFilename.size = 0; /*0x7a8631*/
  this->m_strBranchTextureFilename.storage.inlineData[0] = 0; /*0x7a8634*/
  this->m_fFar = v1; /*0x7a8637*/
  v3 = flt_A2FE7C; /*0x7a863a*/
  this->m_nSeed = 0x4B0; /*0x7a8640*/
  this->m_fNear = v3; /*0x7a8647*/
  this->m_nFlareSeed = 0x1BC; /*0x7a864a*/
  this->m_fSize = flt_A3D8F0; /*0x7a8657*/
  this->m_fSizeVariance = 0.0; /*0x7a865c*/
  return this; /*0x7a865f*/
}
