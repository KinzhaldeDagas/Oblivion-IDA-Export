// Verified root-data initializer allocates a 0x60-byte TESTerrainLODQuad object, initializes its root pointer and fields, and stores it in TESTerrainLODQuadRoot.quadData.
TESTerrainLODQuad_OblivionComplete_060 *__thiscall TESTerrainLODQuadRoot_InitializeQuadData(
        TESTerrainLODQuadRoot_OblivionLayout_010Verified *this)
{
  TESTerrainLODQuad_OblivionComplete_060 *v2; // eax
  TESTerrainLODQuad_OblivionComplete_060 *result; // eax

  v2 = (TESTerrainLODQuad_OblivionComplete_060 *)FormHeapAlloc(0x60u); /*0x4e9f76*/
  if ( v2 ) /*0x4e9f8c*/
    result = TESTerrainLODQuad_ctor(v2, this); /*0x4e9f91*/
  else
    result = 0; /*0x4e9f98*/
  this->quadData = result; /*0x4e9f9a*/
  this->quadX = 0; /*0x4e9f9c*/
  this->quadY = 0; /*0x4e9fa2*/
  return result; /*0x4e9fa8*/
}
