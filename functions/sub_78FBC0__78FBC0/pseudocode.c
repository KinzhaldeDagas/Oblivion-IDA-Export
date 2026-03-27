void __cdecl sub_78FBC0(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  bool v7; // cc

  v4 = a2;
  v5 = (a2 - 1) / 2;
  if ( a3 >= a2 )
  {
    *(_DWORD *)(a1 + 4 * a2) = a4;
  }
  else
  {
    do
    {
      v6 = *(_DWORD *)(a1 + 4 * v5);
      if ( *(float *)(a4 + 0x2C) >= (double)*(float *)(v6 + 0x2C) )
        break;
      *(_DWORD *)(a1 + 4 * v4) = v6;
      v4 = v5;
      v7 = a3 < v5;
      v5 = (v5 - 1) / 2;
    }
    while ( v7 );
    *(_DWORD *)(a1 + 4 * v4) = a4;
  }
}
