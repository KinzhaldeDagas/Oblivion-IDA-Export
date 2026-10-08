// Oblivion 1.2.0.416: backward-copies six-dword records ending at destinationEnd and returns the new destination start.
unsigned __int8 *__cdecl OB_stVector24_CopyBackwardRange_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destinationEnd)
{
  const unsigned __int8 *v3; // ecx
  unsigned __int8 *result; // eax
  int v5; // esi

  v3 = last; /*0x7841c4*/
  for ( result = destinationEnd; v3 != first; *((_DWORD *)result + 5) = *((_DWORD *)v3 + 5) ) /*0x7841ce*/
  {
    v5 = *((_DWORD *)v3 + 0xFFFFFFFA); /*0x7841d1*/
    v3 += 0xFFFFFFE8; /*0x7841d4*/
    *((_DWORD *)result + 0xFFFFFFFA) = v5; /*0x7841d7*/
    result += 0xFFFFFFE8; /*0x7841dd*/
    *((_DWORD *)result + 1) = *((_DWORD *)v3 + 1); /*0x7841e2*/
    *((_DWORD *)result + 2) = *((_DWORD *)v3 + 2); /*0x7841e8*/
    *((_DWORD *)result + 3) = *((_DWORD *)v3 + 3); /*0x7841ee*/
    *((_DWORD *)result + 4) = *((_DWORD *)v3 + 4); /*0x7841f4*/
  }
  return result; /*0x784200*/
}
