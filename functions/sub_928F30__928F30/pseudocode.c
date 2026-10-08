void __thiscall sub_928F30(float *this, float a2, __m128 *a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // edi
  double v7; // st7
  int v8; // esi
  int v9; // ecx
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  __m128 v15; // xmm2
  float v16; // xmm5_4
  __m128 v17; // xmm0
  __m128 *v18; // edx
  __m128 v19; // xmm3
  __m128 v20; // xmm0
  float v21; // xmm4_4
  float v22; // xmm5_4
  __m128 v23; // xmm0
  __m128 v24; // xmm4
  __m128 v25; // xmm3
  __m128 v26; // xmm0
  float v27; // xmm5_4
  __m128 v28; // xmm0
  double v29; // st7
  __m128 v30; // xmm3
  __m128 v31; // xmm0
  float v32; // xmm4_4
  float v33; // xmm5_4
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  float v38; // [esp+4h] [ebp-24h]
  int v39; // [esp+8h] [ebp-20h]
  float v40; // [esp+8h] [ebp-20h]
  float v41; // [esp+8h] [ebp-20h]
  int v42; // [esp+Ch] [ebp-1Ch]
  float v43; // [esp+10h] [ebp-18h]
  unsigned int v44; // [esp+14h] [ebp-14h]
  unsigned int v45; // [esp+14h] [ebp-14h]
  float v46; // [esp+18h] [ebp-10h]

  v38 = *(this + 2); /*0x928f45*/
  v43 = fConstant_1 / v38; /*0x928f53*/
  v4 = sub_8ECB30(LODWORD(a2)); /*0x928f5c*/
  v5 = *((_DWORD *)this + 9); /*0x928f5e*/
  v6 = v4 + 1; /*0x928f61*/
  v39 = v4; /*0x928f69*/
  v42 = v4 + 1; /*0x928f6d*/
  if ( v4 + 1 >= v5 ) /*0x928f71*/
  {
    v6 = v5 - 1; /*0x928f73*/
    v4 = v5 - 2; /*0x928f76*/
LABEL_5:
    v39 = v4; /*0x928f86*/
    v42 = v6; /*0x928f8a*/
    goto LABEL_6; /*0x928f8a*/
  }
  if ( v4 < 0 ) /*0x928f7d*/
  {
    v4 = 0; /*0x928f7f*/
    v6 = 1; /*0x928f81*/
    goto LABEL_5; /*0x928f81*/
  }
LABEL_6:
  v7 = a2 - (double)v39; /*0x928f8e*/
  v8 = 0x10 * v4; /*0x928f9c*/
  v9 = 0x10 * v6; /*0x928fa3*/
  v10 = _mm_sub_ps(*(__m128 *)(0x10 * v6 + *((_DWORD *)this + 8)), *(__m128 *)(0x10 * v4 + *((_DWORD *)this + 8))); /*0x928fb5*/
  v11 = _mm_mul_ps(v10, v10); /*0x928fbb*/
  v12 = _mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]; /*0x928fc5*/
  v13 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]; /*0x928fcc*/
  v14 = 1.0 / fsqrt(v13 + v12); /*0x928fe6*/
  v11.m128_f32[0] = (float)((float)(v13 + v12) * v14) * v14; /*0x928fef*/
  v15 = (__m128)0x3F000000u; /*0x929009*/
  v16 = 3.0 - v11.m128_f32[0]; /*0x929012*/
  v17 = (__m128)0x3F000000u; /*0x929016*/
  v17.m128_f32[0] = (float)(0.5 * v14) * v16; /*0x92901d*/
  *a3 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v10); /*0x92902b*/
  if ( v7 >= v38 || v4 <= 0 ) /*0x92903b*/
  {
    v18 = a3; /*0x929154*/
  }
  else
  {
    --v6; /*0x92904d*/
    v8 = 0x10 * (v4 - 1); /*0x929053*/
    v18 = a3; /*0x929059*/
    v9 = 0x10 * v6; /*0x92905c*/
    v19 = _mm_sub_ps(*(__m128 *)(*((_DWORD *)this + 8) + 0x10 * v6), *(__m128 *)(*((_DWORD *)this + 8) + v8)); /*0x929063*/
    v20 = _mm_mul_ps(v19, v19); /*0x929069*/
    v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x929081*/
                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
    v21 = 1.0 / fsqrt(v20.m128_f32[0]); /*0x929094*/
    v22 = 3.0 - (float)((float)(v20.m128_f32[0] * v21) * v21); /*0x9290a8*/
    v23 = (__m128)0x3F000000u; /*0x9290b2*/
    v23.m128_f32[0] = (float)(0.5 * v21) * v22; /*0x9290b9*/
    v40 = v7; /*0x928faa*/
    *(float *)&v44 = (v38 - v40) * v43 * kHeadBodyNormalMatchRadius; /*0x9290c0*/
    v24 = _mm_shuffle_ps((__m128)v44, (__m128)v44, 0); /*0x9290ce*/
    v25 = _mm_add_ps( /*0x9290f1*/
            _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), *a3),
            _mm_mul_ps(v24, _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19)));
    v26 = _mm_mul_ps(v25, v25); /*0x9290f7*/
    v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x92910f*/
                    + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
    v24.m128_f32[0] = 1.0 / fsqrt(v26.m128_f32[0]); /*0x929122*/
    v27 = 3.0 - (float)((float)(v26.m128_f32[0] * v24.m128_f32[0]) * v24.m128_f32[0]); /*0x929132*/
    v28 = (__m128)0x3F000000u; /*0x929136*/
    v28.m128_f32[0] = (float)(0.5 * v24.m128_f32[0]) * v27; /*0x92913d*/
    v42 = v6; /*0x92914b*/
    *a3 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v25); /*0x92914f*/
  }
  v29 = (double)v42 - a2; /*0x92915b*/
  if ( v29 < v38 && v6 < *((_DWORD *)this + 9) - 1 ) /*0x929177*/
  {
    v30 = _mm_sub_ps(*(__m128 *)(*((_DWORD *)this + 8) + v9 + 0x10), *(__m128 *)(*((_DWORD *)this + 8) + v8 + 0x10)); /*0x929192*/
    v31 = _mm_mul_ps(v30, v30); /*0x929198*/
    v31.m128_f32[0] = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0] /*0x9291b0*/
                    + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
    v32 = 1.0 / fsqrt(v31.m128_f32[0]); /*0x9291c3*/
    v33 = 3.0 - (float)((float)(v31.m128_f32[0] * v32) * v32); /*0x9291d7*/
    v34 = (__m128)0x3F000000u; /*0x9291e1*/
    v34.m128_f32[0] = (float)(0.5 * v32) * v33; /*0x9291e8*/
    v41 = v29; /*0x92915e*/
    *(float *)&v45 = (v38 - v41) * v43 * kHeadBodyNormalMatchRadius; /*0x9291ef*/
    v35 = _mm_shuffle_ps((__m128)v45, (__m128)v45, 0); /*0x9291fd*/
    v36 = _mm_add_ps( /*0x929220*/
            _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v35), *v18),
            _mm_mul_ps(v35, _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), v30)));
    v37 = _mm_mul_ps(v36, v36); /*0x929226*/
    v37.m128_f32[0] = _mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0] /*0x92923e*/
                    + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]);
    v46 = 1.0 / fsqrt(v37.m128_f32[0]); /*0x92924b*/
    v15.m128_f32[0] = (float)(0.5 * v46) * (float)(3.0 - (float)((float)(v37.m128_f32[0] * v46) * v46)); /*0x929266*/
    *v18 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v36); /*0x929274*/
  }
}
