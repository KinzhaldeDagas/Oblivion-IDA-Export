void __thiscall sub_8C0CB0(char *this, _DWORD *a2)
{
  __m128 *v4; // edi
  void (__cdecl *v5)(int, __m128 *, int, int *, int); // eax
  void (__cdecl *v6)(int, __int16 *, int, int *, int); // eax
  void (__cdecl *v7)(int, unsigned __int16 *, int, int *, int); // eax
  void (__cdecl *v8)(int, unsigned __int32 *, int, int *, int); // eax
  int v9; // eax
  int v10; // eax
  void (__cdecl *v11)(int, __int16 *, int, int *, int); // edx
  __m128 v12; // xmm3
  __m128 v13; // xmm0
  float v14; // xmm4_4
  int v15; // xmm2_4
  __m128 v16; // xmm1
  float v17; // xmm5_4
  __m128 v18; // xmm0
  __m128 v19; // xmm3
  __m128 v20; // xmm0
  float v21; // xmm4_4
  float v22; // xmm5_4
  __m128 v23; // xmm0
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  float v26; // xmm4_4
  float v27; // xmm5_4
  __m128 v28; // xmm0
  __m128 v29; // xmm3
  __m128 v30; // xmm0
  float v31; // xmm4_4
  int v32; // [esp-50h] [ebp-60h]
  int v33; // [esp-3Ch] [ebp-4Ch]
  int v34; // [esp-28h] [ebp-38h]
  int v35; // [esp-14h] [ebp-24h]
  int v36; // [esp+Ch] [ebp-4h] BYREF

  sub_8A0C30(this, (int)a2); /*0x8c0cc0*/
  v4 = *((__m128 **)this + 1); /*0x8c0cc5*/
  (*(void (__cdecl **)(_DWORD, __m128 *, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 1, 0x30, 0, 0); /*0x8c0cdc*/
  (*(void (__cdecl **)(_DWORD, __m128 *, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 4, 0x30, 0, 0); /*0x8c0cf2*/
  v33 = a2[0x87]; /*0x8c0d0b*/
  v5 = *(void (__cdecl **)(int, __m128 *, int, int *, int))(v33 + 4); /*0x8c0d0c*/
  v36 = 4; /*0x8c0d0f*/
  v5(v33, v4 + 7, 4, &v36, 1); /*0x8c0d13*/
  v32 = a2[0x87]; /*0x8c0d27*/
  v6 = *(void (__cdecl **)(int, __int16 *, int, int *, int))(v32 + 4); /*0x8c0d28*/
  v36 = 4; /*0x8c0d2b*/
  v6(v32, &v4[7].m128_i16[2], 4, &v36, 1); /*0x8c0d2f*/
  v35 = a2[0x87]; /*0x8c0d46*/
  v7 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v35 + 4); /*0x8c0d47*/
  v36 = 4; /*0x8c0d4a*/
  v7(v35, &v4[7].m128_u16[4], 4, &v36, 1); /*0x8c0d4e*/
  v34 = a2[0x87]; /*0x8c0d62*/
  v8 = *(void (__cdecl **)(int, unsigned __int32 *, int, int *, int))(v34 + 4); /*0x8c0d63*/
  v36 = 4; /*0x8c0d66*/
  v8(v34, &v4[7].m128_u32[3], 4, &v36, 1); /*0x8c0d6a*/
  v9 = a2[0x87]; /*0x8c0d6c*/
  v36 = 4; /*0x8c0d81*/
  (*(void (__cdecl **)(int, __m128 *, int, int *, int))(v9 + 4))(v9, v4 + 8, 4, &v36, 1); /*0x8c0d89*/
  v10 = a2[0x87]; /*0x8c0d8b*/
  v11 = *(void (__cdecl **)(int, __int16 *, int, int *, int))(v10 + 4); /*0x8c0d91*/
  v36 = 4; /*0x8c0da4*/
  v11(v10, &v4[8].m128_i16[2], 4, &v36, 1); /*0x8c0da8*/
  if ( 0.0 == v4[8].m128_f32[1] ) /*0x8c0db6*/
    v4[8].m128_f32[1] = flt_A31C80; /*0x8c0dbe*/
  v12 = v4[2]; /*0x8c0dc0*/
  v13 = _mm_mul_ps(v12, v12); /*0x8c0dcf*/
  v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x8c0de1*/
                  + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v14 = 1.0 / fsqrt(v13.m128_f32[0]); /*0x8c0dec*/
  v15 = dword_A46C30; /*0x8c0e02*/
  v16 = 0; /*0x8c0e06*/
  v16.m128_f32[0] = kHeadBodyNormalMatchRadius; /*0x8c0e09*/
  v17 = *(float *)&v15 - (float)((float)(v13.m128_f32[0] * v14) * v14); /*0x8c0e10*/
  v18 = v16; /*0x8c0e14*/
  v18.m128_f32[0] = (float)(v16.m128_f32[0] * v14) * v17; /*0x8c0e1b*/
  v4[2] = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v12); /*0x8c0e29*/
  v19 = v4[3]; /*0x8c0e2d*/
  v20 = _mm_mul_ps(v19, v19); /*0x8c0e34*/
  v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8c0e46*/
                  + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  v21 = 1.0 / fsqrt(v20.m128_f32[0]); /*0x8c0e4d*/
  v22 = *(float *)&v15 - (float)((float)(v20.m128_f32[0] * v21) * v21); /*0x8c0e5c*/
  v23 = v16; /*0x8c0e60*/
  v23.m128_f32[0] = (float)(v16.m128_f32[0] * v21) * v22; /*0x8c0e67*/
  v4[3] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19); /*0x8c0e75*/
  v24 = v4[5]; /*0x8c0e79*/
  v25 = _mm_mul_ps(v24, v24); /*0x8c0e80*/
  v25.m128_f32[0] = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x8c0e92*/
                  + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
  v26 = 1.0 / fsqrt(v25.m128_f32[0]); /*0x8c0e99*/
  v27 = *(float *)&v15 - (float)((float)(v25.m128_f32[0] * v26) * v26); /*0x8c0ea8*/
  v28 = v16; /*0x8c0eac*/
  v28.m128_f32[0] = (float)(v16.m128_f32[0] * v26) * v27; /*0x8c0eb3*/
  v4[5] = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v24); /*0x8c0ec1*/
  v29 = v4[6]; /*0x8c0ec5*/
  v30 = _mm_mul_ps(v29, v29); /*0x8c0ecc*/
  v30.m128_f32[0] = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0] /*0x8c0ede*/
                  + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
  v31 = 1.0 / fsqrt(v30.m128_f32[0]); /*0x8c0ee5*/
  v16.m128_f32[0] = (float)(v16.m128_f32[0] * v31) /*0x8c0ef9*/
                  * (float)(*(float *)&v15 - (float)((float)(v30.m128_f32[0] * v31) * v31));
  v4[6] = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v29); /*0x8c0f07*/
}
