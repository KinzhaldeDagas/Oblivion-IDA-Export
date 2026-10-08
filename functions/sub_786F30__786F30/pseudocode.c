// Oblivion 1.2.0.416: initializes the compact 0x3C-byte leaf output record: active=false, scalar=-1.0f, discreteLodLevel=-1, leafCount=0, and all eleven pointer slots null. RT4.1 SGeometry::SLeaf corroborates the LOD/count/pointer roles but has a larger virtual layout and 1.0 rock/rustle scalars; Oblivion is authoritative.
OB_SLeafGeometryOutput_010201A0 *__thiscall OB_SLeafGeometryOutput_DefaultCtor_010201A0(
        OB_SLeafGeometryOutput_010201A0 *this)
{
  this->lodFadeOrRockScalar = kTerrainLODQuadRayDirectionZ; /*0x786f3a*/
  this->active = 0; /*0x786f3d*/
  this->discreteLodLevel = 0xFFFFFFFF; /*0x786f3f*/
  this->leafCount = 0; /*0x786f46*/
  this->leafMapIndices = 0; /*0x786f4a*/
  this->leafCardIndices = 0; /*0x786f4d*/
  this->centerCoords = 0; /*0x786f50*/
  this->diffuseTexcoords = 0; /*0x786f53*/
  this->cardCoords = 0; /*0x786f56*/
  this->packedColors = 0; /*0x786f59*/
  this->normals = 0; /*0x786f5c*/
  this->binormals = 0; /*0x786f5f*/
  this->tangents = 0; /*0x786f62*/
  this->windWeights = 0; /*0x786f65*/
  this->windMatrixIndices = 0; /*0x786f68*/
  return this; /*0x786f6b*/
}
