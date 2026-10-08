// MoonSugarEffect decode: triggers native Gethit/double-vision if byte_B2D91C is set. Uses configured blocked/nonblocked offsets and updates flt_B46124/flt_B46120.
void __cdecl sub_7EB010(char a1)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  if ( byte_B2D91C ) /*0x7eb013*/
  {
    if ( a1 ) /*0x7eb021*/
    {
      v2 = unk_B4612C; /*0x7eb029*/
      v1 = flt_A3744C; /*0x7eb02c*/
    }
    else
    {
      v2 = unk_B46128; /*0x7eb03a*/
      v1 = 1.0; /*0x7eb03d*/
    }
    if ( v2 >= (double)unk_B46124 ) /*0x7eb055*/
      unk_B46124 = v2; /*0x7eb057*/
    v3 = v1; /*0x7eb03f*/
    unk_B46120 = v3; /*0x7eb061*/
  }
}
