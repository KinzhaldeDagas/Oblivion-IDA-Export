// Compiler introsort loop for the compact OB_CBranch* vector. Uses 0x7905D0's fuzzyBranchVolume partition, insertion sort for small ranges, and heap-sort fallback when the depth limit expires; branch LOD policy remains in the 0x791410 wrapper/callers.
void __cdecl OB_BranchPtrVector_IntrosortByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **begin,
        OB_CBranch_010201A0 **end,
        int depthLimit,
        int comparatorState)
{
  OB_CBranch_010201A0 **v4; // ebx
  OB_CBranch_010201A0 **v5; // edi
  int v6; // eax
  OB_CBranch_010201A0 **v8; // ebp
  OB_CBranch_010201A0 **equalRangeOut; // [esp+10h] [ebp-8h] BYREF
  OB_CBranch_010201A0 **v10; // [esp+14h] [ebp-4h]

  v4 = begin; /*0x790c14*/
  v5 = end; /*0x790c1b*/
  v6 = end - begin; /*0x790c23*/
  if ( v6 <= 0x20 ) /*0x790c29*/
  {
LABEL_7:
    if ( v6 > 1 ) /*0x790caa*/
      OB_BranchPtrVector_InsertionSortByFuzzyVolume_010201A0(v4, v5); /*0x790cb3*/
  }
  else
  {
    while ( depthLimit > 0 ) /*0x790c32*/
    {
      OB_BranchPtrVector_PartitionByFuzzyVolume_010201A0(&equalRangeOut, v4, v5); /*0x790c44*/
      v8 = v10; /*0x790c49*/
      depthLimit = depthLimit / 2 / 2 + depthLimit / 2; /*0x790c5b*/
      if ( (int)(((char *)equalRangeOut - (char *)v4) & 0xFFFFFFFC) >= (int)(((char *)v5 - (char *)v10) & 0xFFFFFFFC) ) /*0x790c74*/
      {
        OB_BranchPtrVector_IntrosortByFuzzyVolume_010201A0(v10, v5, depthLimit, comparatorState); /*0x790c8f*/
        v5 = equalRangeOut; /*0x790c94*/
      }
      else
      {
        OB_BranchPtrVector_IntrosortByFuzzyVolume_010201A0(v4, equalRangeOut, depthLimit, comparatorState); /*0x790c7e*/
        v4 = v8; /*0x790c83*/
      }
      v6 = v5 - v4; /*0x790c9c*/
      if ( v6 <= 0x20 ) /*0x790ca5*/
        goto LABEL_7; /*0x790ca5*/
    }
    if ( (int)(((char *)v5 - (char *)v4) & 0xFFFFFFFC) > 4 ) /*0x790cd2*/
      OB_BranchPtrVector_MakeHeapByFuzzyVolume_010201A0((int)v4, (int)v5); /*0x790cdf*/
    OB_BranchPtrVector_SortHeapByFuzzyVolume_010201A0(v4, (int)v5); /*0x790cee*/
  }
}
