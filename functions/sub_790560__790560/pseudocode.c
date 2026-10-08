// Builds the fuzzy-volume heap for a CBranch pointer range from the bottom non-leaf upward by repeated adjust-heap calls.
void __cdecl OB_BranchPtrVector_MakeHeapByFuzzyVolume_010201A0(OB_CBranch_010201A0 **begin, OB_CBranch_010201A0 **end)
{
  signed int i; // esi
  OB_CBranch_010201A0 *v3; // eax

  for ( i = (end - begin) / 2; i > 0; OB_BranchPtrVector_AdjustHeapByFuzzyVolume_010201A0(begin, i, end - begin, v3) ) /*0x790577*/
    v3 = begin[--i]; /*0x790582*/
}
