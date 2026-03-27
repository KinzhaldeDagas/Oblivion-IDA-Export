__m128 *__thiscall sub_952050(int this)
{
  __m128 *v2; // edi
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  double v5; // st7
  __m128 *v6; // ecx
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 *result; // eax
  int v10; // esi
  __m128 v11; // [esp+10h] [ebp-90h] BYREF
  __m128 v12[4]; // [esp+20h] [ebp-80h] BYREF
  __m128 v13[4]; // [esp+60h] [ebp-40h] BYREF

  v2 = *(__m128 **)(this + 0x68);
  sub_951D00((__m128 *)this, v2, v12);
  v3 = _mm_sub_ps(v12[0], *(__m128 *)*(_DWORD *)(this + 0x68));
  v4 = _mm_mul_ps(v3, v3);
  v11 = _mm_xor_ps(*v2, (__m128)xmmword_A965C0);
  sub_951D00((__m128 *)this, &v11, v13);
  v5 = (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]));
  v6 = *(__m128 **)(this + 0x68);
  v7 = _mm_sub_ps(v13[0], *v6);
  v8 = _mm_mul_ps(v7, v7);
  if ( v5 < (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) )
  {
    v6[**(_DWORD **)(this + 0x6C)] = v13[0];
    *(__m128 *)(0x10 * **(_DWORD **)(this + 0x6C) + *(_DWORD *)(this + 0x60)) = v13[1];
    *(__m128 *)(*(_DWORD *)(this + 0x64) + 0x10 * **(_DWORD **)(this + 0x6C)) = v13[2];
    v10 = *(_DWORD *)(this + 0x6C);
    result = (__m128 *)(*(_DWORD *)v10 + 1);
    *(_DWORD *)v10 = result;
  }
  else
  {
    v6[**(_DWORD **)(this + 0x6C)] = v12[0];
    *(__m128 *)(0x10 * **(_DWORD **)(this + 0x6C) + *(_DWORD *)(this + 0x60)) = v12[1];
    result = (__m128 *)(*(_DWORD *)(this + 0x64) + 0x10 * **(_DWORD **)(this + 0x6C));
    *result = v12[2];
    ++**(_DWORD **)(this + 0x6C);
  }
  return result;
}
