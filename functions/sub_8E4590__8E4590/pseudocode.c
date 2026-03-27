_DWORD **__thiscall sub_8E4590(int this, _DWORD **a2, __m128 *a3, int a4, const void **a5, const void **a6)
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

  result = a2;
  v13 = a2;
  if ( a2 < &a2[a4] )
  {
    do
    {
      v8 = *(__m128 *)(this + 0x30);
      v14 = _mm_add_ps(
              _mm_max_ps(
                _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, *(__m128 *)(this + 0x10)), v8), (__m128)xmmword_B2FC70),
                (__m128)xmmword_A9A660),
              (__m128)xmmword_A9A650);
      v15 = _mm_add_ps(
              _mm_max_ps(
                _mm_min_ps(_mm_mul_ps(_mm_add_ps(a3[1], *(__m128 *)(this + 0x20)), v8), (__m128)xmmword_B2FC70),
                (__m128)xmmword_A9A660),
              (__m128)xmmword_A9A650);
      v12 = **v13;
      v9 = *(_DWORD *)(this + 0x40);
      v10 = (unsigned __int16 *)(v9 + 0x10 * v12);
      sub_8E3C30(
        this,
        v9,
        (int)v10,
        v12,
        ((unsigned __int32)v14.m128_i32[0] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[0] >> 7) | 1,
        a5,
        a6);
      sub_8E3E90(
        this,
        v9,
        v10,
        v12,
        ((unsigned __int32)v14.m128_i32[1] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[1] >> 7) | 1,
        a5,
        a6);
      sub_8E4210(
        this,
        v9,
        (int)v10,
        v12,
        ((unsigned __int32)v14.m128_i32[2] >> 7) & 0xFFFE,
        (unsigned __int16)((unsigned __int32)v15.m128_i32[2] >> 7) | 1,
        a5,
        a6);
      result = v13 + 1;
      v11 = v13 + 1 < &a2[a4];
      a3 += 2;
      ++v13;
    }
    while ( v11 );
  }
  return result;
}
