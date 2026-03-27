void __cdecl sub_7903B0(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ecx
  bool i; // zf

  v4 = a2;
  v5 = 2 * a2 + 2;
  for ( i = v5 == a3; v5 < a3; i = v5 == a3 )
  {
    if ( *(float *)(*(_DWORD *)(a1 + 4 * v5 - 4) + 0x2C) < (double)*(float *)(*(_DWORD *)(a1 + 4 * v5) + 0x2C) )
      --v5;
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * v5);
    v4 = v5;
    v5 = 2 * v5 + 2;
  }
  if ( i )
  {
    *(_DWORD *)(a1 + 4 * v4) = *(_DWORD *)(a1 + 4 * a3 - 4);
    v4 = a3 - 1;
  }
  sub_78FBC0(a1, v4, a2, a4);
}
