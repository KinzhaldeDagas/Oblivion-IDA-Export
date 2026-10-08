_BYTE *__thiscall sub_951EE0(__m128 *this, _BYTE *a2, int a3)
{
  __m128 v4; // xmm0
  bool v5; // c0
  bool v6; // c3
  __m128 *v7; // ecx
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float v15; // [esp+Ch] [ebp-64h]
  __m128 v16; // [esp+10h] [ebp-60h] BYREF
  __m128 v17; // [esp+20h] [ebp-50h]
  __m128 v18; // [esp+30h] [ebp-40h] BYREF
  __int128 v19; // [esp+40h] [ebp-30h]
  __int128 v20; // [esp+50h] [ebp-20h]

  v4 = _mm_mul_ps(*(this + 3), *(this + 3)); /*0x951ef0*/
  v15 = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]); /*0x951f18*/
  v5 = v15 < (double)*((float *)this + 0x14); /*0x951f20*/
  v6 = v15 == *((float *)this + 0x14); /*0x951f20*/
  v16 = _mm_xor_ps(*(this + 3), (__m128)xmmword_A965C0); /*0x951f26*/
  if ( v5 || v6 ) /*0x951f2d*/
    v16 = (__m128)xmmword_B2F0A0; /*0x951f39*/
  sub_951D00(this, &v16, &v18); /*0x951f4a*/
  *(__m128 *)(0x10 * **((_DWORD **)this + 0x1B) + *((_DWORD *)this + 0x1A)) = v18; /*0x951f5f*/
  *(__int128 *)(0x10 * **((_DWORD **)this + 0x1B) + *((_DWORD *)this + 0x18)) = v19; /*0x951f75*/
  *(__int128 *)(*((_DWORD *)this + 0x19) + 0x10 * (**((_DWORD **)this + 0x1B))++) = v20; /*0x951f8d*/
  v7 = *((__m128 **)this + 0x1A); /*0x951f95*/
  v8 = _mm_mul_ps(*v7, *v7); /*0x951f9b*/
  if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x951fc8*/
             + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) > (double)*((float *)this + 0x14) )
  {
    *a2 = 0; /*0x952037*/
    return a2; /*0x952034*/
  }
  else
  {
    v9 = _mm_mul_ps(*v7, *v7); /*0x951fd0*/
    v10 = _mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]; /*0x951fdd*/
    v11 = _mm_shuffle_ps(v9, v9, 0xAA); /*0x951fe1*/
    v12 = v11; /*0x951fe5*/
    v12.m128_f32[0] = v11.m128_f32[0] + v10; /*0x951fe8*/
    v17 = v12; /*0x951fec*/
    v17.m128_i32[0] = fsqrt(v11.m128_f32[0] + v10); /*0x951ff5*/
    v13 = v16; /*0x95200c*/
    *(float *)(a3 + 0x20) = v17.m128_f32[0]; /*0x952011*/
    *(__m128 *)a3 = v13; /*0x952014*/
    *(__int128 *)(a3 + 0x10) = v19; /*0x95201c*/
    *(_DWORD *)(a3 + 0x24) = 0x3F000000; /*0x952020*/
    *a2 = 1; /*0x95202a*/
    return a2; /*0x952027*/
  }
}
