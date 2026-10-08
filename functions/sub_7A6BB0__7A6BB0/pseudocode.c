// Initializes min/max extents accumulator used by CSpeedTreeRT::Compute.
float *__thiscall OB_Extents_Init_010201A0(float *this)
{
  double v2; // st7
  double v4; // st7

  OB_stVec_ctor_zero3_010201A0((OB_stVec_010201A0 *)this); /*0x7a6bd9*/
  OB_stVec_ctor_zero3_010201A0((OB_stVec_010201A0 *)this + 1); /*0x7a6beb*/
  v2 = flt_A32048; /*0x7a6bf0*/
  *(this + 2) = flt_A32048; /*0x7a6bf6*/
  *(this + 1) = v2; /*0x7a6bfb*/
  *this = v2; /*0x7a6bfe*/
  v4 = flt_A3B888; /*0x7a6c00*/
  *(this + 8) = flt_A3B888; /*0x7a6c06*/
  *(this + 7) = v4; /*0x7a6c09*/
  *(this + 6) = v4; /*0x7a6c0c*/
  return this; /*0x7a6c0e*/
}
