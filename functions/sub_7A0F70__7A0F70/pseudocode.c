// Return-value wrapper for outer-vector uninitialized_fill_n; returns destination+count after deep construction.
OB_stVector_SFrondGuide_010201A0 *__stdcall OB_stVector_stVector_SFrondGuide_UninitializedFillNThunk_010201A0(
        OB_stVector_SFrondGuide_010201A0 *destination,
        unsigned int count,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_stVector_stVector_SFrondGuide_UninitializedFillN_010201A0(destination, count, value); /*0x7a0f92*/
  return &destination[count]; /*0x7a0fa1*/
}
