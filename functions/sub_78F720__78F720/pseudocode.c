// Finds the parent branch segment containing childDistanceAlongBranch by scanning OB_SIdvBranchVertex_010201A0.runningLength and returns placement index/percent.
OB_SIdvBranchVertex_010201A0 *__thiscall OB_CBranch_FillBranch_010201A0(
        OB_CBranch_010201A0 *this,
        OB_CBranchFillResult_010201A0 *outPlacement,
        float childDistanceAlongBranch)
{
  double v3; // st7
  int branchVertexCount; // esi
  int v5; // edx
  float *p_runningLength; // edi
  OB_SIdvBranchVertex_010201A0 *result; // eax

  if ( this->branchVertices && this->branchVertexCount >= 2 ) /*0x78f72a*/
  {
    v3 = childDistanceAlongBranch; /*0x78f72c*/
    outPlacement->preVertexIndex = 0; /*0x78f736*/
    branchVertexCount = this->branchVertexCount; /*0x78f73c*/
    v5 = 1; /*0x78f73f*/
    if ( branchVertexCount > 1 ) /*0x78f746*/
    {
      p_runningLength = &this->branchVertices[1].runningLength; /*0x78f74c*/
      while ( *p_runningLength <= v3 ) /*0x78f75b*/
      {
        ++v5; /*0x78f75d*/
        p_runningLength += 0x12; /*0x78f760*/
        if ( v5 >= branchVertexCount ) /*0x78f765*/
          goto LABEL_9; /*0x78f765*/
      }
      outPlacement->preVertexIndex = v5 - 1; /*0x78f76c*/
    }
LABEL_9:
    result = &this->branchVertices[outPlacement->preVertexIndex]; /*0x78f76f*/
    outPlacement->percentBetweenVertices = (v3 - result->runningLength) /*0x78f78a*/
                                         / (result[1].runningLength - result->runningLength);
  }
  return result; /*0x78f78e*/
}
