// OBLIVION AUTHORITY (2026-08-30): Assigns one 8-byte SLodEntry value across an initialized destination range; compiler-folded trivial pair helper.
OB_CLeafLodEngine_SLodEntry_010201A0 *__cdecl OB_LeafLodEntry_CopyFillRange_010201A0(
        OB_CLeafLodEngine_SLodEntry_010201A0 *first,
        OB_CLeafLodEngine_SLodEntry_010201A0 *last,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  OB_CLeafLodEngine_SLodEntry_010201A0 *result; // eax

  for ( result = first; result != last; ++result ) /*0x7a86fa*/
    *result = *value; /*0x7a8703*/
  return result; /*0x7a8713*/
}
