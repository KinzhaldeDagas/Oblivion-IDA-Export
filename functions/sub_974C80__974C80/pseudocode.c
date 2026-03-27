double __cdecl sub_974C80(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st4
  double v9; // st7
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-Ch]
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]
  float v17; // [esp+Ch] [ebp-4h]
  float v18; // [esp+14h] [ebp+4h]
  float v19; // [esp+14h] [ebp+4h]
  float v20; // [esp+14h] [ebp+4h]
  float v21; // [esp+14h] [ebp+4h]
  float v22; // [esp+14h] [ebp+4h]
  float v23; // [esp+14h] [ebp+4h]

  v11 = 0.0;
  v12 = *a1 - *a2;
  v14 = a1[1] - a2[1];
  v16 = a1[2] - a2[2];
  v5 = v14;
  v6 = v12;
  v13 = a2[4] * v14 + a2[3] * v12 + a2[5] * v16;
  v7 = v13;
  if ( -a2[0xC] <= v13 )
  {
    if ( a2[0xC] < v7 )
    {
      v19 = v7 - a2[0xC];
      v11 = v19 * v19 + dbl_A2FC68;
      v13 = a2[0xC];
    }
  }
  else
  {
    v18 = v7 + a2[0xC];
    v11 = v18 * v18 + dbl_A2FC68;
    v13 = -a2[0xC];
  }
  v15 = a2[7] * v5 + a2[6] * v6 + a2[8] * v16;
  v8 = v15;
  if ( -a2[0xD] <= v15 )
  {
    if ( a2[0xD] < v8 )
    {
      v21 = v8 - a2[0xD];
      v11 = v21 * v21 + v11;
      v15 = a2[0xD];
    }
  }
  else
  {
    v20 = v8 + a2[0xD];
    v11 = v20 * v20 + v11;
    v15 = -a2[0xD];
  }
  v17 = v16 * a2[0xB] + v6 * a2[9] + v5 * a2[0xA];
  v9 = v17;
  if ( -a2[0xE] <= v17 )
  {
    if ( a2[0xE] < v9 )
    {
      v23 = v9 - a2[0xE];
      v11 = v23 * v23 + v11;
      v17 = a2[0xE];
    }
  }
  else
  {
    v22 = v9 + a2[0xE];
    v11 = v22 * v22 + v11;
    v17 = -a2[0xE];
  }
  *a3 = v13;
  *a4 = v15;
  *a5 = v17;
  return v11;
}
