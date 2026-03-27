float *__cdecl sub_6EF560(float *a1, float *a2, float *a3)
{
  float *i; // esi
  float *result; // eax

  for ( i = a1; i != a2; i += 0x10 )
    result = sub_557770(i, a3);
  return result;
}
