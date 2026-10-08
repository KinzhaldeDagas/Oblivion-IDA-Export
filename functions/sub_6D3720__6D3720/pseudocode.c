float *__cdecl sub_6D3720(
        float a1,
        float a2,
        float *a3,
        float a4,
        float a5,
        float *a6,
        float a7,
        int a8,
        float *a9,
        float *a10)
{
  double v11; // st7
  double v12; // st5
  double v13; // st6
  double v14; // rt1
  double v15; // st1
  double v16; // st2
  float v17; // [esp+0h] [ebp-4h]
  float v18; // [esp+8h] [ebp+4h]
  float v19; // [esp+8h] [ebp+4h]
  float v20; // [esp+8h] [ebp+4h]
  float v21; // [esp+14h] [ebp+10h]
  float v22; // [esp+14h] [ebp+10h]
  float v23; // [esp+14h] [ebp+10h]
  float v24; // [esp+18h] [ebp+14h]

  v17 = a4 - a1; /*0x6d3736*/
  v18 = a5 - a2; /*0x6d374e*/
  v21 = a7 - a2; /*0x6d375c*/
  v24 = a5 - a7; /*0x6d3762*/
  v11 = v21; /*0x6d3766*/
  v12 = v21 / v18; /*0x6d3774*/
  v13 = v18; /*0x6d3774*/
  v22 = v12; /*0x6d3776*/
  v14 = dbl_A3D0C0; /*0x6d378e*/
  v19 = *a3 - v17 * v14 + *a6; /*0x6d3794*/
  v15 = dbl_A30E48; /*0x6d379c*/
  v16 = v19 * v15 * v22; /*0x6d37a8*/
  v20 = v17 * v15 - *a3 * v14 - *a6; /*0x6d37b8*/
  v23 = ((v14 * v20 + v16) * v22 + *a3) / v13; /*0x6d37cc*/
  *a9 = v23; /*0x6d37d4*/
  *a10 = v23 * v24; /*0x6d37e0*/
  *a9 = v11 * *a9; /*0x6d37e9*/
  *a3 = v12 * *a3; /*0x6d37ed*/
  *a6 = v24 / v13 * *a6; /*0x6d37f3*/
  return a3; /*0x6d37f6*/
}
