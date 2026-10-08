// Oblivion CLeafGeometry::SmallUpdate. After validating backing arrays, copies the stable first 0x3C bytes of one LOD record into the public leaf output and sets active/discreteLodLevel. Camera and size arguments are intentionally unused in this path.
void __thiscall OB_CLeafGeometry_SmallUpdate_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        OB_SLeafGeometryOutput_010201A0 *outLeaf,
        unsigned __int16 lodLevel,
        float cameraAzimuthDegrees,
        float cameraPitchDegrees,
        float leafSizeIncreaseFactor)
{
  OB_SLodGeometry_010201A0 *lodGeometryRecords; // edx

  lodGeometryRecords = this->lodGeometryRecords; /*0x798630*/
  if ( lodGeometryRecords ) /*0x798635*/
  {
    if ( lodLevel < this->leafLodCount ) /*0x798640*/
    {
      if ( this->perLodLeafCardVertexTables ) /*0x798642*/
      {
        if ( this->leafTextureOrigins ) /*0x798648*/
        {
          if ( this->leafTextureDimensions ) /*0x79864e*/
          {
            if ( this->windEngine ) /*0x798654*/
            {
              if ( this->timeOffsets ) /*0x79865a*/
              {
                qmemcpy(outLeaf, &lodGeometryRecords[lodLevel], sizeof(OB_SLeafGeometryOutput_010201A0)); /*0x79867a*/
                outLeaf->active = 1; /*0x79867d*/
                outLeaf->discreteLodLevel = lodLevel; /*0x798680*/
              }
            }
          }
        }
      }
    }
  }
}
