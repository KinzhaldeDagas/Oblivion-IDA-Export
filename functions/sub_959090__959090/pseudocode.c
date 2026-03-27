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

  v5 = *(_DWORD *)(a1 + 0x10) - 1;
  v30 = 3.4028235e38;
  if ( v5 >= 0 )
  {
    v6 = (float *)(0x50 * v5 + a1 + 0xF80);
    v39 = *(_DWORD *)(a1 + 0x10);
    while ( 1 )
    {
      v7 = (__m128 *)(v6 + 0xFFFFFFFC);
      if ( *v6 * *v6 <= v30 )
      {
        v8 = *(_DWORD *)(a2 + 0x10) - 1;
        if ( v8 >= 1 )
          break;
      }
LABEL_23:
      v6 += 0xFFFFFFEC;
      if ( !--v39 )
        goto LABEL_24;
    }
    v9 = (__m128 *)(0x50 * v8 + a2 + 0xF70);
    v10 = *(_DWORD *)(a2 + 0x10) - 1;
    while ( 1 )
    {
      if ( v9[1].m128_f32[0] * v9[1].m128_f32[0] > v30 )
        goto LABEL_22;
      v11 = _mm_mul_ps(*v7, *v9);
      v26 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
      if ( v26 < (double)flt_A45E4C )
        goto LABEL_22;
      v28 = *v6;
      v29 = v9[1].m128_f32[0];
      v31 = *v6 - v26 * v29;
      v36 = v29 - v26 * *v6;
      if ( v31 <= (double)flt_AA386C )
      {
        if ( v28 <= (double)flt_AA386C )
          goto LABEL_18;
        v12 = *(float *)&SrcStr;
        v27 = 1.0;
        v17 = v29 * v29;
      }
      else
      {
        if ( v36 > (double)flt_AA386C )
        {
          if ( v31 <= (double)v36 )
          {
            v38 = v31 / v36;
            v34 = fConstant_1 / (v26 * v38 + fConstant_1);
            v27 = v34;
            v12 = v38 * v34;
            v14 = v34 * v29;
            v15 = v38 * v14;
          }
          else
          {
            v37 = v36 / v31;
            v12 = fConstant_1 / (v26 * v37 + fConstant_1);
            v32 = v12;
            v27 = v37 * v12;
            v13 = v32 * v28;
            v33 = v13;
            v14 = v13 * v37;
            v15 = v33;
          }
          v16 = v14 * ((fConstant_1 - v26 * v26) * v14) + (v15 + v26 * v14) * (v15 + v26 * v14);
          v35 = v16;
          v17 = v16;
          goto LABEL_20;
        }
        if ( v29 <= (double)*(float *)&SrcStr )
        {
LABEL_18:
          v12 = flt_A3D65C;
          v27 = 0.5;
          v17 = -(v26 * v26);
          goto LABEL_19;
        }
        v12 = fConstant_1;
        v27 = 0.0;
        v17 = v28 * v28;
      }
LABEL_19:
      v35 = v17;
LABEL_20:
      if ( v17 < v30 )
      {
        v40 = v12;
        v42 = v27;
        *a4 = v7;
        *a5 = v9;
        v30 = v35;
      }
LABEL_22:
      v9 += 0xFFFFFFFB;
      if ( !--v10 )
        goto LABEL_23;
    }
  }
LABEL_24:
  v18 = *(float *)&SrcStr;
  v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v40), (__m128)LODWORD(v40), 0), **a4);
  *a3 = v19;
  v20 = _mm_add_ps(v19, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v42), (__m128)LODWORD(v42), 0), **a5));
  v21 = _mm_mul_ps(v20, v20);
  v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0];
  v23 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0];
  v41 = 1.0 / fsqrt(v23 + v22);
  v24 = (__m128)0x3F000000u;
  v24.m128_f32[0] = (float)(0.5 * v41) * (float)(3.0 - (float)((float)((float)(v23 + v22) * v41) * v41));
  *a3 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v20);
  if ( v18 <= v30 )
    v25 = sqrt(v30);
  else
    v25 = sqrt(*(float *)&SrcStr);
  a3->m128_f32[3] = v25;
}
