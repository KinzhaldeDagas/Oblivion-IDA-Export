float *__cdecl sub_54A450(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_B39AF8 * dbl_A31C78;
  *a2 = v3;
  if ( v3 < 0.0 )
    *a2 = 0.0;
  if ( *a2 > dbl_A641E0 )
    *a2 = flt_A3F3E0;
  *a1 = *a2 * dbl_A3D360;
  return a1;
}
