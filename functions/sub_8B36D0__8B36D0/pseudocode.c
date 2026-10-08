float *__cdecl sub_8B36D0(float *a1, float a2, float *a3)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7

  *a3 = *a3 - (a1[1] * a1[1] + a1[2] * a1[2]) * a2; /*0x8b36ee*/
  a3[5] = a3[5] - (*a1 * *a1 + a1[2] * a1[2]) * a2; /*0x8b370a*/
  a3[0xA] = a3[0xA] - (*a1 * *a1 + a1[1] * a1[1]) * a2; /*0x8b3727*/
  v5 = a2 * *a1 * a1[1] + a3[1]; /*0x8b3737*/
  a3[1] = v5; /*0x8b373a*/
  a3[4] = v5; /*0x8b373d*/
  v6 = a2 * a1[2] * a1[1] + a3[6]; /*0x8b374a*/
  a3[6] = v6; /*0x8b374d*/
  a3[9] = v6; /*0x8b3750*/
  v7 = a2 * *a1 * a1[2] + a3[8]; /*0x8b375c*/
  a3[8] = v7; /*0x8b375f*/
  a3[2] = v7; /*0x8b3762*/
  return a3; /*0x8b3765*/
}
