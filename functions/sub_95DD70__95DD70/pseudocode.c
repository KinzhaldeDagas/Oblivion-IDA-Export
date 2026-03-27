bool __cdecl sub_95DD70(float a1, float *a2, float *a3, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+0h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]
  float v17; // [esp+14h] [ebp+8h]
  float v18; // [esp+14h] [ebp+8h]
  float v19; // [esp+14h] [ebp+8h]
  float v20; // [esp+14h] [ebp+8h]
  float v21; // [esp+14h] [ebp+8h]
  float v22; // [esp+14h] [ebp+8h]
  float v23; // [esp+14h] [ebp+8h]
  float v24; // [esp+14h] [ebp+8h]
  int v25; // [esp+14h] [ebp+8h]
  float v26; // [esp+1Ch] [ebp+10h]
  int v27; // [esp+1Ch] [ebp+10h]

  v17 = a4[5] * a2[2] + a4[4] * a2[1] + a4[6] * a2[3];
  v11 = v17 * a4[0xD];
  v18 = a4[8] * a2[2] + a4[7] * a2[1] + a4[9] * a2[3];
  v13 = v18 * a4[0xE];
  v19 = a4[0xB] * a2[2] + a4[0xA] * a2[1] + a4[0xC] * a2[3];
  v15 = v19 * a4[0xF];
  v20 = fabs(v13);
  v7 = v20;
  v21 = fabs(v11);
  v8 = v7 + v21;
  v22 = fabs(v15);
  v26 = v8 + v22;
  v23 = a4[2] * a2[2] + a4[1] * a2[1] + a4[3] * a2[3];
  v24 = v23 - a2[4];
  *(float *)&v27 = -v26;
  v9 = v24;
  if ( *(float *)&v27 <= (double)v24 )
    return 1;
  v12 = *a5 - *a3;
  v14 = a5[1] - a3[1];
  v16 = a5[2] - a3[2];
  *(float *)&v25 = a2[2] * v14 + v12 * a2[1] + v16 * a2[3];
  return *(float *)&v25 > 0.0 && *(float *)&v27 <= v9 + *(float *)&v25 * a1;
}
