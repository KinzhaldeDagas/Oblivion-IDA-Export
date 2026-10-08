// Verified cell-LOD filter: if +0xD8 cellLODMapLoaded is set, checks the +0xC8 CellsWithLODObjects map for the packed cell coordinate; otherwise returns true as a permissive fallback.
bool __thiscall TESWorldSpace_PassesCellLODFilter(TESWorldSpace *this, __int16 cellX, unsigned __int16 cellY)
{
  if ( this->distantLODMetadata.cellLODMapLoaded ) /*0x4f0da0*/
    return sub_4D6760(&this->CellsWithLODObjects.vtbl, cellY | (cellX << 0x10), &cellX); /*0x4f0dc4*/
  else
    return 1; /*0x4f0dcc*/
}
