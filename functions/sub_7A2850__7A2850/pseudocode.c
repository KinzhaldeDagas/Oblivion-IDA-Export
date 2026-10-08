// Deep copy-constructs one compact 0x54 SIdvLeafTexture, including initialization and assignment of its owned 28-byte small string.
OB_SIdvLeafTexture_010201A0 *__thiscall OB_SIdvLeafTexture_CopyCtor_010201A0(
        OB_SIdvLeafTexture_010201A0 *this,
        const OB_SIdvLeafTexture_010201A0 *source)
{
  OB_stString28_010201A0 *p_filename; // ecx

  this->blossomFlag = source->blossomFlag; /*0x7a285a*/
  this->baseColor[0] = source->baseColor[0]; /*0x7a285f*/
  this->baseColor[1] = source->baseColor[1]; /*0x7a2865*/
  this->baseColor[2] = source->baseColor[2]; /*0x7a286b*/
  this->colorVariance = source->colorVariance; /*0x7a2873*/
  p_filename = &this->filename; /*0x7a2878*/
  p_filename->capacity = 0xF; /*0x7a287f*/
  p_filename->size = 0; /*0x7a2886*/
  p_filename->storage.inlineData[0] = 0; /*0x7a288a*/
  OB_stString28_AssignSubstring_010201A0((int)p_filename, &source->filename.allocatorState, 0, 0xFFFFFFFF); /*0x7a288d*/
  this->textureOrigin[0] = source->textureOrigin[0]; /*0x7a2895*/
  this->textureOrigin[1] = source->textureOrigin[1]; /*0x7a289b*/
  this->textureOrigin[2] = source->textureOrigin[2]; /*0x7a28a1*/
  this->textureSize[0] = source->textureSize[0]; /*0x7a28a7*/
  this->textureSize[1] = source->textureSize[1]; /*0x7a28ad*/
  this->textureSize[2] = source->textureSize[2]; /*0x7a28b6*/
  this->sizeUsed[0] = source->sizeUsed[0]; /*0x7a28bb*/
  this->sizeUsed[1] = source->sizeUsed[1]; /*0x7a28c1*/
  this->sizeUsed[2] = source->sizeUsed[2]; /*0x7a28c7*/
  return this; /*0x7a28ca*/
}
