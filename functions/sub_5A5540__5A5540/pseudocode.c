bool __usercall sub_5A5540@<al>(_DWORD *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  bool v4; // zf
  double Float; // st5
  bool result; // al

  if ( (int)++a1[0x16] > 0x3C ) /*0x5a554b*/
  {
    v4 = a1[0x15] == 0; /*0x5a554d*/
    a1[0x16] = 0; /*0x5a5551*/
    if ( !v4 ) /*0x5a5558*/
    {
      Float = Tile_GetFloat((_DWORD *)a1[1], 0xFB2); /*0x5a5562*/
      if ( a3 == fConstant_2 ) /*0x5a5572*/
        return sub_5A4980(Float, a2, a3, (TESObjectREFR *)a1[0x15], 1, 1); /*0x5a557d*/
      else
        return sub_5A4980(Float, a2, a3, (TESObjectREFR *)a1[0x15], 0, 1); /*0x5a5590*/
    }
  }
  return result; /*0x5a5585*/
}
