int __thiscall sub_94E0A0(_DWORD *this, int a2, int *a3, int a4)
{
  __m128 *v4; // edi
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  float v8; // xmm2_4
  __m128 v9; // xmm3
  __m128 v10; // xmm0
  __m128 v11; // xmm4
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  float v15; // xmm2_4
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // esi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v27; // ecx
  int v28; // ecx
  int result; // eax
  int v30; // ecx
  int v31; // [esp+0h] [ebp-164h]
  int v32; // [esp+0h] [ebp-164h]
  unsigned int v33; // [esp+Ch] [ebp-158h]
  _OWORD *v34; // [esp+10h] [ebp-154h]
  float v35; // [esp+2Ch] [ebp-138h]
  _DWORD *v36; // [esp+30h] [ebp-134h]
  int v37; // [esp+30h] [ebp-134h]
  __m128 v38; // [esp+34h] [ebp-130h] BYREF
  __int128 v39; // [esp+44h] [ebp-120h] BYREF
  const void *v40[6]; // [esp+54h] [ebp-110h] BYREF
  _DWORD *v41; // [esp+6Ch] [ebp-F8h]
  _DWORD *v42; // [esp+70h] [ebp-F4h]
  __m128 v43; // [esp+74h] [ebp-F0h] BYREF
  __m128 v44; // [esp+84h] [ebp-E0h] BYREF
  __m128 v45; // [esp+94h] [ebp-D0h] BYREF
  __m128 v46; // [esp+A4h] [ebp-C0h] BYREF
  __m128 v47; // [esp+B4h] [ebp-B0h] BYREF
  __m128 v48; // [esp+C4h] [ebp-A0h] BYREF
  __m128 v49; // [esp+D4h] [ebp-90h] BYREF
  __m128 v50[4]; // [esp+E4h] [ebp-80h] BYREF
  __m128 v51[4]; // [esp+124h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC); /*0x94e0b5*/
  sub_958600(this + 0x30, (int)a3); /*0x94e0c1*/
  sub_94D100(this, a2, v50, v51); /*0x94e0d9*/
  hkTransform_TransformPosition((__m128 *)this + 5, v50, v4 + 4); /*0x94e0ef*/
  hkTransform_TransformPosition((__m128 *)this + 4, v51, v4 + 1); /*0x94e103*/
  sub_94CF30(this, a4); /*0x94e10e*/
  hkBasis_TransformVector(&v45, (__m128 *)this + 9, v4 + 6); /*0x94e125*/
  v6 = _mm_sub_ps( /*0x94e157*/
         _mm_mul_ps(_mm_shuffle_ps(v4[6], v4[6], 0xC9), _mm_shuffle_ps(v4[5], v4[5], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v4[6], v4[6], 0xD2), _mm_shuffle_ps(v4[5], v4[5], 0xC9)));
  v7 = _mm_mul_ps(v6, v6); /*0x94e15d*/
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x94e167*/
  v9 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x94e16e*/
  v10 = v9; /*0x94e172*/
  v10.m128_f32[0] = v9.m128_f32[0] + v8; /*0x94e175*/
  v38 = v10; /*0x94e179*/
  v38.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8); /*0x94e190*/
  v11 = (__m128)0x3F000000u; /*0x94e1ab*/
  *(_OWORD *)v40 = 0x40400000u; /*0x94e1b1*/
  v39 = 0x3F000000u; /*0x94e1b6*/
  v11.m128_f32[0] = 0.5 * v38.m128_f32[0]; /*0x94e1bb*/
  v12 = v11; /*0x94e1c3*/
  v12.m128_f32[0] = (float)(0.5 * v38.m128_f32[0]) /*0x94e1c6*/
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v38.m128_f32[0]) * v38.m128_f32[0]));
  v44 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v6); /*0x94e1e4*/
  hkBasis_TransformVector(&v44, (__m128 *)this + 9, &v44); /*0x94e1e9*/
  hkBasis_TransformVector(&v43, (__m128 *)this + 9, v4 + 5); /*0x94e1fd*/
  v13 = _mm_sub_ps( /*0x94e22f*/
          _mm_mul_ps(_mm_shuffle_ps(v4[2], v4[2], 0xC9), _mm_shuffle_ps(v4[3], v4[3], 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v4[2], v4[2], 0xD2), _mm_shuffle_ps(v4[3], v4[3], 0xC9)));
  v14 = _mm_mul_ps(v13, v13); /*0x94e235*/
  v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x94e23f*/
  v16 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x94e246*/
  v17 = v16; /*0x94e24a*/
  v17.m128_f32[0] = v16.m128_f32[0] + v15; /*0x94e24d*/
  v38 = v17; /*0x94e251*/
  v38.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15); /*0x94e25a*/
  v18 = (__m128)0x3F000000u; /*0x94e27c*/
  v18.m128_f32[0] = (float)(0.5 * v38.m128_f32[0]) /*0x94e285*/
                  * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v38.m128_f32[0]) * v38.m128_f32[0]));
  v48 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v13); /*0x94e2a6*/
  hkBasis_TransformVector(&v46, (__m128 *)this + 6, &v48); /*0x94e2ae*/
  hkBasis_TransformVector(&v49, (__m128 *)this + 6, v4 + 3); /*0x94e2c2*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 5, &v45, &v44, 0xFF008000, *(this + 3), a4); /*0x94e2e8*/
  v33 = *(this + 3); /*0x94e2f4*/
  v19 = sub_8AEB80(0xFFu, 0xFFu, 0, 0xFFu); /*0x94e306*/
  sub_958750((int **)this + 0x30, (__m128 *)this + 4, &v49, &v46, v19, v33, a4); /*0x94e329*/
  v20 = v4[7].m128_i32[0]; /*0x94e32e*/
  v42 = this + 0x34; /*0x94e348*/
  sub_94DA90((int)(this + 0x34), v20, 0x3F000000, 0x18, &v45, (_OWORD *)this + 5); /*0x94e34c*/
  v47 = _mm_shuffle_ps((__m128)0x3E800000u, (__m128)0x3E800000u, 0); /*0x94e37c*/
  v36 = this + 0xA0; /*0x94e384*/
  sub_94D6D0((_OWORD *)this + 0x28, &v43, &v44, (_OWORD *)this + 5, &v47); /*0x94e388*/
  v35 = v4[7].m128_f32[1]; /*0x94e3af*/
  *(float *)&v31 = flt_A3F3E0 - fabs(v4[7].m128_f32[2]); /*0x94e3b3*/
  v41 = this + 0x58; /*0x94e3b6*/
  sub_94DA90((int)(this + 0x58), v31, 0x3F000000, 0x18, &v43, (_OWORD *)this + 5); /*0x94e3ba*/
  v34 = this + 0x14; /*0x94e3d1*/
  v21 = this + 0x7C; /*0x94e3e5*/
  *(float *)&v32 = flt_A3F3E0 - fabs(v35); /*0x94e3ee*/
  v43 = _mm_xor_ps(v43, (__m128)xmmword_A965C0); /*0x94e3f3*/
  sub_94DA90((int)v21, v32, 0x3F000000, 0x18, &v43, v34); /*0x94e3f8*/
  v38.m128_u64[0] = 0; /*0x94e404*/
  v38.m128_i32[2] = 0x80000000; /*0x94e40c*/
  *(_QWORD *)&v39 = 0; /*0x94e410*/
  DWORD2(v39) = 0x80000000; /*0x94e425*/
  v40[0] = 0; /*0x94e429*/
  v40[1] = 0; /*0x94e42d*/
  v40[2] = (const void *)0x80000000; /*0x94e431*/
  sub_8A6E40((const void **)&v38, 1, 4); /*0x94e435*/
  v38.m128_i32[1] = 1; /*0x94e448*/
  if ( ((int)v40[2] & 0x3FFFFFFF) == 0 ) /*0x94e44c*/
  {
    v22 = 2 * ((int)v40[2] & 0x3FFFFFFF); /*0x94e44e*/
    if ( v22 <= 1 ) /*0x94e452*/
      v22 = 1; /*0x94e454*/
    sub_8A6E40(v40, v22, 4); /*0x94e45e*/
  }
  v40[1] = (const void *)1; /*0x94e472*/
  if ( (DWORD2(v39) & 0x3FFFFFFFu) < 2 ) /*0x94e476*/
  {
    v23 = 2 * (DWORD2(v39) & 0x3FFFFFFF); /*0x94e478*/
    if ( v23 <= 2 ) /*0x94e47d*/
      v23 = 2; /*0x94e47f*/
    sub_8A6E40((const void **)&v39, v23, 4); /*0x94e48c*/
  }
  DWORD1(v39) = 2; /*0x94e49f*/
  *(_DWORD *)v38.m128_i32[0] = v42; /*0x94e4a7*/
  *(_DWORD *)v39 = v41; /*0x94e4b1*/
  *(_DWORD *)(v39 + 4) = v21; /*0x94e4bb*/
  *(_DWORD *)v40[0] = v36; /*0x94e4c5*/
  (*(void (__thiscall **)(int *, __m128 *, unsigned int, int))(*a3 + 0x24))(a3, &v38, 0xFFFFFF00, a4); /*0x94e4d6*/
  (*(void (__thiscall **)(int *, __int128 *, unsigned int, int))(*a3 + 0x24))(a3, &v39, 0xFFFF0000, a4); /*0x94e4e8*/
  v37 = *a3; /*0x94e4fe*/
  v24 = sub_8AEB80(0xFFu, 0, 0xFFu, 0xFFu); /*0x94e502*/
  (*(void (__thiscall **)(int *, const void **, int, int))(v37 + 0x24))(a3, v40, v24, a4); /*0x94e516*/
  v25 = MEMORY[0xBA9DE4]; /*0x94e51f*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94e525*/
  if ( (int)v40[2] >= 0 ) /*0x94e52c*/
  {
    v27 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x94e531*/
    if ( !v27 ) /*0x94e539*/
      v27 = unk_BA7D9C; /*0x94e53b*/
    sub_8A75D0(v27, (_DWORD *)v40[0], 4 * (int)v40[2], 0x14); /*0x94e551*/
  }
  if ( (SDWORD2(v39) & 0x80000000) == 0 ) /*0x94e55c*/
  {
    v28 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x94e561*/
    if ( !v28 ) /*0x94e569*/
      v28 = unk_BA7D9C; /*0x94e56b*/
    sub_8A75D0(v28, (_DWORD *)v39, 4 * DWORD2(v39), 0x14); /*0x94e581*/
  }
  result = v38.m128_i32[2]; /*0x94e586*/
  if ( v38.m128_i32[2] >= 0 ) /*0x94e58c*/
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C); /*0x94e591*/
    if ( !v30 ) /*0x94e599*/
      v30 = unk_BA7D9C; /*0x94e59b*/
    return sub_8A75D0(v30, v38.m128_i32[0], 4 * v38.m128_i32[2], 0x14); /*0x94e5b1*/
  }
  return result; /*0x94e5b6*/
}
