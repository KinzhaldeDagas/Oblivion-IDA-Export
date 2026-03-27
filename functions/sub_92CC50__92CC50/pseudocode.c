int __cdecl sub_92CC50(int a1, int a2, int a3, int (__cdecl *a4)(char *, int, int *))
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int i; // eax
  int j; // eax
  int v10; // eax
  int v11; // ecx
  int result; // eax
  char v13; // [esp+1Ah] [ebp-16h] BYREF
  char v14; // [esp+1Bh] [ebp-15h] BYREF
  int v15; // [esp+1Ch] [ebp-14h]
  _DWORD v16[4]; // [esp+20h] [ebp-10h] BYREF

  while ( 1 )
  {
    v4 = a3;
    v5 = a2;
    v6 = (a2 + a3) >> 1;
    v7 = *(_DWORD *)(a1 + 8 * v6 + 4);
    v16[0] = *(_DWORD *)(a1 + 8 * v6);
    v16[1] = v7;
    do
    {
      if ( *(_BYTE *)a4(&v13, a1 + 8 * v5, v16) )
      {
        for ( i = a1 + 8 * v5; ; i = v15 )
        {
          ++v5;
          v15 = i + 8;
          if ( !*(_BYTE *)a4(&v13, i + 8, v16) )
            break;
        }
      }
      if ( *(_BYTE *)a4(&v14, (int)v16, (int *)(a1 + 8 * v4)) )
      {
        for ( j = a1 + 8 * v4; ; j = v15 )
        {
          v15 = j - 8;
          --v4;
          if ( !*(_BYTE *)a4(&v14, (int)v16, (int *)(j - 8)) )
            break;
        }
      }
      if ( v4 < v5 )
        break;
      if ( v4 != v5 )
      {
        v10 = *(_DWORD *)(a1 + 8 * v4);
        v11 = *(_DWORD *)(a1 + 8 * v4 + 4);
        *(_DWORD *)(a1 + 8 * v4) = *(_DWORD *)(a1 + 8 * v5);
        *(_DWORD *)(a1 + 8 * v4 + 4) = *(_DWORD *)(a1 + 8 * v5 + 4);
        *(_DWORD *)(a1 + 8 * v5) = v10;
        *(_DWORD *)(a1 + 8 * v5 + 4) = v11;
      }
      --v4;
      ++v5;
    }
    while ( v5 <= v4 );
    result = a2;
    if ( a2 < v4 )
      result = sub_92CC50(a1, a2, v4, a4);
    if ( v5 >= a3 )
      break;
    a2 = v5;
  }
  return result;
}
