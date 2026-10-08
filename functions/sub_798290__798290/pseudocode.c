// SpeedTree decode: CLeafGeometry ctor. Initializes compact 0x30-byte stock leaf-geometry container: manual-lighting=false, vertex-weighting=false, CWindEngine*, default 3 rocking groups, leaf vertex/texcoord/program-table/dim/origin pointers null, texture and LOD counts zero.
OB_CLeafGeometry_010201A0 *__thiscall OB_CLeafGeometry_ctor_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        OB_CWindEngine_010201A0 *windEngine)
{
  this->manualLighting = 0; /*0x798298*/
  this->vertexWeighting = 0; /*0x79829a*/
  this->windEngine = windEngine; /*0x79829d*/
  this->rockingGroupCount = 3; /*0x7982a0*/
  this->timeOffsets = 0; /*0x7982a6*/
  this->perLodLeafCardVertexTables = 0; /*0x7982a9*/
  this->leafDiffuseTexcoords = 0; /*0x7982ac*/
  this->vertexProgramBillboardTable = 0; /*0x7982af*/
  this->leafTextureCount = 0; /*0x7982b2*/
  this->leafTextureDimensions = 0; /*0x7982b6*/
  this->leafTextureOrigins = 0; /*0x7982b9*/
  this->leafLodCount = 0; /*0x7982bc*/
  this->lodGeometryRecords = 0; /*0x7982c0*/
  return this; /*0x7982c3*/
}
