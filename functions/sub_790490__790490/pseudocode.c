// Oblivion binary evidence: initialized fill over [first,last), assigning the same four-byte value to each existing slot and returning last.
unsigned int *__cdecl OB_stVector4_CopyFillRange_010201A0(
        unsigned int *first,
        unsigned int *last,
        const unsigned int *value)
{
  unsigned int *result; // eax

  for ( result = first; result != last; ++result ) /*0x79049a*/
    *result = *value; /*0x7904a3*/
  return result; /*0x7904ad*/
}
