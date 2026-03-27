float *__stdcall sub_6B1EA0(float *a1, float *a2, int a3)
{
  float *result; // eax
  float *v4; // ecx
  int v5; // edx
  double v6; // st7
  float *v7; // ecx
  double v8; // st6
  int v9; // edx
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st4
  double v14; // st3
  double v15; // st4
  double v16; // st3
  double v17; // st4
  double v18; // st3
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st2
  double v23; // st4
  double v24; // st3
  double v25; // st1
  double v26; // st2
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st6
  double v32; // st7
  double v33; // st6
  double v34; // st7
  double v35; // st6
  double v36; // st7
  double v37; // st6
  double v38; // st7
  double v39; // st6
  double v40; // st7
  double v41; // st6
  double v42; // st7
  double v43; // st6
  double v44; // st7
  double v45; // st6
  double v46; // st7
  double v47; // st6
  double v48; // st7
  double v49; // st6
  double v50; // st7
  double v51; // st6
  double v52; // st7
  double v53; // st6
  double v54; // st7
  double v55; // st6
  double v56; // st7
  double v57; // st6
  double v58; // st7
  double v59; // st5
  double v60; // st4
  double v61; // st5
  double v62; // st4
  double v63; // st5
  double v64; // st4
  double v65; // st5
  double v66; // st4
  double v67; // st5
  double v68; // st4
  double v69; // st5
  double v70; // st4
  double v71; // st5
  double v72; // st7
  double v73; // st5
  double v74; // st4
  double v75; // rt1
  double v76; // st6
  double v77; // st0
  double v78; // st2
  double v79; // st7
  double v80; // rt2
  double v81; // rtt
  double v82; // st0
  double v83; // st4
  double v84; // st3
  double v85; // st2
  float v86; // [esp+4h] [ebp-D4h]
  float v87; // [esp+4h] [ebp-D4h]
  float v88; // [esp+4h] [ebp-D4h]
  float v89; // [esp+4h] [ebp-D4h]
  float v90; // [esp+4h] [ebp-D4h]
  float v91; // [esp+4h] [ebp-D4h]
  float v92; // [esp+4h] [ebp-D4h]
  float v93; // [esp+4h] [ebp-D4h]
  float v94; // [esp+4h] [ebp-D4h]
  float v95; // [esp+4h] [ebp-D4h]
  float v96; // [esp+4h] [ebp-D4h]
  float v97; // [esp+8h] [ebp-D0h]
  float v98; // [esp+8h] [ebp-D0h]
  float v99; // [esp+8h] [ebp-D0h]
  float v100; // [esp+8h] [ebp-D0h]
  float v101; // [esp+8h] [ebp-D0h]
  float v102; // [esp+8h] [ebp-D0h]
  float v103; // [esp+8h] [ebp-D0h]
  float v104; // [esp+8h] [ebp-D0h]
  float v105; // [esp+8h] [ebp-D0h]
  float v106; // [esp+8h] [ebp-D0h]
  float v107; // [esp+8h] [ebp-D0h]
  double v108; // [esp+8h] [ebp-D0h]
  float v109; // [esp+14h] [ebp-C4h]
  float v110; // [esp+14h] [ebp-C4h]
  float v111; // [esp+14h] [ebp-C4h]
  float v112; // [esp+14h] [ebp-C4h]
  float v113; // [esp+14h] [ebp-C4h]
  float v114; // [esp+14h] [ebp-C4h]
  float v115; // [esp+14h] [ebp-C4h]
  double v116; // [esp+18h] [ebp-C0h]
  double v117; // [esp+18h] [ebp-C0h]
  double v118; // [esp+18h] [ebp-C0h]
  double v119; // [esp+20h] [ebp-B8h]
  double v120; // [esp+20h] [ebp-B8h]
  double v121; // [esp+20h] [ebp-B8h]
  double v122; // [esp+20h] [ebp-B8h]
  double v123; // [esp+28h] [ebp-B0h]
  double v124; // [esp+28h] [ebp-B0h]
  double v125; // [esp+28h] [ebp-B0h]
  double v126; // [esp+28h] [ebp-B0h]
  float v127; // [esp+30h] [ebp-A8h]
  float v128; // [esp+38h] [ebp-A0h]
  float v129; // [esp+38h] [ebp-A0h]
  float v130; // [esp+38h] [ebp-A0h]
  float v131; // [esp+38h] [ebp-A0h]
  float v132; // [esp+38h] [ebp-A0h]
  float v133; // [esp+38h] [ebp-A0h]
  float v134; // [esp+3Ch] [ebp-9Ch]
  float v135; // [esp+3Ch] [ebp-9Ch]
  float v136; // [esp+3Ch] [ebp-9Ch]
  float v137; // [esp+3Ch] [ebp-9Ch]
  float v138; // [esp+3Ch] [ebp-9Ch]
  float v139; // [esp+40h] [ebp-98h]
  float v140; // [esp+40h] [ebp-98h]
  float v141; // [esp+40h] [ebp-98h]
  float v142; // [esp+40h] [ebp-98h]
  float v143; // [esp+40h] [ebp-98h]
  float v144; // [esp+44h] [ebp-94h]
  float v145; // [esp+44h] [ebp-94h]
  float v146; // [esp+44h] [ebp-94h]
  float v147; // [esp+44h] [ebp-94h]
  float v148; // [esp+44h] [ebp-94h]
  float v149; // [esp+48h] [ebp-90h]
  float v150; // [esp+48h] [ebp-90h]
  float v151; // [esp+48h] [ebp-90h]
  float v152; // [esp+48h] [ebp-90h]
  float v153; // [esp+48h] [ebp-90h]
  float v154; // [esp+48h] [ebp-90h]
  float v155; // [esp+4Ch] [ebp-8Ch]
  float v156; // [esp+4Ch] [ebp-8Ch]
  float v157; // [esp+4Ch] [ebp-8Ch]
  float v158; // [esp+4Ch] [ebp-8Ch]
  float v159; // [esp+4Ch] [ebp-8Ch]
  float v160; // [esp+4Ch] [ebp-8Ch]
  float v161; // [esp+50h] [ebp-88h]
  float v162; // [esp+50h] [ebp-88h]
  float v163; // [esp+54h] [ebp-84h]
  float v164; // [esp+54h] [ebp-84h]
  float v165; // [esp+58h] [ebp-80h]
  float v166; // [esp+58h] [ebp-80h]
  float v167; // [esp+5Ch] [ebp-7Ch]
  float v168; // [esp+5Ch] [ebp-7Ch]
  float v169; // [esp+60h] [ebp-78h]
  float v170; // [esp+60h] [ebp-78h]
  float v171; // [esp+64h] [ebp-74h]
  float v172; // [esp+64h] [ebp-74h]
  float v173; // [esp+68h] [ebp-70h]
  float v174; // [esp+6Ch] [ebp-6Ch]
  float v175; // [esp+70h] [ebp-68h]
  float v176; // [esp+74h] [ebp-64h]
  float v177; // [esp+78h] [ebp-60h]
  float v178; // [esp+7Ch] [ebp-5Ch]
  float v179; // [esp+80h] [ebp-58h]
  double v180; // [esp+80h] [ebp-58h]
  float v181; // [esp+88h] [ebp-50h]
  double v182; // [esp+88h] [ebp-50h]
  double v183; // [esp+90h] [ebp-48h]
  double v184; // [esp+90h] [ebp-48h]
  double v185; // [esp+98h] [ebp-40h]
  double v186; // [esp+A0h] [ebp-38h]
  double v187; // [esp+A0h] [ebp-38h]
  float v188; // [esp+A8h] [ebp-30h]
  double v189; // [esp+A8h] [ebp-30h]
  float v190; // [esp+B0h] [ebp-28h]
  float v191; // [esp+B4h] [ebp-24h]
  float v192; // [esp+B8h] [ebp-20h]
  double v193; // [esp+B8h] [ebp-20h]
  float v194; // [esp+C0h] [ebp-18h]
  float v195; // [esp+C4h] [ebp-14h]
  float v196; // [esp+C8h] [ebp-10h]
  double v197; // [esp+C8h] [ebp-10h]
  float v198; // [esp+D0h] [ebp-8h]

  if ( a3 == 2 )
  {
    result = a2 + 7;
    v4 = a2 + 7;
    v5 = 4;
    do
    {
      v4[1] = 0.0;
      v4 += 9;
      --v5;
      v4[0xFFFFFFF7] = 0.0;
      v4[0xFFFFFFF6] = 0.0;
      v4[0xFFFFFFF5] = 0.0;
      v4[0xFFFFFFF4] = 0.0;
      v4[0xFFFFFFF3] = 0.0;
      v4[0xFFFFFFF2] = 0.0;
      v4[0xFFFFFFF1] = 0.0;
      v4[0xFFFFFFF0] = 0.0;
    }
    while ( v5 );
    v6 = dbl_A77BF0;
    v7 = a1 + 9;
    v8 = dbl_A2FAA0;
    v9 = 3;
    v10 = dbl_A77BE8;
    do
    {
      v11 = v7[3];
      v7[6] = v7[6] + v11;
      v12 = v11 + *v7;
      v13 = *v7;
      v7[3] = v12;
      v14 = v13 + v7[0xFFFFFFFD];
      v15 = v7[0xFFFFFFFD];
      *v7 = v14;
      v16 = v15 + v7[0xFFFFFFFA];
      v17 = v7[0xFFFFFFFA];
      v7[0xFFFFFFFD] = v16;
      v18 = v17 + v7[0xFFFFFFF7];
      v19 = v7[0xFFFFFFF7];
      v97 = v18;
      v20 = v97;
      v7[0xFFFFFFFA] = v97;
      v21 = *v7;
      v7[6] = v7[6] + v21;
      v98 = v21 + v97;
      v22 = v98;
      *v7 = v98;
      v86 = v7[0xFFFFFFFD] * v6;
      v99 = v7[3] * v8;
      v100 = v99 + v19;
      v134 = v19 - v7[3];
      v128 = v86 + v100;
      v139 = v100 - v86;
      v87 = v22 * v6;
      v101 = v7[6] * v8;
      v102 = v101 + v20;
      v149 = v20 - v7[6];
      v155 = v87 + v102;
      v103 = v102 - v87;
      v144 = v103 * dbl_A77BE0;
      v150 = v149 * dbl_A77BD8;
      v156 = v155 * dbl_A77BD0;
      v104 = v128;
      v129 = v128 + v156;
      v157 = v104 - v156;
      v105 = v134;
      v135 = v134 + v150;
      v151 = v105 - v150;
      v106 = v139;
      v140 = v139 + v144;
      v145 = v106 - v144;
      v130 = v129 * dbl_A77BC8;
      v136 = v135 * dbl_A77BC0;
      v141 = v140 * dbl_A77BB8;
      v146 = v145 * dbl_A77BB0;
      v152 = v151 * dbl_A77BA8;
      v158 = v157 * dbl_A77BA0;
      v23 = -v130;
      v165 = v23 * v10;
      v167 = v23 * dbl_A77B98;
      v24 = -v136;
      v25 = dbl_A77B90;
      v163 = v24 * v25;
      v169 = v24 * dbl_A77B88;
      v26 = -v141;
      v161 = dbl_A77B80 * v26;
      v171 = v26 * dbl_A77B78;
      v131 = v146;
      v137 = dbl_A77B88 * v152;
      v142 = dbl_A77B98 * v158;
      result += 6;
      ++v7;
      --v9;
      v147 = -v158 * v10;
      v153 = v25 * -v152;
      v159 = -v131 * dbl_A77B80;
      v132 = v131 * dbl_A77B78;
      result[0xFFFFFFF9] = result[0xFFFFFFF9] + v132;
      result[0xFFFFFFFA] = result[0xFFFFFFFA] + v137;
      result[0xFFFFFFFB] = v142 + result[0xFFFFFFFB];
      result[0xFFFFFFFC] = result[0xFFFFFFFC] + v147;
      result[0xFFFFFFFD] = result[0xFFFFFFFD] + v153;
      result[0xFFFFFFFE] = result[0xFFFFFFFE] + v159;
      result[0xFFFFFFFF] = v161 + result[0xFFFFFFFF];
      *result = *result + v163;
      result[1] = result[1] + v165;
      result[2] = result[2] + v167;
      result[3] = v169 + result[3];
      result[4] = result[4] + v171;
    }
    while ( v9 );
  }
  else
  {
    v28 = a1[0x10];
    a1[0x11] = a1[0x11] + v28;
    v29 = v28 + a1[0xF];
    v30 = a1[0xF];
    a1[0x10] = v29;
    v31 = v30 + a1[0xE];
    v32 = a1[0xE];
    a1[0xF] = v31;
    v33 = v32 + a1[0xD];
    v34 = a1[0xD];
    a1[0xE] = v33;
    v35 = v34 + a1[0xC];
    v36 = a1[0xC];
    a1[0xD] = v35;
    v37 = v36 + a1[0xB];
    v38 = a1[0xB];
    a1[0xC] = v37;
    v39 = v38 + a1[0xA];
    v40 = a1[0xA];
    a1[0xB] = v39;
    v41 = v40 + a1[9];
    v42 = a1[9];
    a1[0xA] = v41;
    v43 = v42 + a1[8];
    v44 = a1[8];
    a1[9] = v43;
    v45 = v44 + a1[7];
    v46 = a1[7];
    a1[8] = v45;
    v47 = v46 + a1[6];
    v48 = a1[6];
    a1[7] = v47;
    v49 = v48 + a1[5];
    v50 = a1[5];
    a1[6] = v49;
    v51 = v50 + a1[4];
    v52 = a1[4];
    a1[5] = v51;
    v53 = v52 + a1[3];
    v54 = a1[3];
    a1[4] = v53;
    v55 = v54 + a1[2];
    v56 = a1[2];
    a1[3] = v55;
    v57 = v56 + a1[1];
    v58 = a1[1];
    a1[2] = v57;
    v119 = *a1;
    v107 = v58 + v119;
    a1[1] = v107;
    v59 = a1[0xF];
    a1[0x11] = a1[0x11] + v59;
    v60 = v59 + a1[0xD];
    v61 = a1[0xD];
    a1[0xF] = v60;
    v62 = v61 + a1[0xB];
    v63 = a1[0xB];
    a1[0xD] = v62;
    v64 = v63 + a1[9];
    v65 = a1[9];
    a1[0xB] = v64;
    v66 = v65 + a1[7];
    v67 = a1[7];
    a1[9] = v66;
    v68 = v67 + a1[5];
    v69 = a1[5];
    a1[7] = v68;
    v70 = v69 + a1[3];
    v71 = a1[3];
    a1[5] = v70;
    v88 = v107 + v71;
    a1[3] = v88;
    v109 = v119 + v119;
    v116 = a1[0xC];
    v123 = v109;
    v110 = v116 + v109;
    v72 = a1[4];
    v73 = a1[8];
    v74 = a1[0x10];
    v75 = dbl_A77B70;
    v76 = dbl_A77B68;
    v77 = dbl_A77B60;
    v194 = a1[0x10] * v77 + a1[8] * v76 + v110 + v72 * v75;
    v198 = v123 + v72 - v73 - v116 - v116 - v74;
    v192 = v110 - v72 * v77 - v73 * v75 + v74 * v76;
    v196 = v110 - v72 * v76 + v73 * v77 - v74 * v75;
    v78 = v119 - v72;
    v79 = v77;
    v179 = v74 + v73 + v78 - v116;
    v111 = a1[6] * dbl_A77B58;
    v117 = a1[2];
    v183 = a1[0xA];
    v124 = a1[0xE];
    v80 = dbl_A77B50;
    v81 = dbl_A77B48;
    v82 = dbl_A77B40;
    v191 = v124 * v82 + v183 * v81 + v111 + v117 * v80;
    v195 = (v117 - v183 - v124) * dbl_A77B58;
    v188 = v117 * v81 - v111 - v183 * v82 + v124 * v80;
    *(float *)&v183 = v117 * v82 - v111 + v183 * v80 - v124 * v81;
    v108 = v107;
    v112 = v108 + v108;
    v185 = a1[0xD];
    v186 = v112;
    v113 = v185 + v112;
    v120 = a1[5];
    v118 = a1[9];
    v125 = a1[0x11];
    v190 = v120 * v75 + v113 + v118 * v76 + v125 * v79;
    v127 = v186 + v120 - v118 - v185 - v185 - v125;
    *(float *)&v186 = v113 - v120 * v79 - v118 * v75 + v125 * v76;
    *(float *)&v125 = v79 * v118 + v113 - v76 * v120 - v75 * v125;
    *(float *)&v118 = (a1[0x11] + v108 - v120 + v118 - v185) * dbl_A77BD8;
    v114 = a1[7] * dbl_A77B58;
    v83 = v114;
    v84 = a1[0xB];
    v85 = a1[0xF];
    v115 = v88 * v80 + v114 + a1[0xB] * v81 + a1[0xF] * v82;
    v121 = a1[3];
    *(float *)&v185 = (v121 - v84 - v85) * dbl_A77B58;
    v181 = v121 * v81 - v83 - v84 * v82 + v85 * v80;
    *(float *)&v121 = v80 * v84 + v82 * v121 - v83 - v81 * v85;
    *(float *)&v108 = v194 + v191;
    v89 = (v190 + v115) * dbl_A77B38;
    v133 = *(float *)&v108 + v89;
    v178 = *(float *)&v108 - v89;
    *(float *)&v108 = v198 + v195;
    v90 = (*(float *)&v185 + v127) * dbl_A77BD0;
    v138 = *(float *)&v108 + v90;
    v177 = *(float *)&v108 - v90;
    v189 = v188;
    v193 = v192;
    *(float *)&v108 = v189 + v193;
    v182 = v181;
    v187 = *(float *)&v186;
    v91 = (v182 + v187) * dbl_A77B30;
    v143 = *(float *)&v108 + v91;
    v176 = *(float *)&v108 - v91;
    v184 = *(float *)&v183;
    v197 = v196;
    *(float *)&v108 = v184 + v197;
    v122 = *(float *)&v121;
    v126 = *(float *)&v125;
    v92 = (v122 + v126) * dbl_A77B28;
    v148 = *(float *)&v108 + v92;
    v175 = *(float *)&v108 - v92;
    v180 = v179;
    v154 = v180 + *(float *)&v118;
    v174 = v180 - *(float *)&v118;
    *(float *)&v108 = v197 - v184;
    v93 = (v126 - v122) * dbl_A77B20;
    v160 = *(float *)&v108 + v93;
    v173 = *(float *)&v108 - v93;
    *(float *)&v108 = v193 - v189;
    v94 = (v187 - v182) * dbl_A77B18;
    v162 = *(float *)&v108 + v94;
    v172 = *(float *)&v108 - v94;
    *(float *)&v108 = v198 - v195;
    v95 = (v127 - *(float *)&v185) * dbl_A77BE0;
    v164 = *(float *)&v108 + v95;
    v170 = *(float *)&v108 - v95;
    *(float *)&v108 = v194 - v191;
    v96 = (v190 - v115) * dbl_A77B10;
    result = (float *)((char *)&unk_B183D0 + 0x90 * a3);
    v166 = *(float *)&v108 + v96;
    v168 = *(float *)&v108 - v96;
    *a2 = -v168 * *result;
    a2[1] = result[1] * -v170;
    a2[2] = result[2] * -v172;
    a2[3] = result[3] * -v173;
    a2[4] = result[4] * -v174;
    a2[5] = result[5] * -v175;
    a2[6] = result[6] * -v176;
    a2[7] = result[7] * -v177;
    a2[8] = result[8] * -v178;
    a2[9] = result[9] * v178;
    a2[0xA] = result[0xA] * v177;
    a2[0xB] = result[0xB] * v176;
    a2[0xC] = v175 * result[0xC];
    a2[0xD] = v174 * result[0xD];
    a2[0xE] = v173 * result[0xE];
    a2[0xF] = v172 * result[0xF];
    a2[0x10] = v170 * result[0x10];
    a2[0x11] = v168 * result[0x11];
    a2[0x12] = result[0x12] * v166;
    a2[0x13] = result[0x13] * v164;
    a2[0x14] = result[0x14] * v162;
    a2[0x15] = result[0x15] * v160;
    a2[0x16] = result[0x16] * v154;
    a2[0x17] = result[0x17] * v148;
    a2[0x18] = v143 * result[0x18];
    a2[0x19] = v138 * result[0x19];
    a2[0x1A] = result[0x1A] * v133;
    a2[0x1B] = v133 * result[0x1B];
    a2[0x1C] = result[0x1C] * v138;
    a2[0x1D] = result[0x1D] * v143;
    a2[0x1E] = v148 * result[0x1E];
    a2[0x1F] = v154 * result[0x1F];
    a2[0x20] = v160 * result[0x20];
    a2[0x21] = v162 * result[0x21];
    a2[0x22] = v164 * result[0x22];
    a2[0x23] = v166 * result[0x23];
  }
  return result;
}
