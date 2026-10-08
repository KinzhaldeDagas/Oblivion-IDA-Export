// Copies LOD 0's generated leaf-card vertex table into the persistent vertex-program billboard table; entryCount is returned in floats.
const float *__thiscall OB_CLeafGeometry_GetLeafBillboardTable_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        unsigned int *entryCount)
{
  int v2; // esi
  float *vertexProgramBillboardTable; // ebx
  int v5; // eax
  const void **perLodLeafCardVertexTables; // ecx
  int v7; // esi
  size_t v9; // [esp-8h] [ebp-10h]

  vertexProgramBillboardTable = this->vertexProgramBillboardTable; /*0x79830c*/
  v5 = 0x20 * LOWORD(this->rockingGroupCount) * LOWORD(this->leafTextureCount); /*0x798312*/
  if ( !vertexProgramBillboardTable ) /*0x798317*/
    return this->vertexProgramBillboardTable; /*0x798317*/
  perLodLeafCardVertexTables = (const void **)this->perLodLeafCardVertexTables; /*0x798319*/
  if ( !perLodLeafCardVertexTables || !*perLodLeafCardVertexTables ) /*0x798320*/
    return this->vertexProgramBillboardTable; /*0x798356*/
  HIDWORD(v9) = v2; /*0x79832b*/
  v7 = 4 * v5; /*0x79832c*/
  LODWORD(v9) = 4 * v5; /*0x798333*/
  memcpy(vertexProgramBillboardTable, *perLodLeafCardVertexTables, v9); /*0x798336*/
  *entryCount = (int)((int)vertexProgramBillboardTable + v7 - (unsigned int)this->vertexProgramBillboardTable) >> 2; /*0x79834a*/
  return this->vertexProgramBillboardTable; /*0x798350*/
}
