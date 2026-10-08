//
// [2026-10-03 frond export storage] Verified required object size 0x12C, 4-byte aligned. Native initializer writes +0x120 DWORD (0x787B0A) and +0x128 WORD (0x787B10); a 0x120-byte temporary overflows even for frond-only mask because constructor initializes every output subobject. Plugin had two undersized public-export scratch buffers and matching undersized memset; correction uses the authoritative full packet size. Fallout SGeometry ctor 0x8281ACF0 also includes the horizontal billboard tail. Later RT4.1 geometry schema differs and must not size this native temporary.
OB_SpeedTreeGeometryOutput_010201A0 *__thiscall OB_SpeedTreeGeometryOutput_init_010201A0(
        OB_SpeedTreeGeometryOutput_010201A0 *this)
{
  double v2; // st7

  v2 = kTerrainLODQuadRayDirectionZ; /*0x7879a2*/
  this->branches.alphaTestValue = kTerrainLODQuadRayDirectionZ; /*0x7879aa*/
  this->branches.numStrips = 0; /*0x7879ad*/
  this->branches.stripLengths = 0; /*0x7879b1*/
  this->branches.strips = 0; /*0x7879b4*/
  this->branches.vertexCount = 0; /*0x7879b7*/
  this->branches.packedColors = 0; /*0x7879bb*/
  this->branches.normals = 0; /*0x7879be*/
  this->branches.binormals = 0; /*0x7879c1*/
  this->branches.tangents = 0; /*0x7879c4*/
  this->branches.coords = 0; /*0x7879c7*/
  this->branches.diffuseTexcoords = 0; /*0x7879ca*/
  this->branches.shadowTexcoords = 0; /*0x7879cd*/
  this->branches.windWeights = 0; /*0x7879d0*/
  this->branches.windMatrixIndices = 0; /*0x7879d3*/
  this->branches.discreteLodLevel = 0xFFFFFFFF; /*0x7879d9*/
  this->fronds.discreteLodLevel = 0xFFFFFFFF; /*0x7879db*/
  this->fronds.numStrips = 0; /*0x7879de*/
  this->fronds.stripLengths = 0; /*0x7879e2*/
  this->fronds.strips = 0; /*0x7879e5*/
  this->fronds.vertexCount = 0; /*0x7879e8*/
  this->fronds.packedColors = 0; /*0x7879ec*/
  this->fronds.normals = 0;                     // SGeometry constructor/subobject init: +0x54 here is geometry-output storage, not CSpeedTreeRT+0x54 directional image count. /*0x7879ef*/
  this->fronds.binormals = 0; /*0x7879f2*/
  this->fronds.tangents = 0; /*0x7879f5*/
  this->fronds.coords = 0; /*0x7879f8*/
  this->fronds.diffuseTexcoords = 0; /*0x7879fb*/
  this->fronds.shadowTexcoords = 0; /*0x7879fe*/
  this->fronds.windWeights = 0; /*0x787a01*/
  this->fronds.windMatrixIndices = 0; /*0x787a04*/
  this->fronds.alphaTestValue = v2; /*0x787a07*/
  this->primaryLeaves.lodFadeOrRockScalar = v2; /*0x787a0a*/
  this->primaryLeaves.active = 0; /*0x787a0d*/
  this->primaryLeaves.discreteLodLevel = 0xFFFFFFFF; /*0x787a10*/
  this->primaryLeaves.leafCount = 0; /*0x787a16*/
  this->primaryLeaves.leafMapIndices = 0; /*0x787a1d*/
  this->primaryLeaves.leafCardIndices = 0; /*0x787a23*/
  this->primaryLeaves.centerCoords = 0; /*0x787a29*/
  this->primaryLeaves.diffuseTexcoords = 0; /*0x787a2f*/
  this->primaryLeaves.cardCoords = 0; /*0x787a35*/
  this->primaryLeaves.packedColors = 0; /*0x787a3b*/
  this->primaryLeaves.normals = 0; /*0x787a41*/
  this->primaryLeaves.binormals = 0; /*0x787a47*/
  this->primaryLeaves.tangents = 0; /*0x787a4d*/
  this->primaryLeaves.windWeights = 0; /*0x787a53*/
  this->primaryLeaves.windMatrixIndices = 0; /*0x787a59*/
  this->secondaryLeaves.lodFadeOrRockScalar = v2; /*0x787a5f*/
  this->secondaryLeaves.active = 0; /*0x787a65*/
  this->secondaryLeaves.discreteLodLevel = 0xFFFFFFFF; /*0x787a6b*/
  this->secondaryLeaves.leafCount = 0; /*0x787a71*/
  this->secondaryLeaves.leafMapIndices = 0; /*0x787a78*/
  this->secondaryLeaves.leafCardIndices = 0; /*0x787a7e*/
  this->secondaryLeaves.centerCoords = 0; /*0x787a84*/
  this->secondaryLeaves.diffuseTexcoords = 0; /*0x787a8a*/
  this->secondaryLeaves.cardCoords = 0; /*0x787a90*/
  this->secondaryLeaves.packedColors = 0; /*0x787a96*/
  this->secondaryLeaves.normals = 0; /*0x787a9c*/
  this->secondaryLeaves.binormals = 0; /*0x787aa2*/
  this->secondaryLeaves.tangents = 0; /*0x787aa8*/
  this->secondaryLeaves.windWeights = 0; /*0x787aae*/
  this->secondaryLeaves.windMatrixIndices = 0; /*0x787ab4*/
  this->primaryBillboard.alphaTestValue = v2; /*0x787aba*/
  this->primaryBillboard.active = 0; /*0x787ac0*/
  this->primaryBillboard.texcoords = 0; /*0x787ac6*/
  this->primaryBillboard.coords = 0; /*0x787acc*/
  this->primaryBillboard.imageIndex = 0; /*0x787ad2*/
  this->secondaryBillboard.alphaTestValue = v2; /*0x787ad9*/
  this->secondaryBillboard.active = 0; /*0x787adf*/
  this->secondaryBillboard.texcoords = 0; /*0x787ae5*/
  this->secondaryBillboard.coords = 0; /*0x787aeb*/
  this->secondaryBillboard.imageIndex = 0; /*0x787af1*/
  this->horizontalBillboard.alphaTestValue = v2; /*0x787af8*/
  this->horizontalBillboard.active = 0; /*0x787afe*/
  this->horizontalBillboard.texcoords = 0; /*0x787b04*/
  this->horizontalBillboard.coords = 0; /*0x787b0a*/
  this->horizontalBillboard.imageIndex = 0; /*0x787b10*/
  return this; /*0x787b17*/
}
