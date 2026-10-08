// OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized copying of vector<unsigned short*> owners. Boundary repaired through ret 0x0C at 0x796846 and noreturn cleared.
OB_stVectorUShortPtr_010201A0 *__stdcall OB_stVector_stVectorUShortPtr_UninitializedCopyRangeThunk_010201A0(
        const OB_stVectorUShortPtr_010201A0 *first,
        const OB_stVectorUShortPtr_010201A0 *last,
        OB_stVectorUShortPtr_010201A0 *destination)
{
  return OB_stVector_stVectorUShortPtr_UninitializedCopyRange_010201A0(first, last, destination); /*0x796846*/
}
