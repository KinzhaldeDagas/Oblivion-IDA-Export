int __thiscall sub_8B4020(int this, int *a2, __m128 *a3)
{
  int result; // eax
  __m128 v4; // xmm3
  int v5; // edi
  int *v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  long double v17; // st7
  int v18; // eax
  int v19; // edx
  float v20; // eax
  double v21; // st7
  bool v22; // zf
  int v23; // [esp+Ch] [ebp-64h]
  float v24; // [esp+14h] [ebp-5Ch]
  unsigned int v25; // [esp+18h] [ebp-58h]
  float v26; // [esp+18h] [ebp-58h]
  int v27; // [esp+1Ch] [ebp-54h]
  __m128 v28; // [esp+20h] [ebp-50h] BYREF
  __m128 v29; // [esp+30h] [ebp-40h]
  __m128 v30; // [esp+40h] [ebp-30h] BYREF
  __m128 v31; // [esp+50h] [ebp-20h]
  __m128 v32; // [esp+60h] [ebp-10h]

  result = a2[4]; /*0x8b402f*/
  *(_DWORD *)(this + 0x88) = 0; /*0x8b4036*/
  *(_DWORD *)(this + 0x84) = 0; /*0x8b403c*/
  *(_DWORD *)(this + 0x80) = 0; /*0x8b4042*/
  *(_DWORD *)(this + 0x7C) = 0; /*0x8b4048*/
  *(_DWORD *)(this + 0x78) = 0; /*0x8b404b*/
  *(_DWORD *)(this + 0x74) = 0; /*0x8b404e*/
  *(_DWORD *)(this + 0x70) = 0; /*0x8b4051*/
  *(_DWORD *)(this + 0x6C) = 0; /*0x8b4054*/
  *(_DWORD *)(this + 0x68) = 0; /*0x8b4057*/
  *(_DWORD *)(this + 0x64) = 0; /*0x8b405a*/
  if ( result > 0 ) /*0x8b405d*/
  {
    v23 = 0; /*0x8b4063*/
    v27 = result; /*0x8b4067*/
    do /*0x8b42be*/
    {
      v4 = *a3; /*0x8b407a*/
      v5 = *a2; /*0x8b407d*/
      v6 = (int *)(v23 + a2[3]); /*0x8b4081*/
      v7 = *v6; /*0x8b4083*/
      v8 = v6[1]; /*0x8b4085*/
      v9 = v6[2]; /*0x8b4088*/
      v31 = _mm_add_ps(*(__m128 *)(0x10 * v8 + *a2), *a3); /*0x8b4095*/
      v10 = _mm_add_ps(*(__m128 *)(0x10 * v7 + v5), v4); /*0x8b40a1*/
      v11 = _mm_sub_ps(v31, v10); /*0x8b40a4*/
      v30 = v10; /*0x8b40a7*/
      v32 = _mm_add_ps(*(__m128 *)(0x10 * v9 + v5), v4); /*0x8b40b6*/
      v12 = _mm_sub_ps(v32, v10); /*0x8b40bb*/
      v13 = _mm_sub_ps( /*0x8b40e0*/
              _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9)));
      v14 = _mm_mul_ps(v13, v13); /*0x8b40e6*/
      v10.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x8b40f3*/
      v15 = _mm_shuffle_ps(v14, v14, 0xAA); /*0x8b40f7*/
      v16 = v15; /*0x8b40fb*/
      v16.m128_f32[0] = v15.m128_f32[0] + v10.m128_f32[0]; /*0x8b40fe*/
      v29 = v16; /*0x8b4102*/
      v29.m128_i32[0] = fsqrt(v15.m128_f32[0] + v10.m128_f32[0]); /*0x8b410b*/
      if ( v29.m128_f32[0] > (double)*(float *)&SrcStr ) /*0x8b412d*/
      {
        *(float *)&v25 = fConstant_1 / v29.m128_f32[0]; /*0x8b413d*/
        v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v13); /*0x8b4151*/
        v17 = fabs(v28.m128_f32[0]); /*0x8b415a*/
        v24 = fabs(v28.m128_f32[1]); /*0x8b4162*/
        v26 = fabs(v28.m128_f32[2]); /*0x8b416c*/
        if ( v17 <= v24 || v17 <= v26 ) /*0x8b4184*/
        {
          v18 = 1; /*0x8b419e*/
          if ( v24 <= (double)v26 ) /*0x8b41a3*/
            v18 = 2; /*0x8b41a5*/
          *(_DWORD *)(this + 8) = v18; /*0x8b41aa*/
        }
        else
        {
          *(_DWORD *)(this + 8) = 0; /*0x8b4186*/
        }
        v19 = (*(_DWORD *)(this + 8) + 1) % 3; /*0x8b41b7*/
        *(_DWORD *)this = v19; /*0x8b41bc*/
        *(_DWORD *)(this + 4) = (v19 + 1) % 3; /*0x8b41c6*/
        sub_8B3B50((float *)this, v30.m128_f32, v28.m128_f32); /*0x8b41ce*/
        v20 = *(float *)this; /*0x8b41d3*/
        if ( *(_DWORD *)this ) /*0x8b41d3*/
        {
          if ( *(_DWORD *)(this + 4) ) /*0x8b41de*/
            v21 = *(float *)(this + 0x3C); /*0x8b41ea*/
          else
            v21 = *(float *)(this + 0x38); /*0x8b41e5*/
        }
        else
        {
          v21 = *(float *)(this + 0x34); /*0x8b41d9*/
        }
        *(float *)(this + 0x64) = v28.m128_f32[0] * v21 + *(float *)(this + 0x64); /*0x8b41f6*/
        *(float *)(this + 4 * LODWORD(v20) + 0x68) = v28.m128_f32[LODWORD(v20)] * *(float *)(this + 0x40) /*0x8b4206*/
                                                   + *(float *)(this + 4 * LODWORD(v20) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x68) = v28.m128_f32[*(_DWORD *)(this + 4)] /*0x8b4218*/
                                                            * *(float *)(this + 0x44)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x68) = v28.m128_f32[*(_DWORD *)(this + 8)] /*0x8b422a*/
                                                            * *(float *)(this + 0x48)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x68);
        *(float *)(this + 4 * *(_DWORD *)this + 0x74) = v28.m128_f32[*(_DWORD *)this] * *(float *)(this + 0x4C) /*0x8b423b*/
                                                      + *(float *)(this + 4 * *(_DWORD *)this + 0x74);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x74) = v28.m128_f32[*(_DWORD *)(this + 4)] /*0x8b424d*/
                                                            * *(float *)(this + 0x50)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x74);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x74) = v28.m128_f32[*(_DWORD *)(this + 8)] /*0x8b425f*/
                                                            * *(float *)(this + 0x54)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x74);
        *(float *)(this + 4 * *(_DWORD *)this + 0x80) = v28.m128_f32[*(_DWORD *)this] * *(float *)(this + 0x58) /*0x8b4273*/
                                                      + *(float *)(this + 4 * *(_DWORD *)this + 0x80);
        *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x80) = v28.m128_f32[*(_DWORD *)(this + 4)] /*0x8b428b*/
                                                            * *(float *)(this + 0x5C)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 4) + 0x80);
        *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x80) = v28.m128_f32[*(_DWORD *)(this + 8)] /*0x8b42a3*/
                                                            * *(float *)(this + 0x60)
                                                            + *(float *)(this + 4 * *(_DWORD *)(this + 8) + 0x80);
      }
      result = v27 - 1; /*0x8b42b5*/
      v22 = v27 == 1; /*0x8b42b5*/
      v23 += 0xC; /*0x8b42b6*/
      --v27; /*0x8b42ba*/
    }
    while ( !v22 ); /*0x8b42be*/
  }
  *(float *)(this + 0x68) = *(float *)(this + 0x68) * kHeadBodyNormalMatchRadius; /*0x8b42d0*/
  *(float *)(this + 0x6C) = *(float *)(this + 0x6C) * kHeadBodyNormalMatchRadius; /*0x8b42dc*/
  *(float *)(this + 0x70) = *(float *)(this + 0x70) * kHeadBodyNormalMatchRadius; /*0x8b42e8*/
  *(float *)(this + 0x74) = *(float *)(this + 0x74) * flt_A7C038; /*0x8b42f4*/
  *(float *)(this + 0x78) = *(float *)(this + 0x78) * flt_A7C038; /*0x8b4300*/
  *(float *)(this + 0x7C) = *(float *)(this + 0x7C) * flt_A7C038; /*0x8b430c*/
  *(float *)(this + 0x80) = *(float *)(this + 0x80) * kHeadBodyNormalMatchRadius; /*0x8b431b*/
  *(float *)(this + 0x84) = *(float *)(this + 0x84) * kHeadBodyNormalMatchRadius; /*0x8b432d*/
  *(float *)(this + 0x88) = *(float *)(this + 0x88) * kHeadBodyNormalMatchRadius; /*0x8b433f*/
  return result; /*0x8b4345*/
}
