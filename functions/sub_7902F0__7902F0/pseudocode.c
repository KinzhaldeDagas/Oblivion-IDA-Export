// Oblivion 1.2.0.416: shared 24-byte copy-backward adapter; invokes the six-dword primitive and returns destinationEnd minus the source record count.
unsigned __int8 *__cdecl OB_stVector24_CopyBackwardRangeAdapter_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destinationEnd)
{
  OB_stVector24_CopyBackwardRange_010201A0(first, last, destinationEnd); /*0x79031e*/
  return &destinationEnd[0xFFFFFFE8 * ((last - first) / 0x18)]; /*0x790346*/
}
