void __cdecl shortsort(unsigned int a1, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int, unsigned int))
{
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  int v9; // esi
  _BYTE *v10; // eax
  unsigned int v11; // ecx
  char v12; // dl

  v4 = a1;
  v5 = a2;
  if ( a2 > a1 )
  {
    v6 = a3;
    do
    {
      v7 = a1 + a3;
      v8 = v4;
      if ( a1 + a3 <= v5 )
      {
        do
        {
          if ( a4(v7, v8) > 0 )
            v8 = v7;
          v7 += v6;
        }
        while ( v7 <= v5 );
        v4 = a1;
      }
      v9 = v6;
      v10 = (_BYTE *)v5;
      if ( v8 != v5 )
      {
        if ( v6 )
        {
          v11 = v8 - v5;
          do
          {
            v12 = v10[v11];
            v10[v11] = *v10;
            --v9;
            *v10++ = v12;
          }
          while ( v9 );
          v6 = a3;
          v4 = a1;
        }
      }
      v5 -= v6;
    }
    while ( v5 > v4 );
  }
}
