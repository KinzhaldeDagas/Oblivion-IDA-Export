float *__cdecl sub_6BC3A0(float a1, float *a2, int a3, float *a4)
{
  double v5; // st7
  float v6; // [esp+0h] [ebp-18h]
  float v7; // [esp+0h] [ebp-18h]
  float v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-Ch]
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-Ch]
  float v18; // [esp+10h] [ebp-8h]
  float v19; // [esp+10h] [ebp-8h]
  float v20; // [esp+10h] [ebp-8h]
  float v21; // [esp+14h] [ebp-4h]
  float v22; // [esp+14h] [ebp-4h]
  float v23; // [esp+14h] [ebp-4h]

  v6 = a2[0xD] * a1;
  v9 = a2[0xE] * a1;
  v12 = a2[0xF] * a1;
  v15 = a2[0xA] + v6;
  v18 = a2[0xB] + v9;
  v21 = a2[0xC] + v12;
  v7 = v15 * a1;
  v10 = v18 * a1;
  v13 = v21 * a1;
  v16 = a2[7] + v7;
  v19 = a2[8] + v10;
  v22 = a2[9] + v13;
  v8 = v16 * a1;
  v11 = v19 * a1;
  v14 = a1 * v22;
  v17 = a2[1] + v8;
  v20 = a2[2] + v11;
  v5 = a2[3] + v14;
  *a4 = v17;
  a4[1] = v20;
  v23 = v5;
  a4[2] = v23;
  return a4;
}
