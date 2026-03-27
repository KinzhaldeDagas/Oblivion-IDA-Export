double __thiscall sub_914790(float *this, __m128 *a2)
{
  __m128 v3; // xmm0
  __m128 v5; // [esp+10h] [ebp-10h] BYREF

  (*(void (__thiscall **)(float *, __m128 *, __m128 *))(*(_DWORD *)this + 0x24))(this, a2, &v5);
  v3 = _mm_mul_ps(v5, *a2);
  return (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]))
       + *(this + 3);
}
