signed int __thiscall sub_9377C0(__m128 *this, __m128 *a2)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm3
  __m128 v6; // xmm4
  __m128 v7; // xmm1
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 *v10; // eax
  __m128 v11; // xmm0
  char v12; // cl
  __m128 v13; // xmm5
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  double v17; // st7
  double v18; // st6
  __m128 v19; // xmm0
  double v20; // st7
  double v21; // st6
  __m128 v22; // xmm0
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st7
  double v27; // st6
  double v28; // st7
  double v29; // st6
  double v30; // st7
  __m128 v31; // xmm0
  double v32; // st7
  double v33; // st6
  double v34; // st7
  double v35; // st6
  __m128 v36; // xmm0
  char v37; // dl
  int v39; // [esp+8h] [ebp-104h] BYREF
  __m128 v40; // [esp+Ch] [ebp-100h] BYREF
  __m128 v41; // [esp+1Ch] [ebp-F0h]
  __m128 v42; // [esp+2Ch] [ebp-E0h]
  __m128 v43; // [esp+3Ch] [ebp-D0h]
  __m128 v44; // [esp+4Ch] [ebp-C0h] BYREF
  __m128 v45; // [esp+5Ch] [ebp-B0h]
  __m128 v46; // [esp+6Ch] [ebp-A0h]
  __m128 v47; // [esp+7Ch] [ebp-90h]
  __m128 v48; // [esp+8Ch] [ebp-80h] BYREF
  __m128 v49; // [esp+9Ch] [ebp-70h]
  __m128 v50; // [esp+ACh] [ebp-60h] BYREF
  __m128 v51; // [esp+BCh] [ebp-50h]
  __m128 v52; // [esp+CCh] [ebp-40h] BYREF
  __m128 v53; // [esp+DCh] [ebp-30h]
  __m128 v54; // [esp+ECh] [ebp-20h]
  __m128 v55; // [esp+FCh] [ebp-10h]

  v3 = *(this + 2);
  v4 = *(this + 3);
  v5 = *(this + 4);
  v6 = *(this + 6);
  v48 = (__m128)0x4479FFFFu;
  v39 = 0xDBB1A2BC;
  v50 = (__m128)0xDBB1A2BC;
  v7 = _mm_and_ps(v4, (__m128)xmmword_A372D0);
  v8 = _mm_and_ps(v5, (__m128)xmmword_A372D0);
  v9 = _mm_and_ps(v3, (__m128)xmmword_A372D0);
  v10 = this + 2;
  v11 = _mm_sub_ps(
          _mm_and_ps(*(this + 0xC), *(__m128 *)0xA372D0),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v9, _mm_shuffle_ps(*(this + 7), *(this + 7), 0)),
                _mm_mul_ps(v7, _mm_shuffle_ps(*(this + 7), *(this + 7), 0x55))),
              _mm_mul_ps(v8, _mm_shuffle_ps(*(this + 7), *(this + 7), 0xAA))),
            v6));
  v12 = _mm_movemask_ps(_mm_cmplt_ps(*a2, v11));
  v41 = v9;
  v42 = v7;
  v43 = v8;
  if ( (v12 & 7) != 0 )
    return 1;
  v13 = *(this + 7);
  *(this + 0xE) = v11;
  v14 = _mm_shuffle_ps(v9, v7, 0x44);
  v15 = _mm_shuffle_ps(v8, v8, 0x44);
  v16 = _mm_sub_ps(
          _mm_and_ps(*(this + 0xD), (__m128)xmmword_A372D0),
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v14, v15, 0x88), _mm_shuffle_ps(*(this + 6), *(this + 6), 0)),
                _mm_mul_ps(_mm_shuffle_ps(v14, v15, 0xDD), _mm_shuffle_ps(*(this + 6), *(this + 6), 0x55))),
              _mm_mul_ps(
                _mm_shuffle_ps(_mm_shuffle_ps(v9, v42, 0xEE), _mm_shuffle_ps(v8, v8, 0xEE), 0x88),
                _mm_shuffle_ps(*(this + 6), *(this + 6), 0xAA))),
            v13));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(*a2, v16)) & 7) != 0 )
    return 1;
  *(this + 0xF) = v16;
  sub_8D2860(&v52, v10);
  v17 = v41.m128_f32[2] * *((float *)this + 0x19);
  v18 = v41.m128_f32[1] * *((float *)this + 0x1A);
  v51 = _mm_mul_ps(v52, v52);
  v19 = _mm_shuffle_ps(*(this + 0xC), *(this + 0xC), 0xAA);
  v20 = v17 + v18 + v42.m128_f32[0] * *((float *)this + 0x1E);
  v21 = v43.m128_f32[0] * *((float *)this + 0x1D);
  v49 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v53);
  v22 = *(this + 0xC);
  v46 = _mm_mul_ps(v54, v54);
  v40.m128_f32[0] = v20 + v21;
  v23 = v42.m128_f32[2] * *((float *)this + 0x19);
  v55 = _mm_mul_ps(v53, v53);
  v24 = v42.m128_f32[1] * *((float *)this + 0x1A);
  v45 = _mm_shuffle_ps(v22, v22, 0x55);
  v40.m128_i32[3] = 0;
  v44 = _mm_add_ps(v46, v55);
  v40.m128_f32[1] = v23 + v24 + v43.m128_f32[0] * *((float *)this + 0x1C) + v41.m128_f32[0] * *((float *)this + 0x1E);
  v40.m128_f32[2] = v43.m128_f32[2] * *((float *)this + 0x19)
                  + v43.m128_f32[1] * *((float *)this + 0x1A)
                  + v42.m128_f32[0] * *((float *)this + 0x1C)
                  + v41.m128_f32[0] * *((float *)this + 0x1D);
  sub_9366F0((int)&v44);
  v40 = _mm_mul_ps(
          v44,
          _mm_sub_ps(
            _mm_and_ps(_mm_sub_ps(v49, _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v54)), (__m128)xmmword_A372D0),
            v40));
  v39 = *((_DWORD *)this + 0x2C);
  v47 = (__m128)(unsigned int)v39;
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)(unsigned int)v39, (__m128)(unsigned int)v39, 0), v40)) & 7) != 0 )
    return 1;
  sub_936740(&v40, &v50, &v44, &v48);
  v25 = v42.m128_f32[1];
  *(this + 0x10) = v40;
  v26 = v25 * *((float *)this + 0x1E) + v41.m128_f32[0] * *((float *)this + 0x1A);
  v45 = _mm_mul_ps(_mm_shuffle_ps(*(this + 0xC), *(this + 0xC), 0), v54);
  v27 = v43.m128_f32[1] * *((float *)this + 0x1D);
  v49 = _mm_shuffle_ps(*(this + 0xC), *(this + 0xC), 0xAA);
  v28 = v26 + v27;
  v29 = v41.m128_f32[2] * *((float *)this + 0x18);
  v40.m128_i32[3] = 0;
  v44 = _mm_add_ps(v46, v51);
  v40.m128_f32[0] = v28 + v29;
  v40.m128_f32[1] = v41.m128_f32[1] * *((float *)this + 0x1E)
                  + v43.m128_f32[1] * *((float *)this + 0x1C)
                  + v42.m128_f32[0] * *((float *)this + 0x1A)
                  + v42.m128_f32[2] * *((float *)this + 0x18);
  v40.m128_f32[2] = v42.m128_f32[1] * *((float *)this + 0x1C)
                  + v43.m128_f32[0] * *((float *)this + 0x1A)
                  + v41.m128_f32[1] * *((float *)this + 0x1D)
                  + v43.m128_f32[2] * *((float *)this + 0x18);
  sub_9366F0((int)&v44);
  v40 = _mm_mul_ps(
          v44,
          _mm_sub_ps(
            _mm_and_ps(_mm_sub_ps(v45, _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0), v52)), (__m128)xmmword_A372D0),
            v40));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps(v47, v47, 0), v40)) & 7) != 0 )
    return 1;
  sub_936740(&v40, &v50, &v44, &v48);
  v30 = v42.m128_f32[2];
  *(this + 0x11) = v40;
  v31 = _mm_shuffle_ps(*(this + 0xC), *(this + 0xC), 0x55);
  v32 = v30 * *((float *)this + 0x1E) + v41.m128_f32[0] * *((float *)this + 0x19);
  v33 = v43.m128_f32[2] * *((float *)this + 0x1D);
  v46 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v52);
  v47 = *(this + 0xC);
  v34 = v32 + v33;
  v35 = v41.m128_f32[1] * *((float *)this + 0x18);
  v40.m128_i32[3] = 0;
  v44 = _mm_add_ps(v55, v51);
  v40.m128_f32[0] = v34 + v35;
  v40.m128_f32[1] = v41.m128_f32[2] * *((float *)this + 0x1E)
                  + v43.m128_f32[2] * *((float *)this + 0x1C)
                  + v42.m128_f32[0] * *((float *)this + 0x19)
                  + v42.m128_f32[1] * *((float *)this + 0x18);
  v40.m128_f32[2] = v42.m128_f32[2] * *((float *)this + 0x1C)
                  + v43.m128_f32[0] * *((float *)this + 0x19)
                  + v41.m128_f32[2] * *((float *)this + 0x1D)
                  + v43.m128_f32[1] * *((float *)this + 0x18);
  sub_9366F0((int)&v44);
  v36 = _mm_mul_ps(
          v44,
          _mm_sub_ps(
            _mm_and_ps(_mm_sub_ps(v46, _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v53)), (__m128)xmmword_A372D0),
            v40));
  v37 = _mm_movemask_ps(_mm_cmplt_ps(*a2, v36));
  v40 = v36;
  v39 = v37 & 7;
  sub_9366B0(&v40, (unsigned int *)this + 0x2C, &v39);
  if ( v39 )
    return 1;
  sub_936740(&v40, &v50, &v44, &v48);
  *(this + 0x12) = v40;
  return 0;
}
