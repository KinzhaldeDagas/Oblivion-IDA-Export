// CTreeEngine constructor for stock compact 0x110-byte object. Initializes branch weight level at +0xF0 and stock wind info; no floor-info fields or cluster first-branch-level storage are present.
OB_CTreeEngine_010201A0 *__thiscall OB_CTreeEngine_ctor_010201A0(
        OB_CTreeEngine_010201A0 *this,
        OB_CIndexedGeometry_010201A0 *branchGeometry)
{
  double v3; // st7
  float v5; // [esp+10h] [ebp-10h]
  float branchGeometrya; // [esp+24h] [ebp+4h]

  OB_CIdvCamera_ctor_010201A0((float *)this); /*0x7a372a*/
  this->billboardSize = 1.0; /*0x7a3731*/
  this->currentLod = 1.0; /*0x7a3736*/
  this->overrideTreeSize = kTerrainLODQuadRayDirectionZ; /*0x7a3746*/
  this->vftable = &CTreeEngine::`vftable'; /*0x7a3749*/
  this->overrideTreeVariance = 0.0; /*0x7a3751*/
  OB_stRandom_ctor_010201A0(&this->randomPlaceholderByte); /*0x7a3754*/
  this->transientDataIntact = 1; /*0x7a3761*/
  OB_SIdvTreeInfo_ctor_010201A0((int)this->branchTextureFilenameSmallString); /*0x7a3765*/
  this->trunkBranch = 0; /*0x7a376a*/
  this->branchGeometry = 0; /*0x7a376d*/
  this->branchInfoVector.begin = 0; /*0x7a3770*/
  this->branchInfoVector.end = 0; /*0x7a3773*/
  this->branchInfoVector.capacityEnd = 0; /*0x7a3776*/
  this->branchLodCount = 6; /*0x7a3779*/
  this->generatedBillboardLeaves.begin = 0; /*0x7a3780*/
  this->generatedBillboardLeaves.end = 0; /*0x7a3783*/
  this->generatedBillboardLeaves.capacityEnd = 0; /*0x7a3786*/
  OB_SIdvLeafInfo_ctor_010201A0(&this->leafInfo); /*0x7a3797*/
  this->minBranchVolumePercent = kHeadBodyNormalMatchRadius; /*0x7a37a2*/
  this->maxBranchVolumePercent = 1.0; /*0x7a37b2*/
  v3 = flt_A3744C; /*0x7a37bd*/
  this->leafLodVectors = 0; /*0x7a37c3*/
  this->leafReductionPercent = v3; /*0x7a37c9*/
  this->parsedLeafLodFlag = 0; /*0x7a37cf*/
  this->branchWindWeightLevel = 1; /*0x7a37d7*/
  this->branchReductionFuzziness = 0.0; /*0x7a37e1*/
  this->largeBranchPercent = flt_A43328; /*0x7a37ed*/
  OB_SIdvWindInfo_ctor_010201A0(&this->embeddedWindInfo); /*0x7a37f3*/
  this->embeddedWindInfo.strength = flt_A41304; /*0x7a3802*/
  this->branchGeometry = branchGeometry; /*0x7a3808*/
  v5 = this->embeddedWindInfo.leafFactors.y + this->embeddedWindInfo.leafFactors.y; /*0x7a3815*/
  branchGeometrya = this->embeddedWindInfo.leafFactors.x * dbl_A73DD8; /*0x7a3821*/
  this->embeddedWindInfo.leafOscillation.x = -branchGeometrya; /*0x7a382d*/
  this->embeddedWindInfo.leafOscillation.y = branchGeometrya; /*0x7a3833*/
  this->embeddedWindInfo.leafOscillation.z = v5; /*0x7a383d*/
  return this; /*0x7a3843*/
}
