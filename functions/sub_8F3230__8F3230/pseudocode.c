int __thiscall sub_8F3230(int this, _OWORD *a2, _OWORD *a3, float a4, float a5)
{
  int v5; // ecx

  *(float *)(this + 0xC) = a5;
  *(_WORD *)(this + 6) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = &off_A9B230;
  if ( flt_B2FDC4 < (double)*(float *)&SrcStr )
    flt_B2FDC4 = fConstant_1 - sub_8F22B0();
  *(float *)(this + 0xC) = a5;
  *(_OWORD *)(this + 0x20) = *a2;
  *(_OWORD *)(this + 0x30) = *a3;
  *(float *)(this + 0x10) = a4;
  *(float *)(this + 0x2C) = a4 + a5;
  *(float *)(this + 0x3C) = a4 + *(float *)(this + 0xC);
  sub_8F2300((__m128 *)this);
  return v5;
}
