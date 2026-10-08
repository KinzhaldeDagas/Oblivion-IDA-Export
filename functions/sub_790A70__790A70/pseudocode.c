// Oblivion 1.2.0.416: stdcall checked-template thunk to the shared 24-byte uninitialized-fill primitive; returns destination plus count*0x18.
unsigned __int8 *__stdcall OB_stVector24_UninitializedFillNThunk_010201A0(
        unsigned __int8 *destination,
        unsigned int count,
        const unsigned __int8 *value)
{
  OB_stVector24_UninitializedFillN_010201A0(destination, count, value); /*0x790a92*/
  return &destination[0x18 * count]; /*0x790aa0*/
}
