int __cdecl sub_899090(_DWORD *a1, _DWORD *a2)
{
  int v2; // ebx
  int result; // eax
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi

  v2 = a1[0xE];
  result = a1[0xF];
  if ( v2 != v2 + 4 * result )
  {
    do
    {
      v4 = (_DWORD *)(*(_DWORD *)v2 + 0x5C);
      v5 = 0;
      if ( *(int *)(*(_DWORD *)v2 + 0x60) > 0 )
      {
        do
          sub_8DA150(a2, *(_DWORD *)(*v4 + 4 * v5++));
        while ( v5 < v4[1] );
      }
      v2 += 4;
      result = a1[0xE] + 4 * a1[0xF];
    }
    while ( v2 != result );
  }
  v6 = a1[0x11];
  if ( v6 != v6 + 4 * a1[0x12] )
  {
    do
    {
      v7 = (_DWORD *)(*(_DWORD *)v6 + 0x5C);
      v8 = 0;
      if ( *(int *)(*(_DWORD *)v6 + 0x60) > 0 )
      {
        do
          sub_8DA150(a2, *(_DWORD *)(*v7 + 4 * v8++));
        while ( v8 < v7[1] );
      }
      result = a1[0x11];
      v6 += 4;
    }
    while ( v6 != result + 4 * a1[0x12] );
  }
  return result;
}
