BOOL __cdecl sub_96C550(float a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st5
  double v7; // st6
  double v8; // st5
  double v9; // st6
  double v10; // st7
  double v11; // st7
  double v12; // st6
  float v14; // [esp+0h] [ebp-10h]
  float v15; // [esp+4h] [ebp-Ch]
  float v16; // [esp+4h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+8h] [ebp-8h]
  float v19; // [esp+Ch] [ebp-4h]
  float v20; // [esp+Ch] [ebp-4h]
  float v21; // [esp+18h] [ebp+8h]
  float v22; // [esp+1Ch] [ebp+Ch]
  int v23; // [esp+1Ch] [ebp+Ch]
  int v24; // [esp+24h] [ebp+14h]

  v15 = *a5 - *a3;
  v17 = a5[1] - a3[1];
  v19 = a5[2] - a3[2];
  v5 = v17;
  v6 = v15;
  v7 = v19;
  v14 = v19 * v19 + v17 * v17 + v15 * v15;
  v16 = a4[1] - a2[1];
  v18 = a4[2] - a2[2];
  v20 = a4[3] - a2[3];
  *(float *)&v24 = v18 * v18 + v16 * v16 + v20 * v20;
  v22 = a2[4] + a4[4];
  *(float *)&v23 = v22 * v22;
  if ( v14 <= 0.0 || (v8 = v7 * v20 + v6 * v16 + v5 * v18, v9 = v14, v21 = v8, v10 = v21, v21 > 0.0) )
  {
    v11 = *(float *)&v24;
    goto LABEL_7;
  }
  if ( -a1 * v9 > v10 )
  {
    v11 = a1 * (v9 * a1 + v10 + v10) + *(float *)&v24;
LABEL_7:
    v12 = *(float *)&v23;
    return v12 >= v11;
  }
  v11 = *(float *)&v24 * v9 - v10 * v10;
  v12 = v9 * *(float *)&v23;
  return v12 >= v11;
}
