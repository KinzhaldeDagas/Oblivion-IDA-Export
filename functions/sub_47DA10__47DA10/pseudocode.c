float *__cdecl sub_47DA10(float *a1, float a2, float *a3)
{
  *a1 = *a3 * a2;
  a1[1] = a3[1] * a2;
  a1[2] = a2 * a3[2];
  return a1;
}
