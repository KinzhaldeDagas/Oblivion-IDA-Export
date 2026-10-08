// Oblivion 1.2.0.416: placement/uninitialized copy of six-dword records; shared by stVec and branch-flare vector paths.
unsigned __int8 *__cdecl OB_stVector24_UninitializedCopyRange_010201A0(
        const unsigned __int8 *first,
        const unsigned __int8 *last,
        unsigned __int8 *destination)
{
  const unsigned __int8 *v3; // ecx
  unsigned __int8 *result; // eax

  v3 = first; /*0x7847f0*/
  for ( result = destination; v3 != last; result += 0x18 ) /*0x7847fe*/
  {
    if ( result ) /*0x784803*/
    {
      *(_DWORD *)result = *(_DWORD *)v3; /*0x784807*/
      *((_DWORD *)result + 1) = *((_DWORD *)v3 + 1); /*0x78480c*/
      *((_DWORD *)result + 2) = *((_DWORD *)v3 + 2); /*0x784812*/
      *((_DWORD *)result + 3) = *((_DWORD *)v3 + 3); /*0x784818*/
      *((_DWORD *)result + 4) = *((_DWORD *)v3 + 4); /*0x78481e*/
      *((_DWORD *)result + 5) = *((_DWORD *)v3 + 5); /*0x784824*/
    }
    v3 += 0x18; /*0x784827*/
  }
  return result; /*0x784832*/
}
