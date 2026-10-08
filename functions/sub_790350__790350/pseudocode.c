// Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
void __cdecl OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **first,
        OB_CBranch_010201A0 **middle,
        OB_CBranch_010201A0 **last)
{
  OB_CBranch_010201A0 *v3; // edx
  OB_CBranch_010201A0 *v4; // edx
  OB_CBranch_010201A0 *v5; // edx

  v3 = *middle; /*0x790354*/
  if ( (*first)->fuzzyBranchVolume < (double)(*middle)->fuzzyBranchVolume ) /*0x79036b*/
  {
    *middle = *first; /*0x79036d*/
    *first = v3; /*0x79036f*/
  }
  v4 = *last; /*0x790378*/
  if ( (*middle)->fuzzyBranchVolume < (double)(*last)->fuzzyBranchVolume ) /*0x790387*/
  {
    *last = *middle; /*0x790389*/
    *middle = v4; /*0x79038b*/
  }
  v5 = *middle; /*0x79038d*/
  if ( (*first)->fuzzyBranchVolume < (double)(*middle)->fuzzyBranchVolume ) /*0x79039f*/
  {
    *middle = *first; /*0x7903a1*/
    *first = v5; /*0x7903a3*/
  }
}
