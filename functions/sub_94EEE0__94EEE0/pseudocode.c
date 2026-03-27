int __thiscall sub_94EEE0(__m128 *this, int a2, int *a3, int a4)
{
  __m128 *v4; // ebx
  __int32 v6; // eax
  __m128 v7; // xmm1
  __int32 v8; // edx
  int v9; // ebx
  __int32 v10; // ecx
  int v11; // eax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  int v15; // edx
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  int v19; // [esp+10h] [ebp-E8h]
  __m128 *v20; // [esp+30h] [ebp-C8h]
  unsigned int v21; // [esp+30h] [ebp-C8h]
  unsigned int v22; // [esp+30h] [ebp-C8h]
  unsigned int v23; // [esp+30h] [ebp-C8h]
  unsigned int v24; // [esp+30h] [ebp-C8h]
  unsigned int v25; // [esp+34h] [ebp-C4h]
  __int32 v26; // [esp+34h] [ebp-C4h]
  __m128 v27; // [esp+38h] [ebp-C0h] BYREF
  __m128 v28; // [esp+48h] [ebp-B0h] BYREF
  __m128 v29; // [esp+58h] [ebp-A0h] BYREF
  __m128 v30; // [esp+68h] [ebp-90h] BYREF
  __m128 v31[4]; // [esp+78h] [ebp-80h] BYREF
  __m128 v32[4]; // [esp+B8h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  v20 = v4;
  sub_958600((_DWORD *)this + 0x30, (int)a3);
  sub_94D100(this, a2, v31, v32);
  sub_88FCC0(this + 5, v31, v4 + 6);
  sub_88FCC0(this + 4, v32, v4 + 1);
  sub_94CF30((int *)this, a4);
  sub_94CF80(this, a4);
  sub_88FE00(&v29, this + 9, v4 + 7);
  sub_88FE00(&v30, this + 9, v4 + 8);
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))(
    a3,
    this + 4,
    this + 5,
    0xFFFF0000,
    a4);
  v6 = v4[9].m128_i32[1];
  v7 = *(this + 5);
  if ( v6 == 0x7F7FFFFF )
  {
    v9 = *a3;
    *(float *)&v25 = -this->m128_f32[0];
    v27 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)this->m128_u32[0], (__m128)this->m128_u32[0], 0), v29), v7);
    v28 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v29), v7);
  }
  else
  {
    v8 = v4[9].m128_i32[0];
    v9 = *a3;
    v27 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v6, (__m128)(unsigned int)v6, 0), v29), v7);
    v28 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v8, (__m128)(unsigned int)v8, 0), v29), v7);
  }
  v19 = sub_8AEBB0(0.0, 0.5, 1.0, 1.0);
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v9 + 0x1C))(a3, &v28, &v27, v19, a4);
  v10 = v20[9].m128_i32[1];
  v11 = *a3;
  v12 = (__m128)v20[9].m128_u32[0];
  *(float *)&v21 = this->m128_f32[0] * flt_A3D65C;
  v13 = (__m128)v21;
  *(float *)&v22 = this->m128_f32[0] * flt_A45E4C;
  v14 = _mm_add_ps(*(this + 5), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v29));
  v26 = v10;
  v27 = _mm_add_ps(v14, _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v30));
  v28 = _mm_add_ps(v14, _mm_mul_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v30));
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(v11 + 0x1C))(a3, &v27, &v28, 0xFFFFFFFF, a4);
  v15 = *a3;
  *(float *)&v23 = this->m128_f32[0] * flt_A3D65C;
  v16 = (__m128)v23;
  *(float *)&v24 = this->m128_f32[0] * flt_A45E4C;
  v17 = _mm_add_ps(
          *(this + 5),
          _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v26, (__m128)(unsigned int)v26, 0), v29));
  v27 = _mm_add_ps(v17, _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v30));
  v28 = _mm_add_ps(v17, _mm_mul_ps(_mm_shuffle_ps((__m128)v24, (__m128)v24, 0), v30));
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(v15 + 0x1C))(
           a3,
           &v27,
           &v28,
           0xFFFFFFFF,
           a4);
}
