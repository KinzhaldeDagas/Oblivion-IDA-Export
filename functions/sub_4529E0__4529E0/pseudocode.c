float *__cdecl sub_4529E0(float *a1, float *a2)
{
  double v3; // rt0

  v3 = hkFactor; /*0x4529f2*/
  *a1 = *a2 * v3; /*0x4529f4*/
  a1[1] = a2[1] * v3; /*0x4529fb*/
  a1[2] = v3 * a2[2]; /*0x452a01*/
  return a1; /*0x452a04*/
}
