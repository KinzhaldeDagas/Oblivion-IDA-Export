signed int __thiscall sub_4C9C80(_BYTE *this, float *a2)
{
  int v2; // esi
  double v4; // st7
  double v5; // st7
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]

  v2 = 0; /*0x4c9c81*/
  if ( (*(this + 0x24) & 1) == 0 ) /*0x4c9c87*/
  {
    v4 = *a2; /*0x4c9c8e*/
    unknown_libname_14(dbl_A37650, v4); /*0x4c9c96*/
    v7 = v4; /*0x4c9c9b*/
    v2 = (int)abs32(Double_To_SInt32(v7)) > 0x800; /*0x4c9cb4*/
    v5 = a2[1]; /*0x4c9cb9*/
    unknown_libname_14(dbl_A37650, v5); /*0x4c9cc2*/
    v8 = v5; /*0x4c9cc7*/
    if ( (int)abs32(Double_To_SInt32(v8)) > 0x800 ) /*0x4c9cdf*/
      v2 += 2; /*0x4c9ce1*/
  }
  return v2; /*0x4c9ce6*/
}
