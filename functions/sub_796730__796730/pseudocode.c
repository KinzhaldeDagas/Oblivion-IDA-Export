// OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short>>. Move/copy-assigns the suffix, destroys the vacated owner range, updates end, and returns the checked iterator.
OB_stVector_stVectorUShortIterator_010201A0 *__thiscall OB_stVector_stVectorUShort_EraseRange_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        OB_stVector_stVectorUShortIterator_010201A0 *result,
        OB_stVector_stVectorUShortIterator_010201A0 first,
        OB_stVector_stVectorUShortIterator_010201A0 last)
{
  int v4; // ebx
  int v5; // edi
  OB_stVector4_010201A0 *v7; // edi

  if ( !first.owner || first.owner != last.owner ) /*0x796741*/
    _invalid_parameter_noinfo(v4, v5, (int)this); /*0x796743*/
  if ( first.current != last.current ) /*0x796752*/
  {
    v7 = (OB_stVector4_010201A0 *)OB_stVector_stVectorUShort_CopyAssignRange_010201A0( /*0x796765*/
                                    last.current,
                                    this->end,
                                    first.current);
    OB_stVector4_DestroyRange_010201A0(v7, (OB_stVector4_010201A0 *)this->end); /*0x79676d*/
    this->end = (OB_stVectorUShort_010201A0 *)v7; /*0x796775*/
  }
  *result = first; /*0x79677e*/
  return result; /*0x79677d*/
}
