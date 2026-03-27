int __thiscall sub_8B8B60(__m128 *this, int a2)
{
  _DWORD *v3; // esi
  __m128 *v4; // eax
  float v5; // edx
  int result; // eax
  __m128 v7; // xmm0
  double v8; // st7
  float v9[7]; // [esp+4h] [ebp-16Ch] BYREF
  __m128 v10; // [esp+20h] [ebp-150h] BYREF
  __m128 v11; // [esp+30h] [ebp-140h] BYREF
  __m128 v12; // [esp+40h] [ebp-130h] BYREF
  __int128 v13; // [esp+50h] [ebp-120h]
  __int128 v14; // [esp+60h] [ebp-110h]
  __m128 v15; // [esp+70h] [ebp-100h]
  __m128 v16; // [esp+80h] [ebp-F0h] BYREF
  __m128 v17; // [esp+90h] [ebp-E0h] BYREF
  __m128 v18; // [esp+A0h] [ebp-D0h] BYREF
  __m128 v19[3]; // [esp+B0h] [ebp-C0h] BYREF
  __m128 v20[3]; // [esp+E0h] [ebp-90h] BYREF
  __m128 v21[3]; // [esp+110h] [ebp-60h] BYREF
  __m128 v22[3]; // [esp+140h] [ebp-30h] BYREF

  v3 = *((_DWORD **)this + 6);
  sub_88FCC0(&v10, (__m128 *)(v3[0x14] + 0x10), this + 2);
  v4 = (__m128 *)v3[0x14];
  v5 = v4[0xC].m128_f32[0];
  v15 = _mm_sub_ps(v10, *(this + 3));
  v9[2] = v5;
  v11 = _mm_sub_ps(v10, v4[6]);
  sub_8D2BD0(v19[0].m128_f32, v11.m128_f32);
  (*(void (__thiscall **)(_DWORD, __m128 *))(*(_DWORD *)v3[0x14] + 0x3C))(v3[0x14], v21);
  v12 = 0;
  v12.m128_f32[0] = v9[2];
  v13 = 0;
  *((float *)&v13 + 1) = v9[2];
  v14 = 0;
  *((float *)&v14 + 2) = v9[2];
  sub_8D2AB0((char *)v20, v19, v21);
  sub_8D2AB0((char *)v22, v20, v19);
  sub_8D2A20(&v12, v22);
  result = sub_8D28B0(&v12, 0.0000001);
  if ( !result )
  {
    v17 = _mm_mul_ps(
            _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x13), (__m128)*((unsigned int *)this + 0x13), 0),
            *(__m128 *)(v3[0x14] + 0xD0));
    sub_8A6410((int)v3);
    (*(void (__thiscall **)(_DWORD, __m128 *))(*(_DWORD *)v3[0x14] + 0x54))(v3[0x14], &v17);
    v18 = _mm_mul_ps(
            _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x13), (__m128)*((unsigned int *)this + 0x13), 0),
            *(__m128 *)(v3[0x14] + 0xE0));
    sub_8A6410((int)v3);
    (*(void (__thiscall **)(_DWORD, __m128 *))(*(_DWORD *)v3[0x14] + 0x58))(v3[0x14], &v18);
    sub_8ABCE0(v3, &v10, &v11);
    v9[2] = *((float *)this + 0x11) * *(float *)(a2 + 0xC);
    v16 = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v9[2]), (__m128)LODWORD(v9[2]), 0), v15),
            _mm_mul_ps(
              _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x10), (__m128)*((unsigned int *)this + 0x10), 0),
              v11));
    sub_88FE00((__m128 *)&v9[3], &v12, &v16);
    *(__m128 *)&v9[3] = _mm_xor_ps(*(__m128 *)&v9[3], (__m128)xmmword_A965C0);
    v7 = _mm_mul_ps(*(__m128 *)&v9[3], *(__m128 *)&v9[3]);
    v9[2] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
    v8 = sub_89DA90((float *)v3[0x14]) * *((float *)this + 0x12) * *(float *)(a2 + 8);
    if ( v8 * v8 < v9[2] )
    {
      v9[2] = v8 / sqrt(v9[2]);
      *(__m128 *)&v9[3] = _mm_mul_ps(
                            _mm_shuffle_ps((__m128)LODWORD(v9[2]), (__m128)LODWORD(v9[2]), 0),
                            *(__m128 *)&v9[3]);
    }
    sub_8A6410((int)v3);
    return (*(int (__thiscall **)(_DWORD, float *, __m128 *))(*(_DWORD *)v3[0x14] + 0x60))(v3[0x14], &v9[3], &v10);
  }
  return result;
}
