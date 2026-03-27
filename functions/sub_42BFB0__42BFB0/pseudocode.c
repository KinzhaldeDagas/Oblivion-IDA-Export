int __cdecl sub_42BFB0(int a1, int a2, int a3)
{
  unsigned int *v6; // ecx
  int result; // eax
  int v8; // ebp
  _QWORD *v9; // eax
  bool v10; // zf
  unsigned int v11; // ebp
  unsigned int v12; // edx
  unsigned int *v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int *v17; // [esp+14h] [ebp+4h]
  int v18; // [esp+18h] [ebp+8h]
  int v19; // [esp+1Ch] [ebp+Ch]

  while ( 2 )
  {
    v6 = *(unsigned int **)(a1 + 4 * a2);
    result = a2;
    v8 = a3;
    v18 = a2;
    v19 = a3;
    v17 = v6;
    if ( a2 >= a3 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)(a1 + 4 * a3);
        if ( *v9 < *(_QWORD *)v6 )
        {
          v10 = a2 == a3;
          break;
        }
        v10 = a2 == a3;
        if ( a2 >= a3 )
          break;
        --a3;
      }
      if ( !v10 )
        *(_DWORD *)(a1 + 4 * a2++) = v9;
      v11 = *v17;
      v12 = v17[1];
      while ( 1 )
      {
        v13 = *(unsigned int **)(a1 + 4 * a2);
        v14 = *v13;
        v15 = v13[1];
        if ( __PAIR64__(v15, v14) >= __PAIR64__(v12, v11) && __PAIR64__(v15, v14) > __PAIR64__(v12, v11) )
          break;
        v16 = a2 == a3;
        if ( a2 >= a3 )
          goto LABEL_14;
        ++a2;
      }
      v16 = a2 == a3;
LABEL_14:
      if ( !v16 )
        *(_DWORD *)(a1 + 4 * a3--) = *(_DWORD *)(a1 + 4 * a2);
      v6 = v17;
    }
    while ( a2 < a3 );
    v8 = v19;
    result = v18;
LABEL_18:
    *(_DWORD *)(a1 + 4 * a2) = v6;
    a3 = v8;
    if ( result < a2 )
      result = sub_42BFB0(a1, result, a2 - 1);
    if ( v8 > a2 )
    {
      ++a2;
      continue;
    }
    return result;
  }
}
