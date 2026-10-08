// Maps normalized/current tree LOD to leaf LOD; includes one synthetic billboard level only when global drop-to-billboard is enabled.
unsigned __int16 __thiscall CSpeedTreeRT__GetDiscreteLeafLodLevel(OB_CSpeedTreeRT_010201A0 *this, float lod)
{
  double v2; // st7
  OB_STreeInstanceData *instanceData; // eax
  double lodLevel; // st7
  double v5; // st7
  int leafLodLevelCount_low; // ecx
  unsigned __int16 result; // ax
  float loda; // [esp+8h] [ebp+4h]

  v2 = lod; /*0x787cdf*/
  if ( lod == kTerrainLODQuadRayDirectionZ ) /*0x787ce4*/
  {
    instanceData = this->instanceData; /*0x787ce6*/
    if ( instanceData ) /*0x787ced*/
      lodLevel = instanceData->lodLevel; /*0x787cef*/
    else
      lodLevel = this->treeEngine->currentLod; /*0x787cf6*/
    loda = lodLevel; /*0x787cf9*/
    v2 = loda; /*0x787d05*/
  }
  v5 = 1.0 - v2; /*0x787d12*/
  if ( CSpeedTreeRT__s_dropToBillboard ) /*0x787d09*/
    leafLodLevelCount_low = LOWORD(this->treeEngine->?) + 1; /*0x787d1f*/
  else
    leafLodLevelCount_low = LOWORD(this->treeEngine->?); /*0x787d4d*/
  result = (int)(v5 * (double)leafLodLevelCount_low); /*0x787d7b*/
  if ( result == leafLodLevelCount_low ) /*0x787d83*/
    --result; /*0x787d85*/
  return result; /*0x787d8b*/
}
