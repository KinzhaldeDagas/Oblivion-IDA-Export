char __usercall sub_8AC3C0@<al>(int a1@<eax>, const void **a2@<edi>, float a3, __m128 *a4)
{
  int v4; // esi
  __m128 v5; // xmm0
  char *v6; // ecx
  int v7; // eax
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // xmm2_4
  float v11; // xmm3_4
  __m128 v12; // xmm0
  float v14; // [esp+8h] [ebp-14h]
  unsigned int v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+Ch] [ebp-10h]

  v4 = a1 << 6;
  v5 = _mm_mul_ps(*((__m128 *)*a2 + 4 * a1), *a4);
  v14 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  if ( v14 <= (double)flt_A34BA0 || v14 >= (double)a3 )
    return 0;
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
    sub_8A6EE0(a2, 0x40);
  v6 = (char *)*a2;
  *(float *)&v15 = -v14;
  v7 = (int)*a2 + 0x40 * (_DWORD)a2[1];
  a2[1] = (char *)a2[1] + 1;
  *(_OWORD *)v7 = *(_OWORD *)&v6[v4];
  *(_OWORD *)(v7 + 0x10) = *(_OWORD *)&v6[v4 + 0x10];
  *(_DWORD *)(v7 + 0x20) = *(_DWORD *)&v6[v4 + 0x20];
  *(_DWORD *)(v7 + 0x24) = *(_DWORD *)&v6[v4 + 0x24];
  *(_DWORD *)(v7 + 0x28) = *(_DWORD *)&v6[v4 + 0x28];
  *(_DWORD *)(v7 + 0x2C) = *(_DWORD *)&v6[v4 + 0x2C];
  *(_DWORD *)(v7 + 0x30) = *(_DWORD *)&v6[v4 + 0x30];
  v8 = _mm_add_ps(*(__m128 *)v7, _mm_mul_ps(_mm_shuffle_ps((__m128)v15, (__m128)v15, 0), *a4));
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0];
  v11 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0];
  v16 = 1.0 / fsqrt(v11 + v10);
  v12 = (__m128)0x3F000000u;
  v12.m128_f32[0] = (float)(0.5 * v16) * (float)(3.0 - (float)((float)((float)(v11 + v10) * v16) * v16));
  *(__m128 *)v7 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v8);
  return 1;
}
