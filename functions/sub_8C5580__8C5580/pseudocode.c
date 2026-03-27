__m128 *__thiscall sub_8C5580(__m128 *this)
{
  __int32 v2; // edi

  this->m128_u64[0] = 0;
  this->m128_f32[2] = 0.0;
  v2 = this->m128_i32[1];
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(__int32, int))v2)(v2, 1);
    this->m128_i32[1] = 0;
  }
  *(this + 1) = _mm_shuffle_ps((__m128)LODWORD(fConstant_1), (__m128)LODWORD(fConstant_1), 0);
  return this;
}
