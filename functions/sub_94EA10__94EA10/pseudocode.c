int __thiscall sub_94EA10(__m128 *this, int a2, _DWORD *a3, int a4)
{
  __m128 *v4; // ebx
  __m128 v7; // xmm1
  int v8; // edx
  __m128 v9; // xmm3
  int v10; // edx
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  int v18; // edx
  __m128 v19; // xmm3
  __m128 v20; // xmm1
  int v21; // edx
  __m128 v22; // xmm3
  __int32 v24; // [esp+50h] [ebp-C8h]
  unsigned int v25; // [esp+50h] [ebp-C8h]
  unsigned int v26; // [esp+50h] [ebp-C8h]
  unsigned int v27; // [esp+50h] [ebp-C8h]
  unsigned int v28; // [esp+50h] [ebp-C8h]
  unsigned int v29; // [esp+50h] [ebp-C8h]
  unsigned int v30; // [esp+50h] [ebp-C8h]
  unsigned int v31; // [esp+54h] [ebp-C4h]
  unsigned int v32; // [esp+54h] [ebp-C4h]
  __int32 v33; // [esp+54h] [ebp-C4h]
  unsigned int v34; // [esp+54h] [ebp-C4h]
  unsigned int v35; // [esp+54h] [ebp-C4h]
  __m128 v36; // [esp+58h] [ebp-C0h] BYREF
  __m128 v37; // [esp+68h] [ebp-B0h] BYREF
  __m128 v38; // [esp+78h] [ebp-A0h] BYREF
  __m128 v39; // [esp+88h] [ebp-90h] BYREF
  __m128 v40[4]; // [esp+98h] [ebp-80h] BYREF
  __m128 v41[4]; // [esp+D8h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600((_DWORD *)this + 0x30, (int)a3);
  sub_94D100(this, a2, v40, v41);
  sub_88FCC0(this + 5, v40, v4 + 3);
  sub_88FCC0(this + 4, v41, v4 + 1);
  sub_94CF80(this, a4);
  sub_94CF30((int *)this, a4);
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))(
    a3,
    this + 4,
    this + 5,
    0xFFFF0000,
    a4);
  sub_88FE00(&v39, this + 9, v4 + 6);
  v7 = *(this + 5);
  v8 = *a3;
  *(float *)&v31 = this->m128_f32[0] * flt_A45E4C;
  v9 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), v39), v7);
  *(float *)&v32 = this->m128_f32[0] * flt_A3D65C;
  v36 = v9;
  v37 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v39), v7);
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v8 + 0x1C))(a3, &v36, &v37, 0xFF008000, a4);
  v24 = v4[9].m128_i32[0];
  v33 = v4[9].m128_i32[1];
  sub_88FE00(&v37, this + 9, v4 + 7);
  v10 = *a3;
  v11 = (__m128)(unsigned int)v33;
  *(float *)&v34 = this->m128_f32[0] * flt_A2FAAC;
  v12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v39), *(this + 5));
  v13 = (__m128)v34;
  *(float *)&v35 = this->m128_f32[0] * flt_A641B8;
  v36 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v37), v12);
  v38 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v35, (__m128)v35, 0), v37), v12);
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v10 + 0x1C))(a3, &v36, &v38, 0xFFFFFFFF, a4);
  v14 = (__m128)(unsigned int)v24;
  *(float *)&v25 = this->m128_f32[0] * flt_A2FAAC;
  v15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v39), *(this + 5));
  v16 = (__m128)v25;
  *(float *)&v26 = this->m128_f32[0] * flt_A641B8;
  v36 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v37), v15);
  v38 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v26, (__m128)v26, 0), v37), v15);
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))(a3, &v36, &v38, 0xFFFFFFFF, a4);
  sub_88FE00(&v37, this + 9, v4 + 4);
  v17 = *(this + 5);
  v18 = *a3;
  *(float *)&v27 = this->m128_f32[0] * flt_A45E4C;
  v19 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v27, (__m128)v27, 0), v37), v17);
  *(float *)&v28 = this->m128_f32[0] * flt_A3D65C;
  v38 = v19;
  v36 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v28, (__m128)v28, 0), v37), v17);
  (*(void (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v18 + 0x1C))(a3, &v38, &v36, 0xFFFFFF00, a4);
  sub_88FE00(&v37, this + 6, v4 + 2);
  v20 = *(this + 4);
  v21 = *a3;
  *(float *)&v29 = this->m128_f32[0] * flt_A45E4C;
  v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v29, (__m128)v29, 0), v37), v20);
  *(float *)&v30 = this->m128_f32[0] * flt_A3D65C;
  v38 = v22;
  v36 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), v37), v20);
  return (*(int (__thiscall **)(_DWORD *, __m128 *, __m128 *, unsigned int, int))(v21 + 0x1C))(
           a3,
           &v38,
           &v36,
           0xFF0000FF,
           a4);
}
