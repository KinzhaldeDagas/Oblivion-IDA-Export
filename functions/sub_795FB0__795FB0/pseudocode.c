// CIndexedGeometry constructor: stock 0x118-byte geometry writer; records retain-texcoord flag, CWindEngine pointer, vertex-weighting state, 16-bit vertex/LOD/strip counters, index strip vectors, and attribute vectors.
OB_CIndexedGeometry_010201A0 *__thiscall OB_CIndexedGeometry_ctor_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        OB_CWindEngine_010201A0 *windEngine,
        bool retainTexcoords)
{
  this->retainTexcoords = retainTexcoords; /*0x795fdb*/
  this->windEngine = windEngine; /*0x795fdf*/
  this->vertexWeighting = 0; /*0x795fe2*/
  this->manualLighting = 0; /*0x795fe5*/
  this->vertexWindComputed = 0; /*0x795fe8*/
  this->vertexSize = 0; /*0x795feb*/
  this->valid = 1; /*0x795fef*/
  this->windMethod = 2; /*0x795ff3*/
  this->numDiscreteLodLevels = 0; /*0x795ffa*/
  this->currentVertexWriteCounter = 0; /*0x795ffe*/
  this->activeLodLevel = 0; /*0x796002*/
  this->currentStripCounter = 0; /*0x796006*/
  this->perLodTriangleCounts.begin = 0; /*0x79600a*/
  this->perLodTriangleCounts.end = 0; /*0x79600d*/
  this->perLodTriangleCounts.capacityEnd = 0; /*0x796010*/
  this->perLodStripLengths.begin = 0; /*0x796013*/
  this->perLodStripLengths.end = 0; /*0x796016*/
  this->perLodStripLengths.capacityEnd = 0; /*0x796019*/
  this->perLodStrips.begin = 0; /*0x79601c*/
  this->perLodStrips.end = 0; /*0x79601f*/
  this->perLodStrips.capacityEnd = 0; /*0x796022*/
  this->packedColors.begin = 0; /*0x796025*/
  this->packedColors.end = 0; /*0x796028*/
  this->packedColors.capacityEnd = 0; /*0x79602b*/
  this->vertexCoords.begin = 0; /*0x79602e*/
  this->vertexCoords.end = 0; /*0x796031*/
  this->vertexCoords.capacityEnd = 0; /*0x796034*/
  this->originalVertexCoords.begin = 0; /*0x796037*/
  this->originalVertexCoords.end = 0; /*0x79603a*/
  this->originalVertexCoords.capacityEnd = 0; /*0x796040*/
  this->vertexNormals.begin = 0; /*0x796046*/
  this->vertexNormals.end = 0; /*0x79604c*/
  this->vertexNormals.capacityEnd = 0; /*0x796052*/
  this->vertexBinormals.begin = 0; /*0x796058*/
  this->vertexBinormals.end = 0; /*0x79605e*/
  this->vertexBinormals.capacityEnd = 0; /*0x796064*/
  this->vertexTangents.begin = 0; /*0x79606a*/
  this->vertexTangents.end = 0; /*0x796070*/
  this->vertexTangents.capacityEnd = 0; /*0x796076*/
  this->diffuseTexcoords.begin = 0; /*0x79607c*/
  this->diffuseTexcoords.end = 0; /*0x796082*/
  this->diffuseTexcoords.capacityEnd = 0; /*0x796088*/
  this->retainedDiffuseTexcoords.begin = 0; /*0x79608e*/
  this->retainedDiffuseTexcoords.end = 0; /*0x796094*/
  this->retainedDiffuseTexcoords.capacityEnd = 0; /*0x79609a*/
  this->retainedMapIndices.begin = 0; /*0x7960a0*/
  this->retainedMapIndices.end = 0; /*0x7960a6*/
  this->retainedMapIndices.capacityEnd = 0; /*0x7960ac*/
  this->shadowTexcoords.begin = 0; /*0x7960b2*/
  this->shadowTexcoords.end = 0; /*0x7960b8*/
  this->shadowTexcoords.capacityEnd = 0; /*0x7960be*/
  this->primaryWindWeights.begin = 0; /*0x7960c4*/
  this->primaryWindWeights.end = 0; /*0x7960ca*/
  this->primaryWindWeights.capacityEnd = 0; /*0x7960d0*/
  this->primaryWindMatrixIndices.begin = 0; /*0x7960d6*/
  this->primaryWindMatrixIndices.end = 0; /*0x7960dc*/
  this->primaryWindMatrixIndices.capacityEnd = 0; /*0x7960e2*/
  return this; /*0x7960e8*/
}
