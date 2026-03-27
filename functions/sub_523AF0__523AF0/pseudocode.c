int __cdecl sub_523AF0(int a1, int a2, float *a3)
{
  int result; // eax

  for ( result = a1; result != a2; *(float *)(result - 4) = *a3 )
    result += 4;
  return result;
}
