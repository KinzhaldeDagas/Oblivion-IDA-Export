int __thiscall sub_90C550(__m128 *this, int a2, __m128 *a3)
{
  int result; // eax
  __m128 *v4; // edi
  __m128 v5; // xmm3
  __m128 v6; // xmm1
  int v7; // esi
  __int32 v8; // edx
  __int32 v9; // eax
  int v10; // edi
  double v11; // st7
  double v12; // st6
  __int32 v13; // ebx
  double v14; // st5
  int v15; // ebx
  float *v16; // edx
  double v17; // st7
  double v18; // st6
  double v19; // st4
  __int32 v20; // ebx
  double v21; // st5
  float *v22; // ebx
  __int32 v23; // esi
  float v24; // eax
  int v25; // edx
  double v26; // st4
  double v27; // st4
  double v28; // st4
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  float v31; // xmm2_4
  float v32; // xmm4_4
  __m128 v33; // xmm0
  bool v34; // zf
  float v35; // [esp+18h] [ebp-68h]
  float v36; // [esp+18h] [ebp-68h]
  float v37; // [esp+1Ch] [ebp-64h]
  float v38; // [esp+1Ch] [ebp-64h]
  __m128 *v39; // [esp+20h] [ebp-60h]
  __m128 *v40; // [esp+24h] [ebp-5Ch]
  int i; // [esp+28h] [ebp-58h]
  __m128 v42; // [esp+30h] [ebp-50h]
  __m128 v43; // [esp+30h] [ebp-50h]
  __m128 v44; // [esp+50h] [ebp-30h]

  result = *(_DWORD *)(a2 + 4) - 1; /*0x90c56a*/
  v4 = a3; /*0x90c56e*/
  v40 = *(__m128 **)a2; /*0x90c571*/
  v39 = a3; /*0x90c575*/
  v42.m128_u64[0] = 0x3F80000000000000LL; /*0x90c579*/
  v42.m128_u64[1] = 0x7F7FFFFF00000000LL; /*0x90c589*/
  if ( result >= 0 ) /*0x90c599*/
  {
    v5 = v42; /*0x90c59f*/
    for ( i = *(_DWORD *)(a2 + 4); ; --i ) /*0x90c5a5*/
    {
      *v4 = v5; /*0x90c5b4*/
      v6 = *(this + 3); /*0x90c5ba*/
      v43 = _mm_mul_ps(*v40, v6); /*0x90c5cb*/
      v44 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(*v40, *(this + 4)), v6), (__m128)xmmword_A97DD0); /*0x90c5dd*/
      v7 = (unsigned __int16)((unsigned __int32)v44.m128_i32[2] >> 6); /*0x90c5f0*/
      v8 = this->m128_i32[3]; /*0x90c5f3*/
      v9 = (unsigned __int16)((unsigned __int32)v44.m128_i32[0] >> 6); /*0x90c5f6*/
      if ( v9 >= v8 - 1 || v7 >= *((_DWORD *)this + 4) - 1 ) /*0x90c612*/
        goto LABEL_15; /*0x90c612*/
      v10 = *((_DWORD *)this + 0x18); /*0x90c61f*/
      v11 = v43.m128_f32[0] - (double)(unsigned __int16)((unsigned __int32)v44.m128_i32[0] >> 6); /*0x90c624*/
      v12 = v43.m128_f32[2] - (double)(unsigned __int16)((unsigned __int32)v44.m128_i32[2] >> 6); /*0x90c62e*/
      if ( !*((_BYTE *)this + 0x6C) ) /*0x90c61c*/
        break; /*0x90c61c*/
      v13 = v9 + v7 * v8; /*0x90c637*/
      v14 = *(float *)(v10 + 4 * v13); /*0x90c63d*/
      v15 = v10 + 4 * v13; /*0x90c642*/
      v16 = (float *)(v10 + 4 * (v9 + v8 * (v7 + 1))); /*0x90c645*/
      v4 = v39; /*0x90c648*/
      if ( v11 <= v12 ) /*0x90c658*/
      {
        v19 = *v16; /*0x90c698*/
        v38 = v16[1] - v19; /*0x90c69c*/
        goto LABEL_12; /*0x90c6a0*/
      }
      v35 = *(float *)(v15 + 4) - v14; /*0x90c661*/
      v37 = v16[1] - *(float *)(v15 + 4); /*0x90c669*/
      v17 = v37 * v12 + v35 * v11 + v14; /*0x90c67f*/
      v39->m128_f32[0] = -v35; /*0x90c68b*/
      v18 = v37; /*0x90c68d*/
LABEL_14:
      v4->m128_f32[2] = -v18; /*0x90c730*/
      v29 = _mm_mul_ps(*v4, *(this + 3)); /*0x90c744*/
      v30 = _mm_mul_ps(v29, v29); /*0x90c74c*/
      v30.m128_f32[0] = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0] /*0x90c764*/
                      + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
      v31 = 1.0 / fsqrt(v30.m128_f32[0]); /*0x90c777*/
      v32 = 3.0 - (float)((float)(v30.m128_f32[0] * v31) * v31); /*0x90c792*/
      v33 = (__m128)0x3F000000u; /*0x90c79e*/
      v33.m128_f32[0] = (float)(0.5 * v31) * v32; /*0x90c7a8*/
      *v4 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v29); /*0x90c7b6*/
      v4->m128_f32[3] = (v43.m128_f32[1] - v17) * *((float *)this + 9) - v40->m128_f32[3]; /*0x90c7bf*/
LABEL_15:
      ++v4; /*0x90c7c4*/
      result = i - 1; /*0x90c7d2*/
      v34 = i == 1; /*0x90c7d2*/
      v39 = v4; /*0x90c7d3*/
      ++v40; /*0x90c7d7*/
      if ( v34 ) /*0x90c7df*/
        return result; /*0x90c7df*/
    }
    v20 = v9 + v7 * v8; /*0x90c6a5*/
    v21 = *(float *)(v10 + 4 * v20 + 4); /*0x90c6ab*/
    v22 = (float *)(v10 + 4 * v20); /*0x90c6b9*/
    v23 = v9 + v8 * (v7 + 1); /*0x90c6bc*/
    v24 = *(float *)(v10 + 4 * v23); /*0x90c6be*/
    v25 = v10 + 4 * v23; /*0x90c6c1*/
    v4 = v39; /*0x90c6c4*/
    if ( v12 + v11 <= fConstant_1 ) /*0x90c6d1*/
    {
      v27 = v21; /*0x90c700*/
      v14 = *v22; /*0x90c700*/
      v38 = v27 - v14; /*0x90c704*/
      v19 = v24; /*0x90c708*/
LABEL_12:
      v28 = v19 - v14; /*0x90c70c*/
      v36 = v28; /*0x90c70e*/
      v17 = v28 * v12 + v38 * v11 + v14; /*0x90c71e*/
    }
    else
    {
      v26 = *(float *)(v25 + 4); /*0x90c6d3*/
      v38 = v26 - v24; /*0x90c6dc*/
      v36 = v26 - v21; /*0x90c6e2*/
      v17 = v21 + (v11 - fConstant_1) * v38 + v36 * v12; /*0x90c6fa*/
    }
    v4->m128_f32[0] = -v38; /*0x90c72a*/
    v18 = v36; /*0x90c72c*/
    goto LABEL_14; /*0x90c72c*/
  }
  return result; /*0x90c7e5*/
}
