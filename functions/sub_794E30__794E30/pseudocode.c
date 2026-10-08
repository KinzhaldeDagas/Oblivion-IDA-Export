// OBLIVION AUTHORITY (2026-08-30): Assigns one unsigned-short value across [first,last) and returns the advanced destination.
unsigned __int16 *__cdecl OB_stVectorUShort_CopyFillRange_010201A0(
        unsigned __int16 *first,
        unsigned __int16 *last,
        const unsigned __int16 *value)
{
  unsigned __int16 *result; // eax

  for ( result = first; result != last; ++result ) /*0x794e3a*/
    *result = *value; /*0x794e44*/
  return result; /*0x794e4f*/
}
