float *__cdecl sub_6F9290(float *a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st3
  float v7; // [esp+0h] [ebp-24h] BYREF
  float v8; // [esp+4h] [ebp-20h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch]
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]

  v8 = a3;
  v7 = a2;
  v9 = a4;
  sub_43F350(&v7);
  v4 = v7;
  a2 = fabs(v7);
  v10 = a2;
  a2 = fabs(v8);
  v11 = a2;
  a2 = fabs(v9);
  v12 = a2;
  v5 = v11;
  if ( v11 < (double)v10 || a2 < (double)v10 )
  {
    if ( v10 < v5 || v5 > a2 )
    {
      v10 = -v8;
      v11 = v7;
      v4 = 0.0;
    }
    else
    {
      v10 = -v9;
      v11 = 0.0;
    }
  }
  else
  {
    v10 = 0.0;
    v4 = v8;
    v11 = -v9;
  }
  v12 = v4;
  a3 = v11;
  a2 = v10;
  a4 = v12;
  sub_43F350(&a2);
  v13 = a3 * v9 - a4 * v8;
  v10 = v13;
  v14 = a4 * v7 - v9 * a2;
  v11 = v14;
  v15 = v8 * a2 - a3 * v7;
  v12 = v15;
  sub_43F350(&v10);
  v13 = v11 * v9 - v12 * v8;
  a2 = v13;
  v14 = v12 * v7 - v9 * v10;
  a3 = v14;
  v15 = v8 * v10 - v11 * v7;
  a4 = v15;
  sub_43F350(&a2);
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = v10;
  a1[4] = v11;
  a1[5] = v12;
  a1[6] = v7;
  a1[7] = v8;
  a1[8] = v9;
  return a1;
}
