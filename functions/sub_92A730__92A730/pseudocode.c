double __userpurge sub_92A730@<st0>(int a1@<ecx>, double a2@<st0>, __m128 *a3)
{
  __m128 v4; // xmm0

  (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(a1 + 0x10) + 0x10))(*(_DWORD *)(a1 + 0x10), a3);
  v4 = _mm_mul_ps(*a3, *(__m128 *)(a1 + 0x20));
  return a2
       + (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]));
}
