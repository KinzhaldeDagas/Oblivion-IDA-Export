// Frees dynamic arrays inside every 0x44-byte leaf LOD record without deleting the record array itself.
void __thiscall OB_CLeafGeometry_FreeLODDataArrays_010201A0(OB_CLeafGeometry_010201A0 *this)
{
  int v2; // ebp
  int v3; // edi

  if ( this->lodGeometryRecords ) /*0x798696*/
  {
    if ( LOWORD(this->leafLodCount) ) /*0x79869f*/
    {
      v2 = 0; /*0x7986ad*/
      v3 = 0; /*0x7986b9*/
      do /*0x7987bf*/
      {
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].leafMapIndices); /*0x7986c8*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].leafCardIndices); /*0x7986d5*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].centerCoords); /*0x7986e2*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].packedColors); /*0x7986ef*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].normals); /*0x7986fc*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].binormals); /*0x798709*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].tangents); /*0x798716*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].diffuseTexcoords); /*0x798723*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].cardCoords); /*0x798730*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].windWeights); /*0x79873d*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].windMatrixIndices); /*0x79874a*/
        this->lodGeometryRecords[v3].leafMapIndices = 0; /*0x798752*/
        this->lodGeometryRecords[v3].leafCardIndices = 0; /*0x798759*/
        this->lodGeometryRecords[v3].centerCoords = 0; /*0x798760*/
        this->lodGeometryRecords[v3].packedColors = 0; /*0x798767*/
        this->lodGeometryRecords[v3].normals = 0; /*0x79876e*/
        this->lodGeometryRecords[v3].binormals = 0; /*0x798775*/
        this->lodGeometryRecords[v3].tangents = 0; /*0x79877c*/
        this->lodGeometryRecords[v3].diffuseTexcoords = 0; /*0x798783*/
        this->lodGeometryRecords[v3].cardCoords = 0; /*0x79878a*/
        this->lodGeometryRecords[v3].windWeights = 0; /*0x798791*/
        this->lodGeometryRecords[v3].windMatrixIndices = 0; /*0x798798*/
        FormHeapFree((unsigned int)this->lodGeometryRecords[v3].originalCenterCoords); /*0x7987a4*/
        this->lodGeometryRecords[v3].originalCenterCoords = 0; /*0x7987ac*/
        ++v2; /*0x7987b4*/
        ++v3; /*0x7987ba*/
      }
      while ( v2 < LOWORD(this->leafLodCount) ); /*0x7987bf*/
    }
  }
}
