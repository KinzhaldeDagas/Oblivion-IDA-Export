float *__cdecl sub_8B3770(float *a1, float a2, float *a3)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7

  *a3 = (a1[1] * a1[1] + a1[2] * a1[2]) * a2 + *a3; /*0x8b378e*/
  a3[5] = (*a1 * *a1 + a1[2] * a1[2]) * a2 + a3[5]; /*0x8b37aa*/
  a3[0xA] = (*a1 * *a1 + a1[1] * a1[1]) * a2 + a3[0xA]; /*0x8b37c7*/
  v5 = a3[1] - a2 * *a1 * a1[1]; /*0x8b37d7*/
  a3[1] = v5; /*0x8b37da*/
  a3[4] = v5; /*0x8b37dd*/
  v6 = a3[6] - a2 * a1[2] * a1[1]; /*0x8b37ea*/
  a3[6] = v6; /*0x8b37ed*/
  a3[9] = v6; /*0x8b37f0*/
  v7 = a3[8] - a2 * *a1 * a1[2]; /*0x8b37fc*/
  a3[8] = v7; /*0x8b37ff*/
  a3[2] = v7; /*0x8b3802*/
  return a3; /*0x8b3805*/
}
