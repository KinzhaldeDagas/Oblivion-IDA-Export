float *__cdecl sub_977C60(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st7
  float v10; // [esp+0h] [ebp-24h]
  float v11; // [esp+0h] [ebp-24h]
  float v12; // [esp+4h] [ebp-20h]
  float v13; // [esp+8h] [ebp-1Ch]
  float v14; // [esp+Ch] [ebp-18h]
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]
  float v20; // [esp+28h] [ebp+4h]
  float v21; // [esp+28h] [ebp+4h]
  float v22; // [esp+28h] [ebp+4h]
  float v23; // [esp+28h] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+8h]
  float v25; // [esp+30h] [ebp+Ch]
  float v26; // [esp+34h] [ebp+10h]

  v10 = *a1 - *a3;
  v12 = a1[1] - a3[1];
  v13 = a1[2] - a3[2];
  v14 = *a2 - *a3;
  v15 = a2[1] - a3[1];
  v16 = a2[2] - a3[2];
  v17 = *a4 - *a3;
  v18 = a4[1] - a3[1];
  v19 = a4[2] - a3[2];
  v24 = v13 * v13 + v10 * v10 + v12 * v12;
  v20 = v14 * v10 + v15 * v12 + v16 * v13;
  v25 = v14 * v14 + v15 * v15 + v16 * v16;
  v26 = v13 * v19 + v12 * v18 + v10 * v17;
  v11 = v19 * v16 + v15 * v18 + v14 * v17;
  v6 = v20;
  v21 = 1.0 / (v25 * v24 - v20 * v20);
  v7 = v21;
  v22 = (v25 * v26 - v11 * v6) * v21;
  *a5 = v22;
  v8 = v24 * v11 - v6 * v26;
  v9 = v22;
  v23 = v7 * v8;
  a5[1] = v23;
  a5[2] = 1.0 - v9 - v23;
  return a5;
}
