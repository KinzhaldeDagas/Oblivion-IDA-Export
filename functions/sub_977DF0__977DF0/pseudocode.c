int __cdecl sub_977DF0(
        float a1,
        float *a2,
        float a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  double v10; // st7
  double v14; // st5
  double v15; // st4
  double v16; // st3
  double v17; // st4
  int v18; // ebp
  double v19; // st3
  double v20; // st5
  double v21; // st4
  double v22; // st7
  double v23; // st5
  double v24; // st7
  double v26; // st2
  double v27; // st7
  double v28; // st5
  double v29; // st7
  double v30; // st2
  double v31; // st4
  float v32; // eax
  int v33; // esi
  int v34; // edi
  double v35; // st2
  double v36; // st7
  double v37; // st5
  double v38; // st2
  double v39; // st5
  float v40; // eax
  float v41; // eax
  int v42; // esi
  int v43; // edi
  double v44; // st6
  double v45; // st7
  double v46; // st5
  float v47; // [esp+0h] [ebp-40h]
  float v48; // [esp+4h] [ebp-3Ch]
  float v49; // [esp+4h] [ebp-3Ch]
  float v50; // [esp+4h] [ebp-3Ch]
  float v51; // [esp+4h] [ebp-3Ch]
  float v52; // [esp+4h] [ebp-3Ch]
  float v53; // [esp+4h] [ebp-3Ch]
  float v54; // [esp+4h] [ebp-3Ch]
  float v55; // [esp+4h] [ebp-3Ch]
  float v56; // [esp+4h] [ebp-3Ch]
  float v57; // [esp+4h] [ebp-3Ch]
  float v58; // [esp+8h] [ebp-38h]
  float v59; // [esp+8h] [ebp-38h]
  float v60; // [esp+8h] [ebp-38h]
  float v61; // [esp+8h] [ebp-38h]
  float v62; // [esp+8h] [ebp-38h]
  float v63; // [esp+8h] [ebp-38h]
  float v64; // [esp+8h] [ebp-38h]
  float v65; // [esp+8h] [ebp-38h]
  float v66; // [esp+8h] [ebp-38h]
  float v67; // [esp+Ch] [ebp-34h]
  float v68; // [esp+Ch] [ebp-34h]
  float v69; // [esp+Ch] [ebp-34h]
  float v70; // [esp+Ch] [ebp-34h]
  float v71; // [esp+Ch] [ebp-34h]
  float v72; // [esp+Ch] [ebp-34h]
  float v73; // [esp+Ch] [ebp-34h]
  float v74; // [esp+Ch] [ebp-34h]
  float v75; // [esp+10h] [ebp-30h]
  float v76; // [esp+10h] [ebp-30h]
  float v77; // [esp+10h] [ebp-30h]
  float v78; // [esp+10h] [ebp-30h]
  float v79; // [esp+10h] [ebp-30h]
  float v80; // [esp+10h] [ebp-30h]
  float v81; // [esp+10h] [ebp-30h]
  float v82; // [esp+10h] [ebp-30h]
  float v83; // [esp+10h] [ebp-30h]
  float v84; // [esp+14h] [ebp-2Ch]
  float v85; // [esp+14h] [ebp-2Ch]
  float v86; // [esp+14h] [ebp-2Ch]
  float v87; // [esp+14h] [ebp-2Ch]
  float v88; // [esp+14h] [ebp-2Ch]
  float v89; // [esp+14h] [ebp-2Ch]
  float v90; // [esp+14h] [ebp-2Ch]
  float v91; // [esp+14h] [ebp-2Ch]
  float v92; // [esp+14h] [ebp-2Ch]
  float v93; // [esp+18h] [ebp-28h]
  float v94; // [esp+18h] [ebp-28h]
  float v95; // [esp+18h] [ebp-28h]
  float v96; // [esp+18h] [ebp-28h]
  float v97; // [esp+18h] [ebp-28h]
  float v98; // [esp+18h] [ebp-28h]
  float v99; // [esp+18h] [ebp-28h]
  float v100; // [esp+1Ch] [ebp-24h]
  float v101; // [esp+1Ch] [ebp-24h]
  float v102; // [esp+1Ch] [ebp-24h]
  float v103; // [esp+1Ch] [ebp-24h]
  float v104; // [esp+1Ch] [ebp-24h]
  float v105; // [esp+1Ch] [ebp-24h]
  float v106; // [esp+20h] [ebp-20h]
  float v107; // [esp+20h] [ebp-20h]
  float v108; // [esp+20h] [ebp-20h]
  float v109; // [esp+20h] [ebp-20h]
  float v110; // [esp+20h] [ebp-20h]
  float v111; // [esp+20h] [ebp-20h]
  float v112; // [esp+24h] [ebp-1Ch]
  float v113; // [esp+24h] [ebp-1Ch]
  float v114; // [esp+24h] [ebp-1Ch]
  float v115; // [esp+24h] [ebp-1Ch]
  float v116; // [esp+24h] [ebp-1Ch]
  float v117; // [esp+24h] [ebp-1Ch]
  float v118; // [esp+28h] [ebp-18h]
  float v119; // [esp+28h] [ebp-18h]
  float v120; // [esp+28h] [ebp-18h]
  float v121; // [esp+28h] [ebp-18h]
  float v122; // [esp+28h] [ebp-18h]
  float v123; // [esp+28h] [ebp-18h]
  float v124; // [esp+28h] [ebp-18h]
  float v125; // [esp+28h] [ebp-18h]
  float v126; // [esp+28h] [ebp-18h]
  float v127; // [esp+28h] [ebp-18h]
  float v128; // [esp+2Ch] [ebp-14h]
  float v129; // [esp+2Ch] [ebp-14h]
  float v130; // [esp+2Ch] [ebp-14h]
  float v131; // [esp+2Ch] [ebp-14h]
  float v132; // [esp+2Ch] [ebp-14h]
  float v133; // [esp+2Ch] [ebp-14h]
  float v134; // [esp+2Ch] [ebp-14h]
  float v135; // [esp+2Ch] [ebp-14h]
  float v136; // [esp+2Ch] [ebp-14h]
  float v137; // [esp+2Ch] [ebp-14h]
  float v138; // [esp+30h] [ebp-10h]
  float v139; // [esp+30h] [ebp-10h]
  float v140; // [esp+30h] [ebp-10h]
  float v141; // [esp+30h] [ebp-10h]
  float v142; // [esp+30h] [ebp-10h]
  float v143; // [esp+30h] [ebp-10h]
  float v144; // [esp+30h] [ebp-10h]
  float v145; // [esp+30h] [ebp-10h]
  float v146; // [esp+30h] [ebp-10h]
  float v147; // [esp+30h] [ebp-10h]
  float v148; // [esp+34h] [ebp-Ch]
  float v149; // [esp+38h] [ebp-8h]
  float v150; // [esp+3Ch] [ebp-4h]
  float v151; // [esp+44h] [ebp+4h]
  float v152; // [esp+44h] [ebp+4h]
  float v153; // [esp+44h] [ebp+4h]
  float v154; // [esp+44h] [ebp+4h]
  float v155; // [esp+44h] [ebp+4h]
  float v156; // [esp+44h] [ebp+4h]
  float v157; // [esp+44h] [ebp+4h]
  float v158; // [esp+44h] [ebp+4h]
  float v159; // [esp+44h] [ebp+4h]
  float v160; // [esp+44h] [ebp+4h]
  float v161; // [esp+44h] [ebp+4h]
  float v162; // [esp+44h] [ebp+4h]
  float v163; // [esp+44h] [ebp+4h]
  float v164; // [esp+44h] [ebp+4h]
  float v165; // [esp+44h] [ebp+4h]
  float v166; // [esp+44h] [ebp+4h]
  float v167; // [esp+44h] [ebp+4h]
  float v168; // [esp+44h] [ebp+4h]
  float v169; // [esp+44h] [ebp+4h]
  float v170; // [esp+44h] [ebp+4h]
  float v171; // [esp+44h] [ebp+4h]
  float v172; // [esp+48h] [ebp+8h]
  float v173; // [esp+4Ch] [ebp+Ch]
  float v174; // [esp+50h] [ebp+10h]
  int v175; // [esp+50h] [ebp+10h]
  float v176; // [esp+54h] [ebp+14h]

  v10 = a1;
  v47 = a1 - 0.0;
  v151 = *a4 * 0.0;
  v14 = v151;
  v48 = v151;
  v152 = a4[1] * 0.0;
  v15 = v152;
  v58 = v152;
  v153 = a4[2] * 0.0;
  v16 = v153;
  v75 = *a5 + v48;
  v84 = a5[1] + v58;
  v93 = a5[2] + v153;
  v154 = v84 * a2[1] + v75 * *a2 + v93 * a2[2];
  v172 = v154 - a3;
  v76 = v14;
  v85 = v15;
  v94 = v16;
  v49 = *a6 + v76;
  v59 = a6[1] + v85;
  v67 = v94 + a6[2];
  v155 = v49 * *a2 + v59 * a2[1] + v67 * a2[2];
  v176 = v155 - a3;
  v156 = *a4 * v10;
  v17 = v156;
  v77 = v156;
  v18 = 0;
  v157 = a4[1] * v10;
  v19 = v157;
  v86 = v157;
  v158 = a4[2] * v10;
  v50 = *a5 + v77;
  v60 = a5[1] + v86;
  v68 = v158 + a5[2];
  v174 = v50 * *a2 + v60 * a2[1] + v68 * a2[2];
  *(float *)&v175 = v174 - a3;
  v78 = v17;
  v87 = v19;
  v51 = *a6 + v78;
  v61 = a6[1] + v87;
  v69 = v158 + a6[2];
  v159 = v51 * *a2 + v61 * a2[1] + v69 * a2[2];
  v173 = v159 - a3;
  v20 = v176;
  v21 = v172;
  if ( v176 * v172 <= 0.0 )
  {
    if ( 0.0 == v21 && 0.0 == v20 )
    {
      *a7 = 0.0;
      *a9 = 0.0;
      v160 = *a7;
      v79 = *a4 * v160;
      v88 = a4[1] * v160;
      v95 = v160 * a4[2];
      v52 = *a5 + v79;
      v62 = a5[1] + v88;
      v22 = v95 + a5[2];
      *a8 = v52;
      v70 = v22;
      a8[1] = v62;
      a8[2] = v70;
      v23 = *a9;
      v80 = *a4 * v23;
      v89 = a4[1] * v23;
      v96 = v23 * a4[2];
      v53 = *a6 + v80;
      v63 = a6[1] + v89;
      v24 = v96 + a6[2];
      *a10 = v53;
      v71 = v24;
      a10[1] = v63;
      a10[2] = v71;
      return 1;
    }
    *a7 = 0.0;
    v18 = 1;
    v161 = v21 / (v21 - v20);
    v118 = *a4 * 0.0;
    v128 = a4[1] * 0.0;
    v138 = a4[2] * 0.0;
    v54 = *a6 * v161;
    v64 = a6[1] * v161;
    v72 = a6[2] * v161;
    v162 = 1.0 - v161;
    v81 = *a5 * v162;
    v90 = a5[1] * v162;
    v97 = v162 * a5[2];
    v100 = v81 + v54;
    v106 = v90 + v64;
    v112 = v97 + v72;
    v82 = v100 + v118;
    *a8 = v82;
    v91 = v106 + v128;
    a8[1] = v91;
    v98 = v112 + v138;
    a8[2] = v98;
  }
  v26 = *(float *)&v175;
  if ( *(float *)&v175 * v21 > 0.0 )
  {
    v31 = *(float *)&v175;
  }
  else
  {
    if ( 0.0 == v21 && 0.0 == v26 )
    {
      *a7 = 0.0;
      *a9 = v10;
      v163 = *a7;
      v119 = *a4 * v163;
      v129 = a4[1] * v163;
      v139 = v163 * a4[2];
      v101 = *a5 + v119;
      v107 = a5[1] + v129;
      v27 = v139 + a5[2];
      *a8 = v101;
      a8[1] = v107;
      v113 = v27;
      a8[2] = v113;
      v28 = *a9;
      v120 = *a4 * v28;
      v130 = v28 * a4[1];
      v140 = v28 * a4[2];
      v102 = *a5 + v120;
      v108 = a5[1] + v130;
      v29 = v140 + a5[2];
LABEL_10:
      v114 = v29;
      *a10 = v102;
      a10[1] = v108;
      a10[2] = v114;
      return 1;
    }
    v30 = v21 * v47 / (v21 - v26);
    v31 = *(float *)&v175;
    v164 = v30 + 0.0;
    v121 = *a4 * v164;
    v131 = a4[1] * v164;
    v141 = a4[2] * v164;
    v55 = *a5 + v121;
    v65 = a5[1] + v131;
    v73 = v141 + a5[2];
    if ( v18 )
    {
      *a9 = v164;
      *a10 = v55;
      a10[1] = v65;
      a10[2] = v73;
      if ( *a9 < (double)*a7 )
      {
        v165 = *a7;
        *a7 = *a9;
        *a9 = v165;
        v32 = *a8;
        v33 = *((_DWORD *)a8 + 1);
        v34 = *((_DWORD *)a8 + 2);
        *a8 = *a10;
        a8[1] = a10[1];
        a8[2] = a10[2];
        *a10 = v32;
        *((_DWORD *)a10 + 1) = v33;
        *((_DWORD *)a10 + 2) = v34;
      }
      return 1;
    }
    *a7 = v164;
    *a8 = v55;
    a8[1] = v65;
    a8[2] = v73;
    v18 = 1;
  }
  v35 = v173;
  if ( v173 * v20 > 0.0 )
  {
    v39 = v173;
LABEL_28:
    if ( v39 * v31 > 0.0 )
    {
      if ( !v18 )
        return 0;
    }
    else
    {
      if ( 0.0 == v31 )
      {
        v44 = v31;
        if ( 0.0 == v39 )
        {
          *a7 = v10;
          *a9 = v10;
          v169 = *a7;
          v125 = *a4 * v169;
          v135 = v169 * a4[1];
          v145 = v169 * a4[2];
          v104 = *a5 + v125;
          v110 = a5[1] + v135;
          v45 = v145 + a5[2];
          *a8 = v104;
          v116 = v45;
          a8[1] = v110;
          a8[2] = v116;
          v46 = *a9;
          v126 = *a4 * v46;
          v136 = v46 * a4[1];
          v146 = v46 * a4[2];
          v102 = *a6 + v126;
          v108 = a6[1] + v136;
          v29 = v146 + a6[2];
          goto LABEL_10;
        }
      }
      else
      {
        v44 = v31;
      }
      v170 = v44 / (v44 - v39);
      v148 = *a4 * v10;
      v149 = a4[1] * v10;
      v150 = a4[2] * v10;
      v105 = *a6 * v170;
      v111 = a6[1] * v170;
      v117 = a6[2] * v170;
      v171 = 1.0 - v170;
      v127 = *a5 * v171;
      v137 = a5[1] * v171;
      v147 = v171 * a5[2];
      v83 = v127 + v105;
      v92 = v137 + v111;
      v99 = v147 + v117;
      v66 = v92 + v149;
      v74 = v99 + v150;
      if ( v18 )
      {
        v40 = v83 + v148;
        goto LABEL_24;
      }
      *a7 = v10;
      v57 = v83 + v148;
      *a8 = v57;
      a8[1] = v66;
      a8[2] = v74;
    }
    *a9 = *a7;
    *a10 = *a8;
    a10[1] = a8[1];
    a10[2] = a8[2];
    return 1;
  }
  if ( 0.0 == v20 && 0.0 == v35 )
  {
    *a7 = 0.0;
    *a9 = v10;
    v166 = *a7;
    v122 = *a4 * v166;
    v132 = v166 * a4[1];
    v142 = v166 * a4[2];
    v103 = *a6 + v122;
    v109 = a6[1] + v132;
    v36 = v142 + a6[2];
    *a8 = v103;
    a8[1] = v109;
    v115 = v36;
    a8[2] = v115;
    v37 = *a9;
    v123 = *a4 * v37;
    v133 = v37 * a4[1];
    v143 = v37 * a4[2];
    v102 = *a6 + v123;
    v108 = a6[1] + v133;
    v29 = v143 + a6[2];
    goto LABEL_10;
  }
  v38 = v20 * v47 / (v20 - v35);
  v39 = v173;
  v167 = v38 + 0.0;
  v124 = *a4 * v167;
  v134 = a4[1] * v167;
  v144 = a4[2] * v167;
  v56 = *a6 + v124;
  v40 = v56;
  v66 = a6[1] + v134;
  v74 = v144 + a6[2];
  if ( !v18 )
  {
    *a7 = v167;
    *a8 = v56;
    a8[1] = v66;
    a8[2] = v74;
    v18 = 1;
    goto LABEL_28;
  }
  v10 = v167;
LABEL_24:
  *a9 = v10;
  *a10 = v40;
  a10[1] = v66;
  a10[2] = v74;
  if ( *a9 >= (double)*a7 )
    return 1;
  v168 = *a7;
  *a7 = *a9;
  *a9 = v168;
  v41 = *a8;
  v42 = *((_DWORD *)a8 + 1);
  v43 = *((_DWORD *)a8 + 2);
  *a8 = *a10;
  a8[1] = a10[1];
  a8[2] = a10[2];
  *a10 = v41;
  *((_DWORD *)a10 + 1) = v42;
  *((_DWORD *)a10 + 2) = v43;
  return 1;
}
