// Oblivion 1.2.0.416: placement/uninitialized fill of count six-dword records; returns the advanced destination.
unsigned __int8 *__cdecl OB_stVector24_UninitializedFillN_010201A0(
        unsigned __int8 *destination,
        unsigned int count,
        const unsigned __int8 *value)
{
  unsigned __int8 *result; // eax
  unsigned int v4; // edx

  v4 = count; /*0x7848e0*/
  if ( count ) /*0x7848e6*/
  {
    result = destination; /*0x7848ec*/
    do /*0x78491f*/
    {
      if ( result ) /*0x7848f3*/
      {
        *(_DWORD *)result = *(_DWORD *)value; /*0x7848f7*/
        *((_DWORD *)result + 1) = *((_DWORD *)value + 1); /*0x7848fc*/
        *((_DWORD *)result + 2) = *((_DWORD *)value + 2); /*0x784902*/
        *((_DWORD *)result + 3) = *((_DWORD *)value + 3); /*0x784908*/
        *((_DWORD *)result + 4) = *((_DWORD *)value + 4); /*0x78490e*/
        *((_DWORD *)result + 5) = *((_DWORD *)value + 5); /*0x784914*/
      }
      --v4; /*0x784917*/
      result += 0x18; /*0x78491a*/
    }
    while ( v4 ); /*0x78491f*/
  }
  return result; /*0x784922*/
}
