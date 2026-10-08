double __cdecl sub_612820(float a1)
{
  long double v1; // st7

  v1 = a1; /*0x612820*/
  if ( a1 <= dbl_A3D360 ) /*0x61282f*/
    return unk_B3F9A4; /*0x612851*/
  if ( v1 >= 1.0 ) /*0x61283a*/
    return 0.0; /*0x61284c*/
  return (float)acos(v1); /*0x612849*/
}
