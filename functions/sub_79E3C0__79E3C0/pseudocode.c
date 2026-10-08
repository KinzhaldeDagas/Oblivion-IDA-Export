// OBLIVION AUTHORITY (2026-08-30): stdcall adapter for vector<vector<float>> uninitialized_fill_n. Corrected boundary includes the pointer-result calculation and ret 0x0C normal tail through 0x79E3F6.
OB_stVectorFloat_010201A0 *__stdcall OB_stVector_stVectorFloat_UninitializedFillNThunk_010201A0(
        OB_stVectorFloat_010201A0 *destination,
        unsigned int count,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVector_stVectorFloat_UninitializedFillN_010201A0(destination, count, value); /*0x79e3e2*/
  return &destination[count];                   // Recovered normal tail omitted by the false noreturn callee: returns destination + count and performs ret 0x0C. /*0x79e3f1*/
}
