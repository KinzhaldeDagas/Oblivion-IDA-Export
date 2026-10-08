// Oblivion 1.2.0.416: copy-range adapter for 0x18-byte records; returns destination advanced by the source count.
unsigned __int8 *__cdecl OB_stVector24_CopyRangeAdapter_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destination)
{
  OB_stVector24_CopyRange_010201A0(first, last, destination); /*0x7848ae*/
  return &destination[0x18 * ((last - first) / 0x18)]; /*0x7848cf*/
}
