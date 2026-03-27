bool __cdecl sub_96E4C0(float *a1, float *a2, float *a3)
{
  double v3; // st3
  double v5; // st7
  float v6; // [esp+0h] [ebp-1Ch]
  float v7; // [esp+4h] [ebp-18h]
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+18h] [ebp-4h]
  float v10; // [esp+20h] [ebp+4h]
  float v11; // [esp+20h] [ebp+4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]

  v9 = a1[0xB];
  v6 = *a2 - a1[8];
  v7 = a2[1] - a1[9];
  v8 = a2[2] - a1[0xA];
  v10 = v6 * v6 + v7 * v7 + v8 * v8;
  v11 = v10 - v9 * v9;
  v3 = v11;
  if ( v11 <= 0.0 )
    return 1;
  v12 = v8 * a3[2] + v6 * *a3 + v7 * a3[1];
  if ( v12 >= 0.0 )
    return 0;
  v5 = v12 * v12;
  v13 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1];
  return v3 * v13 <= v5;
}
