void __cdecl sub_54A4B0(float *a1, float *a2)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  v2 = dbl_A31C78;
  v3 = flt_B39B00 * v2;
  *a1 = v3;
  if ( v3 > 0.0 )
    *a1 = 0.0;
  if ( *a1 < dbl_A641E8 )
    *a1 = flt_A3721C;
  v4 = v2 * flt_B39B08;
  *a2 = v4;
  if ( v4 < 0.0 )
    *a2 = 0.0;
  if ( *a2 > dbl_A641E0 )
    *a2 = flt_A3F3E0;
}
