int __cdecl _memset(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // edx
  int v4; // eax
  _BYTE *v6; // edi
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  v3 = a3; /*0x981630*/
  if ( !a3 ) /*0x98163a*/
    return a1; /*0x9816a5*/
  LOBYTE(v4) = a2; /*0x98163e*/
  if ( !(_BYTE)a2 && a3 >= 0x100 && unk_BAABE0 ) /*0x98164e*/
    return _VEC_memzero(a1, a2, a3); /*0x981657*/
  v6 = (_BYTE *)a1; /*0x98165d*/
  if ( a3 < 4 ) /*0x981662*/
    goto LABEL_17; /*0x981662*/
  v7 = -a1 & 3; /*0x981666*/
  if ( v7 ) /*0x981669*/
  {
    v3 = a3 - v7; /*0x98166b*/
    do /*0x981675*/
    {
      *v6++ = a2; /*0x98166d*/
      --v7; /*0x981672*/
    }
    while ( v7 ); /*0x981675*/
  }
  v4 = 0x1010101 * (unsigned __int8)a2; /*0x981683*/
  v8 = v3; /*0x981685*/
  v3 &= 3u; /*0x981687*/
  v9 = v8 >> 2; /*0x98168a*/
  if ( !v9 || (memset32(v6, v4, v9), v6 += 4 * v9, v3) ) /*0x981693*/
  {
LABEL_17:
    do /*0x98169d*/
    {
      *v6++ = v4; /*0x981695*/
      --v3; /*0x98169a*/
    }
    while ( v3 ); /*0x98169d*/
  }
  return a1; /*0x9816a4*/
}
