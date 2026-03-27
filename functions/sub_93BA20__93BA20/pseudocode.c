__m128 *__cdecl sub_93BA20(__m128 *a1, __m128 *a2, int a3, int a4, __m128 *a5, __m128 *a6, __m128 *a7)
{
  __m128 *result; // eax
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  float v14; // xmm2_4
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  float v17; // xmm4_4
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  float v33; // xmm2_4
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm2
  __m128 v38; // xmm0
  __m128 v39; // xmm4
  __m128 v40; // xmm1
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  float v46; // xmm2_4
  __m128 v47; // xmm3
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  __m128 v51; // xmm0
  __m128 v52; // xmm4
  __m128 v53; // xmm2
  __m128 v54; // xmm0
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  __m128 v57; // xmm0
  __m128 v58; // xmm0
  double v59; // st7
  __m128 v60; // xmm0
  __m128 v61; // xmm3
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  float v64; // xmm2_4
  __m128 v65; // xmm3
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  __m128 v68; // xmm0
  float v69; // [esp+8h] [ebp-58h]
  float v70; // [esp+Ch] [ebp-54h] BYREF
  __m128 v71; // [esp+10h] [ebp-50h] BYREF
  __m128 v72; // [esp+20h] [ebp-40h] BYREF
  __m128 v73[3]; // [esp+30h] [ebp-30h] BYREF

  result = (__m128 *)((a4 | (8 * a3)) - 9);
  switch ( a4 | (8 * a3) )
  {
    case 9:
      v8 = _mm_sub_ps(*a1, *a2);
      *a7 = v8;
      v9 = *a5;
      v10 = _mm_mul_ps(*a5, v8);
      v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
          * flt_A342A4;
      v12 = _mm_mul_ps(v8, v8);
      v70 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
      *(float *)&result = COERCE_FLOAT(&v70);
      if ( v11 >= v70 )
      {
        v14 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0];
        v15 = _mm_shuffle_ps(v12, v12, 0xAA);
        v16 = v15;
        v16.m128_f32[0] = v15.m128_f32[0] + v14;
        v71 = v16;
        v71.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14);
        v17 = 3.0 - (float)((float)((float)(v15.m128_f32[0] + v14) * v71.m128_f32[0]) * v71.m128_f32[0]);
        v18 = (__m128)0x3F000000u;
        v18.m128_f32[0] = 0.5 * v71.m128_f32[0];
        v19 = v18;
        v19.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v17;
        v20 = _mm_shuffle_ps(v19, v19, 0);
        v70 = v16.m128_f32[0] * v20.m128_f32[0];
        *a7 = _mm_mul_ps(v20, v8);
        a7->m128_f32[3] = v16.m128_f32[0] * v20.m128_f32[0];
      }
      else
      {
        v13 = _mm_mul_ps(v8, v9);
        *a7 = v9;
        v70 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
        a7->m128_f32[3] = v70;
      }
      *a6 = *a1;
      break;
    case 0xA:
      v21 = _mm_sub_ps(*a1, *a2);
      v22 = *a5;
      *a7 = *a5;
      v23 = _mm_mul_ps(v22, v21);
      v70 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      a7->m128_f32[3] = v70;
      *a6 = *a1;
      result = a6;
      break;
    case 0xB:
      v29 = _mm_sub_ps(a2[2], a2[1]);
      v30 = _mm_sub_ps(*a2, a2[2]);
      result = a7;
      v31 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(v30, v30, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(v30, v30, 0xC9)));
      v32 = _mm_mul_ps(v31, v31);
      v33 = _mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0];
      v34 = _mm_shuffle_ps(v32, v32, 0xAA);
      v35 = v34;
      v35.m128_f32[0] = v34.m128_f32[0] + v33;
      v71 = v35;
      v71.m128_f32[0] = 1.0 / fsqrt(v34.m128_f32[0] + v33);
      v34.m128_f32[0] = 3.0 - (float)((float)((float)(v34.m128_f32[0] + v33) * v71.m128_f32[0]) * v71.m128_f32[0]);
      v70 = 0.5;
      v36 = (__m128)0x3F000000u;
      v36.m128_f32[0] = 0.5 * v71.m128_f32[0];
      v37 = v36;
      v37.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v34.m128_f32[0];
      *a7 = v31;
      v38 = _mm_mul_ps(v31, *a5);
      v39 = _mm_shuffle_ps(v38, v38, 0xAA);
      v39.m128_f32[0] = v39.m128_f32[0] + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]);
      if ( (_mm_movemask_ps(v39) & 1) != 0 )
        *a7 = _mm_xor_ps(v31, (__m128)xmmword_A965C0);
      v40 = _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), *a7);
      *a7 = v40;
      v41 = _mm_mul_ps(_mm_sub_ps(*a1, *a2), v40);
      *a6 = *a1;
      a7->m128_f32[3] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
      break;
    case 0x11:
      result = a7;
      v24 = _mm_sub_ps(*a2, *a1);
      v25 = *a5;
      *a7 = *a5;
      v26 = _mm_mul_ps(v25, v24);
      v24.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0];
      v27 = _mm_shuffle_ps(v26, v26, 0xAA);
      v27.m128_f32[0] = v27.m128_f32[0] + v24.m128_f32[0];
      v28 = *a2;
      goto LABEL_14;
    case 0x12:
      v55 = *a2;
      v72 = _mm_sub_ps(a1[1], *a1);
      v71 = _mm_sub_ps(a2[1], v55);
      sub_8D1A30(a1, &v72, a2, &v71, v73);
      v56 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xC9), _mm_shuffle_ps(v71, v71, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xD2), _mm_shuffle_ps(v71, v71, 0xC9)));
      v57 = _mm_add_ps(_mm_mul_ps(v72, v72), _mm_mul_ps(v71, v71));
      v69 = _mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]);
      v58 = _mm_mul_ps(v56, v56);
      v70 = _mm_shuffle_ps(v58, v58, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]);
      v59 = v70 * flt_A37080;
      *a7 = v56;
      if ( v69 * v69 >= v59 )
      {
        *a7 = *a5;
      }
      else
      {
        v60 = _mm_mul_ps(v56, *a5);
        v61 = _mm_shuffle_ps(v60, v60, 0xAA);
        v61.m128_f32[0] = v61.m128_f32[0] + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]);
        if ( (_mm_movemask_ps(v61) & 1) != 0 )
          *a7 = _mm_xor_ps(v56, (__m128)xmmword_A965C0);
        v62 = *a7;
        v63 = _mm_mul_ps(v62, v62);
        v64 = _mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0];
        v65 = _mm_shuffle_ps(v63, v63, 0xAA);
        v66 = v65;
        v66.m128_f32[0] = v65.m128_f32[0] + v64;
        v72 = v66;
        v72.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64);
        v70 = 0.5;
        v67 = (__m128)0x3F000000u;
        v67.m128_f32[0] = (float)(0.5 * v72.m128_f32[0])
                        * (float)(3.0
                                - (float)((float)((float)(v65.m128_f32[0] + v64) * v72.m128_f32[0]) * v72.m128_f32[0]));
        *a7 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v62);
      }
      v68 = _mm_mul_ps(_mm_sub_ps(*a1, *a2), *a7);
      *a6 = v73[0];
      *(float *)&result = _mm_shuffle_ps(v68, v68, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0]);
      a7->m128_f32[3] = *(float *)&result;
      break;
    case 0x19:
      v42 = _mm_sub_ps(a1[2], a1[1]);
      v43 = _mm_sub_ps(*a1, a1[2]);
      result = a7;
      v44 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xC9), _mm_shuffle_ps(v43, v43, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xD2), _mm_shuffle_ps(v43, v43, 0xC9)));
      v45 = _mm_mul_ps(v44, v44);
      v46 = _mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0];
      v47 = _mm_shuffle_ps(v45, v45, 0xAA);
      v48 = v47;
      v48.m128_f32[0] = v47.m128_f32[0] + v46;
      v71 = v48;
      v71.m128_f32[0] = 1.0 / fsqrt(v47.m128_f32[0] + v46);
      v47.m128_f32[0] = 3.0 - (float)((float)((float)(v47.m128_f32[0] + v46) * v71.m128_f32[0]) * v71.m128_f32[0]);
      v70 = 0.5;
      v49 = (__m128)0x3F000000u;
      v49.m128_f32[0] = 0.5 * v71.m128_f32[0];
      v50 = v49;
      v50.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v47.m128_f32[0];
      *a7 = v44;
      v51 = _mm_mul_ps(v44, *a5);
      v52 = _mm_shuffle_ps(v51, v51, 0xAA);
      v52.m128_f32[0] = v52.m128_f32[0] + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0]);
      if ( (_mm_movemask_ps(v52) & 1) != 0 )
        *a7 = _mm_xor_ps(v44, (__m128)xmmword_A965C0);
      v53 = _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), *a7);
      *a7 = v53;
      v28 = *a2;
      v54 = _mm_mul_ps(_mm_sub_ps(*a2, *a1), v53);
      v53.m128_f32[0] = _mm_shuffle_ps(v54, v54, 0x55).m128_f32[0] + v54.m128_f32[0];
      v27 = _mm_shuffle_ps(v54, v54, 0xAA);
      v27.m128_f32[0] = v27.m128_f32[0] + v53.m128_f32[0];
LABEL_14:
      *a6 = v28;
      *a6 = _mm_sub_ps(v28, _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), *result));
      v70 = v27.m128_f32[0];
      result->m128_f32[3] = -v27.m128_f32[0];
      break;
    default:
      return result;
  }
  return result;
}
