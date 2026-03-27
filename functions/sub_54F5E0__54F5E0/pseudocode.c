float *__cdecl sub_54F5E0(float a1, float a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+4h] [ebp+4h]

  v4 = dbl_A3D360;
  v6 = a1 * v4 + a2;
  if ( v6 < 0.0 )
  {
    *a3 = v4 * v6;
    *a4 = 0.0;
    return a4;
  }
  else
  {
    *a3 = 0.0;
    *a4 = v6;
    return a3;
  }
}
