float *__cdecl sub_78F250(float *a1, float *a2, float *a3, float a4)
{
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+4h] [ebp-14h]
  float v7; // [esp+8h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]

  v5 = *a3 - *a2;
  v6 = a3[1] - a2[1];
  v7 = a3[2] - a2[2];
  v8 = v5 * a4;
  v9 = v6 * a4;
  v10 = a4 * v7;
  *a1 = *a2 + v8;
  a1[1] = v9 + a2[1];
  a1[2] = a2[2] + v10;
  return a1;
}
