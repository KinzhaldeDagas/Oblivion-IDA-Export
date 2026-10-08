// Oblivion 1.2.0.416: forward-copies six-dword records from [first,last) and returns the advanced destination.
unsigned __int8 *__cdecl OB_stVector24_CopyRange_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destination)
{
  const unsigned __int8 *v3; // ecx
  unsigned __int8 *result; // eax

  v3 = first; /*0x784180*/
  for ( result = destination; v3 != last; result += 0x18 ) /*0x78418e*/
  {
    *(_DWORD *)result = *(_DWORD *)v3; /*0x784193*/
    *((_DWORD *)result + 1) = *((_DWORD *)v3 + 1); /*0x784198*/
    *((_DWORD *)result + 2) = *((_DWORD *)v3 + 2); /*0x78419e*/
    *((_DWORD *)result + 3) = *((_DWORD *)v3 + 3); /*0x7841a4*/
    *((_DWORD *)result + 4) = *((_DWORD *)v3 + 4); /*0x7841aa*/
    *((_DWORD *)result + 5) = *((_DWORD *)v3 + 5); /*0x7841b0*/
    v3 += 0x18; /*0x7841b3*/
  }
  return result; /*0x7841be*/
}
