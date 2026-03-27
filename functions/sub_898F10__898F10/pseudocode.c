int __cdecl sub_898F10(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int i; // edi
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ebx
  int result; // eax
  _DWORD *v9; // esi
  int v10; // edi

  v2 = a1[0xC];
  if ( v2 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 0x38); ++i )
    {
      if ( i || *(_DWORD *)(**(_DWORD **)(v2 + 0x34) + 0x14) )
        sub_8DA080(a2, *(_WORD **)(*(_DWORD *)(v2 + 0x34) + 4 * i));
    }
  }
  v4 = a1[0xE];
  if ( v4 != v4 + 4 * a1[0xF] )
  {
    do
    {
      v5 = (_DWORD *)(*(_DWORD *)v4 + 0x34);
      v6 = 0;
      if ( *(int *)(*(_DWORD *)v4 + 0x38) > 0 )
      {
        do
          sub_8DA080(a2, *(_WORD **)(*v5 + 4 * v6++));
        while ( v6 < v5[1] );
      }
      v4 += 4;
    }
    while ( v4 != a1[0xE] + 4 * a1[0xF] );
  }
  v7 = a1[0x11];
  result = v7 + 4 * a1[0x12];
  if ( v7 != result )
  {
    do
    {
      v9 = (_DWORD *)(*(_DWORD *)v7 + 0x34);
      v10 = 0;
      if ( *(int *)(*(_DWORD *)v7 + 0x38) > 0 )
      {
        do
          sub_8DA080(a2, *(_WORD **)(*v9 + 4 * v10++));
        while ( v10 < v9[1] );
      }
      result = a1[0x12];
      v7 += 4;
    }
    while ( v7 != a1[0x11] + 4 * result );
  }
  return result;
}
