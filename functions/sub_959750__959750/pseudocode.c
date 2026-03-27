__m128 *__cdecl sub_959750(int *a1, int *a2, __m128 *a3, __m128 *a4, __int128 *a5, __m128 *a6)
{
  __int32 v6; // edx
  double v7; // st7
  float v8; // xmm6_4
  int v9; // ecx
  int v10; // edx
  long double v11; // st6
  int v12; // edi
  long double v13; // st5
  double v14; // st6
  __int32 v15; // eax
  __m128 v16; // xmm0
  float v17; // xmm1_4
  float v18; // xmm3_4
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  float v25; // xmm5_4
  __m128 v26; // xmm7
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  double v31; // st7
  __int128 v32; // xmm1
  __m128 v34; // xmm1
  __int32 *v35; // [esp+18h] [ebp-E8h]
  float v36; // [esp+18h] [ebp-E8h]
  float v37; // [esp+1Ch] [ebp-E4h]
  unsigned int v38; // [esp+1Ch] [ebp-E4h]
  __m128 v39; // [esp+20h] [ebp-E0h] BYREF
  __m128 v40; // [esp+30h] [ebp-D0h]
  __int128 v41; // [esp+40h] [ebp-C0h]
  __m128 v42; // [esp+50h] [ebp-B0h]
  __m128 v43; // [esp+60h] [ebp-A0h] BYREF
  __int128 v44; // [esp+70h] [ebp-90h]
  __m128 v45; // [esp+80h] [ebp-80h]
  __m128 v46; // [esp+90h] [ebp-70h]
  __m128 v47; // [esp+A0h] [ebp-60h]
  __int128 v48; // [esp+B0h] [ebp-50h]
  __m128 v49; // [esp+C0h] [ebp-40h] BYREF
  __m128 v50; // [esp+D0h] [ebp-30h] BYREF
  __m128 v51; // [esp+E0h] [ebp-20h] BYREF
  __m128 v52; // [esp+F0h] [ebp-10h] BYREF

  v42.m128_i32[3] = 0xFF7FFFFF;
  v35 = (__int32 *)xmmword_B2F090;
  do
  {
    v6 = v35[1];
    v39.m128_i32[0] = *v35;
    *(unsigned __int64 *)((char *)v39.m128_u64 + 4) = __PAIR64__(v35[2], v6);
    v39.m128_i32[3] = v35[3];
    sub_959630(a1, &v43, a3, a2, &v39);
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3] )
    {
      v40 = v43;
      v41 = v44;
      v42 = v45;
    }
    v39 = _mm_xor_ps(v39, (__m128)xmmword_A965C0);
    sub_959630(a1, &v43, a3, a2, &v39);
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3] )
    {
      v40 = v43;
      v41 = v44;
      v42 = v45;
    }
    v35 += 4;
  }
  while ( (int)v35 < (int)dword_B2F0C0 );
  v7 = fConstant_1;
  v8 = 3.0;
  v48 = 0x40400000u;
  v47 = (__m128)0x3F000000u;
  while ( 1 )
  {
    v7 = v7 * flt_A65520;
    v9 = 0;
    v10 = 1;
    v11 = fabs(v42.m128_f32[0]);
    v12 = 2;
    v13 = fabs(v42.m128_f32[1]);
    v37 = fabs(v42.m128_f32[2]);
    if ( v13 < v11 )
    {
      v10 = 0;
      v36 = v13;
      v11 = v36;
      v9 = 1;
    }
    if ( v37 < v11 )
    {
      v12 = v9;
      v9 = 2;
    }
    v14 = v42.m128_f32[v10];
    v15 = v42.m128_i32[v12];
    v39.m128_i32[v9] = 0;
    v39.m128_i32[3] = 0;
    v39.m128_i32[v10] = v15;
    v39.m128_f32[v12] = -v14;
    *(float *)&v38 = v7;
    v16 = _mm_mul_ps(v39, v39);
    v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
    v17 = 1.0 / fsqrt(v16.m128_f32[0]);
    v18 = v8 - (float)((float)(v16.m128_f32[0] * v17) * v17);
    v19 = v47;
    v19.m128_f32[0] = (float)(v47.m128_f32[0] * v17) * v18;
    v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v39);
    v21 = _mm_mul_ps(_mm_shuffle_ps((__m128)v38, (__m128)v38, 0), v20);
    v22 = _mm_mul_ps(
            _mm_shuffle_ps((__m128)v38, (__m128)v38, 0),
            _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xC9), _mm_shuffle_ps(v20, v20, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xD2), _mm_shuffle_ps(v20, v20, 0xC9))));
    v23 = _mm_add_ps(v42, v21);
    v24 = _mm_mul_ps(v23, v23);
    v25 = _mm_shuffle_ps(v24, v24, 0x55).m128_f32[0] + v24.m128_f32[0];
    v26 = _mm_shuffle_ps(v24, v24, 0xAA);
    v27 = v26;
    v27.m128_f32[0] = v26.m128_f32[0] + v25;
    v46 = v27;
    v46.m128_f32[0] = 1.0 / fsqrt(v26.m128_f32[0] + v25);
    v28 = v47;
    v28.m128_f32[0] = (float)(v47.m128_f32[0] * v46.m128_f32[0])
                    * (float)(v8 - (float)((float)((float)(v26.m128_f32[0] + v25) * v46.m128_f32[0]) * v46.m128_f32[0]));
    v29 = _mm_shuffle_ps(v28, v28, 0);
    v39 = v21;
    v50 = _mm_mul_ps(v29, v23);
    v52 = _mm_mul_ps(v29, _mm_sub_ps(v42, v21));
    v51 = _mm_mul_ps(v29, _mm_add_ps(v42, v22));
    v49 = _mm_mul_ps(v29, _mm_sub_ps(v42, v22));
    sub_959630(a1, &v43, a3, a2, &v50);
    if ( v45.m128_f32[3] > (double)v42.m128_f32[3]
      || (sub_959630(a1, &v43, a3, a2, &v52), v45.m128_f32[3] > (double)v42.m128_f32[3])
      || (sub_959630(a1, &v43, a3, a2, &v51), v45.m128_f32[3] > (double)v42.m128_f32[3])
      || (sub_959630(a1, &v43, a3, a2, &v49), v45.m128_f32[3] > (double)v42.m128_f32[3]) )
    {
      v40 = v43;
      v41 = v44;
      v42 = v45;
    }
    else
    {
      v7 = v7 * flt_A3D65C;
    }
    if ( v7 <= flt_A37080 )
      break;
    v8 = *(float *)&v48;
  }
  v30 = v40;
  v31 = v42.m128_f32[3];
  v32 = v41;
  *a4 = v40;
  *a5 = v32;
  v34 = v42;
  a6[2].m128_f32[0] = v31;
  *a6 = v34;
  a6[1] = v30;
  a6[2].m128_i32[1] = 0x3F000000;
  return a6;
}
