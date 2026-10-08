// Insertion-sorts a short CBranch pointer range by fuzzyBranchVolume. Finds the insertion point and rotates [point,current,current+1) through the dedicated pointer-range helper.
void __cdecl OB_BranchPtrVector_InsertionSortByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 **begin,
        OB_CBranch_010201A0 **end)
{
  OB_CBranch_010201A0 **v2; // esi
  OB_CBranch_010201A0 **v3; // ebx
  OB_CBranch_010201A0 **v4; // edx
  OB_CBranch_010201A0 **i; // ecx
  double fuzzyBranchVolume; // st6

  if ( begin != end ) /*0x79093b*/
  {
    v2 = begin + 1; /*0x790942*/
    if ( begin + 1 != end ) /*0x790947*/
    {
      v3 = begin + 2; /*0x79094b*/
      do /*0x7909ba*/
      {
        if ( (*begin)->fuzzyBranchVolume >= (double)(*v2)->fuzzyBranchVolume ) /*0x790962*/
        {
          v4 = v2; /*0x790975*/
          for ( i = v2; ; v4 = i ) /*0x790977*/
          {
            fuzzyBranchVolume = i[0xFFFFFFFF]->fuzzyBranchVolume; /*0x790986*/
            i += 0xFFFFFFFF; /*0x790989*/
            if ( fuzzyBranchVolume >= (*v2)->fuzzyBranchVolume ) /*0x790993*/
              break; /*0x790993*/
          }
          if ( v4 != v2 && v2 != v3 ) /*0x79099f*/
            OB_BranchPtrVector_RotateRange_010201A0(v4, v2, v3); /*0x7909a8*/
        }
        else if ( begin != v2 && v2 != v3 ) /*0x79096a*/
        {
          OB_BranchPtrVector_RotateRange_010201A0(begin, v2, v3); /*0x790973*/
        }
        ++v2; /*0x7909b0*/
        ++v3; /*0x7909b3*/
      }
      while ( v2 != end ); /*0x7909ba*/
    }
  }
}
