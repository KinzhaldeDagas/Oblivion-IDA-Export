float *__cdecl sub_714DB0(float *a1, float *a2)
{
  long double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+10h] [ebp+8h]
  float v11; // [esp+10h] [ebp+8h]
  float v12; // [esp+10h] [ebp+8h]

  v3 = *a2;
  if ( v3 <= dbl_A3D360 )
  {
    v4 = flt_B3F9A4;
  }
  else if ( v3 >= 1.0 )
  {
    v4 = 0.0;
  }
  else
  {
    v10 = acos(v3);
    v4 = v10;
  }
  v11 = v4;
  v8 = sin(v11);
  v5 = v8;
  v9 = fabs(v8);
  if ( v9 >= (double)flt_A7EAB0 )
    v6 = v11 / v5;
  else
    v6 = 1.0;
  v12 = v6;
  *a1 = 0.0;
  a1[1] = a2[1] * v12;
  a1[2] = a2[2] * v12;
  a1[3] = v12 * a2[3];
  return a1;
}
