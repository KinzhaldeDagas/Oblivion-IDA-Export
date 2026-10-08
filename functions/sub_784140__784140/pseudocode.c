// Oblivion 1.2.0.416: assigns one six-dword value across [first,last); shared 0x18-byte vector primitive.
unsigned __int8 *__cdecl OB_stVector24_CopyFillRange_010201A0(
        unsigned __int8 *first,
        unsigned __int8 *last,
        const unsigned __int8 *value)
{
  unsigned __int8 *result; // eax

  for ( result = first; result != last; result += 0x18 ) /*0x78414a*/
  {
    *(_DWORD *)result = *(_DWORD *)value; /*0x784153*/
    *((_DWORD *)result + 1) = *((_DWORD *)value + 1); /*0x784158*/
    *((_DWORD *)result + 2) = *((_DWORD *)value + 2); /*0x78415e*/
    *((_DWORD *)result + 3) = *((_DWORD *)value + 3); /*0x784164*/
    *((_DWORD *)result + 4) = *((_DWORD *)value + 4); /*0x78416a*/
    *((_DWORD *)result + 5) = *((_DWORD *)value + 5); /*0x784170*/
  }
  return result; /*0x78417b*/
}
