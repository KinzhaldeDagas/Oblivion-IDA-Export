int __thiscall sub_9296C0(float *this, __m128 *a2, float a3, __m128 *a4)
{
  int v4; // ebx
  int result; // eax
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  int v9; // [esp+Ch] [ebp-14h]
  unsigned int v10; // [esp+Ch] [ebp-14h]
  __m128 v11; // [esp+10h] [ebp-10h] BYREF

  a4->m128_i32[0] = 0x7F7FFFFF;
  a4->m128_i32[1] = 0x7F7FFFFF;
  a4->m128_i32[2] = 0x7F7FFFFF;
  v4 = 0;
  a4->m128_i32[3] = 0;
  result = 0xFF7FFFFF;
  a4[1].m128_i32[0] = 0xFF7FFFFF;
  a4[1].m128_i32[1] = 0xFF7FFFFF;
  a4[1].m128_i32[2] = 0xFF7FFFFF;
  a4[1].m128_i32[3] = 0;
  if ( *((int *)this + 5) > 0 )
  {
    v9 = 0;
    do
    {
      sub_88FCC0(&v11, a2, (__m128 *)(v9 + *((_DWORD *)this + 4)));
      v7 = v11;
      *a4 = _mm_min_ps(*a4, v11);
      a4[1] = _mm_max_ps(a4[1], v7);
      result = *((_DWORD *)this + 5);
      ++v4;
      v9 += 0x10;
    }
    while ( v4 < result );
  }
  *(float *)&v10 = a3 + *(this + 0xD);
  v8 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 0);
  *a4 = _mm_sub_ps(*a4, v8);
  a4[1] = _mm_add_ps(a4[1], v8);
  return result;
}
