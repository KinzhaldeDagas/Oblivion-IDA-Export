// Verified TESTerrainLODQuadRoot constructor: stores its owner map at +4 and initializes the 0x60-byte quad-data object at +0; caller stores signed quadX/quadY at +8/+0xA.
TESTerrainLODQuadRoot_OblivionLayout_010Verified *__thiscall TESTerrainLODQuadRoot_ctor(
        TESTerrainLODQuadRoot_OblivionLayout_010Verified *this,
        TESWorldSpaceTerrainLODQuadMap_OblivionLayout_Verified *ownerMap)
{
  this->ownerMap = (TESWorldSpaceTerrainLODQuadMap *)ownerMap; /*0x4ea3a7*/
  TESTerrainLODQuadRoot_InitializeQuadData(this); /*0x4ea3aa*/
  return this; /*0x4ea3b1*/
}
