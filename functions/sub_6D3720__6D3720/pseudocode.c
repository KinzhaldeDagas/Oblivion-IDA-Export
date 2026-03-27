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

  v17 = a4 - a1;
  v18 = a5 - a2;
  v21 = a7 - a2;
  v24 = a5 - a7;
  v11 = v21;
  v12 = v21 / v18;
  v13 = v18;
  v22 = v12;
  v14 = dbl_A3D0C0;
  v19 = *a3 - v17 * v14 + *a6;
  v15 = dbl_A30E48;
  v16 = v19 * v15 * v22;
  v20 = v17 * v15 - *a3 * v14 - *a6;
  v23 = ((v14 * v20 + v16) * v22 + *a3) / v13;
  *a9 = v23;
  *a10 = v23 * v24;
  *a9 = v11 * *a9;
  *a3 = v12 * *a3;
  *a6 = v24 / v13 * *a6;
  return a3;
}
