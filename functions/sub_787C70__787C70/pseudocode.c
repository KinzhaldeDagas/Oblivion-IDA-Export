//
//
// [2026-10-03 frond completion] Native selector is returned in AX and consumers interpret the value as signed short (FFFF sentinel). Plugin typedef corrected from int/EAX to short. Fallout named homolog 0x8281AF80 and RT4.1 SpeedTreeRT.cpp:2323 corroborate formula/sentinel, but later source int return does not establish Oblivion ABI.
__int16 __thiscall CSpeedTreeRT__GetDiscreteFrondLodLevel(OB_CSpeedTreeRT_010201A0 *this, float lod)
{
  OB_STreeInstanceData *instanceData; // eax
  double lodLevel; // st7
  int frondLodCount; // esi
  __int16 result; // ax

  if ( kTerrainLODQuadRayDirectionZ == lod ) /*0x787c80*/
  {
    instanceData = this->instanceData; /*0x787c82*/
    if ( instanceData ) /*0x787c87*/
      lodLevel = instanceData->lodLevel; /*0x787c89*/
    else
      lodLevel = this->treeEngine->currentLod; /*0x787c90*/
    lod = lodLevel; /*0x787c93*/
  }
  frondLodCount = this->frondLodCount; /*0x787ca4*/
  result = Double_To_SInt32((1.0 - lod) * (double)frondLodCount); /*0x787cb4*/
  if ( result == frondLodCount ) /*0x787cc2*/
    --result; /*0x787cc4*/
  return result; /*0x787cc8*/
}
