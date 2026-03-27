_DWORD *__stdcall sub_402190(_DWORD *a1)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  bool v5; // zf
  int v6; // edi
  unsigned int v7; // edx
  _DWORD *i; // ecx
  int v9; // ebx
  _DWORD *v10; // edx
  int v11; // [esp+0h] [ebp-8h]
  _DWORD *v12; // [esp+4h] [ebp-4h]

  if ( !a1 )
    return 0;
  v2 = 1;
  do
  {
    v3 = a1;
    v4 = 0;
    v5 = a1 == 0;
    a1 = 0;
    v12 = 0;
    v11 = 0;
    if ( v5 )
      goto LABEL_24;
    do
    {
      ++v11;
      v6 = 0;
      v7 = 0;
      for ( i = v3; v7 < v2; ++v7 )
      {
        i = (_DWORD *)i[1];
        ++v6;
        if ( !i )
          break;
      }
      v9 = v2;
      while ( 1 )
      {
        if ( v6 > 0 )
          goto LABEL_14;
        if ( v9 <= 0 || !i )
          break;
        if ( !v6 )
        {
          v10 = i;
          i = (_DWORD *)i[1];
          --v9;
          goto LABEL_19;
        }
LABEL_14:
        if ( v9 && i && i < v3 )
        {
          v10 = i;
          i = (_DWORD *)i[1];
          --v9;
        }
        else
        {
          v10 = v3;
          v3 = (_DWORD *)v3[1];
          --v6;
        }
LABEL_19:
        if ( v4 )
        {
          v4[1] = v10;
          *v10 = v4;
          v4 = v10;
        }
        else
        {
          *v10 = v12;
          v4 = v10;
          a1 = v10;
        }
        v12 = v10;
      }
      v3 = i;
    }
    while ( i );
LABEL_24:
    v2 *= 2;
    v4[1] = 0;
  }
  while ( v11 != 1 );
  return a1;
}
