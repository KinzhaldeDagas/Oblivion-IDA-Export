// MoonSugarEffect decode: matrix packer without camera-relative translation subtraction. Used for cached skin/world transforms that should keep raw translation.
float *__cdecl sub_761BE0(float *a1, float *a2, float *a3, float a4)
{
  *a1 = *a2 * a4; /*0x761bf4*/
  a1[1] = a2[3] * a4; /*0x761bfb*/
  a1[2] = a2[6] * a4; /*0x761c03*/
  a1[4] = a2[1] * a4; /*0x761c0b*/
  a1[5] = a2[4] * a4; /*0x761c13*/
  a1[6] = a2[7] * a4; /*0x761c1b*/
  a1[8] = a2[2] * a4; /*0x761c23*/
  a1[9] = a2[5] * a4; /*0x761c2b*/
  a1[0xA] = a4 * a2[8]; /*0x761c35*/
  a1[0xC] = *a3; /*0x761c3a*/
  a1[0xD] = a3[1]; /*0x761c40*/
  a1[0xE] = a3[2]; /*0x761c46*/
  return a1; /*0x761c49*/
}
