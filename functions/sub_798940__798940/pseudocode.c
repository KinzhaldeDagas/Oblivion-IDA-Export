// CLeafGeometry destructor: frees texture dimension/origin arrays, invokes each 0x44-byte SLodGeometry destructor, and frees the billboard table.
void __thiscall OB_CLeafGeometry_dtor_010201A0(OB_CLeafGeometry_010201A0 *this)
{
  OB_SLodGeometry_010201A0 *lodGeometryRecords; // eax
  unsigned int p_originalCenterCoords; // edi

  FormHeapFree((unsigned int)this->leafTextureDimensions); /*0x798948*/
  FormHeapFree((unsigned int)this->leafTextureOrigins); /*0x798951*/
  lodGeometryRecords = this->lodGeometryRecords; /*0x798956*/
  if ( lodGeometryRecords ) /*0x798960*/
  {
    p_originalCenterCoords = (unsigned int)&lodGeometryRecords[0xFFFFFFFF].originalCenterCoords; /*0x798966*/
    _LN21( /*0x798972*/
      (char *)lodGeometryRecords,
      0x44u,
      (int)lodGeometryRecords[0xFFFFFFFF].originalCenterCoords,
      (void (__thiscall *)(void *))OB_CLeafGeometry_SLodGeometry_dtor_010201A0);
    FormHeapFree(p_originalCenterCoords); /*0x798978*/
  }
  FormHeapFree((unsigned int)this->vertexProgramBillboardTable); /*0x798985*/
  this->timeOffsets = 0; /*0x79898d*/
  this->leafDiffuseTexcoords = 0; /*0x798990*/
  this->leafTextureDimensions = 0; /*0x798993*/
  this->leafTextureOrigins = 0; /*0x798996*/
  this->lodGeometryRecords = 0; /*0x798999*/
  this->vertexProgramBillboardTable = 0; /*0x79899c*/
}
