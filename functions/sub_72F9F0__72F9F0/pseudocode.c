float *__cdecl sub_72F9F0(float *a1, float *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]
  float v11; // [esp+24h] [ebp+8h]
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]
  float v15; // [esp+24h] [ebp+8h]
  float v16; // [esp+24h] [ebp+8h]
  float v17; // [esp+24h] [ebp+8h]
  float v18; // [esp+24h] [ebp+8h]

  v11 = a2[2] * a2[2] + a2[1] * a2[1] + a2[3] * a2[3];
  v12 = sqrt(v11);
  v9 = v12;
  v10 = cos(v12);
  v13 = sin(v12);
  v3 = v13;
  v14 = fabs(v13);
  if ( flt_A7EAB0 <= (double)v14 )
    v4 = v3 / v9;
  else
    v4 = 1.0;
  v15 = v4;
  v5 = v15;
  v16 = a2[3] * v15;
  v8 = v16;
  v17 = v5 * a2[2];
  v7 = v17;
  v18 = v5 * a2[1];
  sub_714C40(a1, v10, v18, v7, v8);
  return a1;
}
