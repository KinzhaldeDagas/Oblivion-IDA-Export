double __thiscall sub_957E90(float *this, int a2)
{
  double v2; // st6
  double v3; // st5
  double v4; // st6
  double v5; // st6
  double v6; // st7
  double v8; // st7

  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) ) /*0x957ea8*/
  {
    v5 = *(float *)(a2 + 0x10); /*0x957ee1*/
  }
  else
  {
    v2 = *(float *)(a2 + 0xC) - *(float *)(a2 + 8); /*0x957ead*/
    v3 = *(this + 7); /*0x957eb0*/
    if ( v3 >= v2 ) /*0x957eba*/
      v3 = v2; /*0x957ebe*/
    v4 = v2 + v3; /*0x957ec0*/
    if ( v4 <= *(float *)&SrcStr ) /*0x957ecd*/
      v5 = flt_AA3584; /*0x957ed9*/
    else
      v5 = fConstant_1 / v4; /*0x957ecf*/
  }
  v6 = (*(float *)(a2 + 0x20) - (*(float *)(a2 + 0xC) + *(float *)(a2 + 8)) * kHeadBodyNormalMatchRadius) * v5; /*0x957ee4*/
  if ( v6 < *(float *)&SrcStr ) /*0x957ef1*/
    return *(float *)&SrcStr; /*0x957ef5*/
  v8 = v6 * v6; /*0x957f00*/
  return (v8 * v8 * (v8 * v8) * flt_A5739C + v8 * v8 * *(float *)&dword_A46C30 + v8 * flt_AA3580) * *(this + 5); /*0x957efb*/
}
