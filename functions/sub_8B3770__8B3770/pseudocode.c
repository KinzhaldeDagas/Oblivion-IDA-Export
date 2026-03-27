float *__cdecl sub_8B3770(float *a1, float a2, float *a3)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7

  *a3 = (a1[1] * a1[1] + a1[2] * a1[2]) * a2 + *a3;
  a3[5] = (*a1 * *a1 + a1[2] * a1[2]) * a2 + a3[5];
  a3[0xA] = (*a1 * *a1 + a1[1] * a1[1]) * a2 + a3[0xA];
  v5 = a3[1] - a2 * *a1 * a1[1];
  a3[1] = v5;
  a3[4] = v5;
  v6 = a3[6] - a2 * a1[2] * a1[1];
  a3[6] = v6;
  a3[9] = v6;
  v7 = a3[8] - a2 * *a1 * a1[2];
  a3[8] = v7;
  a3[2] = v7;
  return a3;
}
