void __thiscall sub_8F6F60(__m128 *this, _DWORD *a2, int *a3, int a4, __m128 *a5)
{
  __m128 *v5; // esi
  __m128 *v6; // eax
  float v7; // [esp+Ch] [ebp-14h]
  __m128 v8; // [esp+10h] [ebp-10h] BYREF

  v5 = (__m128 *)a5->m128_i32[0];
  v7 = a5[0x303].m128_f32[1];
  sub_8F67C0(this, (int)a3, a3, a2, a4, (int)a5);
  for ( ; (unsigned int)v5 < a5->m128_i32[0]; v5 += 3 )
  {
    v6 = sub_8F7000(v5, &v8);
    *v5 = _mm_add_ps(*v5, _mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 0), v5[1]));
    v5[1] = _mm_xor_ps(v5[1], (__m128)xmmword_A9B570);
  }
  if ( v7 != a5[0x303].m128_f32[1] )
    a5[2] = _mm_xor_ps(a5[2], (__m128)xmmword_A9B570);
}
