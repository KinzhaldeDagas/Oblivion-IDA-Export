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

  v5 = a3[2]; /*0x92ce6c*/
  v6 = *a3; /*0x92ce72*/
  v38 = *a3; /*0x92ce77*/
  if ( v5 < 3 ) /*0x92ce7b*/
  {
    v7 = *(_DWORD *)(a4 + 8); /*0x92ce84*/
    if ( v7 < 3 ) /*0x92ce8a*/
    {
      v32 = 0; /*0x92ce93*/
      v36 = 3; /*0x92ce9b*/
      if ( v5 == 2 ) /*0x92cea3*/
      {
        v8 = (unsigned __int16 *)a3[1]; /*0x92cea5*/
        v9 = *v8; /*0x92ceac*/
        v10 = v8[4 * v8[1]]; /*0x92ceaf*/
        if ( v10 < v9 ) /*0x92ceb5*/
        {
          v9 = v8[4 * v8[1]]; /*0x92ceb9*/
          v10 = *v8; /*0x92cebb*/
        }
        v31 = **(unsigned __int16 **)(a4 + 4); /*0x92cec7*/
        if ( *(_DWORD *)(a4 + 8) == 2 ) /*0x92cecb*/
        {
          v32 = *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 8 * *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 2)); /*0x92ceda*/
          if ( v32 < **(unsigned __int16 **)(a4 + 4) ) /*0x92cede*/
          {
            v32 = **(unsigned __int16 **)(a4 + 4); /*0x92cee0*/
            v31 = *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 8 * *(unsigned __int16 *)(*(_DWORD *)(a4 + 4) + 2)); /*0x92cee4*/
          }
          v36 = 4; /*0x92cee8*/
        }
      }
      else
      {
        if ( v7 != 2 ) /*0x92cef5*/
        {
          sub_933870(a5, *(_WORD *)a3[1], **(_WORD **)(a4 + 4)); /*0x92d3dc*/
LABEL_30:
          *a1 = 1; /*0x92d3e1*/
          return a1; /*0x92d3ed*/
        }
        v11 = *(unsigned __int16 **)(a4 + 4); /*0x92cefe*/
        v9 = *(unsigned __int16 *)a3[1]; /*0x92cf01*/
        v10 = v11[4 * v11[1]]; /*0x92cf08*/
        v31 = *v11; /*0x92cf11*/
        if ( v10 < v9 ) /*0x92cf15*/
        {
          v9 = v11[4 * v11[1]]; /*0x92cf19*/
          v10 = *(unsigned __int16 *)a3[1]; /*0x92cf1b*/
        }
      }
      v12 = (float *)(0x10 * v9 + v6); /*0x92cf22*/
      v13 = (float *)(0x10 * v10 + v6); /*0x92cf2d*/
      v41.m128_f32[0] = *v13 - *v12; /*0x92cf36*/
      v41.m128_f32[1] = v13[1] - v12[1]; /*0x92cf40*/
      v41.m128_f32[2] = v13[2] - v12[2]; /*0x92cf4a*/
      v41.m128_f32[3] = v13[3] - v12[3]; /*0x92cf54*/
      v14 = _mm_mul_ps(v41, v41); /*0x92cf60*/
      v35 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x92cf79*/
          + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
      v15 = (float *)(v6 + 0x10 * v31); /*0x92cf87*/
      v39.m128_f32[0] = *v15 - *v13; /*0x92cf8f*/
      v39.m128_f32[1] = v15[1] - v13[1]; /*0x92cf99*/
      v39.m128_f32[2] = v15[2] - v13[2]; /*0x92cfa3*/
      v39.m128_f32[3] = v15[3] - v13[3]; /*0x92cfad*/
      v16 = _mm_mul_ps(v39, v39); /*0x92cfb8*/
      v45.m128_f32[0] = *v12 - *v15; /*0x92cfc8*/
      v33 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x92cfdd*/
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      v45.m128_f32[1] = v12[1] - v15[1]; /*0x92cfe1*/
      v45.m128_f32[2] = v12[2] - v15[2]; /*0x92cfeb*/
      v45.m128_f32[3] = v12[3] - v15[3]; /*0x92cff9*/
      v17 = _mm_mul_ps(v45, v45); /*0x92d002*/
      v34 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x92d01b*/
          + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
      v18 = 1.0 / fsqrt(v35); /*0x92d04f*/
      v19 = (__m128)0x3F000000u; /*0x92d072*/
      v20 = (__m128)0x3F000000u; /*0x92d07f*/
      v20.m128_f32[0] = (float)(0.5 * v18) * (float)(3.0 - (float)((float)(v35 * v18) * v18)); /*0x92d086*/
      v42 = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v41); /*0x92d09f*/
      v16.m128_f32[0] = 1.0 / fsqrt(v33); /*0x92d0c1*/
      v21 = (__m128)0x3F000000u; /*0x92d0d5*/
      v21.m128_f32[0] = (float)(0.5 * v16.m128_f32[0]) /*0x92d0dc*/
                      * (float)(3.0 - (float)((float)(v33 * v16.m128_f32[0]) * v16.m128_f32[0]));
      v40 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v39); /*0x92d0ec*/
      v16.m128_f32[0] = 1.0 / fsqrt(v34); /*0x92d121*/
      v46.m128_f32[0] = v40.m128_f32[0] - v42.m128_f32[0]; /*0x92d126*/
      v46.m128_f32[1] = v40.m128_f32[1] - v42.m128_f32[1]; /*0x92d141*/
      v22 = (__m128)0x3F000000u; /*0x92d145*/
      v22.m128_f32[0] = (float)(0.5 * v16.m128_f32[0]) /*0x92d154*/
                      * (float)(3.0 - (float)((float)(v34 * v16.m128_f32[0]) * v16.m128_f32[0]));
      v46.m128_f32[2] = v40.m128_f32[2] - v42.m128_f32[2]; /*0x92d164*/
      v45 = _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v45); /*0x92d16c*/
      v46.m128_f32[3] = v40.m128_f32[3] - v42.m128_f32[3]; /*0x92d175*/
      v23 = _mm_mul_ps(v46, v46); /*0x92d17e*/
      if ( (float)(_mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x92d1ab*/
                 + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0])) < (double)a2 )
      {
        if ( v36 != 4 ) /*0x92d1b6*/
          goto LABEL_18; /*0x92d1b6*/
        v24 = (float *)(v38 + 0x10 * v32); /*0x92d1ca*/
        v43.m128_f32[0] = *v24 - *v13; /*0x92d1d2*/
        v43.m128_f32[1] = v24[1] - v13[1]; /*0x92d1dc*/
        v43.m128_f32[2] = v24[2] - v13[2]; /*0x92d1e6*/
        v43.m128_f32[3] = v24[3] - v13[3]; /*0x92d1f4*/
        v25 = _mm_mul_ps(v43, v43); /*0x92d204*/
        v37 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x92d228*/
            + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
        v26 = 1.0 / fsqrt(v37); /*0x92d249*/
        v19.m128_f32[0] = (float)(0.5 * v26) * (float)(3.0 - (float)((float)(v37 * v26) * v26)); /*0x92d25e*/
        v44 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v43); /*0x92d26c*/
        v46.m128_f32[0] = v40.m128_f32[0] - v44.m128_f32[0]; /*0x92d275*/
        v46.m128_f32[1] = v40.m128_f32[1] - v44.m128_f32[1]; /*0x92d281*/
        v46.m128_f32[2] = v40.m128_f32[2] - v44.m128_f32[2]; /*0x92d28d*/
        v46.m128_f32[3] = v40.m128_f32[3] - v44.m128_f32[3]; /*0x92d299*/
        v27 = _mm_mul_ps(v46, v46); /*0x92d2a2*/
        if ( (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] /*0x92d2cb*/
                   + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0])) < (double)a2 )
        {
          if ( v37 > (double)v33 ) /*0x92d2de*/
          {
            LOWORD(v31) = v32; /*0x92d2e9*/
            sub_92CA20(v45.m128_f32, v24, v12); /*0x92d2ed*/
            v28 = _mm_mul_ps(v45, v45); /*0x92d2f7*/
            v34 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x92d31f*/
                + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
          }
LABEL_18:
          if ( v33 <= (double)v34 ) /*0x92d330*/
            v29 = v34; /*0x92d338*/
          else
            v29 = v33; /*0x92d332*/
          if ( v35 > v29 ) /*0x92d347*/
            v29 = v35; /*0x92d34b*/
          if ( v35 == v29 ) /*0x92d35c*/
          {
            sub_933870(a5, v9, v10); /*0x92d365*/
            *a1 = 1; /*0x92d36d*/
            return a1; /*0x92d376*/
          }
          if ( v33 == v29 ) /*0x92d384*/
          {
            sub_933870(a5, v10, v31); /*0x92d391*/
            *a1 = 1; /*0x92d399*/
            return a1; /*0x92d3a2*/
          }
          if ( v34 == v29 ) /*0x92d3ae*/
          {
            sub_933870(a5, v31, v9); /*0x92d3b9*/
            *a1 = 1; /*0x92d3c1*/
            return a1; /*0x92d3ca*/
          }
          goto LABEL_30; /*0x92d3ae*/
        }
      }
    }
  }
  *a1 = 0; /*0x92d3f3*/
  return a1; /*0x92d370*/
}
