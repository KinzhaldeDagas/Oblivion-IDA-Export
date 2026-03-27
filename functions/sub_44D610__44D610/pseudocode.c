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

  v1 = this;
  v2 = this + 0x54;
  v3 = 0;
  v24 = v1;
  for ( i = v2; i; i = *((char **)i + 1) )
  {
    if ( *(_DWORD *)i )
      ++v3;
  }
  if ( v3 - 1 > 0 )
  {
    v22 = v3 - 1;
    do
    {
      for ( j = v2; j; j = *((char **)j + 1) )
      {
        v6 = *(_DWORD *)j;
        if ( !*(_DWORD *)j )
          break;
        v7 = *((int **)j + 1);
        if ( v7 )
        {
          v8 = *v7;
          if ( *v7 )
          {
            v9 = *(const unsigned __int8 **)(v8 + 0x1C);
            if ( !v9 )
              v9 = (const unsigned __int8 *)EmptyString;
            v10 = *(const unsigned __int8 **)(v6 + 0x1C);
            if ( !v10 )
              v10 = (const unsigned __int8 *)EmptyString;
            if ( _mbsicmp(v10, v9) > 0 )
            {
              v11 = *((_DWORD **)j + 1);
              *(_DWORD *)j = v8;
              *v11 = v6;
            }
          }
        }
      }
      --v22;
    }
    while ( v22 );
    v1 = v24;
  }
  v12 = v1 + 0x44;
  v13 = 0;
  v14 = v1 + 0x44;
  if ( v1 != (char *)0xFFFFFFBC )
  {
    do
    {
      if ( *v14 )
        ++v13;
      v14 = (_DWORD *)v14[1];
    }
    while ( v14 );
  }
  result = (int *)(v13 - 1);
  if ( v13 - 1 > 0 )
  {
    v23 = v13 - 1;
    do
    {
      for ( k = v12; k; k = *((char **)k + 1) )
      {
        v17 = *(_DWORD *)k;
        if ( !*(_DWORD *)k )
          break;
        result = *((int **)k + 1);
        if ( result )
        {
          v18 = *result;
          if ( *result )
          {
            v19 = *(const unsigned __int8 **)(v18 + 0x1C);
            if ( !v19 )
              v19 = (const unsigned __int8 *)EmptyString;
            v20 = *(const unsigned __int8 **)(v17 + 0x1C);
            if ( !v20 )
              v20 = (const unsigned __int8 *)EmptyString;
            result = (int *)_mbsicmp(v20, v19);
            if ( (int)result > 0 )
            {
              v21 = *((_DWORD **)k + 1);
              *(_DWORD *)k = v18;
              *v21 = v17;
            }
          }
        }
      }
      --v23;
    }
    while ( v23 );
  }
  return result;
}
