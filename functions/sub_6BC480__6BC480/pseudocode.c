float *__cdecl sub_6BC480(float a1, float *a2, int a3, float *a4)
{
  double v4; // st7
  double v5; // rt1
  double v7; // st7
  float v8; // [esp+0h] [ebp-24h]
  float v9; // [esp+4h] [ebp-20h]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+Ch] [ebp-18h]
  float v13; // [esp+10h] [ebp-14h]
  float v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  float v20; // [esp+1Ch] [ebp-8h]
  float v21; // [esp+20h] [ebp-4h]
  float v22; // [esp+20h] [ebp-4h]
  float v23; // [esp+28h] [ebp+4h]

  v4 = a1;
  v23 = dbl_A30E48 * a1;
  v11 = a2[0xD] * v23;
  v13 = a2[0xE] * v23;
  v15 = v23 * a2[0xF];
  v5 = dbl_A3D0C0;
  v8 = a2[0xA] * v5;
  v9 = a2[0xB] * v5;
  v10 = v5 * a2[0xC];
  v17 = v8 + v11;
  v19 = v9 + v13;
  v21 = v10 + v15;
  v12 = v17 * v4;
  v14 = v19 * v4;
  v16 = v4 * v21;
  v18 = a2[7] + v12;
  v20 = a2[8] + v14;
  v7 = a2[9] + v16;
  *a4 = v18;
  a4[1] = v20;
  v22 = v7;
  a4[2] = v22;
  return a4;
}
