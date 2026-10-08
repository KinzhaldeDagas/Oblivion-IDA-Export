// SpeedTreeOBSE 2026-05-30 frond restoration: initializes the 7-dword compact texture summary before optional generated-frond texture recovery calls 0x78A890.
OB_CSpeedTreeRT_STextures *__thiscall CSpeedTreeRT__STextures_ctor(OB_CSpeedTreeRT_STextures *this)
{
  this->branchTextureFilename = 0; /*0x786fa4*/
  this->leafTextureCount = 0; /*0x786fa6*/
  this->leafTextureFilenames = 0; /*0x786fa9*/
  this->frondTextureCount = 0; /*0x786fac*/
  this->frondTextureFilenames = 0; /*0x786faf*/
  this->compositeTextureFilename = 0; /*0x786fb2*/
  this->projectedShadowTextureFilename = 0; /*0x786fb5*/
  return this; /*0x786fb8*/
}
