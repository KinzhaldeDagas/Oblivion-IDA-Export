float *__cdecl sub_6BF480(int a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]

  v6 = a3[1] - a2[1]; /*0x6bf491*/
  v7 = a3[2] - a2[2]; /*0x6bf49a*/
  v4 = a3[3] - a2[3]; /*0x6bf4a8*/
  *a4 = v6; /*0x6bf4af*/
  a4[1] = v7; /*0x6bf4b1*/
  v8 = v4; /*0x6bf4b4*/
  a4[2] = v8; /*0x6bf4bc*/
  return a4; /*0x6bf4bf*/
}
