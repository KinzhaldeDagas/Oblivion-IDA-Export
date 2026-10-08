// Selects the fuzzy-volume pivot sample for branch-pointer partitioning. Sorts three candidates for ranges of at most 40 pointers; larger ranges use four three-way sorts over spaced samples (MSVC median-guess strategy).
void __cdecl OB_BranchPtrVector_MedianGuessByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **first,
        OB_CBranch_010201A0 **middle,
        OB_CBranch_010201A0 **last)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  OB_CBranch_010201A0 **v7; // edx
  OB_CBranch_010201A0 **firsta; // [esp+8h] [ebp+4h]
  OB_CBranch_010201A0 **lasta; // [esp+10h] [ebp+Ch]

  v4 = last - first; /*0x7904bd*/
  if ( v4 <= 0x28 ) /*0x7904c3*/
  {
    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0(first, middle, last); /*0x790548*/
  }
  else
  {
    v5 = (v4 + 1) / 8; /*0x7904d4*/
    lasta = (OB_CBranch_010201A0 **)(8 * v5); /*0x7904df*/
    v6 = 4 * v5; /*0x7904e4*/
    v7 = &first[2 * v5]; /*0x7904eb*/
    firsta = &first[v5]; /*0x7904f3*/
    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0(first, firsta, v7); /*0x7904f7*/
    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0(&middle[v6 / 0xFFFFFFFC], middle, &middle[v6 / 4]); /*0x79050d*/
    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0( /*0x790522*/
      (OB_CBranch_010201A0 **)((char *)last - (char *)lasta),
      &last[v6 / 0xFFFFFFFC],
      last);
    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0(firsta, middle, &last[v6 / 0xFFFFFFFC]); /*0x79052f*/
  }
}
