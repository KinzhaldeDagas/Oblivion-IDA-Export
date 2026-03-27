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

  result = *(_DWORD *)(a2 + 4) - 1;
  v4 = a3;
  v40 = *(__m128 **)a2;
  v39 = a3;
  v42.m128_u64[0] = 0x3F80000000000000LL;
  v42.m128_u64[1] = 0x7F7FFFFF00000000LL;
  if ( result >= 0 )
  {
    v5 = v42;
    for ( i = *(_DWORD *)(a2 + 4); ; --i )
    {
      *v4 = v5;
      v6 = *(this + 3);
      v43 = _mm_mul_ps(*v40, v6);
      v44 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(*v40, *(this + 4)), v6), (__m128)xmmword_A97DD0);
      v7 = (unsigned __int16)((unsigned __int32)v44.m128_i32[2] >> 6);
      v8 = this->m128_i32[3];
      v9 = (unsigned __int16)((unsigned __int32)v44.m128_i32[0] >> 6);
      if ( v9 >= v8 - 1 || v7 >= *((_DWORD *)this + 4) - 1 )
        goto LABEL_15;
      v10 = *((_DWORD *)this + 0x18);
      v11 = v43.m128_f32[0] - (double)(unsigned __int16)((unsigned __int32)v44.m128_i32[0] >> 6);
      v12 = v43.m128_f32[2] - (double)(unsigned __int16)((unsigned __int32)v44.m128_i32[2] >> 6);
      if ( !*((_BYTE *)this + 0x6C) )
        break;
      v13 = v9 + v7 * v8;
      v14 = *(float *)(v10 + 4 * v13);
      v15 = v10 + 4 * v13;
      v16 = (float *)(v10 + 4 * (v9 + v8 * (v7 + 1)));
      v4 = v39;
      if ( v11 <= v12 )
      {
        v19 = *v16;
        v38 = v16[1] - v19;
        goto LABEL_12;
      }
      v35 = *(float *)(v15 + 4) - v14;
      v37 = v16[1] - *(float *)(v15 + 4);
      v17 = v37 * v12 + v35 * v11 + v14;
      v39->m128_f32[0] = -v35;
      v18 = v37;
LABEL_14:
      v4->m128_f32[2] = -v18;
      v29 = _mm_mul_ps(*v4, *(this + 3));
      v30 = _mm_mul_ps(v29, v29);
      v30.m128_f32[0] = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
      v31 = 1.0 / fsqrt(v30.m128_f32[0]);
      v32 = 3.0 - (float)((float)(v30.m128_f32[0] * v31) * v31);
      v33 = (__m128)0x3F000000u;
      v33.m128_f32[0] = (float)(0.5 * v31) * v32;
      *v4 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v29);
      v4->m128_f32[3] = (v43.m128_f32[1] - v17) * *((float *)this + 9) - v40->m128_f32[3];
LABEL_15:
      ++v4;
      result = i - 1;
      v34 = i == 1;
      v39 = v4;
      ++v40;
      if ( v34 )
        return result;
    }
    v20 = v9 + v7 * v8;
    v21 = *(float *)(v10 + 4 * v20 + 4);
    v22 = (float *)(v10 + 4 * v20);
    v23 = v9 + v8 * (v7 + 1);
    v24 = *(float *)(v10 + 4 * v23);
    v25 = v10 + 4 * v23;
    v4 = v39;
    if ( v12 + v11 <= fConstant_1 )
    {
      v27 = v21;
      v14 = *v22;
      v38 = v27 - v14;
      v19 = v24;
LABEL_12:
      v28 = v19 - v14;
      v36 = v28;
      v17 = v28 * v12 + v38 * v11 + v14;
    }
    else
    {
      v26 = *(float *)(v25 + 4);
      v38 = v26 - v24;
      v36 = v26 - v21;
      v17 = v21 + (v11 - fConstant_1) * v38 + v36 * v12;
    }
    v4->m128_f32[0] = -v38;
    v18 = v36;
    goto LABEL_14;
  }
  return result;
}
