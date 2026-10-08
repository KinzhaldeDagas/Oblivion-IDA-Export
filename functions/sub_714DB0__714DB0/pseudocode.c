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

  v3 = *a2; /*0x714dbc*/
  if ( v3 <= dbl_A3D360 ) /*0x714dcb*/
  {
    v4 = unk_B3F9A4; /*0x714def*/
  }
  else if ( v3 >= 1.0 ) /*0x714dd6*/
  {
    v4 = 0.0; /*0x714de9*/
  }
  else
  {
    v10 = acos(v3); /*0x714ddd*/
    v4 = v10; /*0x714de1*/
  }
  v11 = v4; /*0x714df5*/
  v8 = sin(v11); /*0x714e02*/
  v5 = v8; /*0x714e0e*/
  v9 = fabs(v8); /*0x714e16*/
  if ( v9 >= (double)flt_A7EAB0 ) /*0x714e29*/
    v6 = v11 / v5; /*0x714e31*/
  else
    v6 = 1.0; /*0x714e2d*/
  v12 = v6; /*0x714e39*/
  *a1 = 0.0; /*0x714e3f*/
  a1[1] = a2[1] * v12; /*0x714e4e*/
  a1[2] = a2[2] * v12; /*0x714e56*/
  a1[3] = v12 * a2[3]; /*0x714e5d*/
  return a1; /*0x714e60*/
}
