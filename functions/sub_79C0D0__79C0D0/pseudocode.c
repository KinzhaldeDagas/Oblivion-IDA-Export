// Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
void __cdecl OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *middle,
        OB_SFrondGuide_010201A0 *last)
{
  if ( first->fuzzySurfaceArea < (double)middle->fuzzySurfaceArea ) /*0x79c0e7*/
    OB_SFrondGuide_Swap_010201A0(middle, first); /*0x79c0eb*/
  if ( middle->fuzzySurfaceArea < (double)last->fuzzySurfaceArea ) /*0x79c104*/
    OB_SFrondGuide_Swap_010201A0(last, middle); /*0x79c108*/
  if ( first->fuzzySurfaceArea < (double)middle->fuzzySurfaceArea ) /*0x79c11d*/
    OB_SFrondGuide_Swap_010201A0(middle, first); /*0x79c121*/
}
