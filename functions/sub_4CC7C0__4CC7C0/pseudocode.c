// Verified DistantLODCellObjectData constructor/layout: three NiTArray<float> subobjects at +0x00/+0x10/+0x20 and recordCount +0x30. The arrays are rotationAnglesXYZ, positions, and scalePercent in that order. Base-object queued transforms apply angles X/Y/Z in radians.
DistantLODCellObjectData *__thiscall DistantLODCellObjectData_ctor(DistantLODCellObjectData *this)
{
  this->rotationAnglesXYZ.vtbl = &NiTArray<float>::`vftable'; /*0x4cc7ea*/
  this->rotationAnglesXYZ.capacity = 0; /*0x4cc7f0*/
  this->rotationAnglesXYZ.growBy = 1; /*0x4cc7f4*/
  this->rotationAnglesXYZ.size = 0; /*0x4cc7f8*/
  this->rotationAnglesXYZ.numObjects = 0; /*0x4cc7fc*/
  this->rotationAnglesXYZ.data = 0; /*0x4cc800*/
  this->positions.vtbl = &NiTArray<float>::`vftable'; /*0x4cc803*/
  this->positions.capacity = 0; /*0x4cc80a*/
  this->positions.growBy = 1; /*0x4cc80e*/
  this->positions.size = 0; /*0x4cc812*/
  this->positions.numObjects = 0; /*0x4cc816*/
  this->positions.data = 0; /*0x4cc81a*/
  this->scalePercent.vtbl = &NiTArray<float>::`vftable'; /*0x4cc81d*/
  this->scalePercent.capacity = 0; /*0x4cc824*/
  this->scalePercent.growBy = 1; /*0x4cc828*/
  this->scalePercent.size = 0; /*0x4cc82c*/
  this->scalePercent.numObjects = 0; /*0x4cc830*/
  this->scalePercent.data = 0; /*0x4cc834*/
  return this; /*0x4cc837*/
}
