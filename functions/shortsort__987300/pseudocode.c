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

  v4 = a1; /*0x987300*/
  v5 = a2; /*0x987305*/
  if ( a2 > a1 ) /*0x98730b*/
  {
    v6 = a3; /*0x98730e*/
    do /*0x987380*/
    {
      v7 = a1 + a3; /*0x987320*/
      v8 = v4; /*0x987326*/
      if ( a1 + a3 <= v5 ) /*0x987328*/
      {
        do /*0x987343*/
        {
          if ( a4(v7, v8) > 0 ) /*0x98733b*/
            v8 = v7; /*0x98733d*/
          v7 += v6; /*0x98733f*/
        }
        while ( v7 <= v5 ); /*0x987343*/
        v4 = a1; /*0x987345*/
      }
      v9 = v6; /*0x98734b*/
      v10 = (_BYTE *)v5; /*0x98734d*/
      if ( v8 != v5 ) /*0x98734f*/
      {
        if ( v6 ) /*0x987353*/
        {
          v11 = v8 - v5; /*0x987357*/
          do /*0x987372*/
          {
            v12 = v10[v11]; /*0x987362*/
            v10[v11] = *v10; /*0x987365*/
            --v9; /*0x987368*/
            *v10++ = v12; /*0x98736b*/
          }
          while ( v9 ); /*0x987372*/
          v6 = a3; /*0x987374*/
          v4 = a1; /*0x987378*/
        }
      }
      v5 -= v6; /*0x98737c*/
    }
    while ( v5 > v4 ); /*0x987380*/
  }
}
