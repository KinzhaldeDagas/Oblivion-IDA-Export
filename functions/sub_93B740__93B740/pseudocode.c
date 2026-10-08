int __thiscall sub_93B740(void *this, __m128 *a2, int a3)
{
  int result; // eax
  __int128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm0

  result = a3; /*0x93b74c*/
  *(_DWORD *)(a3 + 0x20) = a2->m128_i32[3]; /*0x93b753*/
  *(__m128 *)a3 = *a2; /*0x93b759*/
  if ( *(_DWORD *)this == 1 ) /*0x93b75f*/
  {
    v4 = *((_OWORD *)this + 2); /*0x93b761*/
    *(_DWORD *)(a3 + 0x24) = 0x3F800000; /*0x93b765*/
    *(_OWORD *)(a3 + 0x10) = v4; /*0x93b76c*/
  }
  else
  {
    if ( *((_DWORD *)this + 1) == 1 ) /*0x93b77b*/
    {
      v5 = _mm_shuffle_ps(*a2, *a2, 0xFF); /*0x93b783*/
      v6 = _mm_add_ps(*((__m128 *)this + 0xA), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *(__m128 *)a3)); /*0x93b798*/
      *(_DWORD *)(a3 + 0x24) = 0; /*0x93b79b*/
    }
    else
    {
      v6 = *((__m128 *)this + 0x13); /*0x93b7ad*/
      *(_DWORD *)(a3 + 0x24) = 0x3F000000; /*0x93b7b4*/
    }
    *(__m128 *)(a3 + 0x10) = v6; /*0x93b7a2*/
  }
  return result; /*0x93b770*/
}
