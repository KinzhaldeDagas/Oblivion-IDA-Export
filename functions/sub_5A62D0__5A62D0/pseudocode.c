double __cdecl sub_5A62D0(float *a1, float *a2)
{
  double v3; // st6
  float v4; // [esp+0h] [ebp-10h]
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+18h] [ebp+8h]
  float v8; // [esp+18h] [ebp+8h]
  float v9; // [esp+18h] [ebp+8h]

  v4 = 0.0;
  v5 = *a2 - *a1;
  v6 = a2[1] - a1[1];
  if ( v6 == 0.0 )
  {
    if ( v5 < 0.0 )
      v4 = flt_A449C0;
  }
  else
  {
    v7 = v5 / v6;
    v8 = atan(v7);
    v4 = v8;
    if ( v6 < 0.0 )
      v4 = v8 + dbl_A3D5B8;
    if ( v4 < 0.0 )
    {
      v9 = v4 + dbl_A3D5B0;
      unknown_libname_14(dbl_A3D5B0, v9);
      return (float)(v9 * dbl_A30DC8);
    }
  }
  v3 = dbl_A3D5B0;
  if ( v3 <= v4 )
    unknown_libname_14(v3, v4);
  return (float)(v4 * dbl_A30DC8);
}
