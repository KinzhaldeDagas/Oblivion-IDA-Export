// OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short*>>. Uses the 4-byte inner-vector assignment family, destroys vacated owners, and updates end.
OB_stVector_stVectorUShortPtrIterator_010201A0 *__thiscall OB_stVector_stVectorUShortPtr_EraseRange_010201A0(
        OB_stVector_stVectorUShortPtr_010201A0 *this,
        OB_stVector_stVectorUShortPtrIterator_010201A0 *result,
        OB_stVector_stVectorUShortPtrIterator_010201A0 first,
        OB_stVector_stVectorUShortPtrIterator_010201A0 last)
{
  int v4; // ebx
  int v5; // edi
  OB_stVector4_010201A0 *v7; // edi

  if ( !first.owner || first.owner != last.owner ) /*0x7967a1*/
    _invalid_parameter_noinfo(v4, v5, (int)this); /*0x7967a3*/
  if ( first.current != last.current ) /*0x7967b2*/
  {
    v7 = (OB_stVector4_010201A0 *)OB_stVector_stVectorUShortPtr_CopyAssignRange_010201A0( /*0x7967c5*/
                                    last.current,
                                    this->end,
                                    first.current);
    OB_stVector4_DestroyRange_010201A0(v7, (OB_stVector4_010201A0 *)this->end); /*0x7967cd*/
    this->end = (OB_stVectorUShortPtr_010201A0 *)v7; /*0x7967d5*/
  }
  *result = first; /*0x7967de*/
  return result; /*0x7967dd*/
}
