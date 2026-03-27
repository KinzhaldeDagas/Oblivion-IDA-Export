_BYTE *__thiscall sub_8E9120(__m128 *this, _BYTE *a2, int a3)
{
  int v3; // edx
  __int128 v4; // xmm2
  double v5; // st7
  __m128 *v6; // edx
  __m128 v7; // xmm1
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c2
  float v14; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(a3 + 0x50);
  v4 = *(_OWORD *)(v3 + 0x60);
  v5 = *(float *)(v3 + 0xB0);
  v6 = (__m128 *)(v3 + 0x10);
  v7 = _mm_sub_ps(*(this + 2), v6[7]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 0x4E), v8);
  v14 = v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 0xB1).m128_f32[0];
  if ( v11 | v12 && *((float *)this + 0x16) * *((float *)this + 0x16) > v14 * v5 * v5 )
  {
    *a2 = 1;
    return a2;
  }
  else
  {
    *((_OWORD *)this + 1) = v4;
    *(this + 2) = v6[7];
    *a2 = 0;
    return a2;
  }
}
