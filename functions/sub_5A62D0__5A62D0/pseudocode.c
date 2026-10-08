double __cdecl sub_5A62D0(float *a1, float *a2)
{
  double v3; // st6
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+18h] [ebp+8h]
  float v8; // [esp+18h] [ebp+8h]
  float v9; // [esp+18h] [ebp+8h]

  v4 = 0.0; /*0x5a62dd*/
  v5 = *a2 - *a1; /*0x5a62e4*/
  v6 = a2[1] - a1[1]; /*0x5a62ee*/
  if ( v6 == 0.0 ) /*0x5a6301*/
  {
    if ( v5 < 0.0 ) /*0x5a638c*/
      v4 = flt_A449C0; /*0x5a6394*/
  }
  else
  {
    v7 = v5 / v6; /*0x5a6309*/
    v8 = atan(v7); /*0x5a6316*/
    v4 = v8; /*0x5a631e*/
    if ( v6 < 0.0 ) /*0x5a632c*/
      v4 = v8 + dbl_A3D5B8; /*0x5a6337*/
    if ( v4 < 0.0 ) /*0x5a6346*/
    {
      v9 = v4 + dbl_A3D5B0; /*0x5a6352*/
      unknown_libname_14(dbl_A3D5B0, v9); /*0x5a635c*/
      return (float)(v9 * dbl_A30DC8); /*0x5a6380*/
    }
  }
  v3 = dbl_A3D5B0; /*0x5a639e*/
  if ( v3 <= v4 ) /*0x5a63ab*/
    unknown_libname_14(v3, v4); /*0x5a63ad*/
  return (float)(v4 * dbl_A30DC8); /*0x5a637d*/
}
