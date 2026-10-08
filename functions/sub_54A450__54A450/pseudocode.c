float *__cdecl sub_54A450(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = unk_B39AF8 * dbl_A31C78; /*0x54a461*/
  *a2 = v3; /*0x54a467*/
  if ( v3 < 0.0 ) /*0x54a474*/
    *a2 = 0.0; /*0x54a476*/
  if ( *a2 > dbl_A641E0 ) /*0x54a489*/
    *a2 = flt_A3F3E0; /*0x54a491*/
  *a1 = *a2 * dbl_A3D360; /*0x54a49f*/
  return a1; /*0x54a4a2*/
}
