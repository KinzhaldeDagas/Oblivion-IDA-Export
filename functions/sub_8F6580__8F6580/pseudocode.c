int __cdecl sub_8F6580(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  unsigned int v6; // ecx
  int result; // eax
  int v8; // edi
  int v9; // edx

  v4 = a2;
  v5 = a3;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 4 * ((v4 + v5) >> 1));
    result = v5;
    v8 = v4;
    do
    {
      for ( ; *(_DWORD *)(a1 + 4 * v8) < v6; ++v8 )
        ;
      for ( ; v6 < *(_DWORD *)(a1 + 4 * result); --result )
        ;
      if ( result < v8 )
        break;
      if ( result != v8 )
      {
        v9 = *(_DWORD *)(a1 + 4 * result);
        *(_DWORD *)(a1 + 4 * result) = *(_DWORD *)(a1 + 4 * v8);
        v5 = a3;
        *(_DWORD *)(a1 + 4 * v8) = v9;
        v4 = a2;
      }
      --result;
      ++v8;
    }
    while ( v8 <= result );
    if ( v4 < result )
      result = sub_8F6580(a1, v4, result, a4);
    if ( v8 >= v5 )
      break;
    v4 = v8;
    a2 = v8;
  }
  return result;
}
