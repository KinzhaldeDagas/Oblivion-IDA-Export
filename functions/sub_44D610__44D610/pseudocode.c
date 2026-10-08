int *__thiscall sub_44D610(char *this)
{
  char *v1; // edx
  char *v2; // ebp
  int v3; // ecx
  char *i; // eax
  char *j; // esi
  int v6; // ebx
  int *v7; // eax
  int v8; // edi
  const unsigned __int8 *v9; // ecx
  const unsigned __int8 *v10; // eax
  _DWORD *v11; // eax
  char *v12; // ebp
  int v13; // ecx
  _DWORD *v14; // eax
  int *result; // eax
  char *k; // esi
  int v17; // ebx
  int v18; // edi
  const unsigned __int8 *v19; // ecx
  const unsigned __int8 *v20; // eax
  _DWORD *v21; // ecx
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+10h] [ebp-8h]
  char *v24; // [esp+14h] [ebp-4h]

  v1 = this; /*0x44d614*/
  v2 = this + 0x54; /*0x44d617*/
  v3 = 0; /*0x44d61b*/
  v24 = v1; /*0x44d620*/
  for ( i = v2; i; i = *((char **)i + 1) ) /*0x44d626*/
  {
    if ( *(_DWORD *)i ) /*0x44d628*/
      ++v3; /*0x44d62d*/
  }
  if ( v3 - 1 > 0 ) /*0x44d63c*/
  {
    v22 = v3 - 1; /*0x44d63e*/
    do /*0x44d696*/
    {
      for ( j = v2; j; j = *((char **)j + 1) ) /*0x44d646*/
      {
        v6 = *(_DWORD *)j; /*0x44d648*/
        if ( !*(_DWORD *)j ) /*0x44d648*/
          break; /*0x44d64c*/
        v7 = *((int **)j + 1); /*0x44d64e*/
        if ( v7 ) /*0x44d653*/
        {
          v8 = *v7; /*0x44d655*/
          if ( *v7 ) /*0x44d655*/
          {
            v9 = *(const unsigned __int8 **)(v8 + 0x1C); /*0x44d660*/
            if ( !v9 ) /*0x44d662*/
              v9 = (const unsigned __int8 *)EmptyString; /*0x44d664*/
            v10 = *(const unsigned __int8 **)(v6 + 0x1C); /*0x44d669*/
            if ( !v10 ) /*0x44d66e*/
              v10 = (const unsigned __int8 *)EmptyString; /*0x44d670*/
            if ( _mbsicmp(v10, v9) > 0 ) /*0x44d681*/
            {
              v11 = *((_DWORD **)j + 1); /*0x44d683*/
              *(_DWORD *)j = v8; /*0x44d686*/
              *v11 = v6; /*0x44d688*/
            }
          }
        }
      }
      --v22; /*0x44d691*/
    }
    while ( v22 ); /*0x44d696*/
    v1 = v24; /*0x44d698*/
  }
  v12 = v1 + 0x44; /*0x44d69c*/
  v13 = 0; /*0x44d69f*/
  v14 = v1 + 0x44; /*0x44d6a3*/
  if ( v1 != (char *)0xFFFFFFBC ) /*0x44d6a5*/
  {
    do /*0x44d6b4*/
    {
      if ( *v14 ) /*0x44d6a7*/
        ++v13; /*0x44d6ac*/
      v14 = (_DWORD *)v14[1]; /*0x44d6af*/
    }
    while ( v14 ); /*0x44d6b4*/
  }
  result = (int *)(v13 - 1); /*0x44d6b6*/
  if ( v13 - 1 > 0 ) /*0x44d6bb*/
  {
    v23 = v13 - 1; /*0x44d6bd*/
    do /*0x44d715*/
    {
      for ( k = v12; k; k = *((char **)k + 1) ) /*0x44d6c5*/
      {
        v17 = *(_DWORD *)k; /*0x44d6c7*/
        if ( !*(_DWORD *)k ) /*0x44d6c7*/
          break; /*0x44d6cb*/
        result = *((int **)k + 1); /*0x44d6cd*/
        if ( result ) /*0x44d6d2*/
        {
          v18 = *result; /*0x44d6d4*/
          if ( *result ) /*0x44d6d4*/
          {
            v19 = *(const unsigned __int8 **)(v18 + 0x1C); /*0x44d6df*/
            if ( !v19 ) /*0x44d6e1*/
              v19 = (const unsigned __int8 *)EmptyString; /*0x44d6e3*/
            v20 = *(const unsigned __int8 **)(v17 + 0x1C); /*0x44d6e8*/
            if ( !v20 ) /*0x44d6ed*/
              v20 = (const unsigned __int8 *)EmptyString; /*0x44d6ef*/
            result = (int *)_mbsicmp(v20, v19); /*0x44d6f6*/
            if ( (int)result > 0 ) /*0x44d700*/
            {
              v21 = *((_DWORD **)k + 1); /*0x44d702*/
              *(_DWORD *)k = v18; /*0x44d705*/
              *v21 = v17; /*0x44d707*/
            }
          }
        }
      }
      --v23; /*0x44d710*/
    }
    while ( v23 ); /*0x44d715*/
  }
  return result; /*0x44d717*/
}
