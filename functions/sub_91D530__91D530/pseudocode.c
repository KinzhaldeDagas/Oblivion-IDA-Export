void __usercall sub_91D530(__m128 *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int *a4@<esi>, __m128 *a5)
{
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  long double v8; // st7
  long double v9; // st6
  __m128 v10; // xmm5
  long double v11; // st5
  int v12; // edx
  int v13; // eax
  __m128 v14; // xmm4
  __m128 v15; // xmm0
  float v16; // xmm3_4
  __m128 v17; // xmm7
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm2
  float v22; // xmm3_4
  __m128 v23; // xmm1
  __m128 v24; // xmm4
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  int v28; // edx
  int v29; // [esp+30h] [ebp-60h]
  int v30; // [esp+34h] [ebp-5Ch]
  float v31; // [esp+38h] [ebp-58h]
  float v32; // [esp+3Ch] [ebp-54h]
  __m128 v33; // [esp+40h] [ebp-50h] BYREF
  __m128 v34; // [esp+50h] [ebp-40h] BYREF
  __m128 v35; // [esp+60h] [ebp-30h] BYREF
  __m128 v36; // [esp+70h] [ebp-20h] BYREF
  __m128 v37; // [esp+80h] [ebp-10h] BYREF

  v5 = *a1; /*0x91d539*/
  v6 = _mm_mul_ps(v5, v5); /*0x91d53f*/
  if ( (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x91d56f*/
             + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0])) >= (double)flt_A9D760 )
  {
    v7 = *a5; /*0x91d57a*/
    v8 = fabs(a1->m128_f32[0]); /*0x91d57d*/
    v9 = fabs(a1->m128_f32[1]); /*0x91d582*/
    v10 = _mm_add_ps(*a5, v5); /*0x91d58e*/
    v11 = fabs(a1->m128_f32[2]); /*0x91d591*/
    v33 = v10; /*0x91d593*/
    v29 = 0; /*0x91d59c*/
    v12 = 1; /*0x91d5a5*/
    v30 = 2; /*0x91d5aa*/
    if ( v9 < v8 ) /*0x91d5b7*/
    {
      v12 = 0; /*0x91d5bb*/
      v31 = v9; /*0x91d587*/
      v8 = v31; /*0x91d5bd*/
      v29 = 1; /*0x91d5c1*/
    }
    v13 = v29; /*0x91d5d5*/
    v32 = v11; /*0x91d598*/
    if ( v32 < v8 ) /*0x91d5d8*/
    {
      v30 = v29; /*0x91d5da*/
      v13 = 2; /*0x91d5de*/
    }
    v34.m128_i32[v13] = 0; /*0x91d5e3*/
    v34.m128_i32[3] = 0; /*0x91d5ef*/
    v34.m128_i32[v12] = a1->m128_i32[v30]; /*0x91d5fa*/
    v34.m128_f32[v30] = -a1->m128_f32[v12]; /*0x91d607*/
    v14 = v34; /*0x91d60b*/
    v15 = _mm_mul_ps(v34, v34); /*0x91d613*/
    v16 = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]; /*0x91d61d*/
    v17 = _mm_shuffle_ps(v15, v15, 0xAA); /*0x91d624*/
    v18 = v17; /*0x91d628*/
    v18.m128_f32[0] = v17.m128_f32[0] + v16; /*0x91d62b*/
    v34 = v18; /*0x91d62f*/
    v34.m128_f32[0] = 1.0 / fsqrt(v17.m128_f32[0] + v16); /*0x91d638*/
    v19 = (__m128)0x3F000000u; /*0x91d665*/
    v19.m128_f32[0] = (float)(0.5 * v34.m128_f32[0]) /*0x91d66f*/
                    * (float)(3.0 - (float)((float)((float)(v17.m128_f32[0] + v16) * v34.m128_f32[0]) * v34.m128_f32[0]));
    v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v14); /*0x91d67d*/
    v21 = _mm_sub_ps( /*0x91d6a5*/
            _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xC9), _mm_shuffle_ps(v20, v20, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0xD2), _mm_shuffle_ps(v20, v20, 0xC9)));
    v22 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]; /*0x91d6af*/
    v23 = _mm_shuffle_ps(v6, v6, 0xAA); /*0x91d6ba*/
    v24 = (__m128)xmmword_A6DFE0; /*0x91d6bd*/
    v23.m128_f32[0] = v23.m128_f32[0] + v22; /*0x91d6c4*/
    v34 = v23; /*0x91d6c8*/
    v34.m128_i32[0] = fsqrt(v23.m128_f32[0]); /*0x91d6d1*/
    v25 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v20); /*0x91d6e6*/
    v26 = _mm_shuffle_ps((__m128)0x3F59999Au, (__m128)0x3F59999Au, 0); /*0x91d6f7*/
    v27 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v24, v26), v7), _mm_mul_ps(v26, v10)); /*0x91d70a*/
    v34 = _mm_add_ps(v27, _mm_mul_ps(_mm_shuffle_ps((__m128)0x3E199998u, (__m128)0x3E199998u, 0), v25)); /*0x91d72b*/
    v28 = *a4; /*0x91d733*/
    v35 = _mm_add_ps(v27, _mm_mul_ps(_mm_shuffle_ps((__m128)0xBE199998, (__m128)0xBE199998, 0), v25)); /*0x91d753*/
    v36 = _mm_add_ps(v27, _mm_mul_ps(_mm_shuffle_ps((__m128)0x3E199998u, (__m128)0x3E199998u, 0), v21)); /*0x91d77f*/
    v37 = _mm_add_ps(v27, _mm_mul_ps(_mm_shuffle_ps((__m128)0xBE199998, (__m128)0xBE199998, 0), v21)); /*0x91d784*/
    (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v28 + 0x1C))(a4, a5, &v33, a2, a3); /*0x91d789*/
    (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*a4 + 0x1C))(a4, &v33, &v34, a2, a3); /*0x91d79c*/
    (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*a4 + 0x1C))(a4, &v33, &v35, a2, a3); /*0x91d7af*/
    (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*a4 + 0x1C))(a4, &v33, &v36, a2, a3); /*0x91d7c2*/
    (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*a4 + 0x1C))(a4, &v33, &v37, a2, a3); /*0x91d7d5*/
  }
}
