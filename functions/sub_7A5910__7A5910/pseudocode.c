// Compact Oblivion SIdvLeafTexture constructor. The executable record is exactly 0x54 bytes and ends after sizeUsed; RT 4.1 mesh-leaf extension fields are absent.
OB_SIdvLeafTexture_010201A0 *__thiscall OB_SIdvLeafTexture_ctor_010201A0(OB_SIdvLeafTexture_010201A0 *this)
{
  double v1; // st7
  double v3; // st7
  double v4; // st6
  double v5; // st6

  v1 = flt_A524B0; /*0x7a5910*/
  this->blossomFlag = 0; /*0x7a591a*/
  this->baseColor[0] = v1; /*0x7a591c*/
  this->baseColor[1] = v1; /*0x7a591f*/
  this->baseColor[2] = v1; /*0x7a5922*/
  this->colorVariance = flt_A3D9A4; /*0x7a592b*/
  this->filename.capacity = 0xF; /*0x7a592e*/
  v3 = kHeadBodyNormalMatchRadius; /*0x7a5935*/
  this->filename.size = 0; /*0x7a593b*/
  this->filename.storage.inlineData[0] = 0; /*0x7a593e*/
  this->textureOrigin[0] = v3; /*0x7a5941*/
  this->textureOrigin[1] = 1.0; /*0x7a5946*/
  this->textureOrigin[2] = 0.0; /*0x7a594b*/
  v4 = flt_A8C958; /*0x7a594e*/
  this->textureSize[0] = flt_A8C958; /*0x7a5954*/
  this->textureSize[1] = v4; /*0x7a5957*/
  this->textureSize[2] = 0.0; /*0x7a595a*/
  v5 = flt_A31C80; /*0x7a595d*/
  this->sizeUsed[0] = flt_A31C80; /*0x7a5963*/
  this->sizeUsed[1] = v5; /*0x7a5966*/
  this->sizeUsed[2] = 0.0; /*0x7a5969*/
  return this; /*0x7a596c*/
}
