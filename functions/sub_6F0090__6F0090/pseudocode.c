int __cdecl sub_6F0090(int a1, int a2, int a3)
{
  int result; // eax

  for ( result = a1; result != a2; result += 6 )
  {
    *(_DWORD *)result = *(_DWORD *)a3;
    *(_WORD *)(result + 4) = *(_WORD *)(a3 + 4);
  }
  return result;
}
