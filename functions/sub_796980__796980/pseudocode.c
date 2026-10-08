// OBLIVION AUTHORITY (2026-08-30): stdcall adapter for uninitialized move of 0x10-byte vector owners. Function boundary now includes the add-esp/ret 0x0C normal tail through 0x7969A8.
OB_stVector4_010201A0 *__stdcall OB_stVector4_UninitializedMoveRangeThunk_010201A0(
        OB_stVector4_010201A0 *first,
        OB_stVector4_010201A0 *last,
        OB_stVector4_010201A0 *destinationFirst)
{
  return OB_stVector4_UninitializedMoveRange_010201A0(first, last, destinationFirst); /*0x7969a6*/
}
