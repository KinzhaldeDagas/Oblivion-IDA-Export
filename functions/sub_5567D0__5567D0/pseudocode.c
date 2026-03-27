int __cdecl sub_5567D0(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 6 )
  {
    if ( result )
    {
      *(_DWORD *)result = *(_DWORD *)v3;
      *(_WORD *)(result + 4) = *(_WORD *)(v3 + 4);
    }
    v3 += 6;
  }
  return result;
}
