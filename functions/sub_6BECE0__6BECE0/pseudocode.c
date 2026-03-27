float *__cdecl sub_6BECE0(float a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+0h] [ebp-30h]
  float v7; // [esp+4h] [ebp-2Ch]
  float v8; // [esp+8h] [ebp-28h]
  float v9; // [esp+Ch] [ebp-24h]
  float v10; // [esp+10h] [ebp-20h]
  float v11; // [esp+14h] [ebp-1Ch]
  float v12; // [esp+18h] [ebp-18h]
  float v13; // [esp+1Ch] [ebp-14h]
  float v14; // [esp+20h] [ebp-10h]
  float v15; // [esp+24h] [ebp-Ch]
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h]
  float v18; // [esp+34h] [ebp+4h]

  v4 = a1;
  v18 = 1.0 - a1;
  v10 = a2[1] * v18;
  v11 = a2[2] * v18;
  v12 = a2[3] * v18;
  v13 = v18 * a2[4];
  v6 = a3[1] * v4;
  v7 = a3[2] * v4;
  v8 = a3[3] * v4;
  v9 = v4 * a3[4];
  v14 = v6 + v10;
  *a4 = v14;
  v15 = v7 + v11;
  a4[1] = v15;
  v16 = v8 + v12;
  a4[2] = v16;
  v17 = v9 + v13;
  a4[3] = v17;
  return a4;
}
