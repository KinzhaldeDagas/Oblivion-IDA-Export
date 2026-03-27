double __thiscall sub_957F30(float *this, int a2)
{
  double v2; // st6
  double v3; // st5
  double v4; // st6
  double v5; // st6
  double v6; // st7
  double v8; // st7

  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
  {
    v5 = *(float *)(a2 + 0x10);
  }
  else
  {
    v2 = *(float *)(a2 + 0xC) - *(float *)(a2 + 8);
    v3 = *(this + 7);
    if ( v3 >= v2 )
      v3 = v2;
    v4 = v2 + v3;
    if ( v4 <= *(float *)&SrcStr )
      v5 = flt_AA3584;
    else
      v5 = fConstant_1 / v4;
  }
  v6 = (*(float *)(a2 + 0x38) - (*(float *)(a2 + 0xC) + *(float *)(a2 + 8)) * flt_A3D65C) * v5;
  if ( v6 > *(float *)&SrcStr )
    return *(float *)&SrcStr;
  v8 = v6 * v6;
  return (v8 * v8 * (v8 * v8) * flt_A5739C + v8 * v8 * *(float *)&dword_A46C30 + v8 * flt_AA3580) * *(this + 5);
}
