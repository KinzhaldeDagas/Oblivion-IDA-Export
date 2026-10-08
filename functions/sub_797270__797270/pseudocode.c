// OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry destructor releases CPU-wind state, owned per-strip unsigned-short buffers, nested length/pointer vectors, triangle counts, and all vertex-attribute vector storage.
void __thiscall OB_CIndexedGeometry_dtor_010201A0(OB_CIndexedGeometry_010201A0 *this)
{
  OB_stVector4_010201A0 *begin; // eax
  OB_stVector4_010201A0 *v3; // eax

  FormHeapFree((unsigned int)this->vertexWindComputed); /*0x7972a6*/
  this->vertexWindComputed = 0; /*0x7972b2*/
  OB_CIndexedGeometry_DeleteIndexData_010201A0(this); /*0x7972b5*/
  if ( this->primaryWindMatrixIndices.begin ) /*0x7972ba*/
    FormHeapFree((unsigned int)this->primaryWindMatrixIndices.begin); /*0x7972c5*/
  this->primaryWindMatrixIndices.begin = 0; /*0x7972cd*/
  this->primaryWindMatrixIndices.end = 0; /*0x7972d3*/
  this->primaryWindMatrixIndices.capacityEnd = 0; /*0x7972d9*/
  if ( this->primaryWindWeights.begin ) /*0x7972df*/
    FormHeapFree((unsigned int)this->primaryWindWeights.begin); /*0x7972ea*/
  this->primaryWindWeights.begin = 0; /*0x7972f2*/
  this->primaryWindWeights.end = 0; /*0x7972f8*/
  this->primaryWindWeights.capacityEnd = 0; /*0x7972fe*/
  if ( this->shadowTexcoords.begin ) /*0x797304*/
    FormHeapFree((unsigned int)this->shadowTexcoords.begin); /*0x79730f*/
  this->shadowTexcoords.begin = 0; /*0x797317*/
  this->shadowTexcoords.end = 0; /*0x79731d*/
  this->shadowTexcoords.capacityEnd = 0; /*0x797323*/
  if ( this->retainedMapIndices.begin ) /*0x797329*/
    FormHeapFree((unsigned int)this->retainedMapIndices.begin); /*0x797334*/
  this->retainedMapIndices.begin = 0; /*0x79733c*/
  this->retainedMapIndices.end = 0; /*0x797342*/
  this->retainedMapIndices.capacityEnd = 0; /*0x797348*/
  if ( this->retainedDiffuseTexcoords.begin ) /*0x79734e*/
    FormHeapFree((unsigned int)this->retainedDiffuseTexcoords.begin); /*0x797359*/
  this->retainedDiffuseTexcoords.begin = 0; /*0x797361*/
  this->retainedDiffuseTexcoords.end = 0; /*0x797367*/
  this->retainedDiffuseTexcoords.capacityEnd = 0; /*0x79736d*/
  if ( this->diffuseTexcoords.begin ) /*0x797373*/
    FormHeapFree((unsigned int)this->diffuseTexcoords.begin); /*0x79737e*/
  this->diffuseTexcoords.begin = 0; /*0x797386*/
  this->diffuseTexcoords.end = 0; /*0x79738c*/
  this->diffuseTexcoords.capacityEnd = 0; /*0x797392*/
  if ( this->vertexTangents.begin ) /*0x797398*/
    FormHeapFree((unsigned int)this->vertexTangents.begin); /*0x7973a3*/
  this->vertexTangents.begin = 0; /*0x7973ab*/
  this->vertexTangents.end = 0; /*0x7973b1*/
  this->vertexTangents.capacityEnd = 0; /*0x7973b7*/
  if ( this->vertexBinormals.begin ) /*0x7973bd*/
    FormHeapFree((unsigned int)this->vertexBinormals.begin); /*0x7973c8*/
  this->vertexBinormals.begin = 0; /*0x7973d0*/
  this->vertexBinormals.end = 0; /*0x7973d6*/
  this->vertexBinormals.capacityEnd = 0; /*0x7973dc*/
  if ( this->vertexNormals.begin ) /*0x7973e2*/
    FormHeapFree((unsigned int)this->vertexNormals.begin); /*0x7973ed*/
  this->vertexNormals.begin = 0; /*0x7973f5*/
  this->vertexNormals.end = 0; /*0x7973fb*/
  this->vertexNormals.capacityEnd = 0; /*0x797401*/
  if ( this->originalVertexCoords.begin ) /*0x797407*/
    FormHeapFree((unsigned int)this->originalVertexCoords.begin); /*0x79740f*/
  this->originalVertexCoords.begin = 0; /*0x797417*/
  this->originalVertexCoords.end = 0; /*0x79741a*/
  this->originalVertexCoords.capacityEnd = 0; /*0x797420*/
  if ( this->vertexCoords.begin ) /*0x797426*/
    FormHeapFree((unsigned int)this->vertexCoords.begin); /*0x79742e*/
  this->vertexCoords.begin = 0; /*0x797436*/
  this->vertexCoords.end = 0; /*0x797439*/
  this->vertexCoords.capacityEnd = 0; /*0x79743c*/
  if ( this->packedColors.begin ) /*0x79743f*/
    FormHeapFree((unsigned int)this->packedColors.begin); /*0x797447*/
  this->packedColors.begin = 0; /*0x797452*/
  this->packedColors.end = 0; /*0x797455*/
  this->packedColors.capacityEnd = 0; /*0x797458*/
  begin = (OB_stVector4_010201A0 *)this->perLodStrips.begin; /*0x79745b*/
  if ( begin ) /*0x797460*/
  {
    OB_stVector4_DestroyRange_010201A0(begin, (OB_stVector4_010201A0 *)this->perLodStrips.end); /*0x79746d*/
    FormHeapFree((unsigned int)this->perLodStrips.begin); /*0x797476*/
  }
  this->perLodStrips.begin = 0; /*0x79747e*/
  this->perLodStrips.end = 0; /*0x797481*/
  this->perLodStrips.capacityEnd = 0; /*0x797484*/
  v3 = (OB_stVector4_010201A0 *)this->perLodStripLengths.begin; /*0x797487*/
  if ( v3 ) /*0x79748f*/
  {
    OB_stVector4_DestroyRange_010201A0(v3, (OB_stVector4_010201A0 *)this->perLodStripLengths.end); /*0x79749c*/
    FormHeapFree((unsigned int)this->perLodStripLengths.begin); /*0x7974a5*/
  }
  this->perLodStripLengths.begin = 0; /*0x7974ad*/
  this->perLodStripLengths.end = 0; /*0x7974b0*/
  this->perLodStripLengths.capacityEnd = 0; /*0x7974b3*/
  if ( this->perLodTriangleCounts.begin ) /*0x7974b6*/
    FormHeapFree((unsigned int)this->perLodTriangleCounts.begin); /*0x7974be*/
  this->perLodTriangleCounts.begin = 0; /*0x7974c6*/
  this->perLodTriangleCounts.end = 0; /*0x7974c9*/
  this->perLodTriangleCounts.capacity = 0; /*0x7974cc*/
}
