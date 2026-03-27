float *__cdecl sub_710250(float *a1, float *a2, float *a3)
{
  *a1 = a3[3] * a2[1] + *a2 * *a3 + a3[6] * a2[2];
  a1[1] = a3[1] * *a2 + a3[4] * a2[1] + a3[7] * a2[2];
  a1[2] = a3[2] * *a2 + a3[5] * a2[1] + a3[8] * a2[2];
  return a1;
}
