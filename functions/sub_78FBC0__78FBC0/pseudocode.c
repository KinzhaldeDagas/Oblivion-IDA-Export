// MSVC heap push primitive for OB_CBranch pointer ranges. Moves parent pointers down until the new pointer fits the ordering defined by CBranch+0x2C fuzzyBranchVolume. This is part of Oblivion's std::sort expansion.
void __cdecl OB_BranchPtrVector_PushHeapByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **begin,
        unsigned int holeIndex,
        unsigned int topIndex,
        OB_CBranch_010201A0 *value)
{
  unsigned int v4; // esi
  int v5; // ecx
  OB_CBranch_010201A0 *v6; // edx
  bool v7; // cc

  v4 = holeIndex; /*0x78fbc6*/
  v5 = (int)(holeIndex - 1) / 2; /*0x78fbd2*/
  if ( (int)topIndex >= (int)holeIndex ) /*0x78fbd6*/
  {
    begin[holeIndex] = value; /*0x78fc17*/
  }
  else
  {
    do /*0x78fc05*/
    {
      v6 = begin[v5]; /*0x78fbe2*/
      if ( value->fuzzyBranchVolume >= (double)v6->fuzzyBranchVolume ) /*0x78fbf2*/
        break; /*0x78fbf2*/
      begin[v4] = v6; /*0x78fbf7*/
      v4 = v5; /*0x78fbfd*/
      v7 = (int)topIndex < v5; /*0x78fc01*/
      v5 = (v5 - 1) / 2; /*0x78fc03*/
    }
    while ( v7 ); /*0x78fc05*/
    begin[v4] = value; /*0x78fc07*/
  }
}
