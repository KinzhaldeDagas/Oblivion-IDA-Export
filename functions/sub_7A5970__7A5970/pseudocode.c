float *__cdecl sub_7A5970(float *a1, float *a2, int a3)
{
  float *i; // esi
  float *result; // eax

  for ( i = a1; i != a2; i += 0x15 )
    result = sub_7A3470(i, a3);
  return result;
}
