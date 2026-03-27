int __thiscall sub_93B740(void *this, __m128 *a2, int a3)
{
  int result; // eax
  __int128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm0

  result = a3;
  *(_DWORD *)(a3 + 0x20) = a2->m128_i32[3];
  *(__m128 *)a3 = *a2;
  if ( *(_DWORD *)this == 1 )
  {
    v4 = *((_OWORD *)this + 2);
    *(_DWORD *)(a3 + 0x24) = 0x3F800000;
    *(_OWORD *)(a3 + 0x10) = v4;
  }
  else
  {
    if ( *((_DWORD *)this + 1) == 1 )
    {
      v5 = _mm_shuffle_ps(*a2, *a2, 0xFF);
      v6 = _mm_add_ps(*((__m128 *)this + 0xA), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *(__m128 *)a3));
      *(_DWORD *)(a3 + 0x24) = 0;
    }
    else
    {
      v6 = *((__m128 *)this + 0x13);
      *(_DWORD *)(a3 + 0x24) = 0x3F000000;
    }
    *(__m128 *)(a3 + 0x10) = v6;
  }
  return result;
}
