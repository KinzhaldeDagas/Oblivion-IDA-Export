char __cdecl sub_939BB0(unsigned __int8 *a1, __m128 *a2, signed int a3, __m128 **a4, int a5)
{
  unsigned __int8 *v5; // ebx
  signed int v6; // edx
  unsigned __int8 *v7; // edi
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm6
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm4
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm5
  __m128 v20; // xmm4
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm5
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm6
  __m128 v31; // xmm7
  __m128 v32; // xmm4
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm3
  __m128 v41; // xmm1
  __m128 v42; // xmm6
  __m128 v43; // xmm5
  __m128 v44; // xmm4
  __m128 v45; // xmm3
  __m128 v46; // xmm1
  __m128 v47; // xmm6
  char v48; // al
  __m128 v49; // xmm6
  __m128 v50; // xmm3
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  __m128 v53; // xmm2
  __m128 v54; // xmm4
  __m128 v55; // xmm2
  __m128 v56; // xmm3
  __m128 v57; // xmm5
  __m128 v58; // xmm4
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm1
  int v63; // ebx
  __m128 v64; // xmm3
  __m128 v65; // xmm4
  __m128 v66; // xmm1
  __m128 v67; // xmm0
  __m128 v68; // xmm2
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __m128 v71; // xmm0
  __m128 v72; // xmm1
  __m128 v73; // xmm6
  __m128 v74; // xmm6
  __m128 v75; // xmm4
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm2
  __m128 v79; // xmm1
  __m128 v80; // xmm5
  __m128 v81; // xmm3
  __m128 v82; // xmm5
  __m128 v83; // xmm0
  __m128 v84; // xmm4
  __m128 v85; // xmm0
  int v86; // eax
  __m128 v87; // xmm1
  __m128 v88; // xmm1
  float v89; // xmm3_4
  __m128 v90; // xmm0
  __m128 v91; // xmm0
  __m128 v92; // xmm7
  __m128 v93; // xmm1
  __m128 v94; // xmm5
  __m128 v95; // xmm0
  __m128 v96; // xmm3
  __m128 v97; // xmm6
  __m128 v98; // xmm2
  __m128 v99; // xmm0
  __m128 v100; // xmm0
  __m128 v101; // xmm4
  __m128 v102; // xmm3
  __m128 v103; // xmm6
  __m128 v104; // xmm5
  __m128 v105; // xmm5
  __m128 v106; // xmm2
  __m128 v107; // xmm4
  __m128 v108; // xmm2
  __m128 v109; // xmm2
  __m128 v110; // xmm6
  __m128 v111; // xmm2
  __m128 v112; // xmm0
  double v113; // st7
  double v114; // st7
  int v115; // eax
  unsigned __int8 v116; // dl
  signed int v117; // eax
  unsigned __int8 *v118; // ecx
  int v119; // eax
  unsigned __int8 *v120; // edx
  int v121; // eax
  int v123; // [esp+Ch] [ebp-F4h]
  __m128 v124; // [esp+10h] [ebp-F0h]
  __m128 v125; // [esp+10h] [ebp-F0h]
  __m128 v126; // [esp+10h] [ebp-F0h]
  __m128 v127; // [esp+10h] [ebp-F0h]
  __m128 v128; // [esp+10h] [ebp-F0h]
  __m128 v129; // [esp+20h] [ebp-E0h]
  __m128 v130; // [esp+20h] [ebp-E0h]
  __m128 v131; // [esp+20h] [ebp-E0h]
  __m128 v132; // [esp+30h] [ebp-D0h]
  __m128 v133; // [esp+30h] [ebp-D0h]
  __m128 v134; // [esp+30h] [ebp-D0h]
  __m128 v135; // [esp+40h] [ebp-C0h]
  __m128 v136; // [esp+50h] [ebp-B0h]
  __m128 v137; // [esp+60h] [ebp-A0h]
  float v138; // [esp+80h] [ebp-80h]
  float v139; // [esp+80h] [ebp-80h]
  signed int v140; // [esp+94h] [ebp-6Ch]
  float v141; // [esp+A0h] [ebp-60h]
  __m128 *v142; // [esp+A8h] [ebp-58h]
  __m128 v143; // [esp+C0h] [ebp-40h]
  __m128 v144; // [esp+C0h] [ebp-40h]
  __m128 v145; // [esp+D0h] [ebp-30h]
  __m128 v146; // [esp+D0h] [ebp-30h]

  v5 = a1;
  v6 = a1[2];
  v140 = v6;
  v123 = a3;
  if ( a3 < v6 )
  {
    v7 = &a1[8 * a3 + 4];
    do
    {
      v142 = *a4;
      switch ( v7[1] + 4 * *v7 )
      {
        case 5:
          v8 = _mm_sub_ps(*(__m128 *)((char *)a2 + v7[4]), *(__m128 *)((char *)a2 + v7[5]));
          v9 = _mm_mul_ps(v8, v8);
          if ( (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])) > (double)a2[0x11].m128_f32[3] )
            goto LABEL_5;
          v136 = v8;
          v137 = a2[0x10];
          v135 = *(__m128 *)((char *)a2 + v7[4]);
          v10 = 0;
          goto LABEL_23;
        case 6:
          v11 = *(__m128 *)((char *)a2 + v7[4]);
          v12 = *(__m128 *)((char *)a2 + v7[5]);
          v132 = *(__m128 *)((char *)a2 + v7[6]);
          v137 = a2[0x10];
          v13 = _mm_sub_ps(v132, v11);
          v14 = _mm_sub_ps(v132, v12);
          v135 = v11;
          v15 = _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
          v16 = _mm_sub_ps(v11, v12);
          v17 = _mm_mul_ps(v15, v15);
          v18 = _mm_mul_ps(v13, v14);
          v19 = _mm_shuffle_ps(v17, v17, 0x44);
          v20 = _mm_mul_ps(v16, v14);
          v21 = _mm_shuffle_ps(v18, v20, 0x44);
          v22 = _mm_mul_ps(v14, v14);
          v23 = _mm_add_ps(
                  _mm_add_ps(_mm_shuffle_ps(v21, v19, 0x88), _mm_shuffle_ps(v21, v19, 0xDD)),
                  _mm_shuffle_ps(_mm_shuffle_ps(v18, v20, 0xEE), _mm_shuffle_ps(v17, v17, 0xEE), 0x88));
          if ( (float)(_mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]))
             * a2[0x11].m128_f32[3] < v23.m128_f32[3]
            || (_mm_movemask_ps(v23) & 3) != 0 )
          {
            goto LABEL_5;
          }
          v23.m128_f32[0] = v23.m128_f32[0] / (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 0x55).m128_f32[0]);
          v24 = _mm_shuffle_ps(v23, v23, 0);
          v136 = _mm_sub_ps(
                   v135,
                   _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), v12), _mm_mul_ps(v24, v132)));
          v10 = 0;
          goto LABEL_23;
        case 7:
          v25 = *(__m128 *)((char *)a2 + v7[7]);
          v26 = *(__m128 *)((char *)a2 + v7[5]);
          v27 = *(__m128 *)((char *)a2 + v7[6]);
          v28 = _mm_sub_ps(v26, v25);
          v29 = _mm_sub_ps(v25, v27);
          v30 = _mm_shuffle_ps(v29, v29, 0xC9);
          v31 = _mm_shuffle_ps(v28, v28, 0xD2);
          v135 = *(__m128 *)((char *)a2 + v7[4]);
          v32 = _mm_sub_ps(v135, v26);
          v33 = _mm_sub_ps(v27, v26);
          v129 = _mm_shuffle_ps(v29, v29, 0xD2);
          v34 = _mm_shuffle_ps(v28, v28, 0xC9);
          v35 = _mm_sub_ps(_mm_mul_ps(v30, v31), _mm_mul_ps(v129, v34));
          v36 = _mm_mul_ps(v35, v35);
          v26.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0];
          v124 = v31;
          v31.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0];
          v138 = 1.0 / fsqrt(v31.m128_f32[0] + v26.m128_f32[0]);
          v37 = (__m128)0x3F000000u;
          v37.m128_f32[0] = (float)(0.5 * v138)
                          * (float)(3.0 - (float)((float)((float)(v31.m128_f32[0] + v26.m128_f32[0]) * v138) * v138));
          v38 = _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), v35);
          v39 = _mm_sub_ps(v135, *(__m128 *)((char *)a2 + v7[6]));
          v40 = _mm_sub_ps(v135, *(__m128 *)((char *)a2 + v7[7]));
          v136 = v32;
          v41 = _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xC9), v129),
                    _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xD2), v30)),
                  v38);
          v42 = _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0xC9), _mm_shuffle_ps(v33, v33, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0xD2), _mm_shuffle_ps(v33, v33, 0xC9))),
                  v38);
          v43 = _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0xC9), v124),
                    _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0xD2), v34)),
                  v38);
          v44 = _mm_mul_ps(a2[0x10], v38);
          v45 = _mm_shuffle_ps(v41, v43, 0x44);
          v46 = _mm_shuffle_ps(_mm_shuffle_ps(v41, v43, 0xEE), _mm_shuffle_ps(v42, v44, 0xEE), 0x88);
          v47 = _mm_shuffle_ps(v42, v44, 0x44);
          v48 = _mm_movemask_ps(_mm_add_ps(_mm_add_ps(_mm_shuffle_ps(v45, v47, 0x88), _mm_shuffle_ps(v45, v47, 0xDD)), v46));
          goto LABEL_19;
        case 9:
          v49 = *(__m128 *)((char *)a2 + v7[4]);
          v50 = *(__m128 *)((char *)a2 + v7[6]);
          v125 = *(__m128 *)((char *)a2 + v7[5]);
          v137 = a2[0x10];
          v51 = _mm_sub_ps(v125, v50);
          v52 = _mm_sub_ps(v125, v49);
          v53 = _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0xC9), _mm_shuffle_ps(v51, v51, 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0xD2), _mm_shuffle_ps(v51, v51, 0xC9)));
          v54 = _mm_sub_ps(v50, v49);
          v55 = _mm_mul_ps(v53, v53);
          v56 = _mm_mul_ps(v51, v52);
          v57 = _mm_shuffle_ps(v55, v55, 0x44);
          v58 = _mm_mul_ps(v54, v52);
          v59 = _mm_shuffle_ps(v56, v58, 0x44);
          v60 = _mm_mul_ps(v52, v52);
          v61 = _mm_add_ps(
                  _mm_add_ps(_mm_shuffle_ps(v59, v57, 0x88), _mm_shuffle_ps(v59, v57, 0xDD)),
                  _mm_shuffle_ps(_mm_shuffle_ps(v56, v58, 0xEE), _mm_shuffle_ps(v55, v55, 0xEE), 0x88));
          if ( (float)(_mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]))
             * a2[0x11].m128_f32[3] < v61.m128_f32[3]
            || (_mm_movemask_ps(v61) & 3) != 0 )
          {
LABEL_5:
            v10 = 1;
          }
          else
          {
            v61.m128_f32[0] = v61.m128_f32[0] / (float)(v61.m128_f32[0] + _mm_shuffle_ps(v61, v61, 0x55).m128_f32[0]);
            v62 = _mm_shuffle_ps(v61, v61, 0);
            v135 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v62), v125), _mm_mul_ps(v62, v49));
            v136 = _mm_sub_ps(v135, *(__m128 *)((char *)a2 + v7[6]));
            v10 = 0;
          }
          goto LABEL_23;
        case 0xA:
          v63 = v7[7];
          v64 = *(__m128 *)((char *)a2 + v7[5]);
          v65 = *(__m128 *)((char *)a2 + v7[6]);
          v66 = _mm_sub_ps(*(__m128 *)((char *)a2 + v63), v65);
          v143 = *(__m128 *)((char *)a2 + v63);
          v133 = *(__m128 *)((char *)a2 + v7[4]);
          v67 = _mm_sub_ps(v64, v133);
          v68 = _mm_sub_ps(v133, v65);
          v69 = _mm_shuffle_ps(v66, v66, 0xC9);
          v70 = _mm_shuffle_ps(v67, v67, 0xD2);
          v71 = _mm_shuffle_ps(v67, v67, 0xC9);
          v72 = _mm_shuffle_ps(v66, v66, 0xD2);
          v73 = _mm_sub_ps(_mm_mul_ps(v71, v72), _mm_mul_ps(v70, v69));
          v126 = _mm_shuffle_ps(v73, v73, 0xC9);
          v74 = _mm_shuffle_ps(v73, v73, 0xD2);
          v75 = _mm_sub_ps(_mm_mul_ps(v69, v74), _mm_mul_ps(v72, v126));
          v76 = _mm_sub_ps(_mm_mul_ps(v71, v74), _mm_mul_ps(v70, v126));
          v137 = a2[0x10];
          v77 = v68;
          v78 = _mm_mul_ps(v68, v76);
          v79 = _mm_mul_ps(v77, v75);
          v80 = _mm_sub_ps(v64, v143);
          v81 = _mm_mul_ps(v80, v76);
          v82 = _mm_mul_ps(v80, v75);
          v83 = _mm_shuffle_ps(v79, v78, 0x44);
          v84 = _mm_shuffle_ps(v82, v81, 0x44);
          v85 = _mm_add_ps(
                  _mm_add_ps(_mm_shuffle_ps(v83, v84, 0x88), _mm_shuffle_ps(v83, v84, 0xDD)),
                  _mm_shuffle_ps(_mm_shuffle_ps(v79, v78, 0xEE), _mm_shuffle_ps(v82, v81, 0xEE), 0x88));
          v86 = _mm_movemask_ps(v85);
          if ( v86 == 3 || v86 == 0xC )
          {
            v87 = v85;
            v87.m128_f32[0] = v85.m128_f32[0] / (float)(v85.m128_f32[0] - _mm_shuffle_ps(v85, v85, 0xAA).m128_f32[0]);
            v88 = _mm_shuffle_ps(v87, v87, 0);
            v89 = _mm_shuffle_ps(v85, v85, 0xFF).m128_f32[0];
            v90 = _mm_shuffle_ps(v85, v85, 0x55);
            v90.m128_f32[0] = v90.m128_f32[0] / (float)(v90.m128_f32[0] - v89);
            v91 = _mm_shuffle_ps(v90, v90, 0);
            v135 = _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v88), v133),
                     _mm_mul_ps(v88, *(__m128 *)((char *)a2 + v7[5])));
            v136 = _mm_sub_ps(
                     v135,
                     _mm_add_ps(
                       _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v91), *(__m128 *)((char *)a2 + v7[6])),
                       _mm_mul_ps(v91, v143)));
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
          goto LABEL_22;
        case 0xD:
          v92 = *(__m128 *)((char *)a2 + v7[4]);
          v93 = *(__m128 *)((char *)a2 + v7[7]);
          v94 = *(__m128 *)((char *)a2 + v7[5]);
          v127 = *(__m128 *)((char *)a2 + v7[6]);
          v136 = _mm_sub_ps(v92, v93);
          v95 = _mm_sub_ps(v127, v94);
          v96 = _mm_sub_ps(v92, v127);
          v144 = _mm_shuffle_ps(v95, v95, 0xD2);
          v97 = _mm_shuffle_ps(v96, v96, 0xC9);
          v134 = _mm_shuffle_ps(v96, v96, 0xD2);
          v130 = _mm_shuffle_ps(v95, v95, 0xC9);
          v98 = _mm_sub_ps(_mm_mul_ps(v130, v134), _mm_mul_ps(v144, v97));
          v99 = _mm_mul_ps(v98, v98);
          v96.m128_f32[0] = _mm_shuffle_ps(v99, v99, 0x55).m128_f32[0] + v99.m128_f32[0];
          v145 = v97;
          v97.m128_f32[0] = _mm_shuffle_ps(v99, v99, 0xAA).m128_f32[0];
          v139 = 1.0 / fsqrt(v97.m128_f32[0] + v96.m128_f32[0]);
          v100 = (__m128)0x3F000000u;
          v100.m128_f32[0] = (float)(0.5 * v139)
                           * (float)(3.0 - (float)((float)((float)(v97.m128_f32[0] + v96.m128_f32[0]) * v139) * v139));
          v38 = _mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v98);
          v101 = _mm_sub_ps(v94, v92);
          v102 = _mm_sub_ps(v93, v94);
          v103 = _mm_sub_ps(v93, v92);
          v104 = _mm_sub_ps(v93, v127);
          v128 = _mm_mul_ps(
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xC9), v134),
                     _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xD2), v145)),
                   v38);
          v105 = _mm_mul_ps(
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0xC9), v144),
                     _mm_mul_ps(_mm_shuffle_ps(v102, v102, 0xD2), v130)),
                   v38);
          v146 = _mm_mul_ps(a2[0x10], v38);
          v106 = _mm_mul_ps(
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v103, v103, 0xC9), _mm_shuffle_ps(v101, v101, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v103, v103, 0xD2), _mm_shuffle_ps(v101, v101, 0xC9))),
                   v38);
          v107 = _mm_shuffle_ps(v106, v146, 0xEE);
          v131 = _mm_shuffle_ps(v106, v146, 0x44);
          v108 = _mm_mul_ps(v136, v38);
          v103.m128_f32[0] = _mm_shuffle_ps(v108, v108, 0x55).m128_f32[0] + v108.m128_f32[0];
          v109 = _mm_shuffle_ps(v108, v108, 0xAA);
          v109.m128_f32[0] = v109.m128_f32[0] + v103.m128_f32[0];
          v110 = _mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v38);
          v111 = _mm_shuffle_ps(v105, v128, 0x44);
          v135 = _mm_add_ps(v93, v110);
          v48 = _mm_movemask_ps(
                  _mm_add_ps(
                    _mm_add_ps(_mm_shuffle_ps(v111, v131, 0x88), _mm_shuffle_ps(v111, v131, 0xDD)),
                    _mm_shuffle_ps(_mm_shuffle_ps(v105, v128, 0xEE), v107, 0x88)));
LABEL_19:
          v137 = v38;
          if ( (v48 & 8) != 0 )
            v137 = _mm_xor_ps(v38, (__m128)xmmword_A965C0);
          v10 = ~v48 & 7;
LABEL_22:
          v5 = a1;
LABEL_23:
          if ( v10 )
            goto LABEL_26;
          v112 = _mm_mul_ps(v137, v136);
          v113 = (float)(_mm_shuffle_ps(v112, v112, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v112, v112, 0x55).m128_f32[0] + v112.m128_f32[0]))
               - a2[0x11].m128_f32[1];
          v141 = -v113;
          v114 = v113 - a2[0x11].m128_f32[0];
          if ( v114 >= a2[0x11].m128_f32[2] )
            goto LABEL_26;
          v142[1] = v137;
          *v142 = _mm_add_ps(v135, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v141), (__m128)LODWORD(v141), 0), v137));
          v142[1].m128_f32[3] = v114;
          v142[2].m128_i16[0] = *((_WORD *)v7 + 1);
          *a4 += 3;
          break;
        default:
LABEL_26:
          v115 = *((unsigned __int16 *)v7 + 1);
          if ( (_WORD)v115 != 0xFFFF )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a5 + 0x10))(a5, v115);
          v116 = v5[2] - 1;
          v5[2] = v116;
          *(_DWORD *)v7 = *(_DWORD *)&v5[8 * v116 + 4];
          *((_DWORD *)v7 + 1) = *(_DWORD *)&v5[8 * v116 + 8];
          --v123;
          v7 += 0xFFFFFFF8;
          break;
      }
      v7 += 8;
      ++v123;
    }
    while ( v123 < v5[2] );
    v6 = v140;
  }
  v117 = v5[2];
  if ( v6 > v117 )
  {
    v118 = &v5[8 * v117 + 4];
    v119 = (v5[1] + *v5 - 1) >> 1;
    v120 = &v5[8 * v6 + 4];
    if ( v119 >= 0 )
    {
      v121 = v119 + 1;
      do
      {
        *(_DWORD *)v118 = *(_DWORD *)v120;
        v118 += 4;
        v120 += 4;
        --v121;
      }
      while ( v121 );
    }
    LOBYTE(v117) = sub_9399E0(v5);
  }
  return v117;
}
