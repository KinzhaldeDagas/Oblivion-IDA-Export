void __cdecl sub_959090(int a1, int a2, __m128 *a3, __m128 **a4, __m128 **a5)
{
  int v5; // eax
  float *v6; // edi
  __m128 *v7; // edx
  int v8; // eax
  __m128 *v9; // ecx
  int v10; // esi
  __m128 v11; // xmm0
  double v12; // st7
  double v13; // st6
  double v14; // st6
  double v15; // st5
  double v16; // st5
  double v17; // st6
  double v18; // st7
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  float v22; // xmm2_4
  float v23; // xmm3_4
  __m128 v24; // xmm0
  long double v25; // st7
  float v26; // [esp+10h] [ebp-30h]
  float v27; // [esp+14h] [ebp-2Ch]
  float v28; // [esp+18h] [ebp-28h]
  float v29; // [esp+1Ch] [ebp-24h]
  float v30; // [esp+20h] [ebp-20h]
  float v31; // [esp+24h] [ebp-1Ch]
  float v32; // [esp+24h] [ebp-1Ch]
  float v33; // [esp+24h] [ebp-1Ch]
  float v34; // [esp+24h] [ebp-1Ch]
  float v35; // [esp+24h] [ebp-1Ch]
  float v36; // [esp+28h] [ebp-18h]
  float v37; // [esp+28h] [ebp-18h]
  float v38; // [esp+28h] [ebp-18h]
  int v39; // [esp+2Ch] [ebp-14h]
  float v40; // [esp+30h] [ebp-10h]
  float v41; // [esp+30h] [ebp-10h]
  float v42; // [esp+34h] [ebp-Ch]

  v5 = *(_DWORD *)(a1 + 0x10) - 1; /*0x95909f*/
  v30 = 3.4028235e38; /*0x9590a6*/
  if ( v5 >= 0 ) /*0x9590ae*/
  {
    v6 = (float *)(0x50 * v5 + a1 + 0xF80); /*0x9590bb*/
    v39 = *(_DWORD *)(a1 + 0x10); /*0x9590c2*/
    while ( 1 ) /*0x9590c8*/
    {
      v7 = (__m128 *)(v6 + 0xFFFFFFFC); /*0x9590c8*/
      if ( *v6 * *v6 <= v30 ) /*0x9590da*/
      {
        v8 = *(_DWORD *)(a2 + 0x10) - 1; /*0x9590e6*/
        if ( v8 >= 1 ) /*0x9590ea*/
          break; /*0x9590ea*/
      }
LABEL_23:
      v6 += 0xFFFFFFEC; /*0x959308*/
      if ( !--v39 ) /*0x959314*/
        goto LABEL_24; /*0x959314*/
    }
    v9 = (__m128 *)(0x50 * v8 + a2 + 0xF70); /*0x9590f6*/
    v10 = *(_DWORD *)(a2 + 0x10) - 1; /*0x9590fd*/
    while ( 1 ) /*0x959100*/
    {
      if ( v9[1].m128_f32[0] * v9[1].m128_f32[0] > v30 ) /*0x959112*/
        goto LABEL_22; /*0x959112*/
      v11 = _mm_mul_ps(*v7, *v9); /*0x95911e*/
      v26 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x95913b*/
          + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
      if ( v26 < (double)flt_A45E4C ) /*0x95914e*/
        goto LABEL_22; /*0x95914e*/
      v28 = *v6; /*0x95915a*/
      v29 = v9[1].m128_f32[0]; /*0x959161*/
      v31 = *v6 - v26 * v29; /*0x95916d*/
      v36 = v29 - v26 * *v6; /*0x95917d*/
      if ( v31 <= (double)flt_AA386C ) /*0x959190*/
      {
        if ( v28 <= (double)flt_AA386C ) /*0x95929e*/
          goto LABEL_18; /*0x95929e*/
        v12 = *(float *)&SrcStr; /*0x9592a0*/
        v27 = 1.0; /*0x9592a6*/
        v17 = v29 * v29; /*0x9592b2*/
      }
      else
      {
        if ( v36 > (double)flt_AA386C ) /*0x9591a5*/
        {
          if ( v31 <= (double)v36 ) /*0x9591b8*/
          {
            v38 = v31 / v36; /*0x959206*/
            v34 = fConstant_1 / (v26 * v38 + fConstant_1); /*0x95921e*/
            v27 = v34; /*0x959222*/
            v12 = v38 * v34; /*0x95922a*/
            v14 = v34 * v29; /*0x959232*/
            v15 = v38 * v14; /*0x95923a*/
          }
          else
          {
            v37 = v36 / v31; /*0x9591c2*/
            v12 = fConstant_1 / (v26 * v37 + fConstant_1); /*0x9591d4*/
            v32 = v12; /*0x9591da*/
            v27 = v37 * v12; /*0x9591e4*/
            v13 = v32 * v28; /*0x9591ec*/
            v33 = v13; /*0x9591f0*/
            v14 = v13 * v37; /*0x9591f4*/
            v15 = v33; /*0x9591f8*/
          }
          v16 = v14 * ((fConstant_1 - v26 * v26) * v14) + (v15 + v26 * v14) * (v15 + v26 * v14); /*0x95925c*/
          v35 = v16; /*0x95925e*/
          v17 = v16; /*0x959262*/
          goto LABEL_20; /*0x959264*/
        }
        if ( v29 <= (double)*(float *)&SrcStr ) /*0x959275*/
        {
LABEL_18:
          v12 = kHeadBodyNormalMatchRadius; /*0x9592b8*/
          v27 = 0.5; /*0x9592be*/
          v17 = -(v26 * v26); /*0x9592ce*/
          goto LABEL_19; /*0x9592ce*/
        }
        v12 = fConstant_1; /*0x959277*/
        v27 = 0.0; /*0x95927d*/
        v17 = v28 * v28; /*0x959289*/
      }
LABEL_19:
      v35 = v17; /*0x9592d0*/
LABEL_20:
      if ( v17 < v30 ) /*0x9592dd*/
      {
        v40 = v12; /*0x9592e3*/
        v42 = v27; /*0x9592e7*/
        *a4 = v7; /*0x9592ee*/
        *a5 = v9; /*0x9592f4*/
        v30 = v35; /*0x9592f6*/
      }
LABEL_22:
      v9 += 0xFFFFFFFB; /*0x9592fe*/
      if ( !--v10 ) /*0x959302*/
        goto LABEL_23; /*0x959302*/
    }
  }
LABEL_24:
  v18 = *(float *)&SrcStr; /*0x95931a*/
  v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v40), (__m128)LODWORD(v40), 0), **a4); /*0x95934b*/
  *a3 = v19; /*0x95934e*/
  v20 = _mm_add_ps(v19, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v42), (__m128)LODWORD(v42), 0), **a5)); /*0x959372*/
  v21 = _mm_mul_ps(v20, v20); /*0x959375*/
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]; /*0x95937f*/
  v23 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]; /*0x959386*/
  v41 = 1.0 / fsqrt(v23 + v22); /*0x95939a*/
  v24 = (__m128)0x3F000000u; /*0x9593c7*/
  v24.m128_f32[0] = (float)(0.5 * v41) * (float)(3.0 - (float)((float)((float)(v23 + v22) * v41) * v41)); /*0x9593d1*/
  *a3 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v20); /*0x9593df*/
  if ( v18 <= v30 ) /*0x9593e2*/
    v25 = sqrt(v30); /*0x9593fb*/
  else
    v25 = sqrt(*(float *)&SrcStr); /*0x9593ea*/
  a3->m128_f32[3] = v25; /*0x9593ec*/
}
