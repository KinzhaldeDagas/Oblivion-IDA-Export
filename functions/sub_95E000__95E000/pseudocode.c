bool __cdecl sub_95E000(float a1, float *a2, float *a3, float *a4, float *a5)
{
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+18h] [ebp+8h]
  int v11; // [esp+18h] [ebp+8h]

  v10 = a4[2] * a2[2] + a2[1] * a4[1] + a4[3] * a2[3];
  if ( v10 > dbl_AA3A10 || -a4[4] >= a2[4] )
    return 1;
  v7 = *a5 - *a3;
  v8 = a5[1] - a3[1];
  v9 = a5[2] - a3[2];
  *(float *)&v11 = a2[1] * v7 + a2[2] * v8 + a2[3] * v9;
  return *(float *)&v11 > 0.0 && a2[4] <= *(float *)&v11 * a1 - a4[4];
}
