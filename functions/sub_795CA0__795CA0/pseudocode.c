// OBLIVION AUTHORITY (2026-08-30): Copy-assigns a range of vector<unsigned short> owners into initialized destination owners and returns the advanced destination.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_CopyAssignRange_010201A0(
        const OB_stVectorUShort_010201A0 *first,
        const OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destination)
{
  const OB_stVectorUShort_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x795cbe*/
    OB_stVectorUShort_CopyAssign_010201A0( /*0x795cc6*/
      (OB_stVectorUShort_010201A0 *)((char *)i + (char *)destination - (char *)first),
      i);
  return &destination[last - first]; /*0x795cd4*/
}
