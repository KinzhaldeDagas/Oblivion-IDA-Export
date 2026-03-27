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

  sub_8A0C30(this, (int)a2);
  v4 = *((__m128 **)this + 1);
  (*(void (__cdecl **)(_DWORD, __m128 *, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 1, 0x30, 0, 0);
  (*(void (__cdecl **)(_DWORD, __m128 *, int, _DWORD, _DWORD))(a2[0x87] + 4))(a2[0x87], v4 + 4, 0x30, 0, 0);
  v33 = a2[0x87];
  v5 = *(void (__cdecl **)(int, __m128 *, int, int *, int))(v33 + 4);
  v36 = 4;
  v5(v33, v4 + 7, 4, &v36, 1);
  v32 = a2[0x87];
  v6 = *(void (__cdecl **)(int, __int16 *, int, int *, int))(v32 + 4);
  v36 = 4;
  v6(v32, &v4[7].m128_i16[2], 4, &v36, 1);
  v35 = a2[0x87];
  v7 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v35 + 4);
  v36 = 4;
  v7(v35, &v4[7].m128_u16[4], 4, &v36, 1);
  v34 = a2[0x87];
  v8 = *(void (__cdecl **)(int, unsigned __int32 *, int, int *, int))(v34 + 4);
  v36 = 4;
  v8(v34, &v4[7].m128_u32[3], 4, &v36, 1);
  v9 = a2[0x87];
  v36 = 4;
  (*(void (__cdecl **)(int, __m128 *, int, int *, int))(v9 + 4))(v9, v4 + 8, 4, &v36, 1);
  v10 = a2[0x87];
  v11 = *(void (__cdecl **)(int, __int16 *, int, int *, int))(v10 + 4);
  v36 = 4;
  v11(v10, &v4[8].m128_i16[2], 4, &v36, 1);
  if ( 0.0 == v4[8].m128_f32[1] )
    v4[8].m128_f32[1] = flt_A31C80;
  v12 = v4[2];
  v13 = _mm_mul_ps(v12, v12);
  v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v14 = 1.0 / fsqrt(v13.m128_f32[0]);
  v15 = dword_A46C30;
  v16 = 0;
  v16.m128_f32[0] = flt_A3D65C;
  v17 = *(float *)&v15 - (float)((float)(v13.m128_f32[0] * v14) * v14);
  v18 = v16;
  v18.m128_f32[0] = (float)(v16.m128_f32[0] * v14) * v17;
  v4[2] = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v12);
  v19 = v4[3];
  v20 = _mm_mul_ps(v19, v19);
  v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  v21 = 1.0 / fsqrt(v20.m128_f32[0]);
  v22 = *(float *)&v15 - (float)((float)(v20.m128_f32[0] * v21) * v21);
  v23 = v16;
  v23.m128_f32[0] = (float)(v16.m128_f32[0] * v21) * v22;
  v4[3] = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19);
  v24 = v4[5];
  v25 = _mm_mul_ps(v24, v24);
  v25.m128_f32[0] = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
  v26 = 1.0 / fsqrt(v25.m128_f32[0]);
  v27 = *(float *)&v15 - (float)((float)(v25.m128_f32[0] * v26) * v26);
  v28 = v16;
  v28.m128_f32[0] = (float)(v16.m128_f32[0] * v26) * v27;
  v4[5] = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v24);
  v29 = v4[6];
  v30 = _mm_mul_ps(v29, v29);
  v30.m128_f32[0] = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
  v31 = 1.0 / fsqrt(v30.m128_f32[0]);
  v16.m128_f32[0] = (float)(v16.m128_f32[0] * v31)
                  * (float)(*(float *)&v15 - (float)((float)(v30.m128_f32[0] * v31) * v31));
  v4[6] = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v29);
}
