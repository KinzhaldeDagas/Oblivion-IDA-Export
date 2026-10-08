// OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for exception-safe uninitialized copying of vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796816 and noreturn cleared.
OB_stVectorUShort_010201A0 *__stdcall OB_stVector_stVectorUShort_UninitializedCopyRangeThunk_010201A0(
        const OB_stVectorUShort_010201A0 *first,
        const OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destination)
{
  return OB_stVector_stVectorUShort_UninitializedCopyRange_010201A0(first, last, destination); /*0x796816*/
}
