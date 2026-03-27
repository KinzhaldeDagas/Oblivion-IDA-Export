bool *__cdecl sub_92CA50(bool *a1, int a2, int a3)
{
  bool *result; // eax

  result = a1;
  *a1 = *(float *)(a2 + 4) < (double)*(float *)(a3 + 4);
  return result;
}
