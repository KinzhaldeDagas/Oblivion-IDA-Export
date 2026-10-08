__m128 *__thiscall sub_8C5580(__m128 *this)
{
  __int32 v2; // edi

  this->m128_u64[0] = 0; /*0x8c55ad*/
  this->m128_f32[2] = 0.0; /*0x8c55c0*/
  v2 = this->m128_i32[1]; /*0x8c55cb*/
  if ( v2 ) /*0x8c55d0*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x8c55d6*/
      (**(void (__thiscall ***)(__int32, int))v2)(v2, 1); /*0x8c55ec*/
    this->m128_i32[1] = 0; /*0x8c55ee*/
  }
  *(this + 1) = _mm_shuffle_ps((__m128)LODWORD(fConstant_1), (__m128)LODWORD(fConstant_1), 0); /*0x8c5601*/
  return this; /*0x8c5607*/
}
