void __thiscall sub_8C5110(int *this, __m128 *a2)
{
  int v3; // ecx
  __m128 v4; // xmm0

  sub_8CE4C0(this, a2); /*0x8c5121*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8c512f*/
  {
    sub_8C4950(v3, (int)a2); /*0x8c5132*/
  }
  else
  {
    v4 = _mm_shuffle_ps((__m128)LODWORD(fConstant_1), (__m128)LODWORD(fConstant_1), 0); /*0x8c5149*/
    a2->m128_f32[2] = 0.0; /*0x8c514d*/
    a2[1] = v4; /*0x8c5150*/
  }
}
