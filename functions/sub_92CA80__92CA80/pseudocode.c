bool *__cdecl sub_92CA80(bool *a1, int a2, int a3)
{
  bool *result; // eax

  result = a1;
  *a1 = *(float *)(a2 + 0x10) < (double)*(float *)(a3 + 0x10);
  return result;
}
