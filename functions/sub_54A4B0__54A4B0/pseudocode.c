void __cdecl sub_54A4B0(float *a1, float *a2)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  v2 = dbl_A31C78; /*0x54a4c3*/
  v3 = unk_B39B00 * v2; /*0x54a4c5*/
  *a1 = v3; /*0x54a4cb*/
  if ( v3 > 0.0 ) /*0x54a4d8*/
    *a1 = 0.0; /*0x54a4da*/
  if ( *a1 < dbl_A641E8 ) /*0x54a4e9*/
    *a1 = flt_A3721C; /*0x54a4f1*/
  v4 = v2 * unk_B39B08; /*0x54a501*/
  *a2 = v4; /*0x54a509*/
  if ( v4 < 0.0 ) /*0x54a512*/
    *a2 = 0.0; /*0x54a514*/
  if ( *a2 > dbl_A641E0 ) /*0x54a527*/
    *a2 = flt_A3F3E0; /*0x54a52f*/
}
