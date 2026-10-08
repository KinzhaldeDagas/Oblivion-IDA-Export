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

  result = (__m128 *)((a4 | (8 * a3)) - 9); /*0x93ba34*/
  switch ( a4 | (8 * a3) ) /*0x93ba49*/
  {
    case 9: /*0x93ba49*/
      v8 = _mm_sub_ps(*a1, *a2); /*0x93ba62*/
      *a7 = v8; /*0x93ba65*/
      v9 = *a5; /*0x93ba68*/
      v10 = _mm_mul_ps(*a5, v8); /*0x93ba6e*/
      v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x93ba93*/
                  + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
          * flt_A342A4;
      v12 = _mm_mul_ps(v8, v8); /*0x93ba9c*/
      v70 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x93bab9*/
          + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
      *(float *)&result = COERCE_FLOAT(&v70); /*0x93bac6*/
      if ( v11 >= v70 ) /*0x93baca*/
      {
        v14 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]; /*0x93bb09*/
        v15 = _mm_shuffle_ps(v12, v12, 0xAA); /*0x93bb10*/
        v16 = v15; /*0x93bb14*/
        v16.m128_f32[0] = v15.m128_f32[0] + v14; /*0x93bb17*/
        v71 = v16; /*0x93bb1b*/
        v71.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14); /*0x93bb24*/
        v17 = 3.0 - (float)((float)((float)(v15.m128_f32[0] + v14) * v71.m128_f32[0]) * v71.m128_f32[0]); /*0x93bb48*/
        v18 = (__m128)0x3F000000u; /*0x93bb54*/
        v18.m128_f32[0] = 0.5 * v71.m128_f32[0]; /*0x93bb5a*/
        v19 = v18; /*0x93bb5e*/
        v19.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v17; /*0x93bb61*/
        v20 = _mm_shuffle_ps(v19, v19, 0); /*0x93bb65*/
        v70 = v16.m128_f32[0] * v20.m128_f32[0]; /*0x93bb6d*/
        *a7 = _mm_mul_ps(v20, v8); /*0x93bb7b*/
        a7->m128_f32[3] = v16.m128_f32[0] * v20.m128_f32[0]; /*0x93bb7e*/
      }
      else
      {
        v13 = _mm_mul_ps(v8, v9); /*0x93bacc*/
        *a7 = v9; /*0x93bae5*/
        v70 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x93bae8*/
            + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
        a7->m128_f32[3] = v70; /*0x93baf0*/
      }
      *a6 = *a1; /*0x93baf9*/
      break; /*0x93bb01*/
    case 0xA: /*0x93ba49*/
      v21 = _mm_sub_ps(*a1, *a2); /*0x93bb9f*/
      v22 = *a5; /*0x93bba2*/
      *a7 = *a5; /*0x93bba8*/
      v23 = _mm_mul_ps(v22, v21); /*0x93bbab*/
      v70 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x93bbc8*/
          + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      a7->m128_f32[3] = v70; /*0x93bbd0*/
      *a6 = *a1; /*0x93bbd9*/
      result = a6; /*0x93bbd6*/
      break; /*0x93bbe1*/
    case 0xB: /*0x93ba49*/
      v29 = _mm_sub_ps(a2[2], a2[1]); /*0x93bc2f*/
      v30 = _mm_sub_ps(*a2, a2[2]); /*0x93bc35*/
      result = a7; /*0x93bc3f*/
      v31 = _mm_sub_ps( /*0x93bc60*/
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(v30, v30, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(v30, v30, 0xC9)));
      v32 = _mm_mul_ps(v31, v31); /*0x93bc66*/
      v33 = _mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]; /*0x93bc70*/
      v34 = _mm_shuffle_ps(v32, v32, 0xAA); /*0x93bc77*/
      v35 = v34; /*0x93bc7b*/
      v35.m128_f32[0] = v34.m128_f32[0] + v33; /*0x93bc7e*/
      v71 = v35; /*0x93bc82*/
      v71.m128_f32[0] = 1.0 / fsqrt(v34.m128_f32[0] + v33); /*0x93bc8b*/
      v34.m128_f32[0] = 3.0 - (float)((float)((float)(v34.m128_f32[0] + v33) * v71.m128_f32[0]) * v71.m128_f32[0]); /*0x93bcac*/
      v70 = 0.5; /*0x93bcb0*/
      v36 = (__m128)0x3F000000u; /*0x93bcb8*/
      v36.m128_f32[0] = 0.5 * v71.m128_f32[0]; /*0x93bcbe*/
      v37 = v36; /*0x93bcc2*/
      v37.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v34.m128_f32[0]; /*0x93bcc5*/
      *a7 = v31; /*0x93bcc9*/
      v38 = _mm_mul_ps(v31, *a5); /*0x93bcd2*/
      v39 = _mm_shuffle_ps(v38, v38, 0xAA); /*0x93bce3*/
      v39.m128_f32[0] = v39.m128_f32[0] + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]); /*0x93bce7*/
      if ( (_mm_movemask_ps(v39) & 1) != 0 ) /*0x93bcf1*/
        *a7 = _mm_xor_ps(v31, (__m128)xmmword_A965C0); /*0x93bcfd*/
      v40 = _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), *a7); /*0x93bd0d*/
      *a7 = v40; /*0x93bd10*/
      v41 = _mm_mul_ps(_mm_sub_ps(*a1, *a2), v40); /*0x93bd25*/
      *a6 = *a1; /*0x93bd45*/
      a7->m128_f32[3] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0] /*0x93bd50*/
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
      break; /*0x93bd58*/
    case 0x11: /*0x93ba49*/
      result = a7; /*0x93bbf1*/
      v24 = _mm_sub_ps(*a2, *a1); /*0x93bbf4*/
      v25 = *a5; /*0x93bbf7*/
      *a7 = *a5; /*0x93bbfa*/
      v26 = _mm_mul_ps(v25, v24); /*0x93bbfd*/
      v24.m128_f32[0] = _mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]; /*0x93bc0a*/
      v27 = _mm_shuffle_ps(v26, v26, 0xAA); /*0x93bc12*/
      v27.m128_f32[0] = v27.m128_f32[0] + v24.m128_f32[0]; /*0x93bc15*/
      v28 = *a2; /*0x93bc19*/
      goto LABEL_14; /*0x93bc1c*/
    case 0x12: /*0x93ba49*/
      v55 = *a2; /*0x93bec3*/
      v72 = _mm_sub_ps(a1[1], *a1); /*0x93becb*/
      v71 = _mm_sub_ps(a2[1], v55); /*0x93bed9*/
      sub_8D1A30(a1, &v72, a2, &v71, v73); /*0x93bede*/
      v56 = _mm_sub_ps( /*0x93bf12*/
              _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xC9), _mm_shuffle_ps(v71, v71, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0xD2), _mm_shuffle_ps(v71, v71, 0xC9)));
      v57 = _mm_add_ps(_mm_mul_ps(v72, v72), _mm_mul_ps(v71, v71)); /*0x93bf21*/
      v69 = _mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0] /*0x93bf41*/
          + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]);
      v58 = _mm_mul_ps(v56, v56); /*0x93bf4b*/
      v70 = _mm_shuffle_ps(v58, v58, 0xAA).m128_f32[0] /*0x93bf68*/
          + (float)(_mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]);
      v59 = v70 * flt_A37080; /*0x93bf70*/
      *a7 = v56; /*0x93bf7d*/
      if ( v69 * v69 >= v59 ) /*0x93bf8b*/
      {
        *a7 = *a5; /*0x93c03c*/
      }
      else
      {
        v60 = _mm_mul_ps(v56, *a5); /*0x93bf97*/
        v61 = _mm_shuffle_ps(v60, v60, 0xAA); /*0x93bfa8*/
        v61.m128_f32[0] = v61.m128_f32[0] + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]); /*0x93bfac*/
        if ( (_mm_movemask_ps(v61) & 1) != 0 ) /*0x93bfb5*/
          *a7 = _mm_xor_ps(v56, (__m128)xmmword_A965C0); /*0x93bfc1*/
        v62 = *a7; /*0x93bfc4*/
        v63 = _mm_mul_ps(v62, v62); /*0x93bfca*/
        v64 = _mm_shuffle_ps(v63, v63, 0x55).m128_f32[0] + v63.m128_f32[0]; /*0x93bfd4*/
        v65 = _mm_shuffle_ps(v63, v63, 0xAA); /*0x93bfdb*/
        v66 = v65; /*0x93bfdf*/
        v66.m128_f32[0] = v65.m128_f32[0] + v64; /*0x93bfe2*/
        v72 = v66; /*0x93bfe6*/
        v72.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64); /*0x93bfef*/
        v70 = 0.5; /*0x93c014*/
        v67 = (__m128)0x3F000000u; /*0x93c01c*/
        v67.m128_f32[0] = (float)(0.5 * v72.m128_f32[0]) /*0x93c026*/
                        * (float)(3.0
                                - (float)((float)((float)(v65.m128_f32[0] + v64) * v72.m128_f32[0]) * v72.m128_f32[0]));
        *a7 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v62); /*0x93c034*/
      }
      v68 = _mm_mul_ps(_mm_sub_ps(*a1, *a2), *a7); /*0x93c051*/
      *a6 = v73[0]; /*0x93c059*/
      *(float *)&result = _mm_shuffle_ps(v68, v68, 0xAA).m128_f32[0] /*0x93c07a*/
                        + (float)(_mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0]);
      a7->m128_f32[3] = *(float *)&result; /*0x93c07e*/
      break; /*0x93c07e*/
    case 0x19: /*0x93ba49*/
      v42 = _mm_sub_ps(a1[2], a1[1]); /*0x93bd67*/
      v43 = _mm_sub_ps(*a1, a1[2]); /*0x93bd6d*/
      result = a7; /*0x93bd77*/
      v44 = _mm_sub_ps( /*0x93bd98*/
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xC9), _mm_shuffle_ps(v43, v43, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0xD2), _mm_shuffle_ps(v43, v43, 0xC9)));
      v45 = _mm_mul_ps(v44, v44); /*0x93bd9e*/
      v46 = _mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]; /*0x93bda8*/
      v47 = _mm_shuffle_ps(v45, v45, 0xAA); /*0x93bdaf*/
      v48 = v47; /*0x93bdb3*/
      v48.m128_f32[0] = v47.m128_f32[0] + v46; /*0x93bdb6*/
      v71 = v48; /*0x93bdba*/
      v71.m128_f32[0] = 1.0 / fsqrt(v47.m128_f32[0] + v46); /*0x93bdc3*/
      v47.m128_f32[0] = 3.0 - (float)((float)((float)(v47.m128_f32[0] + v46) * v71.m128_f32[0]) * v71.m128_f32[0]); /*0x93bde4*/
      v70 = 0.5; /*0x93bde8*/
      v49 = (__m128)0x3F000000u; /*0x93bdf0*/
      v49.m128_f32[0] = 0.5 * v71.m128_f32[0]; /*0x93bdf6*/
      v50 = v49; /*0x93bdfa*/
      v50.m128_f32[0] = (float)(0.5 * v71.m128_f32[0]) * v47.m128_f32[0]; /*0x93bdfd*/
      *a7 = v44; /*0x93be01*/
      v51 = _mm_mul_ps(v44, *a5); /*0x93be0a*/
      v52 = _mm_shuffle_ps(v51, v51, 0xAA); /*0x93be1b*/
      v52.m128_f32[0] = v52.m128_f32[0] + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0]); /*0x93be1f*/
      if ( (_mm_movemask_ps(v52) & 1) != 0 ) /*0x93be29*/
        *a7 = _mm_xor_ps(v44, (__m128)xmmword_A965C0); /*0x93be35*/
      v53 = _mm_mul_ps(_mm_shuffle_ps(v50, v50, 0), *a7); /*0x93be48*/
      *a7 = v53; /*0x93be4b*/
      v28 = *a2; /*0x93be4e*/
      v54 = _mm_mul_ps(_mm_sub_ps(*a2, *a1), v53); /*0x93be5d*/
      v53.m128_f32[0] = _mm_shuffle_ps(v54, v54, 0x55).m128_f32[0] + v54.m128_f32[0]; /*0x93be6a*/
      v27 = _mm_shuffle_ps(v54, v54, 0xAA); /*0x93be72*/
      v27.m128_f32[0] = v27.m128_f32[0] + v53.m128_f32[0]; /*0x93be75*/
LABEL_14:
      *a6 = v28; /*0x93be79*/
      *a6 = _mm_sub_ps(v28, _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), *result)); /*0x93be8f*/
      v70 = v27.m128_f32[0]; /*0x93be96*/
      result->m128_f32[3] = -v27.m128_f32[0]; /*0x93bea0*/
      break; /*0x93bea8*/
    default:
      return result;
  }
  return result; /*0x93bafc*/
}
