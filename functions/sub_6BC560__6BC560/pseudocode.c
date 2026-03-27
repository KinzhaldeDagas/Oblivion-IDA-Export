float *__cdecl sub_6BC560(float a1, float *a2, int a3, float *a4)
{
  double v4; // rt1
  float v6; // [esp+0h] [ebp-24h]
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+28h] [ebp+4h]

  v15 = a1 * dbl_A3F3A0;
  v9 = a2[0xD] * v15;
  v10 = a2[0xE] * v15;
  v11 = v15 * a2[0xF];
  v4 = dbl_A3D0C0;
  v6 = a2[0xA] * v4;
  v7 = a2[0xB] * v4;
  v8 = v4 * a2[0xC];
  v12 = v6 + v9;
  *a4 = v12;
  v13 = v10 + v7;
  a4[1] = v13;
  v14 = v8 + v11;
  a4[2] = v14;
  return a4;
}
