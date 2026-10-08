// OBLIVION AUTHORITY (2026-08-30): Stdcall uninitialized_fill_n adapter for vector<unsigned short> owners. Boundary repaired through its pointer-result epilogue and ret 0x0C at 0x796904.
OB_stVectorUShort_010201A0 *__stdcall OB_stVector_stVectorUShort_UninitializedFillNThunk_010201A0(
        OB_stVectorUShort_010201A0 *destination,
        unsigned int count,
        const OB_stVectorUShort_010201A0 *value)
{
  OB_stVector_stVectorUShort_UninitializedFillN_010201A0(destination, count, value); /*0x7968f2*/
  return &destination[count]; /*0x796901*/
}
