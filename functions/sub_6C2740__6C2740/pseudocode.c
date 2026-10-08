float *__cdecl sub_6C2740(int a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]

  v6 = a2[1] - a3[1]; /*0x6c2751*/
  v7 = a2[2] - a3[2]; /*0x6c275a*/
  v4 = a2[3] - a3[3]; /*0x6c2768*/
  *a4 = v6; /*0x6c276f*/
  a4[1] = v7; /*0x6c2771*/
  v8 = v4; /*0x6c2774*/
  a4[2] = v8; /*0x6c277c*/
  return a4; /*0x6c277f*/
}
