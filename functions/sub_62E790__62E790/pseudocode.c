float *__cdecl sub_62E790(float *a1, float a2, float a3, float a4, float a5, float a6)
{
  double v7; // st7
  float v9; // [esp+4h] [ebp-20h]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]
  float v17; // [esp+28h] [ebp+4h]
  int v18; // [esp+28h] [ebp+4h]

  v10 = (double)GetRandomLargeInteger_(0) - dbl_A71DB8;
  v9 = (double)GetRandomLargeInteger_(0) - dbl_A71DB8;
  *a1 = v10;
  a1[1] = v9;
  a1[2] = 0.0;
  sub_43F350(a1);
  v17 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8;
  *(float *)&v18 = (a5 + a6) * v17;
  if ( *(float *)&v18 >= (double)a6 )
    v7 = *(float *)&v18;
  else
    v7 = a6;
  v11 = *a1 * v7;
  v12 = a1[1] * v7;
  v13 = v7 * a1[2];
  v14 = v11 + a2;
  *a1 = v14;
  v15 = a3 + v12;
  a1[1] = v15;
  v16 = a4 + v13;
  a1[2] = v16;
  return a1;
}
