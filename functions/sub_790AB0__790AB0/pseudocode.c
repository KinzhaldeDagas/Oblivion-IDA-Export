// Completes heap sort for a CBranch pointer range by repeatedly moving the root to the shrinking tail and adjusting the remaining fuzzy-volume heap.
void __cdecl OB_BranchPtrVector_SortHeapByFuzzyVolume_010201A0(OB_CBranch_010201A0 **begin, OB_CBranch_010201A0 **end)
{
  int i; // esi
  OB_CBranch_010201A0 *v3; // [esp-Ch] [ebp-14h]

  for ( i = (char *)end - (char *)begin; i >> 2 > 1; i -= 4 ) /*0x790ac4*/
  {
    v3 = *(OB_CBranch_010201A0 **)((char *)begin + i - 4); /*0x790ad2*/
    *(OB_CBranch_010201A0 **)((char *)begin + i - 4) = *begin; /*0x790add*/
    OB_BranchPtrVector_AdjustHeapByFuzzyVolume_010201A0(begin, 0, (i - 4) >> 2, v3); /*0x790ae1*/
  }
}
