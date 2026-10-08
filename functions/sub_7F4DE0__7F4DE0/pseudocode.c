// MoonSugarEffect decode: NightEye shader setter clamps flt_B46914 and writes NightEye shader constants; owned by NightEye actor-value path.
void __cdecl sub_7F4DE0(float a1, float a2, float a3, float a4)
{
  double v4; // st7

  v4 = a1; /*0x7f4de0*/
  if ( a1 < 0.0 ) /*0x7f4def*/
    a1 = 0.0; /*0x7f4df1*/
  if ( a1 <= dbl_A2F928 ) /*0x7f4e0e*/
  {
    if ( v4 < 0.0 ) /*0x7f4e23*/
      v4 = 0.0; /*0x7f4e25*/
  }
  else
  {
    v4 = 1.0; /*0x7f4e16*/
  }
  unk_B46914 = v4; /*0x7f4e2b*/
  unk_B46918 = a2; /*0x7f4e35*/
  unk_B4691C = a3; /*0x7f4e3f*/
  unk_B46920 = a4; /*0x7f4e49*/
}
