__m128 *__thiscall sub_88D5E0(__m128 *this, __m128 *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // esi
  __m128 v7; // xmm0
  double v8; // st7
  double v9; // st6
  double v10; // st5
  __m128 v12; // [esp+10h] [ebp-20h]

  v5 = *((_DWORD *)this + 0x2B) + a3 + 2 * *((_DWORD *)this + 0x2B); /*0x88d602*/
  v6 = (unsigned __int8)byte_B2E500[2 * v5 + v5 + a5]; /*0x88d615*/
  v7 = _mm_sub_ps(*(this + 8), *(this + 7)); /*0x88d62b*/
  v12.m128_i32[3] = v7.m128_i32[3]; /*0x88d62e*/
  v8 = dbl_A96310; /*0x88d65b*/
  v9 = dbl_A96308; /*0x88d674*/
  v10 = (double)(2 - a4); /*0x88d680*/
  if ( 2 - a4 < 0 ) /*0x88d684*/
    v10 = v10 + flt_A2FC78; /*0x88d686*/
  v12.m128_f32[2] = (v8 + v9 * v10) * v7.m128_f32[2]; /*0x88d69e*/
  v12.m128_f32[1] = ((double)(v6 % 3) * v9 + v8) * v7.m128_f32[1]; /*0x88d67c*/
  v12.m128_f32[0] = (*(float *)(4 * (v6 / 3) + 0xB2E548) + v8) * v7.m128_f32[0]; /*0x88d660*/
  *a2 = _mm_add_ps(*(this + 7), v12); /*0x88d6aa*/
  return a2; /*0x88d6ad*/
}
