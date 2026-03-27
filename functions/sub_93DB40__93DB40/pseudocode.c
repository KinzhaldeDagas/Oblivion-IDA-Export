void __cdecl sub_93DB40(__m128 *a1, float *a2, float *a3)
{
  double v3; // st7
  __m128 *v4; // esi
  __m128 *v5; // ecx
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  unsigned __int64 v11; // rax
  double v12; // st7
  long double v13; // st7
  double v14; // st6
  double v15; // st7
  double v17; // st6
  char v18; // c0
  double v19; // st6
  long double v20; // st7
  long double v21; // st7
  float v22; // [esp+18h] [ebp-158h]
  float v23; // [esp+1Ch] [ebp-154h]
  float v24; // [esp+20h] [ebp-150h]
  float v25; // [esp+24h] [ebp-14Ch]
  int v26; // [esp+28h] [ebp-148h]
  float v27; // [esp+2Ch] [ebp-144h]
  float v28; // [esp+30h] [ebp-140h]
  __int32 v29; // [esp+34h] [ebp-13Ch]
  __m128 *v30; // [esp+38h] [ebp-138h]
  int v31; // [esp+3Ch] [ebp-134h]
  float v32; // [esp+44h] [ebp-12Ch]
  float v33; // [esp+48h] [ebp-128h]
  float v34; // [esp+4Ch] [ebp-124h]
  __m128 v35; // [esp+50h] [ebp-120h]
  __m128 v36[12]; // [esp+60h] [ebp-110h] BYREF
  __m128 v37; // [esp+120h] [ebp-50h]
  __m128 v38; // [esp+130h] [ebp-40h]
  __m128 v39; // [esp+140h] [ebp-30h]
  __m128 v40; // [esp+150h] [ebp-20h]
  __m128 v41; // [esp+160h] [ebp-10h]

  v25 = 1.0;
  v31 = a1[8].m128_i32[0];
  v22 = *(float *)&v31;
  sub_93D670(a1, *(float *)&v31, v36);
  while ( 1 )
  {
    v3 = v25 - v22;
    v4 = (__m128 *)a1->m128_i32[2];
    v23 = v3;
    v5 = v4;
    v30 = v4;
    v33 = v3 * a1[4].m128_f32[1];
    v27 = v25;
    if ( a1->m128_i32[3] - 1 >= 0 )
    {
      v6 = v40;
      v7 = v37;
      v29 = a1->m128_i32[3];
      do
      {
        v8 = _mm_mul_ps(v7, _mm_sub_ps(*v4, v38));
        v24 = (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])
            + (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + _mm_shuffle_ps(v7, v7, 0xFF).m128_f32[0]);
        if ( v33 + *a2 >= v24 )
        {
          v9 = _mm_sub_ps(*v4, v41);
          v10 = _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_sub_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xC9), _mm_shuffle_ps(v6, v6, 0xD2)),
                      _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0xD2), _mm_shuffle_ps(v6, v6, 0xC9))),
                    v39),
                  v7);
          *(float *)&v26 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
          if ( v23 * a1[1].m128_f32[2] * v23 * flt_A3D65C >= v24 - *a2 + *(float *)&v26 * v23 )
          {
            if ( v24 >= (double)*a2 )
            {
              v35.m128_u64[0] = v4->m128_u64[0];
              v11 = v4->m128_u64[1];
              *v4 = *v5;
              v35.m128_u64[1] = v11;
              *v5 = v35;
              v5->m128_f32[3] = v24;
              v12 = v24 - a2[1];
              v30 = ++v5;
              v13 = v12 * a1[1].m128_f32[3] + v12 * a1[1].m128_f32[3];
              if ( v13 <= v23 * v23 )
              {
                v14 = (*a2 - a2[1]) * a1[1].m128_f32[3];
                v32 = v14 + v14;
                v15 = sqrt(v13);
                v17 = *(float *)&v26 * a1[1].m128_f32[3];
                if ( v18 )
                {
                  v19 = -v17;
                  if ( v19 > v15 )
                  {
                    v34 = v19;
                    v15 = v34;
                  }
                }
                else
                {
                  v15 = v15 + v17 + v17;
                }
                if ( v15 <= v23 )
                {
                  v28 = a2[2];
                  v20 = v15 + sqrt(v32);
                  if ( v20 <= v28 )
                    v20 = v28;
                  v21 = v20 + v22;
                  if ( v27 >= v21 )
                    v27 = v21;
                }
              }
            }
            else
            {
              v25 = sub_93D9D0(a1, a2, v4, *(float *)&v31, v22, v4->m128_f32[3], v24, v26, a3);
              v5 = v30;
            }
            v6 = v40;
            v7 = v37;
          }
        }
        ++v4;
        --v29;
      }
      while ( v29 );
    }
    if ( v22 > (double)v25 || v22 == v27 && v22 >= (double)v25 )
      break;
    *(float *)&v31 = v22;
    v22 = v27;
    sub_93D670(a1, v27, v36);
  }
}
