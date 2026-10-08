// Oblivion CFrondEngine guide introsort used only by BuildGuideLods. Orders full 0x30-byte SFrondGuide records by descending fuzzySurfaceArea: three-way partition while the ideal partition budget remains, insertion sort at <=32 records, and heap fallback on budget exhaustion. RT 4.1 corroborates the descending comparator, but its source sorts SFrondGuide* pointers; the executable moves compact guide records directly.
void __cdecl OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last,
        int partitionBudget,
        unsigned __int8 sorterState)
{
  OB_SFrondGuide_010201A0 *v4; // ebx
  OB_SFrondGuide_010201A0 *lower; // edi
  int v6; // eax
  OB_SFrondGuide_010201A0 *upper; // ebp
  OB_SFrondGuidePartitionBounds_010201A0 result; // [esp+10h] [ebp-8h] BYREF

  v4 = first; /*0x79fa34*/
  lower = last; /*0x79fa3b*/
  v6 = last - first; /*0x79fa52*/
  if ( v6 <= 0x20 ) /*0x79fa57*/
  {
LABEL_7:
    if ( v6 > 1 ) /*0x79fb13*/
      OB_SFrondGuide_InsertionSortByFuzzyArea_010201A0(v4, lower); /*0x79fb1c*/
  }
  else
  {
    while ( partitionBudget > 0 ) /*0x79fa63*/
    {
      OB_SFrondGuide_PartitionByFuzzyArea_010201A0(&result, v4, lower); /*0x79fa75*/
      upper = result.upper; /*0x79fa7a*/
      partitionBudget = partitionBudget / 2 / 2 + partitionBudget / 2; /*0x79fa8c*/
      if ( result.lower - v4 >= lower - result.upper ) /*0x79fac7*/
      {
        OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0(result.upper, lower, partitionBudget, sorterState); /*0x79fae6*/
        lower = result.lower; /*0x79faeb*/
      }
      else
      {
        OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0(v4, result.lower, partitionBudget, sorterState); /*0x79fad5*/
        v4 = upper; /*0x79fada*/
      }
      v6 = lower - v4; /*0x79fb02*/
      if ( v6 <= 0x20 ) /*0x79fb0a*/
        goto LABEL_7; /*0x79fb0a*/
    }
    if ( lower - v4 > 1 ) /*0x79fb49*/
      OB_SFrondGuide_MakeHeap_010201A0(v4, lower, sorterState); /*0x79fb56*/
    OB_SFrondGuide_SortHeapByFuzzyArea_010201A0(v4, lower, sorterState); /*0x79fb65*/
  }
}
