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
  float v33; // [esp+Ch] [ebp-158h]
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

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600(this + 0x30, (int)a3);
  sub_94D100(this, a2, v50, v51);
  sub_88FCC0((__m128 *)this + 5, v50, v4 + 4);
  sub_88FCC0((__m128 *)this + 4, v51, v4 + 1);
  sub_94CF30(this, a4);
  sub_88FE00(&v45, (__m128 *)this + 9, v4 + 6);
  v6 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v4[6], v4[6], 0xC9), _mm_shuffle_ps(v4[5], v4[5], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v4[6], v4[6], 0xD2), _mm_shuffle_ps(v4[5], v4[5], 0xC9)));
  v7 = _mm_mul_ps(v6, v6);
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0];
  v9 = _mm_shuffle_ps(v7, v7, 0xAA);
  v10 = v9;
  v10.m128_f32[0] = v9.m128_f32[0] + v8;
  v38 = v10;
  v38.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8);
  v11 = (__m128)0x3F000000u;
  *(_OWORD *)v40 = 0x40400000u;
  v39 = 0x3F000000u;
  v11.m128_f32[0] = 0.5 * v38.m128_f32[0];
  v12 = v11;
  v12.m128_f32[0] = (float)(0.5 * v38.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v38.m128_f32[0]) * v38.m128_f32[0]));
  v44 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v6);
  sub_88FE00(&v44, (__m128 *)this + 9, &v44);
  sub_88FE00(&v43, (__m128 *)this + 9, v4 + 5);
  v13 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v4[2], v4[2], 0xC9), _mm_shuffle_ps(v4[3], v4[3], 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v4[2], v4[2], 0xD2), _mm_shuffle_ps(v4[3], v4[3], 0xC9)));
  v14 = _mm_mul_ps(v13, v13);
  v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
  v16 = _mm_shuffle_ps(v14, v14, 0xAA);
  v17 = v16;
  v17.m128_f32[0] = v16.m128_f32[0] + v15;
  v38 = v17;
  v38.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15);
  v18 = (__m128)0x3F000000u;
  v18.m128_f32[0] = (float)(0.5 * v38.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v38.m128_f32[0]) * v38.m128_f32[0]));
  v48 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v13);
  sub_88FE00(&v46, (__m128 *)this + 6, &v48);
  sub_88FE00(&v49, (__m128 *)this + 6, v4 + 3);
  sub_958750((int **)this + 0x30, (__m128 *)this + 5, &v45, (int)&v44, 0xFF008000, *((float *)this + 3), a4);
  v33 = *((float *)this + 3);
  v19 = sub_8AEB80(0xFFu, 0xFFu, 0, 0xFFu);
  sub_958750((int **)this + 0x30, (__m128 *)this + 4, &v49, (int)&v46, v19, v33, a4);
  v20 = v4[7].m128_i32[0];
  v42 = this + 0x34;
  sub_94DA90((int)(this + 0x34), v20, 0x3F000000, 0x18, &v45, (_OWORD *)this + 5);
  v47 = _mm_shuffle_ps((__m128)0x3E800000u, (__m128)0x3E800000u, 0);
  v36 = this + 0xA0;
  sub_94D6D0((_OWORD *)this + 0x28, &v43, &v44, (_OWORD *)this + 5, &v47);
  v35 = v4[7].m128_f32[1];
  *(float *)&v31 = flt_A3F3E0 - fabs(v4[7].m128_f32[2]);
  v41 = this + 0x58;
  sub_94DA90((int)(this + 0x58), v31, 0x3F000000, 0x18, &v43, (_OWORD *)this + 5);
  v34 = this + 0x14;
  v21 = this + 0x7C;
  *(float *)&v32 = flt_A3F3E0 - fabs(v35);
  v43 = _mm_xor_ps(v43, (__m128)xmmword_A965C0);
  sub_94DA90((int)v21, v32, 0x3F000000, 0x18, &v43, v34);
  v38.m128_u64[0] = 0;
  v38.m128_i32[2] = 0x80000000;
  *(_QWORD *)&v39 = 0;
  DWORD2(v39) = 0x80000000;
  v40[0] = 0;
  v40[1] = 0;
  v40[2] = (const void *)0x80000000;
  sub_8A6E40((const void **)&v38, 1, 4);
  v38.m128_i32[1] = 1;
  if ( ((int)v40[2] & 0x3FFFFFFF) == 0 )
  {
    v22 = 2 * ((int)v40[2] & 0x3FFFFFFF);
    if ( v22 <= 1 )
      v22 = 1;
    sub_8A6E40(v40, v22, 4);
  }
  v40[1] = (const void *)1;
  if ( (DWORD2(v39) & 0x3FFFFFFFu) < 2 )
  {
    v23 = 2 * (DWORD2(v39) & 0x3FFFFFFF);
    if ( v23 <= 2 )
      v23 = 2;
    sub_8A6E40((const void **)&v39, v23, 4);
  }
  DWORD1(v39) = 2;
  *(_DWORD *)v38.m128_i32[0] = v42;
  *(_DWORD *)v39 = v41;
  *(_DWORD *)(v39 + 4) = v21;
  *(_DWORD *)v40[0] = v36;
  (*(void (__thiscall **)(int *, __m128 *, unsigned int, int))(*a3 + 0x24))(a3, &v38, 0xFFFFFF00, a4);
  (*(void (__thiscall **)(int *, __int128 *, unsigned int, int))(*a3 + 0x24))(a3, &v39, 0xFFFF0000, a4);
  v37 = *a3;
  v24 = sub_8AEB80(0xFFu, 0, 0xFFu, 0xFFu);
  (*(void (__thiscall **)(int *, const void **, int, int))(v37 + 0x24))(a3, v40, v24, a4);
  v25 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( (int)v40[2] >= 0 )
  {
    v27 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
    if ( !v27 )
      v27 = dword_BA7D9C;
    sub_8A75D0(v27, (_DWORD *)v40[0], 4 * (int)v40[2], 0x14);
  }
  if ( (SDWORD2(v39) & 0x80000000) == 0 )
  {
    v28 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
    if ( !v28 )
      v28 = dword_BA7D9C;
    sub_8A75D0(v28, (_DWORD *)v39, 4 * DWORD2(v39), 0x14);
  }
  result = v38.m128_i32[2];
  if ( v38.m128_i32[2] >= 0 )
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v25] + 0x19C);
    if ( !v30 )
      v30 = dword_BA7D9C;
    return sub_8A75D0(v30, v38.m128_i32[0], 4 * v38.m128_i32[2], 0x14);
  }
  return result;
}
