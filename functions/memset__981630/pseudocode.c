int __cdecl _memset(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // edx
  int v4; // eax
  _BYTE *v6; // edi
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx

  v3 = a3;
  if ( !a3 )
    return a1;
  LOBYTE(v4) = a2;
  if ( !(_BYTE)a2 && a3 >= 0x100 && dword_BAABE0 )
    return _VEC_memzero(a1, a2, a3);
  v6 = (_BYTE *)a1;
  if ( a3 < 4 )
    goto LABEL_17;
  v7 = -a1 & 3;
  if ( v7 )
  {
    v3 = a3 - v7;
    do
    {
      *v6++ = a2;
      --v7;
    }
    while ( v7 );
  }
  v4 = 0x1010101 * (unsigned __int8)a2;
  v8 = v3;
  v3 &= 3u;
  v9 = v8 >> 2;
  if ( !v9 || (memset32(v6, v4, v9), v6 += 4 * v9, v3) )
  {
LABEL_17:
    do
    {
      *v6++ = v4;
      --v3;
    }
    while ( v3 );
  }
  return a1;
}
