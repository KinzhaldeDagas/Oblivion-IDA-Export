void __cdecl sub_94FEF0(__m128 *a1, signed int a2, int a3, int a4, int a5, int *a6)
{
  double v6; // st7
  __m128 *v7; // edx
  double v8; // st6
  __m128 *v9; // esi
  int *v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  __m128 *v13; // ecx
  float *v14; // ebx
  __m128 v15; // xmm7
  __m128 v16; // xmm3
  float *v17; // edi
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  double v24; // st6
  float *v25; // edi
  double v26; // st6
  double v27; // st4
  long double v28; // st6
  double v29; // st5
  __m128 v30; // xmm1
  double v31; // st6
  __m128 v32; // xmm0
  double v33; // st5
  __m128 v34; // xmm6
  __m128 *v35; // ecx
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  double v38; // st4
  bool v39; // zf
  double v40; // st7
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  float v43; // xmm1_4
  float v44; // xmm2_4
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  __m128 v47; // xmm3
  __m128 v48; // xmm6
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  __m128 v51; // xmm0
  __int16 v52; // ax
  __m128 v53; // xmm0
  float v54; // xmm1_4
  float v55; // xmm4_4
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm5
  __m128 v59; // xmm0
  __m128 v60; // xmm3
  __m128 v61; // xmm4
  __m128 v62; // xmm0
  __m128 v63; // xmm2
  __m128 v64; // xmm6
  __m128 v65; // xmm7
  __m128 v66; // xmm0
  __m128 v67; // xmm2
  __m128 v68; // xmm0
  __m128 v69; // xmm6
  __m128 v70; // xmm2
  __m128 v71; // xmm0
  double v72; // st6
  __m128 *v73; // ecx
  __m128 v74; // xmm0
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm4
  __m128 v78; // xmm1
  __m128 v79; // xmm0
  double v80; // st6
  int v81; // ecx
  double v82; // st6
  double v83; // st5
  __m128 v84; // xmm0
  __m128 v85; // xmm0
  double v86; // st4
  double v87; // st7
  float *v88; // eax
  __m128 v89; // xmm0
  __m128 v90; // xmm0
  double v91; // st7
  __m128 v92; // xmm0
  __m128 v93; // xmm1
  __m128 v94; // xmm0
  int v95; // ebx
  int v96; // ecx
  double v97; // st7
  __m128 *v98; // [esp+8h] [ebp-6Ch]
  float v99; // [esp+Ch] [ebp-68h]
  float v100; // [esp+10h] [ebp-64h]
  float v101; // [esp+14h] [ebp-60h]
  float v102; // [esp+14h] [ebp-60h]
  float v103; // [esp+14h] [ebp-60h]
  float v104; // [esp+18h] [ebp-5Ch]
  float v105; // [esp+18h] [ebp-5Ch]
  float v106; // [esp+18h] [ebp-5Ch]
  int v107; // [esp+1Ch] [ebp-58h]
  float v108; // [esp+1Ch] [ebp-58h]
  __m128 *v109; // [esp+1Ch] [ebp-58h]
  float *v110; // [esp+20h] [ebp-54h]
  float v111; // [esp+20h] [ebp-54h]
  signed int v112; // [esp+24h] [ebp-50h]
  float v113; // [esp+24h] [ebp-50h]
  signed int v114; // [esp+24h] [ebp-50h]
  __m128 v115; // [esp+34h] [ebp-40h]
  float v116; // [esp+44h] [ebp-30h]
  __m128 v117; // [esp+44h] [ebp-30h]
  float v118; // [esp+44h] [ebp-30h]
  __m128 v119; // [esp+44h] [ebp-30h]
  __m128 v120; // [esp+54h] [ebp-20h]

  v6 = *(float *)&SrcStr; /*0x94fef9*/
  v7 = *(__m128 **)(a5 + 0x14); /*0x94ff05*/
  v8 = fConstant_1 / (double)a2; /*0x94ff0c*/
  v9 = *(__m128 **)(a5 + 0x18); /*0x94ff13*/
  v10 = a6; /*0x94ff17*/
  v11 = (_DWORD *)a6[1]; /*0x94ff1a*/
  v12 = *a6; /*0x94ff1d*/
  v11[2] = a3; /*0x94ff1f*/
  *v11 = 0x11801; /*0x94ff22*/
  v11[3] = v7; /*0x94ff28*/
  v11[4] = v9; /*0x94ff2b*/
  v11[5] = 0x14; /*0x94ff2e*/
  v11[1] = v12; /*0x94ff35*/
  v13 = (__m128 *)*a6; /*0x94ff38*/
  v14 = (float *)(v11 + 6); /*0x94ff3a*/
  v15 = 0; /*0x94ff44*/
  v16 = 0; /*0x94ff47*/
  v107 = 0; /*0x94ff4a*/
  v99 = v8; /*0x94ff56*/
  if ( a2 - 1 >= 0 ) /*0x94ff5a*/
  {
    v98 = a1 + 1; /*0x94ff66*/
    v17 = (float *)(a3 + 0x10); /*0x94ff6d*/
    v110 = (float *)(a3 + 0x10); /*0x94ff71*/
    v112 = a2; /*0x94ff75*/
    do /*0x9502b9*/
    {
      *v13 = *v98; /*0x94ff87*/
      v18 = _mm_sub_ps(v98[0xFFFFFFFF], v7[4]); /*0x94ff99*/
      v19 = _mm_sub_ps(v98[0xFFFFFFFF], v9[4]); /*0x94ffa0*/
      v20 = _mm_sub_ps( /*0x94ffcb*/
              _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xC9), _mm_shuffle_ps(*v98, *v98, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xD2), _mm_shuffle_ps(*v98, *v98, 0xC9)));
      if ( !v7->m128_i8[0xC] ) /*0x94ff8a*/
        v20 = _mm_add_ps( /*0x94fffd*/
                _mm_add_ps(
                  _mm_mul_ps(v7[5], _mm_shuffle_ps(v20, v20, 0)),
                  _mm_mul_ps(v7[6], _mm_shuffle_ps(v20, v20, 0x55))),
                _mm_mul_ps(v7[7], _mm_shuffle_ps(v20, v20, 0xAA)));
      v13[1] = v20; /*0x950000*/
      v21 = _mm_sub_ps( /*0x950031*/
              _mm_mul_ps(_mm_shuffle_ps(*v98, *v98, 0xC9), _mm_shuffle_ps(v19, v19, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(*v98, *v98, 0xD2), _mm_shuffle_ps(v19, v19, 0xC9)));
      if ( !v9->m128_i8[0xC] ) /*0x950007*/
        v21 = _mm_add_ps( /*0x950063*/
                _mm_add_ps(
                  _mm_mul_ps(v9[5], _mm_shuffle_ps(v21, v21, 0)),
                  _mm_mul_ps(v9[6], _mm_shuffle_ps(v21, v21, 0x55))),
                _mm_mul_ps(v9[7], _mm_shuffle_ps(v21, v21, 0xAA)));
      v22 = v13[1]; /*0x950066*/
      v13[2] = v21; /*0x95006a*/
      v23 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v22, v22), v7[3]), _mm_mul_ps(_mm_mul_ps(v13[2], v13[2]), v9[3])); /*0x95009e*/
      v24 = v9[3].m128_f32[3] /*0x9500bf*/
          + v7[3].m128_f32[3]
          + flt_AA2F14
          + (float)(_mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]));
      v13[2].m128_f32[3] = v24; /*0x9500c3*/
      v13[1].m128_f32[3] = fConstant_1 / v24; /*0x9500ce*/
      v107 += *((unsigned __int16 *)v17 + 0xFFFFFFFE); /*0x9500e1*/
      v25 = v110; /*0x9500e5*/
      v6 = v6 + v110[0xFFFFFFFC]; /*0x9500e9*/
      v26 = *v110; /*0x9500ec*/
      v111 = v98->m128_f32[3] - v26; /*0x9500f6*/
      v104 = -v25[0xFFFFFFFD] - v111; /*0x950103*/
      v27 = v26 * flt_AA2F1C; /*0x95010c*/
      if ( v27 >= *(float *)(a5 + 8) ) /*0x95011d*/
      {
        v100 = *(float *)(a5 + 8); /*0x95012b*/
      }
      else
      {
        v101 = v27; /*0x950112*/
        v100 = v101; /*0x950125*/
      }
      v102 = v100 + v26; /*0x950135*/
      v28 = v111 - v100; /*0x95013f*/
      if ( v100 + v100 + flt_A37080 < v104 ) /*0x950158*/
      {
        v102 = v102 - v104; /*0x950162*/
        v28 = v28 + v104; /*0x950166*/
      }
      if ( fabs(v28) < flt_A9E034 ) /*0x950179*/
        v28 = *(float *)&SrcStr; /*0x95017d*/
      if ( v102 >= (double)*(float *)&SrcStr ) /*0x950192*/
        v29 = *(float *)&SrcStr; /*0x95019a*/
      else
        v29 = v102; /*0x950194*/
      *v25 = v29; /*0x9501a3*/
      v13->m128_f32[3] = -v28 * *(float *)(a5 + 4); /*0x9501ae*/
      v15 = _mm_add_ps(v15, v98[0xFFFFFFFF]); /*0x9501b5*/
      v16 = _mm_add_ps(v16, *v98); /*0x9501bf*/
      if ( (*((_BYTE *)v25 + 0xFFFFFFFF) & 2) != 0 ) /*0x9501c2*/
      {
        v30 = v13[0xFFFFFFFD]; /*0x9501d5*/
        v31 = v13[0xFFFFFFFF].m128_f32[3]; /*0x9501d9*/
        v32 = *v13; /*0x9501dc*/
        v33 = v13[2].m128_f32[3]; /*0x9501df*/
        v34 = v13[1]; /*0x9501e6*/
        v35 = v13 + 0xFFFFFFFD; /*0x9501ea*/
        v36 = _mm_mul_ps(v32, v30); /*0x9501ed*/
        v37 = _mm_add_ps( /*0x950231*/
                _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v34, v35[1]), v7[3]), _mm_mul_ps(_mm_mul_ps(v35[5], v35[2]), v9[3])),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v7[3], v7[3], 0xFF), v36),
                  _mm_mul_ps(_mm_shuffle_ps(v9[3], v9[3], 0xFF), v36)));
        ++v14; /*0x95025c*/
        v13 = v35 + 6; /*0x95025f*/
        v103 = (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0] /*0x950262*/
                     + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]))
             * flt_A65520;
        v38 = fConstant_1 / (v33 * v31 - v103 * v103); /*0x950274*/
        v105 = v38; /*0x95027a*/
        v13[0xFFFFFFFC].m128_f32[3] = v38 * v33; /*0x950280*/
        v13[0xFFFFFFFF].m128_f32[3] = v105 * v31; /*0x95028b*/
        *((_DWORD *)v14 + 0xFFFFFFFE) = 0x50803; /*0x95028e*/
        v14[0xFFFFFFFF] = -(v105 * v103); /*0x9502a1*/
      }
      else
      {
        *(_DWORD *)v14++ = 0x30402; /*0x9501c4*/
        v13 += 3; /*0x9501cd*/
      }
      v98 += 2; /*0x9502a4*/
      v17 = v25 + 5; /*0x9502ad*/
      v39 = v112 == 1; /*0x9502b0*/
      v110 = v17; /*0x9502b1*/
      --v112; /*0x9502b5*/
    }
    while ( !v39 ); /*0x9502b9*/
    v10 = a6; /*0x9502bf*/
  }
  v40 = v6 * ((double)v107 * flt_A9A028 * v99); /*0x9502d0*/
  if ( v40 <= *(float *)&SrcStr ) /*0x9502dd*/
  {
    v10[1] = (int)v14; /*0x950afd*/
    *v10 = (int)v13; /*0x950b02*/
    return; /*0x950b02*/
  }
  v41 = _mm_mul_ps(v16, v16); /*0x9502ee*/
  v113 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0] /*0x95030b*/
       + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
  if ( v99 * v99 * v113 <= flt_AA1C60 ) /*0x95031e*/
  {
    if ( v113 <= (double)kFaceEarNormalMatchRadius ) /*0x950340*/
    {
      v42 = a1[1]; /*0x9503b3*/
      v46 = _mm_mul_ps(v42, v42); /*0x9503ba*/
      v115 = v42; /*0x9503e5*/
      if ( (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0] /*0x9503ef*/
                 + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0])) < (double)flt_A37450 )
      {
        v115 = 0; /*0x9503f1*/
        v40 = *(float *)&SrcStr; /*0x9503f8*/
        v115.m128_i32[1] = 0x3F800000; /*0x9503fe*/
        v42 = v115; /*0x950406*/
      }
    }
    else
    {
      v43 = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]; /*0x950349*/
      v44 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]; /*0x950350*/
      v116 = 1.0 / fsqrt(v44 + v43); /*0x950364*/
      v45 = (__m128)0x3F000000u; /*0x950391*/
      v45.m128_f32[0] = (float)(0.5 * v116) * (float)(3.0 - (float)((float)((float)(v44 + v43) * v116) * v116)); /*0x95039b*/
      v42 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v16); /*0x9503a6*/
      v115 = v42; /*0x9503a9*/
    }
  }
  else
  {
    v42 = a1[1]; /*0x950323*/
    v115 = v42; /*0x950327*/
  }
  v47 = _mm_shuffle_ps(v42, v42, 0xC9); /*0x950414*/
  v48 = _mm_shuffle_ps(v42, v42, 0xD2); /*0x950418*/
  while ( 1 ) /*0x95042c*/
  {
    v49 = (__m128)xmmword_B2F090[*(unsigned __int16 *)(a4 + 2)]; /*0x95042c*/
    v50 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xC9), v48), _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xD2), v47)); /*0x950446*/
    v51 = _mm_mul_ps(v50, v50); /*0x95044c*/
    if ( (float)(_mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0] /*0x95047c*/
               + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0])) > (double)kFaceEarNormalMatchRadius )
      break; /*0x95047c*/
    v117 = _mm_and_ps(v42, (__m128)xmmword_A372D0); /*0x95048b*/
    if ( v117.m128_f32[0] >= (double)v117.m128_f32[1] ) /*0x95049d*/
    {
      v52 = 1; /*0x9504cc*/
      if ( v117.m128_f32[1] < (double)v117.m128_f32[2] ) /*0x9504d1*/
        goto LABEL_36; /*0x9504d1*/
      goto LABEL_35; /*0x9504d1*/
    }
    if ( v117.m128_f32[0] >= (double)v117.m128_f32[2] ) /*0x9504ac*/
    {
LABEL_35:
      v52 = 2; /*0x9504d3*/
LABEL_36:
      *(_WORD *)(a4 + 2) = v52; /*0x9504d8*/
      *(_DWORD *)(a4 + 8) = 0; /*0x9504de*/
      *(_DWORD *)(a4 + 0x10) = 0; /*0x9504e1*/
    }
    else
    {
      *(_WORD *)(a4 + 2) = 0; /*0x9504b0*/
      *(_DWORD *)(a4 + 8) = 0; /*0x9504b4*/
      *(_DWORD *)(a4 + 0x10) = 0; /*0x9504b7*/
    }
  }
  v53 = _mm_mul_ps(v50, v50); /*0x9504f0*/
  v54 = _mm_shuffle_ps(v53, v53, 0x55).m128_f32[0] + v53.m128_f32[0]; /*0x9504fa*/
  v55 = _mm_shuffle_ps(v53, v53, 0xAA).m128_f32[0]; /*0x950501*/
  v118 = 1.0 / fsqrt(v55 + v54); /*0x950515*/
  v56 = (__m128)0x3F000000u; /*0x950542*/
  v56.m128_f32[0] = (float)(0.5 * v118) * (float)(3.0 - (float)((float)((float)(v55 + v54) * v118) * v118)); /*0x95054c*/
  v57 = _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v50); /*0x950557*/
  v58 = _mm_shuffle_ps(v57, v57, 0xD2); /*0x95055d*/
  v59 = _mm_mul_ps(v47, v58); /*0x950564*/
  v60 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v99), (__m128)LODWORD(v99), 0), v15); /*0x95057b*/
  v61 = _mm_shuffle_ps(v57, v57, 0xC9); /*0x95057e*/
  v62 = _mm_sub_ps(v59, _mm_mul_ps(v48, v61)); /*0x950585*/
  *v13 = v62; /*0x950588*/
  v63 = _mm_sub_ps(v60, v7[4]); /*0x95059b*/
  v120 = _mm_sub_ps(v60, v9[4]); /*0x9505ab*/
  v64 = _mm_shuffle_ps(v62, v62, 0xC9); /*0x9505b3*/
  v119 = _mm_shuffle_ps(v62, v62, 0xD2); /*0x9505c1*/
  v65 = _mm_mul_ps(_mm_shuffle_ps(v63, v63, 0xD2), v64); /*0x9505c6*/
  v66 = _mm_shuffle_ps(v63, v63, 0xC9); /*0x9505cc*/
  v67 = v119; /*0x9505d0*/
  v68 = _mm_sub_ps(_mm_mul_ps(v66, v119), v65); /*0x9505dd*/
  if ( !v7->m128_i8[0xC] ) /*0x950593*/
  {
    v67 = v119; /*0x95060c*/
    v68 = _mm_add_ps( /*0x950614*/
            _mm_add_ps(
              _mm_mul_ps(v7[5], _mm_shuffle_ps(v68, v68, 0)),
              _mm_mul_ps(v7[6], _mm_shuffle_ps(v68, v68, 0x55))),
            _mm_mul_ps(v7[7], _mm_shuffle_ps(v68, v68, 0xAA)));
  }
  v13[1] = v68; /*0x95061c*/
  v69 = _mm_sub_ps(_mm_mul_ps(v64, _mm_shuffle_ps(v120, v120, 0xD2)), _mm_mul_ps(v67, _mm_shuffle_ps(v120, v120, 0xC9))); /*0x95063e*/
  if ( !v9->m128_i8[0xC] ) /*0x950625*/
    v69 = _mm_add_ps( /*0x950670*/
            _mm_add_ps(
              _mm_mul_ps(v9[5], _mm_shuffle_ps(v69, v69, 0)),
              _mm_mul_ps(v9[6], _mm_shuffle_ps(v69, v69, 0x55))),
            _mm_mul_ps(v9[7], _mm_shuffle_ps(v69, v69, 0xAA)));
  v70 = v13[1]; /*0x950673*/
  v13[2] = v69; /*0x950677*/
  v71 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v70, v70), v7[3]), _mm_mul_ps(_mm_mul_ps(v13[2], v13[2]), v9[3])); /*0x9506ab*/
  v72 = v9[3].m128_f32[3] /*0x9506cc*/
      + v7[3].m128_f32[3]
      + flt_AA2F14
      + (float)(_mm_shuffle_ps(v71, v71, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v71, v71, 0x55).m128_f32[0] + v71.m128_f32[0]));
  v73 = v13 + 3; /*0x9506d3*/
  v73[0xFFFFFFFF].m128_f32[3] = v72; /*0x9506d6*/
  v73[0xFFFFFFFE].m128_f32[3] = fConstant_1 / v72; /*0x9506e4*/
  v73[0xFFFFFFFD].m128_f32[3] = *(float *)(a4 + 8) * *(float *)(a5 + 4); /*0x9506ef*/
  *v73 = v57; /*0x9506f2*/
  v74 = _mm_sub_ps(v60, v7[4]); /*0x950702*/
  v75 = _mm_sub_ps(v60, v9[4]); /*0x95070b*/
  v76 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v74, v74, 0xC9), v58), _mm_mul_ps(_mm_shuffle_ps(v74, v74, 0xD2), v61)); /*0x950722*/
  if ( !v7->m128_i8[0xC] ) /*0x9506fd*/
    v76 = _mm_add_ps( /*0x950754*/
            _mm_add_ps(
              _mm_mul_ps(v7[5], _mm_shuffle_ps(v76, v76, 0)),
              _mm_mul_ps(v7[6], _mm_shuffle_ps(v76, v76, 0x55))),
            _mm_mul_ps(v7[7], _mm_shuffle_ps(v76, v76, 0xAA)));
  v73[1] = v76; /*0x950757*/
  v77 = _mm_sub_ps(_mm_mul_ps(v61, _mm_shuffle_ps(v75, v75, 0xD2)), _mm_mul_ps(v58, _mm_shuffle_ps(v75, v75, 0xC9))); /*0x950774*/
  if ( !v9->m128_i8[0xC] ) /*0x95075b*/
    v77 = _mm_add_ps( /*0x9507a6*/
            _mm_add_ps(
              _mm_mul_ps(v9[5], _mm_shuffle_ps(v77, v77, 0)),
              _mm_mul_ps(v9[6], _mm_shuffle_ps(v77, v77, 0x55))),
            _mm_mul_ps(v9[7], _mm_shuffle_ps(v77, v77, 0xAA)));
  v78 = v73[1]; /*0x9507a9*/
  v73[2] = v77; /*0x9507ad*/
  v79 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v78, v78), v7[3]), _mm_mul_ps(_mm_mul_ps(v73[2], v73[2]), v9[3])); /*0x9507e1*/
  v80 = v9[3].m128_f32[3] /*0x950802*/
      + v7[3].m128_f32[3]
      + flt_AA2F14
      + (float)(_mm_shuffle_ps(v79, v79, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v79, v79, 0x55).m128_f32[0] + v79.m128_f32[0]));
  v81 = (int)&v73[3]; /*0x950809*/
  *(float *)(v81 - 4) = v80; /*0x95080c*/
  *(float *)(v81 - 0x14) = fConstant_1 / v80; /*0x950817*/
  *(float *)(v81 - 0x24) = *(float *)(a4 + 0x10) * *(float *)(a5 + 4); /*0x950826*/
  v82 = *(float *)(v81 - 0x34); /*0x950831*/
  v83 = *(float *)(v81 - 4); /*0x950838*/
  v84 = _mm_mul_ps(*(__m128 *)(v81 - 0x30), *(__m128 *)(v81 - 0x60)); /*0x950841*/
  v85 = _mm_add_ps( /*0x950887*/
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 - 0x20), *(__m128 *)(v81 - 0x50)), v7[3]),
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 - 0x10), *(__m128 *)(v81 - 0x40)), v9[3])),
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v7[3], v7[3], 0xFF), v84),
            _mm_mul_ps(_mm_shuffle_ps(v9[3], v9[3], 0xFF), v84)));
  v108 = _mm_shuffle_ps(v85, v85, 0xAA).m128_f32[0] /*0x9508a0*/
       + (float)(_mm_shuffle_ps(v85, v85, 0x55).m128_f32[0] + v85.m128_f32[0]);
  v86 = fConstant_1 / (v82 * v83 - v108 * v108); /*0x9508ae*/
  v106 = v86; /*0x9508b4*/
  *(float *)(v81 - 0x34) = v86 * v83; /*0x9508be*/
  *(float *)(v81 - 4) = v106 * v82; /*0x9508cc*/
  v87 = v40 * *(float *)(a5 + 0x10); /*0x9508d1*/
  *((_DWORD *)v14 + 1) = a4 + 4; /*0x9508db*/
  v88 = v14 + 5; /*0x9508e2*/
  *(_DWORD *)v14 = 0x51407; /*0x9508e5*/
  *((_DWORD *)v14 + 4) = 8; /*0x9508eb*/
  v14[2] = -(v108 * v106); /*0x9508f8*/
  v14[3] = v87; /*0x9508fb*/
  if ( a2 <= 1 ) /*0x9508fe*/
  {
    *a6 = v81; /*0x950af1*/
    a6[1] = (int)v88; /*0x950af3*/
  }
  else if ( (*(_BYTE *)a4 & 4) != 0 ) /*0x950907*/
  {
    while ( 1 ) /*0x950913*/
    {
      v109 = a1; /*0x950913*/
      *(_DWORD *)(a4 + 0x1C) = 0; /*0x95091d*/
      v114 = a2; /*0x950927*/
      do /*0x950990*/
      {
        v89 = _mm_sub_ps(*v109, v60); /*0x950937*/
        v90 = _mm_mul_ps(v89, v89); /*0x95093a*/
        v109 += 2; /*0x950980*/
        *(float *)(a4 + 0x1C) = fsqrt( /*0x950988*/
                                  _mm_shuffle_ps(v90, v90, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v90, v90, 0x55).m128_f32[0] + v90.m128_f32[0]))
                              + *(float *)(a4 + 0x1C);
        --v114; /*0x95098c*/
      }
      while ( v114 ); /*0x950990*/
      v91 = v99 * *(float *)(a4 + 0x1C); /*0x950996*/
      *(float *)(a4 + 0x1C) = v91; /*0x950999*/
      if ( v91 < flt_A372CC ) /*0x9509a7*/
        break; /*0x9509a7*/
      *(_BYTE *)a4 &= ~4u; /*0x9509ad*/
      if ( (*(_BYTE *)a4 & 4) == 0 ) /*0x9509b3*/
      {
        v88 = v14 + 5; /*0x9509b9*/
        goto LABEL_53; /*0x9509b9*/
      }
    }
    *a6 = v81; /*0x950ade*/
    a6[1] = (int)(v14 + 5); /*0x950ae4*/
  }
  else
  {
LABEL_53:
    if ( v7->m128_i8[0xC] ) /*0x9509bd*/
      *(__m128 *)v81 = v115; /*0x9509c8*/
    else
      *(__m128 *)v81 = _mm_add_ps( /*0x9509fd*/
                         _mm_add_ps(
                           _mm_mul_ps(v7[5], _mm_shuffle_ps(v115, v115, 0)),
                           _mm_mul_ps(v7[6], _mm_shuffle_ps(v115, v115, 0x55))),
                         _mm_mul_ps(v7[7], _mm_shuffle_ps(v115, v115, 0xAA)));
    v92 = _mm_xor_ps(v115, (__m128)xmmword_A965C0); /*0x950a0b*/
    if ( !v9->m128_i8[0xC] ) /*0x950a00*/
      v92 = _mm_add_ps( /*0x950a3d*/
              _mm_add_ps(
                _mm_mul_ps(v9[5], _mm_shuffle_ps(v92, v92, 0)),
                _mm_mul_ps(v9[6], _mm_shuffle_ps(v92, v92, 0x55))),
              _mm_mul_ps(v9[7], _mm_shuffle_ps(v92, v92, 0xAA)));
    v93 = *(__m128 *)v81; /*0x950a40*/
    *(__m128 *)(v81 + 0x10) = v92; /*0x950a43*/
    v94 = _mm_add_ps( /*0x950a6b*/
            _mm_mul_ps(_mm_mul_ps(v93, v93), v7[3]),
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 + 0x10), *(__m128 *)(v81 + 0x10)), v9[3]));
    v95 = (int)(v14 + 6); /*0x950a96*/
    v96 = v81 + 0x20; /*0x950a99*/
    *(float *)(v96 - 0x14) = fConstant_1 /*0x950aa2*/
                           / ((float)(_mm_shuffle_ps(v94, v94, 0xAA).m128_f32[0]
                                    + (float)(_mm_shuffle_ps(v94, v94, 0x55).m128_f32[0] + v94.m128_f32[0]))
                            + flt_AA2F14);
    v97 = fConstant_1 / *(float *)(a4 + 0x1C); /*0x950aab*/
    *v88 = *(float *)(a4 + 0x1C); /*0x950ab1*/
    *(_DWORD *)(v95 - 0x18) = 0x61808; /*0x950ab3*/
    *(float *)(v96 - 4) = *(float *)(a4 + 0x18) * *(float *)(a5 + 4); /*0x950ac6*/
    *(float *)(v96 - 0x14) = v97 * *(float *)(v96 - 0x14); /*0x950acc*/
    *a6 = v96; /*0x950acf*/
    a6[1] = v95; /*0x950ad1*/
  }
}
