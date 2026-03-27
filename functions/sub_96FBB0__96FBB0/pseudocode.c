double __cdecl sub_96FBB0(float *a1, float *a2, float *a3)
{
  double v3; // st6
  double v4; // st5
  double v5; // st7
  double v6; // st4
  double v7; // st7
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+8h] [ebp-10h]
  float v15; // [esp+Ch] [ebp-Ch]
  float v16; // [esp+10h] [ebp-8h]
  float v17; // [esp+14h] [ebp-4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]

  v9 = *a1 - *a2;
  v11 = a1[1] - a2[1];
  v13 = a1[2] - a2[2];
  v3 = v11;
  v4 = v9;
  v5 = v13;
  v18 = a2[5] * v13 + a2[4] * v11 + v9 * a2[3];
  v6 = v18;
  *a3 = v18;
  if ( v18 > 0.0 )
  {
    v19 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5];
    if ( v19 > v6 )
    {
      v20 = v6 / v19;
      *a3 = v20;
      v15 = a2[3] * v20;
      v16 = a2[4] * v20;
      v17 = v20 * a2[5];
      v10 = v4 - v15;
      v12 = v3 - v16;
      v7 = v5 - v17;
    }
    else
    {
      *a3 = 1.0;
      v10 = v4 - a2[3];
      v12 = v3 - a2[4];
      v7 = v5 - a2[5];
    }
    v14 = v7;
    v5 = v14;
    v3 = v12;
    v4 = v10;
  }
  else
  {
    *a3 = 0.0;
  }
  return (float)(v5 * v5 + v3 * v3 + v4 * v4);
}
