float *__cdecl sub_6BF3E0(float a1, float *a2, float *a3, float *a4)
{
  float v6; // [esp+0h] [ebp-24h]
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+2Ch] [ebp+8h]

  v15 = 1.0 - a1;
  v9 = a2[1] * v15;
  v10 = a2[2] * v15;
  v11 = v15 * a2[3];
  v6 = a3[1] * a1;
  v7 = a3[2] * a1;
  v8 = a1 * a3[3];
  v12 = v6 + v9;
  *a4 = v12;
  v13 = v10 + v7;
  a4[1] = v13;
  v14 = v8 + v11;
  a4[2] = v14;
  return a4;
}
