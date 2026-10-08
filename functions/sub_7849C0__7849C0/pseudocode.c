// Oblivion 1.2.0.416: stdcall adapter to the shared 0x18-byte uninitialized-copy primitive.
unsigned __int8 *__stdcall OB_stVector24_UninitializedCopyRangeThunk_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destination)
{
  return OB_stVector24_UninitializedCopyRange_010201A0(first, last, destination); /*0x7849e6*/
}
