// Deep copy-assigns a compact 0x54 SIdvLeafTexture: byte blossom flag, color/variance, owned filename, origin, size, and sizeUsed.
OB_SIdvLeafTexture_010201A0 *__thiscall OB_SIdvLeafTexture_CopyAssign_010201A0(
        OB_SIdvLeafTexture_010201A0 *this,
        const OB_SIdvLeafTexture_010201A0 *source)
{
  this->blossomFlag = source->blossomFlag; /*0x7a347a*/
  this->baseColor[0] = source->baseColor[0]; /*0x7a347f*/
  this->baseColor[1] = source->baseColor[1]; /*0x7a3485*/
  this->baseColor[2] = source->baseColor[2]; /*0x7a3492*/
  this->colorVariance = source->colorVariance; /*0x7a3499*/
  OB_stString28_AssignSubstring_010201A0((int)&this->filename, &source->filename.allocatorState, 0, 0xFFFFFFFF); /*0x7a349f*/
  this->textureOrigin[0] = source->textureOrigin[0];// SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cOrigin from source +0x30; this is not the exported per-card texcoord table. /*0x7a34a7*/
  this->textureOrigin[1] = source->textureOrigin[1]; /*0x7a34ad*/
  this->textureOrigin[2] = source->textureOrigin[2]; /*0x7a34b3*/
  this->textureSize[0] = source->textureSize[0];// SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cSize from source +0x3C. /*0x7a34b9*/
  this->textureSize[1] = source->textureSize[1]; /*0x7a34bf*/
  this->textureSize[2] = source->textureSize[2]; /*0x7a34c8*/
  this->sizeUsed[0] = source->sizeUsed[0];      // SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cSizeUsed from source +0x48; world-space leaf sizing, not a UV texture extent. /*0x7a34cd*/
  this->sizeUsed[1] = source->sizeUsed[1]; /*0x7a34d3*/
  this->sizeUsed[2] = source->sizeUsed[2]; /*0x7a34da*/
  return this; /*0x7a34d9*/
}
