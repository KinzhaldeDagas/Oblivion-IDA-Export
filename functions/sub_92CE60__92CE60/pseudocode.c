_BYTE *__cdecl sub_92CE60(_BYTE *a1, float a2, int *a3, int a4, int *a5)
{
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  unsigned __int16 *v8; // eax
  int v9; // edi
  int v10; // ebx
  unsigned __int16 *v11; // eax
  float *v12; // esi
  float *v13; // edx
  __m128 v14; // xmm0
  float *v15; // eax
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  float v18; // xmm5_4
  __m128 v19; // xmm4
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  float *v24; // ecx
  __m128 v25; // xmm0
  float v26; // xmm1_4
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  double v29; // st7
  int v31; // [esp+10h] [ebp-60h]
  int v32; // [esp+14h] [ebp-5Ch]
  float v33; // [esp+18h] [ebp-58h]
  float v34; // [esp+1Ch] [ebp-54h]
  float v35; // [esp+20h] [ebp-50h]
  int v36; // [esp+24h] [ebp-4Ch]
  float v37; // [esp+28h] [ebp-48h]
  int v38; // [esp+2Ch] [ebp-44h]
  __m128 v39; // [esp+30h] [ebp-40h]
  __m128 v40; // [esp+30h] [ebp-40h]
  __m128 v41; // [esp+40h] [ebp-30h]
  __m128 v42; // [esp+40h] [ebp-30h]
  __m128 v43; // [esp+40h] [ebp-30h]
  __m128 v44; // [esp+40h] [ebp-30h]
  __m128 v45; // [esp+50h] [ebp-20h] BYREF
  __m128 v46; // [esp+60h] [ebp-10h]

  v5 = a3[2];
  v6 = *a3;
  v38 = *a3;
  if ( v5 < 3 )
  {
    v7 = *(_DWORD *)(a4 + 8);
    if ( v7 < 3 )
    {
      v32 = 0;
      v36 = 3;
      if ( v5 == 2 )
      {
        v8 = (unsigned __int16 *)a3[1];
        v9 = *v8;
        v10 = v8[4 * v8[1]];
        if ( v10 < v9 )
        {
          v9 = v8[4 * v8[1]];
          v10 = *v8;
        }
        v31 = **(unsigned __int16 **)(a4 + 4);
        if ( *(_DWORD *)(a4 + 8) == 2 )
        {
          v32 = *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 8 * *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 2));
          if ( v32 < **(unsigned __int16 **)(a4 + 4) )
          {
            v32 = **(unsigned __int16 **)(a4 + 4);
            v31 = *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 8 * *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 2));
          }
          v36 = 4;
        }
      }
      else
      {
        if ( v7 != 2 )
        {
          sub_933870(a5, *(_WORD *)a3[1], **(_WORD **)(a4 + 4));
LABEL_30:
          *a1 = 1;
          return a1;
        }
        v11 = *(unsigned __int16 **)(a4 + 4);
        v9 = *(unsigned __int16 *)a3[1];
        v10 = v11[4 * v11[1]];
        v31 = *v11;
        if ( v10 < v9 )
        {
          v9 = v11[4 * v11[1]];
          v10 = *(unsigned __int16 *)a3[1];
        }
      }
      v12 = (float *)(0x10 * v9 + v6);
      v13 = (float *)(0x10 * v10 + v6);
      v41.m128_f32[0] = *v13 - *v12;
      v41.m128_f32[1] = v13[1] - v12[1];
      v41.m128_f32[2] = v13[2] - v12[2];
      v41.m128_f32[3] = v13[3] - v12[3];
      v14 = _mm_mul_ps(v41, v41);
      v35 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
      v15 = (float *)(v6 + 0x10 * v31);
      v39.m128_f32[0] = *v15 - *v13;
      v39.m128_f32[1] = v15[1] - v13[1];
      v39.m128_f32[2] = v15[2] - v13[2];
      v39.m128_f32[3] = v15[3] - v13[3];
      v16 = _mm_mul_ps(v39, v39);
      v45.m128_f32[0] = *v12 - *v15;
      v33 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      v45.m128_f32[1] = v12[1] - v15[1];
      v45.m128_f32[2] = v12[2] - v15[2];
      v45.m128_f32[3] = v12[3] - v15[3];
      v17 = _mm_mul_ps(v45, v45);
      v34 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
      v18 = 1.0 / fsqrt(v35);
      v19 = (__m128)0x3F000000u;
      v20 = (__m128)0x3F000000u;
      v20.m128_f32[0] = (float)(0.5 * v18) * (float)(3.0 - (float)((float)(v35 * v18) * v18));
      v42 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v41);
      v16.m128_f32[0] = 1.0 / fsqrt(v33);
      v21 = (__m128)0x3F000000u;
      v21.m128_f32[0] = (float)(0.5 * v16.m128_f32[0])
                      * (float)(3.0 - (float)((float)(v33 * v16.m128_f32[0]) * v16.m128_f32[0]));
      v40 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v39);
      v16.m128_f32[0] = 1.0 / fsqrt(v34);
      v46.m128_f32[0] = v40.m128_f32[0] - v42.m128_f32[0];
      v46.m128_f32[1] = v40.m128_f32[1] - v42.m128_f32[1];
      v22 = (__m128)0x3F000000u;
      v22.m128_f32[0] = (float)(0.5 * v16.m128_f32[0])
                      * (float)(3.0 - (float)((float)(v34 * v16.m128_f32[0]) * v16.m128_f32[0]));
      v46.m128_f32[2] = v40.m128_f32[2] - v42.m128_f32[2];
      v45 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v45);
      v46.m128_f32[3] = v40.m128_f32[3] - v42.m128_f32[3];
      v23 = _mm_mul_ps(v46, v46);
      if ( (float)(_mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0])) < (double)a2 )
      {
        if ( v36 != 4 )
          goto LABEL_18;
        v24 = (float *)(v38 + 0x10 * v32);
        v43.m128_f32[0] = *v24 - *v13;
        v43.m128_f32[1] = v24[1] - v13[1];
        v43.m128_f32[2] = v24[2] - v13[2];
        v43.m128_f32[3] = v24[3] - v13[3];
        v25 = _mm_mul_ps(v43, v43);
        v37 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
        v26 = 1.0 / fsqrt(v37);
        v19.m128_f32[0] = (float)(0.5 * v26) * (float)(3.0 - (float)((float)(v37 * v26) * v26));
        v44 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v43);
        v46.m128_f32[0] = v40.m128_f32[0] - v44.m128_f32[0];
        v46.m128_f32[1] = v40.m128_f32[1] - v44.m128_f32[1];
        v46.m128_f32[2] = v40.m128_f32[2] - v44.m128_f32[2];
        v46.m128_f32[3] = v40.m128_f32[3] - v44.m128_f32[3];
        v27 = _mm_mul_ps(v46, v46);
        if ( (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0])) < (double)a2 )
        {
          if ( v37 > (double)v33 )
          {
            LOWORD(v31) = v32;
            sub_92CA20(v45.m128_f32, v24, v12);
            v28 = _mm_mul_ps(v45, v45);
            v34 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
          }
LABEL_18:
          if ( v33 <= (double)v34 )
            v29 = v34;
          else
            v29 = v33;
          if ( v35 > v29 )
            v29 = v35;
          if ( v35 == v29 )
          {
            sub_933870(a5, v9, v10);
            *a1 = 1;
            return a1;
          }
          if ( v33 == v29 )
          {
            sub_933870(a5, v10, v31);
            *a1 = 1;
            return a1;
          }
          if ( v34 == v29 )
          {
            sub_933870(a5, v31, v9);
            *a1 = 1;
            return a1;
          }
          goto LABEL_30;
        }
      }
    }
  }
  *a1 = 0;
  return a1;
}
