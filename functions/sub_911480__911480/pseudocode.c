void __userpurge sub_911480(__m128 *a1@<ecx>, int a2@<ebx>, _DWORD *a3, int *a4)
{
  char v5; // al
  __m128 *v6; // ecx
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 *v10; // eax
  int v11; // ebx
  __m128 v12; // xmm0
  __m128 *v13; // ecx
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 *v17; // eax
  int v18; // ebx
  __m128 v19; // xmm2
  __int32 v20; // eax
  __int32 v21; // edx
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  float v24; // xmm3_4
  __m128 v25; // xmm4
  __m128 v26; // xmm0
  bool v27; // c0
  bool v28; // c3
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  __m128 v32; // xmm3
  __m128 v33; // xmm2
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  int v36; // edx
  __int32 v37; // ecx
  unsigned int v38; // [esp+Ch] [ebp-A4h]
  __m128 v39; // [esp+10h] [ebp-A0h] BYREF
  float v40; // [esp+2Ch] [ebp-84h]
  __m128 v41; // [esp+30h] [ebp-80h] BYREF
  __int32 v42; // [esp+40h] [ebp-70h]
  __int32 v43; // [esp+44h] [ebp-6Ch]
  float v44; // [esp+48h] [ebp-68h]
  __m128 v45; // [esp+50h] [ebp-60h] BYREF
  __m128 v46; // [esp+60h] [ebp-50h] BYREF
  __m128 v47; // [esp+70h] [ebp-40h] BYREF
  __m128 v48; // [esp+80h] [ebp-30h] BYREF
  __m128 v49; // [esp+90h] [ebp-20h]
  __m128 v50; // [esp+A0h] [ebp-10h] BYREF

  if ( byte_BA8350 || (v5 = sub_9246E0(a2, 1), (byte_BA8350 = v5) != 0) )
  {
    sub_8F0F70((int)a3, a4, a3[0xA], 8);
    v6 = (__m128 *)a3[7];
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = a1 + 1;
    v11 = 3;
    do
    {
      *(__m128 *)((char *)v10 + (char *)&v48 - (char *)&a1[1]) = _mm_add_ps(
                                                                   _mm_add_ps(
                                                                     _mm_mul_ps(v7, _mm_shuffle_ps(*v10, *v10, 0)),
                                                                     _mm_mul_ps(v8, _mm_shuffle_ps(*v10, *v10, 0x55))),
                                                                   _mm_mul_ps(v9, _mm_shuffle_ps(*v10, *v10, 0xAA)));
      ++v10;
      --v11;
    }
    while ( v11 );
    v12 = v6[3];
    v13 = (__m128 *)a3[8];
    v48 = _mm_add_ps(v48, v12);
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = a1 + 4;
    v18 = 3;
    do
    {
      *(__m128 *)((char *)v17 + (char *)&v45 - (char *)&a1[4]) = _mm_add_ps(
                                                                   _mm_add_ps(
                                                                     _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                     _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                   _mm_mul_ps(v16, _mm_shuffle_ps(*v17, *v17, 0xAA)));
      ++v17;
      --v18;
    }
    while ( v18 );
    v45 = _mm_add_ps(v45, v13[3]);
    sub_911060(a1->m128_f32, &v50, &v47, &v46, (int)a3, (int)a4);
    v19 = v47;
    v20 = a1[8].m128_i32[0];
    v21 = a1[7].m128_i32[3];
    v41 = v50;
    v22 = _mm_add_ps(v47, v50);
    v23 = _mm_mul_ps(v22, v22);
    v24 = _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0];
    v25 = _mm_shuffle_ps(v23, v23, 0xAA);
    v26 = v25;
    v26.m128_f32[0] = v25.m128_f32[0] + v24;
    v39 = v26;
    v39.m128_i32[0] = fsqrt(v25.m128_f32[0] + v24);
    v27 = v39.m128_f32[0] < (double)flt_A9CCB4;
    v28 = v39.m128_f32[0] == flt_A9CCB4;
    v43 = v20;
    v42 = v21;
    if ( !v27 && !v28 )
    {
      *(float *)&v38 = fConstant_1 / v39.m128_f32[0];
      v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)v38, (__m128)v38, 0), v22);
    }
    v39 = v19;
    v29 = _mm_shuffle_ps(v19, v19, 0xD2);
    v30 = _mm_shuffle_ps(v19, v19, 0xC9);
    v31 = _mm_sub_ps(_mm_mul_ps(v30, _mm_shuffle_ps(v46, v46, 0xD2)), _mm_mul_ps(v29, _mm_shuffle_ps(v46, v46, 0xC9)));
    v32 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), v30);
    v33 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), v29);
    v34 = _mm_mul_ps(v31, v49);
    v35 = _mm_mul_ps(_mm_sub_ps(v33, v32), v49);
    v40 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
    v44 = sub_8ECBB0(
            v40,
            _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]));
    v41 = v39;
    sub_8F1B60(&v41, (int)a3, (int)a4);
    sub_8F1CC0(&v48, &v45, (int)a3, (__m128 **)a4);
    if ( a1[8].m128_f32[1] > (double)*(float *)&SrcStr )
    {
      v36 = a3[0xA];
      v37 = a3[7];
      v39.m128_i32[2] = a1[8].m128_i32[1];
      v39.m128_i32[0] = v37;
      v39.m128_i32[3] = 3;
      v39.m128_i32[1] = v36 + 0x30;
      sub_8F1460((int)&v39, (int)a3, (int)a4);
    }
  }
}
