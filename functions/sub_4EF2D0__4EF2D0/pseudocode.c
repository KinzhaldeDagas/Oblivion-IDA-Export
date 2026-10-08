// Verified .cmp mode-mask bit meanings from Oblivion consumers: 0x1 enables the tree channel (DistantLOD_UpdateExteriorGrid pairs this with bDisplayLODTrees); 0x2 enables the building/object channel (paired with bDisplayLODBuildings and CellsWithLODObjects); 0x4 enables the LandLOD channel (DistantLOD_UpdateLandLODMap). Default mask 0x7 enables all three.
bool __thiscall TESWorldSpace_IsDistantLODModeEnabled(TESWorldSpace *this, unsigned int modeBit)
{
  return (modeBit & this->distantLODMetadata.modeMask) != 0; /*0x4ef2e0*/
}
