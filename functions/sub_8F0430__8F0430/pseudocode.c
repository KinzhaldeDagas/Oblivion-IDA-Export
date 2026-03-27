double __thiscall sub_8F0430(int *this, __m128 *a2)
{
  int v2; // eax
  __m128 v3; // xmm0
  __m128 v5; // [esp+10h] [ebp-60h] BYREF
  __m128 v6; // [esp+20h] [ebp-50h]
  __int128 v7; // [esp+30h] [ebp-40h] BYREF
  __int128 v8; // [esp+40h] [ebp-30h]
  __int128 v9; // [esp+50h] [ebp-20h]
  __int128 v10; // [esp+60h] [ebp-10h]

  v2 = *this;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  LODWORD(v7) = 0x3F800000;
  DWORD1(v8) = 0x3F800000;
  DWORD2(v9) = 0x3F800000;
  v10 = 0;
  (*(void (__thiscall **)(int *, __int128 *, _DWORD, __m128 *))(v2 + 0xC))(this, &v7, 0, &v5);
  v3 = _mm_mul_ps(
         _mm_add_ps(
           _mm_xor_ps(
             _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_sub_ps(v6, v5)),
             _mm_and_ps(*a2, (__m128)xmmword_A965C0)),
           _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v6, v5))),
         *a2);
  return (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]));
}
