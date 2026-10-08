int __thiscall sub_8F3230(int this, _OWORD *a2, _OWORD *a3, float a4, float a5)
{
  int v5; // ecx

  *(float *)(this + 0xC) = a5; /*0x8f3234*/
  *(_WORD *)(this + 6) = 1; /*0x8f3237*/
  *(_DWORD *)(this + 8) = 0; /*0x8f323d*/
  *(_DWORD *)this = &off_A9B230; /*0x8f3244*/
  if ( flt_B2FDC4 < (double)*(float *)&SrcStr ) /*0x8f325b*/
    flt_B2FDC4 = fConstant_1 - sub_8F22B0(); /*0x8f3268*/
  *(float *)(this + 0xC) = a5; /*0x8f327e*/
  *(_OWORD *)(this + 0x20) = *a2; /*0x8f328c*/
  *(_OWORD *)(this + 0x30) = *a3; /*0x8f3293*/
  *(float *)(this + 0x10) = a4; /*0x8f3297*/
  *(float *)(this + 0x2C) = a4 + a5; /*0x8f329a*/
  *(float *)(this + 0x3C) = a4 + *(float *)(this + 0xC); /*0x8f32a4*/
  sub_8F2300((__m128 *)this); /*0x8f32a7*/
  return v5; /*0x8f32ae*/
}
