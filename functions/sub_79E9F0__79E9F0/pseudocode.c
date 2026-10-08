// Insertion-sort cleanup for short SFrondGuide ranges (threshold 32 in the caller). Finds the descending fuzzySurfaceArea insertion point and rotates whole guide ranges to preserve embedded vector ownership.
void __cdecl OB_SFrondGuide_InsertionSortByFuzzyArea_010201A0(
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last)
{
  OB_SFrondGuide_010201A0 *v2; // esi
  OB_SFrondGuide_010201A0 *v3; // edi
  OB_SFrondGuide_010201A0 *v4; // edx
  OB_SFrondGuide_010201A0 *i; // ecx

  if ( first != last ) /*0x79e9fc*/
  {
    v2 = first + 1; /*0x79e9ff*/
    if ( &first[1] != last ) /*0x79ea04*/
    {
      v3 = first + 2; /*0x79ea07*/
      do /*0x79ea69*/
      {
        if ( first->fuzzySurfaceArea >= (double)v3[0xFFFFFFFF].fuzzySurfaceArea ) /*0x79ea1d*/
        {
          v4 = v2; /*0x79ea30*/
          for ( i = v2; ; v4 = i ) /*0x79ea32*/
          {
            i += 0xFFFFFFFF; /*0x79ea37*/
            if ( i->fuzzySurfaceArea >= (double)v3[0xFFFFFFFF].fuzzySurfaceArea ) /*0x79ea44*/
              break; /*0x79ea44*/
          }
          if ( v4 != v2 && v2 != v3 ) /*0x79ea50*/
            OB_SFrondGuide_RotateRange_010201A0(v4, v2, v3); /*0x79ea59*/
        }
        else if ( first != v2 && v2 != v3 ) /*0x79ea25*/
        {
          OB_SFrondGuide_RotateRange_010201A0(first, v2, v3); /*0x79ea2e*/
        }
        ++v2; /*0x79ea61*/
        ++v3; /*0x79ea64*/
      }
      while ( v2 != last ); /*0x79ea69*/
    }
  }
}
