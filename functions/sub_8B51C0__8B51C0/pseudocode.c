int __cdecl sub_8B51C0(__m128 *a1, __m128 *a2, float a3, unsigned int a4, __m128 *a5)
{
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  float v8; // xmm1_4
  __m128 v9; // xmm3
  __m128 v10; // xmm0
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm3_4
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  double v21; // st7
  double v22; // st6
  double v23; // st6
  double v24; // st6
  double v25; // st7
  int v26; // ecx
  float v28; // [esp+0h] [ebp-134h]
  float v29; // [esp+10h] [ebp-124h]
  __m128 v30; // [esp+14h] [ebp-120h] BYREF
  float v31; // [esp+30h] [ebp-104h]
  __m128 v32; // [esp+34h] [ebp-100h] BYREF
  __m128 v33; // [esp+44h] [ebp-F0h] BYREF
  _DWORD *v34[2]; // [esp+54h] [ebp-E0h] BYREF
  int v35; // [esp+5Ch] [ebp-D8h]
  float v36; // [esp+64h] [ebp-D0h] BYREF
  unsigned int v37; // [esp+68h] [ebp-CCh]
  __m128 v38; // [esp+74h] [ebp-C0h]
  __m128 v39; // [esp+84h] [ebp-B0h] BYREF
  __int128 v40; // [esp+94h] [ebp-A0h]
  __int128 v41; // [esp+A4h] [ebp-90h]
  __int128 v42; // [esp+B4h] [ebp-80h]
  __int128 v43; // [esp+C4h] [ebp-70h]
  __int128 v44; // [esp+D4h] [ebp-60h]
  __m128 v45; // [esp+E4h] [ebp-50h]
  __int128 v46; // [esp+F4h] [ebp-40h] BYREF
  __int128 v47; // [esp+104h] [ebp-30h]
  __int128 v48; // [esp+114h] [ebp-20h]
  __m128 v49; // [esp+124h] [ebp-10h]

  if ( *(float *)&a4 <= (double)*(float *)&SrcStr )
    return 1;
  if ( a3 <= (double)*(float *)&SrcStr )
    return 1;
  v5 = _mm_sub_ps(*a2, *a1);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_shuffle_ps(v6, v6, 0xAA);
  v7.m128_f32[0] = v7.m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  v30 = v7;
  v29 = fsqrt(v7.m128_f32[0]);
  if ( v29 <= (double)*(float *)&SrcStr )
    return 1;
  v8 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 0xAA);
  v10 = v9;
  v10.m128_f32[0] = v9.m128_f32[0] + v8;
  v30 = v10;
  v30.m128_f32[0] = 1.0 / fsqrt(v9.m128_f32[0] + v8);
  v11 = (__m128)0x3F000000u;
  v12 = (__m128)0x3F000000u;
  v12.m128_f32[0] = (float)(0.5 * v30.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v9.m128_f32[0] + v8) * v30.m128_f32[0]) * v30.m128_f32[0]));
  v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v5);
  v14 = (__m128)xmmword_B2F0B0;
  v15 = _mm_mul_ps(v13, (__m128)xmmword_B2F0B0);
  v32 = (__m128)0x3F000000u;
  if ( fabs((float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]))) >= flt_A97F54 )
  {
    v46 = 0;
    v47 = 0;
    v48 = 0;
    LODWORD(v46) = 0x3F800000;
    DWORD1(v47) = 0x3F800000;
    DWORD2(v48) = 0x3F800000;
  }
  else
  {
    v16 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
    v17 = _mm_mul_ps(v16, v16);
    v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v30.m128_f32[0] = 1.0 / fsqrt(v17.m128_f32[0]);
    v18 = 3.0 - (float)((float)(v17.m128_f32[0] * v30.m128_f32[0]) * v30.m128_f32[0]);
    v11.m128_f32[0] = 0.5 * v30.m128_f32[0];
    v19 = v11;
    v19.m128_f32[0] = (float)(0.5 * v30.m128_f32[0]) * v18;
    v30 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v16);
    v28 = sub_8A2AF0(
            _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
    sub_8B1B00(&v33, &v30, v28);
    sub_8B1DD0((float *)&v46, v33.m128_f32);
    v11 = v32;
  }
  v20 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), _mm_add_ps(*a1, *a2));
  v31 = v29 * a3 * a3 * flt_A97F28;
  v39 = 0;
  v40 = 0;
  v21 = a3 * a3;
  v38 = 0;
  v42 = v46;
  v41 = 0;
  v22 = v29 * v29 * flt_A41304;
  v33 = 0;
  v23 = v22 * flt_A7C038;
  v43 = v47;
  v24 = v23 + v21 * flt_A41304;
  v49 = v20;
  v34[0] = &v36;
  v35 = 0x80000001;
  v39.m128_f32[0] = v24;
  v36 = 0.0;
  *((float *)&v40 + 1) = v24;
  v37 = 0;
  v34[1] = (_DWORD *)1;
  v25 = v21 * flt_A3D65C;
  v44 = v48;
  v45 = v20;
  v38 = 0u;
  *((float *)&v41 + 2) = v25;
  v32 = (__m128)a4;
  sub_8D2A60(&v39, &v32);
  v36 = v31;
  v38 = v33;
  v37 = a4;
  sub_8B3E60((int *)v34, a5);
  if ( v35 >= 0 )
  {
    v26 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v26 )
      v26 = dword_BA7D9C;
    sub_8A75D0(v26, v34[0], 0x90 * (v35 & 0x3FFFFFFF), 0x14);
  }
  return 0;
}
