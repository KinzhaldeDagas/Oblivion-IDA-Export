_DWORD **__thiscall sub_8E4590(__m128 *this, _DWORD **a2, __m128 *a3, int a4, const void **a5, const void **a6)
{
  _DWORD **result; // eax
  __m128 v8; // xmm0
  int v9; // ebx
  unsigned __int16 *v10; // edi
  bool v11; // cf
  int v12; // [esp+Ch] [ebp-54h]
  int **v13; // [esp+10h] [ebp-50h]
  __m128 v14; // [esp+20h] [ebp-40h]
  __m128 v15; // [esp+30h] [ebp-30h]

  result = a2; /*0x8e4599*/
  v13 = a2; /*0x8e45ad*/
  if ( a2 < &a2[a4] ) /*0x8e45b1*/
  {
    do /*0x8e4718*/
    {
      v8 = *(this + 3); /*0x8e45ca*/
      v14 = _mm_add_ps( /*0x8e45f6*/
              _mm_max_ps(
                _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, *(this + 1)), v8), (__m128)xmmword_B2FC70),
                (__m128)xmmword_A9A660),
              (__m128)xmmword_A9A650);
      v15 = _mm_add_ps( /*0x8e461e*/
              _mm_max_ps(
                _mm_min_ps(_mm_mul_ps(_mm_add_ps(a3[1], *(this + 2)), v8), (__m128)xmmword_B2FC70),
                (__m128)xmmword_A9A660),
              (__m128)xmmword_A9A650);
      v12 = **v13; /*0x8e469a*/
      v9 = *((_DWORD *)this + 0x10); /*0x8e46a6*/
      v10 = (unsigned __int16 *)(v9 + 0x10 * v12); /*0x8e46ad*/
      sub_8E3C30( /*0x8e46b2*/
        (int)this,
        v9,
        (int)v10,
        v12,
        ((unsigned __int32)v14.m128_i32[0] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[0] >> 7) | 1,
        a5,
        a6);
      sub_8E3E90( /*0x8e46d1*/
        (int)this,
        v9,
        v10,
        v12,
        ((unsigned __int32)v14.m128_i32[1] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[1] >> 7) | 1,
        a5,
        a6);
      sub_8E4210( /*0x8e46f6*/
        (int)this,
        v9,
        (int)v10,
        v12,
        ((unsigned __int32)v14.m128_i32[2] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[2] >> 7) | 1,
        a5,
        a6);
      result = v13 + 1; /*0x8e4706*/
      v11 = v13 + 1 < &a2[a4]; /*0x8e470f*/
      a3 += 2; /*0x8e4711*/
      ++v13; /*0x8e4714*/
    }
    while ( v11 ); /*0x8e4718*/
  }
  return result; /*0x8e471e*/
}
