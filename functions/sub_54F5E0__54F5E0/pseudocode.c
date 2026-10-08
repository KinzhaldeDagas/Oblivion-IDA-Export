float *__cdecl sub_54F5E0(float a1, float a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+4h] [ebp+4h]

  v4 = dbl_A3D360; /*0x54f5f2*/
  v6 = a1 * v4 + a2; /*0x54f5f4*/
  if ( v6 < 0.0 ) /*0x54f605*/
  {
    *a3 = v4 * v6; /*0x54f622*/
    *a4 = 0.0; /*0x54f624*/
    return a4; /*0x54f61c*/
  }
  else
  {
    *a3 = 0.0; /*0x54f611*/
    *a4 = v6; /*0x54f613*/
    return a3; /*0x54f607*/
  }
}
