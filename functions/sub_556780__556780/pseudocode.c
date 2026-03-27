int __cdecl sub_556780(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1;
  result = a3 + 6 * ((a2 - a1) / 6);
  if ( a1 != a2 )
  {
    v5 = a3 - a1;
    do
    {
      *(_DWORD *)(v5 + v3) = *(_DWORD *)v3;
      *(_WORD *)(v5 + v3 + 4) = *(_WORD *)(v3 + 4);
      v3 += 6;
    }
    while ( v3 != a2 );
  }
  return result;
}
