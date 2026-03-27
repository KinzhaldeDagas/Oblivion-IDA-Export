int __cdecl sub_79A8F0(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2;
  result = a3 - 0xC * ((a2 - a1) / 0xC);
  if ( a1 != a2 )
  {
    v5 = a3 - a2;
    do
    {
      v6 = *(_DWORD *)(v3 - 0xC);
      v3 -= 0xC;
      *(_DWORD *)(v5 + v3) = v6;
      *(_DWORD *)(v5 + v3 + 4) = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(v5 + v3 + 8) = *(_DWORD *)(v3 + 8);
    }
    while ( v3 != a1 );
  }
  return result;
}
