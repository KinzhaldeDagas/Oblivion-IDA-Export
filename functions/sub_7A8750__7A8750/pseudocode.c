int __cdecl sub_7A8750(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2;
  result = a3 - 8 * ((a2 - a1) >> 3);
  if ( a1 != a2 )
  {
    v5 = a3 - a2;
    do
    {
      v6 = *(_DWORD *)(v3 - 8);
      v3 -= 8;
      *(_DWORD *)(v5 + v3) = v6;
      *(_DWORD *)(v5 + v3 + 4) = *(_DWORD *)(v3 + 4);
    }
    while ( v3 != a1 );
  }
  return result;
}
