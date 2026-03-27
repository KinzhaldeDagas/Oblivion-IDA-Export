float *__cdecl sub_4529E0(float *a1, float *a2)
{
  double v3; // rt0

  v3 = hkFactor;
  *a1 = *a2 * v3;
  a1[1] = a2[1] * v3;
  a1[2] = v3 * a2[2];
  return a1;
}
