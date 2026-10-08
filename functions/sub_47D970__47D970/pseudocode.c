double __cdecl sub_47D970(float a1)
{
  long double v1; // st7

  v1 = a1; /*0x47d970*/
  if ( a1 <= dbl_A3D360 ) /*0x47d97f*/
    return -unk_B3F99C; /*0x47d9ab*/
  if ( v1 >= 1.0 ) /*0x47d98a*/
    return unk_B3F99C; /*0x47d99c*/
  return (float)asin(v1); /*0x47d999*/
}
