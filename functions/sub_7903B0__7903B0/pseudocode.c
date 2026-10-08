// MSVC adjust-heap primitive for CBranch pointers: selects a child by fuzzyBranchVolume, sifts the hole downward, then delegates to the heap-push helper. Used by make-heap and sort-heap.
void __cdecl OB_BranchPtrVector_AdjustHeapByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **begin,
        unsigned int holeIndex,
        unsigned int count,
        OB_CBranch_010201A0 *value)
{
  unsigned int v4; // edx
  int v5; // ecx
  bool i; // zf

  v4 = holeIndex; /*0x7903b0*/
  v5 = 2 * holeIndex + 2; /*0x7903bf*/
  for ( i = v5 == count; v5 < (int)count; i = v5 == count ) /*0x7903c7*/
  {
    if ( begin[v5 - 1]->fuzzyBranchVolume < (double)begin[v5]->fuzzyBranchVolume ) /*0x7903e4*/
      --v5; /*0x7903e6*/
    begin[v4] = begin[v5]; /*0x7903ec*/
    v4 = v5; /*0x7903ef*/
    v5 = 2 * v5 + 2; /*0x7903f1*/
  }
  if ( i ) /*0x7903f9*/
  {
    begin[v4] = begin[count - 1]; /*0x7903ff*/
    v4 = count - 1; /*0x790402*/
  }
  OB_BranchPtrVector_PushHeapByFuzzyVolume_010201A0(begin, v4, holeIndex, value); /*0x790412*/
}
