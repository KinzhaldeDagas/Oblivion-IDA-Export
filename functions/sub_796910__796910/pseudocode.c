// OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized moving vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796936 and noreturn cleared.
OB_stVectorUShort_010201A0 *__stdcall OB_stVector_stVectorUShort_UninitializedMoveRangeThunk_010201A0(
        OB_stVectorUShort_010201A0 *first,
        OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destination)
{
  return OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0(first, last, destination); /*0x796936*/
}
