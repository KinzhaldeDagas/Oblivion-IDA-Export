// Oblivion SIdvLeafInfo constructor with the leafTextures member now typed as vector<SIdvLeafTexture>; total embedded record size remains 0x50.
OB_SIdvLeafInfo_010201A0 *__thiscall OB_SIdvLeafInfo_ctor_010201A0(OB_SIdvLeafInfo_010201A0 *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7

  this->dimmingScalar = 1.0; /*0x7a5b14*/
  v2 = kHeadBodyNormalMatchRadius; /*0x7a5b19*/
  this->dimmingEnabled = 1; /*0x7a5b1f*/
  this->collisionType = 2; /*0x7a5b22*/
  this->leafTextures.begin = 0; /*0x7a5b29*/
  this->leafTextures.end = 0; /*0x7a5b2c*/
  this->leafTextures.capacityEnd = 0; /*0x7a5b2f*/
  this->spacingTolerance = v2; /*0x7a5b32*/
  v3 = flt_A41328; /*0x7a5b35*/
  this->blossomLevel = 1; /*0x7a5b3b*/
  this->blossomDistance = v3; /*0x7a5b42*/
  this->rockingGroupCount = 3; /*0x7a5b45*/
  v4 = flt_A524B0; /*0x7a5b4c*/
  this->leafLodLevelCount = 4; /*0x7a5b52*/
  this->blossomWeighting = v4; /*0x7a5b59*/
  this->leafTextureCount = 0; /*0x7a5b5c*/
  this->leafVertexTables = 0; /*0x7a5b5f*/
  this->leafTexcoordTable = 0; /*0x7a5b62*/
  this->rockingTimeOffsets = 0; /*0x7a5b65*/
  return this; /*0x7a5b68*/
}
