int __thiscall sub_94E5C0(__m128 *this, int a2, int *a3, int a4)
{
  __m128 *v4; // esi
  long double v6; // st7
  int v7; // ecx
  long double v8; // st6
  int v9; // edx
  int v10; // eax
  __m128 v11; // xmm0
  int v12; // ecx
  double v13; // st7
  int v14; // eax
  __int32 v15; // edx
  __m128 v16; // xmm2
  int v17; // ecx
  __m128 v18; // xmm3
  __m128 v19; // xmm4
  int v20; // edx
  __m128 *v21; // eax
  __m128 *v22; // esi
  __m128 v23; // xmm0
  __m128 *v24; // esi
  __m128 v25; // xmm1
  char *v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  unsigned int v32; // [esp+10h] [ebp-170h]
  float v33; // [esp+14h] [ebp-16Ch]
  int v34; // [esp+14h] [ebp-16Ch]
  int v35; // [esp+14h] [ebp-16Ch]
  float v36; // [esp+18h] [ebp-168h]
  __m128 v37; // [esp+20h] [ebp-160h] BYREF
  __m128 v38; // [esp+30h] [ebp-150h] BYREF
  __m128 v39[4]; // [esp+40h] [ebp-140h] BYREF
  __m128 v40[4]; // [esp+80h] [ebp-100h] BYREF
  char v41[192]; // [esp+C0h] [ebp-C0h] BYREF

  v4 = *(__m128 **)(a2 + 0xC); /*0x94e5d4*/
  sub_958600((_DWORD *)this + 0x30, (int)a3); /*0x94e5e1*/
  sub_94D100(this, a2, v39, v40); /*0x94e5f6*/
  hkTransform_TransformPosition(this + 5, v39, v4 + 2); /*0x94e60b*/
  hkTransform_TransformPosition(this + 4, v40, v4 + 1); /*0x94e621*/
  sub_94CF30((int *)this, a4); /*0x94e62c*/
  sub_94CF80(this, a4); /*0x94e637*/
  v6 = fabs(v4[3].m128_f32[0]); /*0x94e63f*/
  v7 = 0; /*0x94e641*/
  v8 = fabs(v4[3].m128_f32[1]); /*0x94e646*/
  v9 = 1; /*0x94e648*/
  v36 = fabs(v4[3].m128_f32[2]); /*0x94e65e*/
  if ( v8 < v6 ) /*0x94e669*/
  {
    v9 = 0; /*0x94e66d*/
    v33 = v8; /*0x94e64d*/
    v6 = v33; /*0x94e66f*/
    v7 = 1; /*0x94e673*/
  }
  if ( v36 >= v6 ) /*0x94e685*/
  {
    v10 = 2; /*0x94e690*/
  }
  else
  {
    v10 = v7; /*0x94e687*/
    v7 = 2; /*0x94e689*/
  }
  v11 = v4[3]; /*0x94e694*/
  v37.m128_i32[v7] = 0; /*0x94e698*/
  v12 = v9; /*0x94e6a0*/
  v13 = v4[3].m128_f32[v9]; /*0x94e6a7*/
  v14 = v10; /*0x94e6ab*/
  v15 = v4[3].m128_i32[v14]; /*0x94e6ae*/
  v37.m128_i32[3] = 0; /*0x94e6b4*/
  v37.m128_i32[v12] = v15; /*0x94e6bc*/
  v37.m128_f32[v14] = -v13; /*0x94e6c0*/
  v16 = *(this + 4); /*0x94e6eb*/
  v38 = _mm_sub_ps( /*0x94e70d*/
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v37, v37, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v37, v37, 0xC9)));
  v17 = 0; /*0x94e712*/
  v18 = _mm_shuffle_ps((__m128)0x40000000u, (__m128)0x40000000u, 0); /*0x94e714*/
  v19 = _mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0); /*0x94e718*/
  do /*0x94e7ca*/
  {
    v20 = 0xFFFFFFFF; /*0x94e720*/
    v34 = 0xFFFFFFFF; /*0x94e729*/
    v21 = (__m128 *)&v41[0x60 * v17 + 0x10]; /*0x94e72d*/
    do /*0x94e7c0*/
    {
      v22 = &v37; /*0x94e736*/
      if ( !v17 ) /*0x94e73a*/
        v22 = &v38; /*0x94e73c*/
      v23 = *v22; /*0x94e742*/
      v24 = &v38; /*0x94e745*/
      if ( !v17 ) /*0x94e749*/
        v24 = &v37; /*0x94e74b*/
      v25 = *v24; /*0x94e753*/
      v21[0xFFFFFFFF] = v16; /*0x94e756*/
      *v21 = v16; /*0x94e75a*/
      *(float *)&v32 = (double)v34 * flt_AA2C4C; /*0x94e770*/
      v21[0xFFFFFFFF] = _mm_add_ps(v21[0xFFFFFFFF], _mm_mul_ps(v18, v23)); /*0x94e774*/
      *v21 = _mm_add_ps(*v21, _mm_mul_ps(v19, v23)); /*0x94e784*/
      v21[0xFFFFFFFF] = _mm_add_ps(v21[0xFFFFFFFF], _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v25)); /*0x94e7a1*/
      ++v20; /*0x94e7b2*/
      *v21 = _mm_add_ps(*v21, _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v25)); /*0x94e7b3*/
      v21 += 2; /*0x94e7b6*/
      v34 = v20; /*0x94e7bc*/
    }
    while ( v20 <= 1 ); /*0x94e7c0*/
    ++v17; /*0x94e7c6*/
  }
  while ( v17 < 2 ); /*0x94e7ca*/
  v26 = v41; /*0x94e7d0*/
  v35 = 6; /*0x94e7d7*/
  do /*0x94e81d*/
  {
    v27 = *a3; /*0x94e7e6*/
    v28 = sub_8AEBB0(0.80000001, 0.80000001, 0.80000001, 1.0); /*0x94e7fd*/
    (*(void (__thiscall **)(int *, char *, char *, int, int))(v27 + 0x1C))(a3, v26, v26 + 0x10, v28, a4); /*0x94e80e*/
    v26 += 0x20; /*0x94e815*/
    --v35; /*0x94e819*/
  }
  while ( v35 ); /*0x94e81d*/
  v29 = *a3; /*0x94e825*/
  v30 = sub_8AEBB0(0.30000001, 0.30000001, 0.80000001, 1.0); /*0x94e83c*/
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v29 + 0x1C))(a3, this + 5, this + 3, v30, a4); /*0x94e853*/
}
