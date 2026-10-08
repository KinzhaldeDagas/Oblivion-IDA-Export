// Oblivion CFrondEngine::StartGuide constructs one zeroed compact 0x30 SFrondGuide and deep-pushes it into CFrondEngine+0x08. Unlike published RT 4.1, the shipped ABI has no vertex-count argument or stack-vertex selection.
void __thiscall OB_CFrondEngine_StartGuide_010201A0(OB_CFrondEngine_010201A0 *this)
{
  OB_SFrondGuide_010201A0 value; // [esp+8h] [ebp-3Ch] BYREF
  int v2; // [esp+40h] [ebp-4h]

  value.guideLength = 0.0; /*0x7a0f08*/
  memset(&value.vertexVector.begin, 0, 0xC); /*0x7a0f0c*/
  value.radius = 0.0; /*0x7a0f10*/
  value.offsetAngle = 0.0; /*0x7a0f18*/
  value.surfaceArea = 0.0; /*0x7a0f20*/
  value.frondMapIndex = 0; /*0x7a0f24*/
  value.fuzzySurfaceArea = 0.0; /*0x7a0f28*/
  value.sharedVertexStartIndex = 0; /*0x7a0f2c*/
  value.verticesPerGuideVertex = 0; /*0x7a0f30*/
  v2 = 0; /*0x7a0f3c*/
  OB_stVector_SFrondGuide_PushBack_010201A0(&this->guideVectorWrapper, &value);// Appends the zeroed compact guide through the decoded st_vector<SFrondGuide> push_back and then releases only the temporary guide's owned vertex allocation. /*0x7a0f40*/
  if ( value.vertexVector.begin ) /*0x7a0f4b*/
    FormHeapFree((unsigned int)value.vertexVector.begin); /*0x7a0f4e*/
}
