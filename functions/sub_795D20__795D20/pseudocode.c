// OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<unsigned short> value across an initialized owner range by repeated deep copy assignment.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_CopyAssignFillRange_010201A0(
        OB_stVectorUShort_010201A0 *first,
        OB_stVectorUShort_010201A0 *last,
        const OB_stVectorUShort_010201A0 *value)
{
  OB_stVectorUShort_010201A0 *i; // esi
  OB_stVectorUShort_010201A0 *result; // eax

  for ( i = first; i != last; ++i ) /*0x795d2c*/
    result = OB_stVectorUShort_CopyAssign_010201A0(i, value); /*0x795d36*/
  return result; /*0x795d43*/
}
