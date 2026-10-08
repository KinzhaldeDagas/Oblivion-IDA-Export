int __thiscall sub_94F1C0(__m128 *this, int a2, _DWORD *a3, int a4)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  double v12; // st7
  int v13; // edx
  __m128 v14; // xmm0
  float v15; // xmm1_4
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  unsigned int v20; // [esp+3Ch] [ebp-F4h]
  __m128 v21; // [esp+40h] [ebp-F0h] BYREF
  __m128 *v22; // [esp+5Ch] [ebp-D4h]
  __m128 v23; // [esp+60h] [ebp-D0h] BYREF
  __m128 v24; // [esp+70h] [ebp-C0h] BYREF
  __m128 v25; // [esp+80h] [ebp-B0h] BYREF
  __m128 v26; // [esp+90h] [ebp-A0h] BYREF
  __m128 v27; // [esp+A0h] [ebp-90h] BYREF
  __m128 v28[4]; // [esp+B0h] [ebp-80h] BYREF
  __m128 v29[4]; // [esp+F0h] [ebp-40h] BYREF

  v22 = *(__m128 **)(a2 + 0xC); /*0x94f1e1*/
  sub_958600((_DWORD *)this + 0x30, (int)a3); /*0x94f1e5*/
  sub_94D100(this, a2, v28, v29); /*0x94f200*/
  hkTransform_TransformPosition(this + 5, v28, v22 + 6); /*0x94f214*/
  hkTransform_TransformPosition(this + 4, v29, v22 + 2); /*0x94f228*/
  sub_94CF80(this, a4); /*0x94f233*/
  sub_94CF30((int *)this, a4); /*0x94f23e*/
  hkBasis_TransformVector(&v26, this + 9, v22 + 7); /*0x94f252*/
  hkBasis_TransformVector(&v27, this + 9, v22 + 8); /*0x94f269*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))( /*0x94f283*/
    a3,
    this + 4,
    this + 5,
    0xFFFF0000,
    a4);
  v6 = *(this + 5); /*0x94f293*/
  *(float *)&v20 = this->m128_f32[0] * kHeadBodyNormalMatchRadius; /*0x94f296*/
  v7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v26), v6); /*0x94f2b2*/
  *(float *)&v20 = this->m128_f32[0] * flt_A45E4C; /*0x94f2b5*/
  v23 = v7; /*0x94f2bf*/
  v24 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v26), v6); /*0x94f2d1*/
  v8 = *a3; /*0x94f2d9*/
  v9 = sub_8AEBB0(0.0, 0.5, 1.0, 1.0); /*0x94f2ed*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, int, int))(v8 + 0x1C))(a3, &v24, &v23, v9, a4); /*0x94f302*/
  sub_94D1F0( /*0x94f32e*/
    (int)(this + 0xD),
    0x3FC00000,
    v22->m128_i32[3],
    v22[1].m128_i32[0],
    0x18,
    (_OWORD *)this + 5,
    &v26,
    (__int128 *)&v27);
  v21.m128_i32[0] = 0; /*0x94f337*/
  *(unsigned __int64 *)((char *)v21.m128_u64 + 4) = 0x8000000000000000uLL; /*0x94f33b*/
  sub_8A6E40((const void **)&v21, 1, 4); /*0x94f34e*/
  v21.m128_i32[1] = 1; /*0x94f35a*/
  *(_DWORD *)v21.m128_i32[0] = this + 0xD; /*0x94f362*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, unsigned int, int))(*a3 + 0x24))(a3, &v21, 0xFFFFFFFF, a4); /*0x94f373*/
  if ( v21.m128_i32[2] >= 0 ) /*0x94f37c*/
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94f38e*/
    if ( !v10 ) /*0x94f396*/
      v10 = unk_BA7D9C; /*0x94f398*/
    sub_8A75D0(v10, v21.m128_i32[0], 4 * v21.m128_i32[2], 0x14); /*0x94f3ae*/
  }
  v11 = *a3; /*0x94f3c4*/
  *(float *)&v20 = this->m128_f32[0] * kHeadBodyNormalMatchRadius; /*0x94f3c7*/
  v25 = *(this + 5); /*0x94f3e6*/
  v21 = _mm_add_ps(v25, _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v27)); /*0x94f3f4*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v11 + 0x1C))(a3, &v25, &v21, 0xFFFFFF00, a4); /*0x94f3f9*/
  hkBasis_TransformVector(&v23, this + 6, v22 + 5); /*0x94f40c*/
  v12 = this->m128_f32[0] * kHeadBodyNormalMatchRadius; /*0x94f418*/
  v13 = *a3; /*0x94f41e*/
  v14 = _mm_mul_ps(v23, v23); /*0x94f423*/
  v15 = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x94f42d*/
  v16 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x94f434*/
  v17 = v16; /*0x94f438*/
  v17.m128_f32[0] = v16.m128_f32[0] + v15; /*0x94f43b*/
  v24 = v17; /*0x94f43f*/
  v24.m128_f32[0] = 1.0 / fsqrt(v16.m128_f32[0] + v15); /*0x94f448*/
  v18 = (__m128)0x3F000000u; /*0x94f475*/
  *(float *)&v20 = v12; /*0x94f47b*/
  v18.m128_f32[0] = (float)(0.5 * v24.m128_f32[0]) /*0x94f483*/
                  * (float)(3.0 - (float)((float)((float)(v16.m128_f32[0] + v15) * v24.m128_f32[0]) * v24.m128_f32[0]));
  v25 = *(this + 4); /*0x94f4b4*/
  v23 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v23); /*0x94f4c2*/
  v21 = _mm_add_ps(v25, _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v23)); /*0x94f4c7*/
  return (*(int (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v13 + 0x1C))( /*0x94f4cf*/
           a3,
           &v25,
           &v21,
           0xFFFFFF00,
           a4);
}
