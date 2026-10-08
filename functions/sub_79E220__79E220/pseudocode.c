// Selects a robust fuzzySurfaceArea pivot for SFrondGuide partitioning. Small ranges sort first/middle/last; ranges over 40 elements sort multiple evenly spaced triplets before the final three-sample ordering.
void __cdecl OB_SFrondGuide_SelectPivotByFuzzyArea_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *middle,
        OB_SFrondGuide_010201A0 *last)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  OB_SFrondGuide_010201A0 *v7; // [esp-14h] [ebp-18h]
  OB_SFrondGuide_010201A0 *firsta; // [esp+8h] [ebp+4h]

  v3 = last - first; /*0x79e23c*/
  if ( v3 <= 0x28 ) /*0x79e241*/
  {
    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(first, middle, last); /*0x79e2c9*/
  }
  else
  {
    v4 = 0x60 * ((v3 + 1) / 8); /*0x79e25d*/
    v5 = 0x30 * ((v3 + 1) / 8); /*0x79e263*/
    v7 = &first[v4 / 0x30]; /*0x79e269*/
    firsta = &first[v5 / 0x30]; /*0x79e26c*/
    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(first, firsta, v7); /*0x79e270*/
    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(&middle[v5 / 0xFFFFFFD0], middle, &middle[v5 / 0x30]); /*0x79e288*/
    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(&last[v4 / 0xFFFFFFD0], &last[v5 / 0xFFFFFFD0], last); /*0x79e29f*/
    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0(firsta, middle, &last[v5 / 0xFFFFFFD0]); /*0x79e2b0*/
  }
}
