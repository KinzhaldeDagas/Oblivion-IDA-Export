void __thiscall sub_904B20(_DWORD *this, int a2, int a3, int a4, __m128 *a5)
{
  __m128 *v5; // esi
  __m128 *v6; // eax
  float v7; // [esp+Ch] [ebp-14h]
  __m128 v8; // [esp+10h] [ebp-10h] BYREF

  v5 = (__m128 *)a5->m128_i32[0]; /*0x904b37*/
  v7 = a5[0x303].m128_f32[1]; /*0x904b3e*/
  sub_904130(this, a3, a2, a4, (int)a5); /*0x904b47*/
  for ( ; (unsigned int)v5 < a5->m128_i32[0]; v5 += 3 ) /*0x904b4e*/
  {
    v6 = sub_8F7000(v5, &v8); /*0x904b57*/
    *v5 = _mm_add_ps(*v5, _mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 0), v5[1])); /*0x904b73*/
    v5[1] = _mm_xor_ps(v5[1], (__m128)xmmword_A9B570); /*0x904b84*/
  }
  if ( v7 != a5[0x303].m128_f32[1] ) /*0x904ba2*/
    a5[2] = _mm_xor_ps(a5[2], (__m128)xmmword_A9B570); /*0x904bb2*/
}
