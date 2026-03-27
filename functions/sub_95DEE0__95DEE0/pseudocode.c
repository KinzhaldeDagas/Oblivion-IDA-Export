bool __cdecl sub_95DEE0(float a1, float *a2, float *a3, float *a4, float *a5)
{
  double v7; // st7
  double v9; // st6
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+14h] [ebp+8h]
  float v14; // [esp+14h] [ebp+8h]
  float v15; // [esp+14h] [ebp+8h]
  float v16; // [esp+14h] [ebp+8h]
  int v17; // [esp+14h] [ebp+8h]
  int v18; // [esp+14h] [ebp+8h]
  int v19; // [esp+1Ch] [ebp+10h]

  v13 = a4[9] * a2[2] + a4[8] * a2[1] + a4[0xA] * a2[3];
  v14 = v13 - a2[4];
  *(float *)&v19 = -a4[0xE];
  v7 = v14;
  if ( *(float *)&v19 <= (double)v14 )
    return 1;
  v15 = a4[0xC] * a2[2] + a4[0xB] * a2[1] + a4[0xD] * a2[3];
  v16 = v15 + v7;
  v9 = v16;
  if ( v16 >= (double)*(float *)&v19 )
    return 1;
  v10 = *a5 - *a3;
  v11 = a5[1] - a3[1];
  v12 = a5[2] - a3[2];
  *(float *)&v17 = a2[2] * v11 + v10 * a2[1] + a2[3] * v12;
  if ( *(float *)&v17 <= 0.0 )
    return 0;
  *(float *)&v18 = -(*(float *)&v17 * a1 + a4[0xE]);
  return *(float *)&v18 <= v7 || v9 >= *(float *)&v18;
}
