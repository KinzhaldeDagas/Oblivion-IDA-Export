double __cdecl sub_9726E0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float *v7; // edi
  float *v8; // ebx
  double v9; // st5
  double v10; // st6
  double v11; // st3
  double v12; // st4
  double v13; // st7
  double v14; // rtt
  double v15; // st3
  double v16; // st4
  double v17; // st7
  char v18; // fps^1
  bool v19; // c0
  char v20; // c2
  bool v21; // c3
  char v22; // ah
  bool v23; // c0
  bool v24; // c3
  float *v25; // ebx
  float v26; // eax
  float v27; // ecx
  float v28; // edx
  float v29; // eax
  float v30; // ecx
  double v31; // st7
  float *v33; // edi
  double v34; // st7
  float v35; // edx
  float *v36; // edi
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  double v41; // st7
  double v42; // st7
  double v43; // st7
  float v44; // eax
  float v45; // edx
  float v46; // eax
  float v47; // edx
  float v48; // eax
  float *v49; // eax
  float *v50; // eax
  double v51; // st7
  float *v52; // eax
  float *v53; // eax
  char v54; // fps^1
  double v55; // st5
  bool v56; // c0
  bool v57; // c3
  bool v58; // pf
  bool v59; // c0
  bool v60; // c3
  float v61; // eax
  float v62; // ecx
  float v63; // edx
  float v64; // eax
  float v65; // ecx
  float v66; // edx
  double v67; // st7
  float *v68; // edx
  float v69; // edx
  float *v70; // eax
  float *v71; // eax
  double v72; // st7
  float *v73; // eax
  float *v74; // eax
  bool v75; // c0
  char v76; // c2
  bool v77; // c3
  char v78; // ah
  bool v79; // c0
  bool v80; // c3
  float v81; // eax
  float v82; // ecx
  float v83; // edx
  float v84; // eax
  float v85; // ecx
  float *v86; // eax
  float *v87; // eax
  float v88; // edx
  float *v89; // eax
  float *v90; // eax
  float *v91; // eax
  float v92; // eax
  float v93; // edx
  float v94; // eax
  float v95; // edx
  float v96; // eax
  float *v97; // eax
  double v98; // st7
  float *v99; // eax
  float *v100; // eax
  float *v101; // eax
  float *v102; // eax
  float v103; // eax
  float v104; // ecx
  float v105; // edx
  float v106; // eax
  float v107; // ecx
  float v108; // ecx
  float v109; // edx
  double v110; // st7
  double v111; // st7
  double v112; // st7
  double v113; // st7
  double v114; // st7
  float v115; // [esp+10h] [ebp-5Ch] BYREF
  float v116; // [esp+14h] [ebp-58h] BYREF
  float v117; // [esp+18h] [ebp-54h] BYREF
  float v118; // [esp+1Ch] [ebp-50h]
  float v119; // [esp+20h] [ebp-4Ch]
  float v120; // [esp+24h] [ebp-48h]
  float v121; // [esp+28h] [ebp-44h]
  double v122; // [esp+2Ch] [ebp-40h]
  double v123; // [esp+34h] [ebp-38h]
  double v124; // [esp+3Ch] [ebp-30h] BYREF
  float v125; // [esp+44h] [ebp-28h]
  float v126; // [esp+48h] [ebp-24h] BYREF
  float v127; // [esp+4Ch] [ebp-20h]
  float v128; // [esp+50h] [ebp-1Ch]
  float v129; // [esp+54h] [ebp-18h]
  float v130; // [esp+58h] [ebp-14h]
  float v131; // [esp+5Ch] [ebp-10h]
  float v132; // [esp+60h] [ebp-Ch] BYREF
  float v133; // [esp+64h] [ebp-8h]
  float v134; // [esp+68h] [ebp-4h]
  float v135; // [esp+70h] [ebp+4h]
  float v136; // [esp+70h] [ebp+4h]
  float v137; // [esp+70h] [ebp+4h]
  float v138; // [esp+70h] [ebp+4h]
  float v139; // [esp+70h] [ebp+4h]
  float v140; // [esp+70h] [ebp+4h]
  float v141; // [esp+70h] [ebp+4h]
  float v142; // [esp+70h] [ebp+4h]
  float v143; // [esp+70h] [ebp+4h]
  float v144; // [esp+70h] [ebp+4h]
  float v145; // [esp+70h] [ebp+4h]
  float v146; // [esp+70h] [ebp+4h]
  float v147; // [esp+70h] [ebp+4h]
  float v148; // [esp+70h] [ebp+4h]
  float v149; // [esp+70h] [ebp+4h]
  float v150; // [esp+70h] [ebp+4h]
  float v151; // [esp+70h] [ebp+4h]
  float v152; // [esp+70h] [ebp+4h]
  float v153; // [esp+70h] [ebp+4h]
  float v154; // [esp+70h] [ebp+4h]
  float v155; // [esp+70h] [ebp+4h]
  float v156; // [esp+70h] [ebp+4h]
  float v157; // [esp+70h] [ebp+4h]
  float v158; // [esp+74h] [ebp+8h]
  float v159; // [esp+74h] [ebp+8h]
  float v160; // [esp+74h] [ebp+8h]
  float v161; // [esp+74h] [ebp+8h]
  float v162; // [esp+74h] [ebp+8h]
  float v163; // [esp+74h] [ebp+8h]
  float v164; // [esp+74h] [ebp+8h]
  float v165; // [esp+74h] [ebp+8h]
  float v166; // [esp+74h] [ebp+8h]
  float v167; // [esp+74h] [ebp+8h]
  float v168; // [esp+74h] [ebp+8h]
  float v169; // [esp+74h] [ebp+8h]
  float v170; // [esp+74h] [ebp+8h]
  float v171; // [esp+74h] [ebp+8h]
  float v172; // [esp+74h] [ebp+8h]
  float v173; // [esp+74h] [ebp+8h]
  float v174; // [esp+74h] [ebp+8h]
  float v175; // [esp+74h] [ebp+8h]
  float v176; // [esp+74h] [ebp+8h]
  float v177; // [esp+74h] [ebp+8h]
  float v178; // [esp+74h] [ebp+8h]
  float v179; // [esp+74h] [ebp+8h]

  v7 = a2 + 3;
  v8 = a2 + 6;
  v126 = *a2 - *a1;
  v127 = a2[1] - a1[1];
  v128 = a2[2] - a1[2];
  v121 = a1[4] * a1[4] + a1[3] * a1[3] + a1[5] * a1[5];
  v158 = a2[4] * a1[4] + a2[3] * a1[3] + a2[5] * a1[5];
  v120 = -v158;
  v159 = v8[1] * a1[4] + *v8 * a1[3] + v8[2] * a1[5];
  v115 = -v159;
  v116 = v7[1] * v7[1] + *v7 * *v7 + v7[2] * v7[2];
  v118 = v8[1] * v7[1] + *v7 * *v8 + v8[2] * v7[2];
  v117 = v8[1] * v8[1] + *v8 * *v8 + v8[2] * v8[2];
  v132 = v8[2] * v7[1] - v8[1] * v7[2];
  v133 = *v8 * v7[2] - v8[2] * *v7;
  v134 = *v7 * v8[1] - *v8 * v7[1];
  v123 = a1[4];
  v122 = a1[3];
  v124 = a1[5];
  v160 = v132 * a1[3] + v133 * a1[4] + v134 * a1[5];
  v161 = fabs(v160);
  v119 = v161;
  v162 = v134 * v134 + v133 * v133 + v132 * v132;
  v163 = sqrt(v162);
  v135 = v163;
  v164 = v122 * v122 + v123 * v123 + v124 * v124;
  v165 = sqrt(v164);
  v166 = v165 * v135 * dbl_AA3AF8;
  if ( v119 <= (double)v166 )
  {
    v103 = a2[1];
    v104 = a2[2];
    v126 = *a2;
    v105 = *v7;
    v127 = v103;
    v106 = v7[1];
    v128 = v104;
    v107 = v7[2];
    v129 = v105;
    v130 = v106;
    v131 = v107;
    v171 = sub_96FCD0(a1, &v126, a3, a4);
    *a5 = 0.0;
    v108 = v8[1];
    v109 = v8[2];
    v129 = *v8;
    v130 = v108;
    v131 = v109;
    v154 = sub_96FCD0(a1, &v126, &v117, &v116);
    v115 = 0.0;
    if ( v171 > (double)v154 )
    {
      v171 = v154;
      *a3 = v117;
      *a4 = 0.0;
      *a5 = v116;
    }
    v132 = v126 + *v7;
    v110 = v7[1];
    v126 = v132;
    v133 = v110 + v127;
    v111 = v7[2];
    v127 = v133;
    v134 = v111 + v128;
    v128 = v134;
    v132 = v129 - *v7;
    v129 = v132;
    v133 = v130 - v7[1];
    v130 = v133;
    v134 = v131 - v7[2];
    v131 = v134;
    v155 = sub_96FCD0(a1, &v126, &v117, &v116);
    v112 = v116;
    v115 = 1.0 - v116;
    if ( v171 > (double)v155 )
    {
      v171 = v155;
      *a3 = v117;
      *a4 = v115;
      *a5 = v112;
    }
    v156 = sub_975DF0(a1, a2, &v115, &v116);
    v117 = 0.0;
    if ( v171 > (double)v156 )
    {
      v171 = v156;
      *a3 = 0.0;
      *a4 = v115;
      *a5 = v116;
    }
    v132 = *a1 + a1[3];
    v113 = a1[4];
    *(float *)&v124 = v132;
    v133 = v113 + a1[1];
    v114 = a1[5];
    *((float *)&v124 + 1) = v133;
    v134 = v114 + a1[2];
    v125 = v134;
    v157 = sub_975DF0((float *)&v124, a2, &v115, &v116);
    if ( v171 <= (double)v157 )
      return v171;
    *a3 = 1.0;
    *a4 = v115;
    *a5 = v116;
    return v157;
  }
  else
  {
    v9 = v117;
    v10 = v116;
    v116 = v117 * v116 - v118 * v118;
    v11 = v115;
    v12 = v120;
    v136 = v118 * v115 - v117 * v120;
    v117 = v118 * v120 - v10 * v115;
    v13 = v121;
    v119 = v115 * v120 - v118 * v121;
    v167 = v136 * v120 + v116 * v121 + v117 * v115;
    v168 = 1.0 / v167;
    v121 = a1[4] * v127 + a1[3] * v126 + a1[5] * v128;
    v118 = --v121 * v168;
    v121 = v7[1] * v127 + *v7 * v126 + v7[2] * v128;
    v115 = -v121 * v168;
    v121 = v8[1] * v127 + *v8 * v126 + v8[2] * v128;
    v169 = -v121 * v168;
    *a3 = v115 * v136 + v118 * v116 + v169 * v117;
    v14 = v12;
    v121 = v9 * v13 - v11 * v11;
    v15 = v115;
    v16 = v118;
    *a4 = v121 * v115 + v118 * v136 + v169 * v119;
    v137 = v13 * v10 - v14 * v14;
    v170 = v16 * v117 + v15 * v119 + v137 * v169;
    v17 = v170;
    *a5 = v170;
    if ( *a3 < 0.0 )
    {
      v19 = *a4 > 0.0;
      v20 = 0;
      v21 = 0.0 == *a4;
      v22 = v18;
      if ( *a4 + v17 > dbl_A2F928 )
      {
        if ( v19 || v21 )
        {
          if ( v17 >= 0.0 )
          {
            v52 = sub_47D9B0(a2, &v132, v7);
            v126 = *v52;
            v127 = v52[1];
            v128 = v52[2];
            v53 = sub_4121A0(v8, &v132, v7);
            v129 = *v53;
            v130 = v53[1];
            v131 = v53[2];
            v171 = sub_96FCD0(a1, &v126, a3, a5);
            *a4 = 1.0 - *a5;
            v144 = sub_975DF0(a1, a2, &v115, &v116);
            if ( v171 > (double)v144 )
            {
              *a3 = 0.0;
              *a4 = v115;
              *a5 = v116;
              return v144;
            }
            return v171;
          }
          v44 = a2[1];
          v126 = *a2;
          v45 = a2[2];
          v127 = v44;
          v46 = *v7;
          v128 = v45;
          v47 = v7[1];
          v129 = v46;
          v48 = v7[2];
          v130 = v47;
          v131 = v48;
          v171 = sub_96FCD0(a1, &v126, a3, a4);
          *a5 = 0.0;
          v49 = sub_47D9B0(a2, &v132, v7);
          v126 = *v49;
          v127 = v49[1];
          v128 = v49[2];
          v50 = sub_4121A0(v8, &v132, v7);
          v129 = *v50;
          v130 = v50[1];
          v131 = v50[2];
          v43 = sub_96FCD0(a1, &v126, &v117, &v116);
        }
        else
        {
          v126 = *a2;
          v127 = a2[1];
          v128 = a2[2];
          v129 = *v8;
          v130 = v8[1];
          v131 = v8[2];
          v171 = sub_96FCD0(a1, &v126, a3, a5);
          *a4 = 0.0;
          v132 = *a2 + *v7;
          v38 = v7[1];
          v126 = v132;
          v133 = v38 + a2[1];
          v39 = v7[2];
          v127 = v133;
          v134 = v39 + a2[2];
          v40 = *v8;
          v128 = v134;
          v132 = v40 - *v7;
          v41 = v8[1];
          v129 = v132;
          v133 = v41 - v7[1];
          v42 = v8[2];
          v130 = v133;
          v134 = v42 - v7[2];
          v131 = v134;
          v43 = sub_96FCD0(a1, &v126, &v117, &v116);
        }
        v142 = v43;
        v51 = v116;
        v115 = 1.0 - v116;
        if ( v171 > (double)v142 )
        {
          v171 = v142;
          *a3 = v117;
          *a4 = v115;
          *a5 = v51;
        }
        v143 = sub_975DF0(a1, a2, &v115, &v116);
        if ( v171 > (double)v143 )
        {
          *a3 = 0.0;
          *a4 = v115;
          *a5 = v116;
          return v143;
        }
        return v171;
      }
      v23 = v17 > 0.0;
      v24 = 0.0 == v17;
      if ( (v22 & 0x41) == 0 )
      {
        v126 = *a2;
        v127 = a2[1];
        v128 = a2[2];
        v129 = *v8;
        v130 = v8[1];
        v131 = v8[2];
        if ( !v23 && !v24 )
        {
          v171 = sub_96FCD0(a1, &v126, a3, a5);
          v25 = a4;
          *a4 = 0.0;
          v26 = a2[1];
          v27 = a2[2];
          v126 = *a2;
          v28 = *v7;
          v127 = v26;
          v29 = v7[1];
          v128 = v27;
          v30 = v7[2];
          v129 = v28;
          v130 = v29;
          v131 = v30;
          v138 = sub_96FCD0(a1, &v126, &v117, &v115);
          v116 = 0.0;
          if ( v171 > (double)v138 )
          {
            v171 = v138;
            *a3 = v117;
            *a4 = v115;
            *a5 = 0.0;
          }
          v139 = sub_975DF0(a1, a2, &v115, &v116);
          if ( v171 > (double)v139 )
          {
            v172 = v139;
            v31 = 0.0;
LABEL_10:
            *a3 = v31;
            *v25 = v115;
            *a5 = v116;
            return v172;
          }
          return v171;
        }
        v171 = sub_96FCD0(a1, &v126, a3, a5);
        v33 = a4;
        *a4 = 0.0;
        v140 = sub_975DF0(a1, a2, &v115, &v116);
        if ( v171 > (double)v140 )
        {
          v173 = v140;
          v34 = 0.0;
LABEL_13:
          *a3 = v34;
          *v33 = v115;
          *a5 = v116;
          return v173;
        }
        return v171;
      }
      if ( v23 || v24 )
      {
        v175 = sub_975DF0(a1, a2, a4, a5);
        *a3 = 0.0;
        return v175;
      }
      v35 = a2[1];
      v126 = *a2;
      v128 = a2[2];
      v130 = v7[1];
      v127 = v35;
      v129 = *v7;
      v131 = v7[2];
      v171 = sub_96FCD0(a1, &v126, a3, a4);
      v36 = a5;
      *a5 = 0.0;
      v141 = sub_975DF0(a1, a2, &v115, &v116);
      if ( v171 <= (double)v141 )
        return v171;
      v174 = v141;
      v37 = 0.0;
      goto LABEL_17;
    }
    v55 = *a4 + v17;
    v56 = v55 < dbl_A2F928;
    v57 = v55 == dbl_A2F928;
    if ( *a3 > 1.0 )
    {
      v58 = !v56 && !v57;
      v75 = *a4 > 0.0;
      v76 = 0;
      v77 = 0.0 == *a4;
      v78 = v54;
      if ( v58 )
      {
        if ( v75 || v77 )
        {
          if ( v17 >= 0.0 )
          {
            v100 = sub_47D9B0(a2, &v132, v7);
            v126 = *v100;
            v127 = v100[1];
            v128 = v100[2];
            v101 = sub_4121A0(v8, &v132, v7);
            v129 = *v101;
            v130 = v101[1];
            v131 = v101[2];
            v171 = sub_96FCD0(a1, &v126, a3, a5);
            *a4 = 1.0 - *a5;
            v102 = sub_47D9B0(a1, &v132, a1 + 3);
            v124 = *(double *)v102;
            v125 = v102[2];
            v153 = sub_975DF0((float *)&v124, a2, &v115, &v116);
            if ( v171 > (double)v153 )
            {
              *a3 = 1.0;
              *a4 = v115;
              *a5 = v116;
              return v153;
            }
            return v171;
          }
          v92 = a2[1];
          v126 = *a2;
          v93 = a2[2];
          v127 = v92;
          v94 = *v7;
          v128 = v93;
          v95 = v7[1];
          v129 = v94;
          v96 = v7[2];
          v130 = v95;
          v131 = v96;
          v171 = sub_96FCD0(a1, &v126, a3, a4);
          *a5 = 0.0;
          v91 = sub_47D9B0(a2, &v132, v7);
        }
        else
        {
          v126 = *a2;
          v127 = a2[1];
          v128 = a2[2];
          v129 = *v8;
          v130 = v8[1];
          v131 = v8[2];
          v171 = sub_96FCD0(a1, &v126, a3, a5);
          *a4 = 0.0;
          v91 = sub_47D9B0(a2, &v132, v7);
        }
        v126 = *v91;
        v127 = v91[1];
        v128 = v91[2];
        v97 = sub_4121A0(v8, &v132, v7);
        v129 = *v97;
        v130 = v97[1];
        v131 = v97[2];
        v151 = sub_96FCD0(a1, &v126, &v117, &v116);
        v98 = v116;
        v115 = 1.0 - v116;
        if ( v171 > (double)v151 )
        {
          v171 = v151;
          *a3 = v117;
          *a4 = v115;
          *a5 = v98;
        }
        v99 = sub_47D9B0(a1, &v132, a1 + 3);
        v124 = *(double *)v99;
        v125 = v99[2];
        v152 = sub_975DF0((float *)&v124, a2, &v115, &v116);
        if ( v171 > (double)v152 )
        {
          *a3 = 1.0;
          *a4 = v115;
          *a5 = v116;
          return v152;
        }
        return v171;
      }
      v79 = v17 > 0.0;
      v80 = 0.0 == v17;
      if ( (v78 & 0x41) == 0 )
      {
        v126 = *a2;
        v127 = a2[1];
        v128 = a2[2];
        v129 = *v8;
        v130 = v8[1];
        v131 = v8[2];
        if ( !v79 && !v80 )
        {
          v171 = sub_96FCD0(a1, &v126, a3, a5);
          v25 = a4;
          *a4 = 0.0;
          v81 = a2[1];
          v82 = a2[2];
          v126 = *a2;
          v83 = *v7;
          v127 = v81;
          v84 = v7[1];
          v128 = v82;
          v85 = v7[2];
          v129 = v83;
          v130 = v84;
          v131 = v85;
          v147 = sub_96FCD0(a1, &v126, &v117, &v115);
          v116 = 0.0;
          if ( v171 > (double)v147 )
          {
            v171 = v147;
            *a3 = v117;
            *a4 = v115;
            *a5 = 0.0;
          }
          v86 = sub_47D9B0(a1, &v132, a1 + 3);
          v124 = *(double *)v86;
          v125 = v86[2];
          v148 = sub_975DF0((float *)&v124, a2, &v115, &v116);
          if ( v171 > (double)v148 )
          {
            v172 = v148;
            v31 = 1.0;
            goto LABEL_10;
          }
          return v171;
        }
        v171 = sub_96FCD0(a1, &v126, a3, a5);
        v33 = a4;
        *a4 = 0.0;
        v87 = sub_47D9B0(a1, &v132, a1 + 3);
        v124 = *(double *)v87;
        v125 = v87[2];
        v149 = sub_975DF0((float *)&v124, a2, &v115, &v116);
        if ( v171 > (double)v149 )
        {
          v173 = v149;
          v34 = 1.0;
          goto LABEL_13;
        }
        return v171;
      }
      if ( v79 || v80 )
      {
        v90 = sub_47D9B0(a1, &v132, a1 + 3);
        v124 = *(double *)v90;
        v125 = v90[2];
        v179 = sub_975DF0((float *)&v124, a2, a4, a5);
        *a3 = 1.0;
        return v179;
      }
      v88 = a2[1];
      v126 = *a2;
      v128 = a2[2];
      v130 = v7[1];
      v127 = v88;
      v129 = *v7;
      v131 = v7[2];
      v171 = sub_96FCD0(a1, &v126, a3, a4);
      v36 = a5;
      *a5 = 0.0;
      v89 = sub_47D9B0(a1, &v132, a1 + 3);
      v124 = *(double *)v89;
      v125 = v89[2];
      v150 = sub_975DF0((float *)&v124, a2, &v115, &v116);
      if ( v171 <= (double)v150 )
        return v171;
      v174 = v150;
      v37 = 1.0;
LABEL_17:
      *a3 = v37;
      *a4 = v115;
      *v36 = v116;
      return v174;
    }
    v58 = !v56 && !v57;
    v59 = *a4 > 0.0;
    v60 = 0.0 == *a4;
    if ( v58 )
    {
      if ( v59 || v60 )
      {
        if ( v17 >= 0.0 )
        {
          v73 = sub_47D9B0(a2, &v132, v7);
          v126 = *v73;
          v127 = v73[1];
          v128 = v73[2];
          v74 = sub_4121A0(v8, &v132, v7);
          v129 = *v74;
          v130 = v74[1];
          v131 = v74[2];
          v178 = sub_96FCD0(a1, &v126, a3, a5);
          *a4 = 1.0 - *a5;
          return v178;
        }
        v69 = a2[1];
        v126 = *a2;
        v128 = a2[2];
        v130 = v7[1];
        v127 = v69;
        v129 = *v7;
        v131 = v7[2];
        v67 = sub_96FCD0(a1, &v126, a3, a4);
        v68 = a5;
      }
      else
      {
        v126 = *a2;
        v127 = a2[1];
        v128 = a2[2];
        v129 = *v8;
        v130 = v8[1];
        v131 = v8[2];
        v67 = sub_96FCD0(a1, &v126, a3, a5);
        v68 = a4;
      }
      v171 = v67;
      *v68 = 0.0;
      v70 = sub_47D9B0(a2, &v132, v7);
      v126 = *v70;
      v127 = v70[1];
      v128 = v70[2];
      v71 = sub_4121A0(v8, &v132, v7);
      v129 = *v71;
      v130 = v71[1];
      v131 = v71[2];
      v146 = sub_96FCD0(a1, &v126, &v117, &v116);
      v72 = v116;
      v115 = 1.0 - v116;
      if ( v171 > (double)v146 )
      {
        *a3 = v117;
        *a4 = v115;
        *a5 = v72;
        return v146;
      }
      return v171;
    }
    if ( !v59 && !v60 )
    {
      v126 = *a2;
      v127 = a2[1];
      v128 = a2[2];
      v129 = *v8;
      v130 = v8[1];
      v131 = v8[2];
      if ( v17 >= 0.0 )
      {
        v176 = sub_96FCD0(a1, &v126, a3, a5);
        *a4 = 0.0;
        return v176;
      }
      v171 = sub_96FCD0(a1, &v126, a3, a5);
      *a4 = 0.0;
      v61 = a2[1];
      v62 = a2[2];
      v126 = *a2;
      v63 = *v7;
      v127 = v61;
      v64 = v7[1];
      v128 = v62;
      v65 = v7[2];
      v129 = v63;
      v130 = v64;
      v131 = v65;
      v145 = sub_96FCD0(a1, &v126, &v117, &v115);
      if ( v171 > (double)v145 )
      {
        *a3 = v117;
        *a4 = v115;
        *a5 = 0.0;
        return v145;
      }
      return v171;
    }
    if ( v17 >= 0.0 )
    {
      return (float)0.0;
    }
    else
    {
      v66 = a2[1];
      v126 = *a2;
      v128 = a2[2];
      v130 = v7[1];
      v127 = v66;
      v129 = *v7;
      v131 = v7[2];
      v177 = sub_96FCD0(a1, &v126, a3, a4);
      *a5 = 0.0;
      return v177;
    }
  }
}
