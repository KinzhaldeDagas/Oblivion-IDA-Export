// Maps normalized/current tree LOD to an Oblivion discrete branch LOD; -1.0 selects instance or base-tree current LOD.
unsigned __int16 __thiscall CSpeedTreeRT__GetDiscreteBranchLodLevel(OB_CSpeedTreeRT_010201A0 *this, float lod)
{
  OB_STreeInstanceData *instanceData; // eax
  double lodLevel; // st7
  int branchLodCount_low; // esi
  unsigned __int16 result; // ax

  if ( kTerrainLODQuadRayDirectionZ == lod ) /*0x787c20*/
  {
    instanceData = this->instanceData; /*0x787c22*/
    if ( instanceData ) /*0x787c27*/
      lodLevel = instanceData->lodLevel; /*0x787c29*/
    else
      lodLevel = this->treeEngine->currentLod; /*0x787c30*/
    lod = lodLevel; /*0x787c33*/
  }
  branchLodCount_low = LOWORD(this->treeEngine->branchLodCount); /*0x787c48*/
  result = Double_To_SInt32((1.0 - lod) * (double)branchLodCount_low); /*0x787c56*/
  if ( (__int16)result == branchLodCount_low ) /*0x787c64*/
    --result; /*0x787c66*/
  return result; /*0x787c6a*/
}
