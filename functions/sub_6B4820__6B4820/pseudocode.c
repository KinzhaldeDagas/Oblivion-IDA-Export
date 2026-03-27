float *__thiscall sub_6B4820(int this)
{
  double v1; // st7
  double v2; // st5
  double v3; // st6
  double v4; // st4
  double v5; // st3
  double v6; // st2
  double v7; // st3
  double v8; // st3
  float *v9; // eax
  double v10; // st6
  int v11; // eax
  float *result; // eax
  float v13; // [esp+0h] [ebp-118h]
  float v14; // [esp+0h] [ebp-118h]
  float v15; // [esp+0h] [ebp-118h]
  float v16; // [esp+0h] [ebp-118h]
  float v17; // [esp+0h] [ebp-118h]
  float v18; // [esp+0h] [ebp-118h]
  float v19; // [esp+4h] [ebp-114h]
  float v20; // [esp+4h] [ebp-114h]
  float v21; // [esp+4h] [ebp-114h]
  float v22; // [esp+4h] [ebp-114h]
  float v23; // [esp+4h] [ebp-114h]
  float v24; // [esp+4h] [ebp-114h]
  float v25; // [esp+8h] [ebp-110h]
  float v26; // [esp+8h] [ebp-110h]
  float v27; // [esp+8h] [ebp-110h]
  float v28; // [esp+8h] [ebp-110h]
  float v29; // [esp+8h] [ebp-110h]
  float v30; // [esp+8h] [ebp-110h]
  float v31; // [esp+Ch] [ebp-10Ch]
  float v32; // [esp+Ch] [ebp-10Ch]
  float v33; // [esp+Ch] [ebp-10Ch]
  float v34; // [esp+Ch] [ebp-10Ch]
  float v35; // [esp+Ch] [ebp-10Ch]
  float v36; // [esp+Ch] [ebp-10Ch]
  float v37; // [esp+10h] [ebp-108h]
  float v38; // [esp+10h] [ebp-108h]
  float v39; // [esp+10h] [ebp-108h]
  float v40; // [esp+10h] [ebp-108h]
  float v41; // [esp+10h] [ebp-108h]
  float v42; // [esp+10h] [ebp-108h]
  float v43; // [esp+14h] [ebp-104h]
  float v44; // [esp+14h] [ebp-104h]
  float v45; // [esp+14h] [ebp-104h]
  float v46; // [esp+14h] [ebp-104h]
  float v47; // [esp+14h] [ebp-104h]
  float v48; // [esp+14h] [ebp-104h]
  float v49; // [esp+18h] [ebp-100h]
  float v50; // [esp+18h] [ebp-100h]
  float v51; // [esp+18h] [ebp-100h]
  float v52; // [esp+18h] [ebp-100h]
  float v53; // [esp+18h] [ebp-100h]
  float v54; // [esp+18h] [ebp-100h]
  float v55; // [esp+1Ch] [ebp-FCh]
  float v56; // [esp+1Ch] [ebp-FCh]
  float v57; // [esp+1Ch] [ebp-FCh]
  float v58; // [esp+1Ch] [ebp-FCh]
  float v59; // [esp+1Ch] [ebp-FCh]
  float v60; // [esp+1Ch] [ebp-FCh]
  float v61; // [esp+20h] [ebp-F8h]
  float v62; // [esp+20h] [ebp-F8h]
  float v63; // [esp+20h] [ebp-F8h]
  float v64; // [esp+20h] [ebp-F8h]
  float v65; // [esp+20h] [ebp-F8h]
  float v66; // [esp+20h] [ebp-F8h]
  float v67; // [esp+24h] [ebp-F4h]
  float v68; // [esp+24h] [ebp-F4h]
  float v69; // [esp+24h] [ebp-F4h]
  float v70; // [esp+24h] [ebp-F4h]
  float v71; // [esp+24h] [ebp-F4h]
  float v72; // [esp+24h] [ebp-F4h]
  float v73; // [esp+28h] [ebp-F0h]
  float v74; // [esp+28h] [ebp-F0h]
  float v75; // [esp+28h] [ebp-F0h]
  float v76; // [esp+28h] [ebp-F0h]
  float v77; // [esp+28h] [ebp-F0h]
  float v78; // [esp+28h] [ebp-F0h]
  float v79; // [esp+2Ch] [ebp-ECh]
  float v80; // [esp+2Ch] [ebp-ECh]
  float v81; // [esp+2Ch] [ebp-ECh]
  float v82; // [esp+2Ch] [ebp-ECh]
  float v83; // [esp+2Ch] [ebp-ECh]
  float v84; // [esp+2Ch] [ebp-ECh]
  float v85; // [esp+30h] [ebp-E8h]
  float v86; // [esp+30h] [ebp-E8h]
  float v87; // [esp+30h] [ebp-E8h]
  float v88; // [esp+30h] [ebp-E8h]
  float v89; // [esp+30h] [ebp-E8h]
  float v90; // [esp+30h] [ebp-E8h]
  float v91; // [esp+34h] [ebp-E4h]
  float v92; // [esp+34h] [ebp-E4h]
  float v93; // [esp+34h] [ebp-E4h]
  float v94; // [esp+34h] [ebp-E4h]
  float v95; // [esp+34h] [ebp-E4h]
  float v96; // [esp+34h] [ebp-E4h]
  float v97; // [esp+38h] [ebp-E0h]
  float v98; // [esp+38h] [ebp-E0h]
  float v99; // [esp+38h] [ebp-E0h]
  float v100; // [esp+38h] [ebp-E0h]
  float v101; // [esp+38h] [ebp-E0h]
  float v102; // [esp+38h] [ebp-E0h]
  float v103; // [esp+3Ch] [ebp-DCh]
  float v104; // [esp+3Ch] [ebp-DCh]
  float v105; // [esp+3Ch] [ebp-DCh]
  float v106; // [esp+3Ch] [ebp-DCh]
  float v107; // [esp+3Ch] [ebp-DCh]
  float v108; // [esp+3Ch] [ebp-DCh]
  float v109; // [esp+40h] [ebp-D8h]
  float v110; // [esp+40h] [ebp-D8h]
  float v111; // [esp+40h] [ebp-D8h]
  float v112; // [esp+40h] [ebp-D8h]
  float v113; // [esp+40h] [ebp-D8h]
  float v114; // [esp+44h] [ebp-D4h]
  float v115; // [esp+44h] [ebp-D4h]
  float v116; // [esp+44h] [ebp-D4h]
  float v117; // [esp+44h] [ebp-D4h]
  float v118; // [esp+48h] [ebp-D0h]
  float v119; // [esp+48h] [ebp-D0h]
  float v120; // [esp+48h] [ebp-D0h]
  float v121; // [esp+48h] [ebp-D0h]
  float v122; // [esp+4Ch] [ebp-CCh]
  float v123; // [esp+4Ch] [ebp-CCh]
  float v124; // [esp+4Ch] [ebp-CCh]
  float v125; // [esp+4Ch] [ebp-CCh]
  float v126; // [esp+50h] [ebp-C8h]
  float v127; // [esp+50h] [ebp-C8h]
  float v128; // [esp+50h] [ebp-C8h]
  float v129; // [esp+50h] [ebp-C8h]
  float v130; // [esp+54h] [ebp-C4h]
  float v131; // [esp+54h] [ebp-C4h]
  float v132; // [esp+54h] [ebp-C4h]
  float v133; // [esp+54h] [ebp-C4h]
  float v134; // [esp+58h] [ebp-C0h]
  float v135; // [esp+58h] [ebp-C0h]
  float v136; // [esp+58h] [ebp-C0h]
  float v137; // [esp+58h] [ebp-C0h]
  float v138; // [esp+5Ch] [ebp-BCh]
  float v139; // [esp+5Ch] [ebp-BCh]
  float v140; // [esp+5Ch] [ebp-BCh]
  float v141; // [esp+5Ch] [ebp-BCh]
  float v142; // [esp+60h] [ebp-B8h]
  float v143; // [esp+60h] [ebp-B8h]
  float v144; // [esp+60h] [ebp-B8h]
  float v145; // [esp+60h] [ebp-B8h]
  float v146; // [esp+64h] [ebp-B4h]
  float v147; // [esp+64h] [ebp-B4h]
  float v148; // [esp+64h] [ebp-B4h]
  float v149; // [esp+64h] [ebp-B4h]
  float v150; // [esp+68h] [ebp-B0h]
  float v151; // [esp+68h] [ebp-B0h]
  float v152; // [esp+68h] [ebp-B0h]
  float v153; // [esp+68h] [ebp-B0h]
  float v154; // [esp+6Ch] [ebp-ACh]
  float v155; // [esp+6Ch] [ebp-ACh]
  float v156; // [esp+6Ch] [ebp-ACh]
  float v157; // [esp+6Ch] [ebp-ACh]
  float v158; // [esp+70h] [ebp-A8h]
  float v159; // [esp+70h] [ebp-A8h]
  float v160; // [esp+70h] [ebp-A8h]
  float v161; // [esp+70h] [ebp-A8h]
  float v162; // [esp+74h] [ebp-A4h]
  float v163; // [esp+74h] [ebp-A4h]
  float v164; // [esp+74h] [ebp-A4h]
  float v165; // [esp+74h] [ebp-A4h]
  float v166; // [esp+78h] [ebp-A0h]
  float v167; // [esp+78h] [ebp-A0h]
  float v168; // [esp+78h] [ebp-A0h]
  float v169; // [esp+78h] [ebp-A0h]
  float v170; // [esp+7Ch] [ebp-9Ch]
  float v171; // [esp+7Ch] [ebp-9Ch]
  float v172; // [esp+7Ch] [ebp-9Ch]
  float v173; // [esp+7Ch] [ebp-9Ch]
  float v174; // [esp+80h] [ebp-98h]
  float v175; // [esp+80h] [ebp-98h]
  float v176; // [esp+80h] [ebp-98h]
  float v177; // [esp+80h] [ebp-98h]
  float v178; // [esp+84h] [ebp-94h]
  float v179; // [esp+88h] [ebp-90h]
  float v180; // [esp+8Ch] [ebp-8Ch]
  float v181; // [esp+90h] [ebp-88h]
  float v182; // [esp+94h] [ebp-84h]
  float v183; // [esp+98h] [ebp-80h]
  float v184; // [esp+9Ch] [ebp-7Ch]
  float v185; // [esp+A0h] [ebp-78h]
  float v186; // [esp+A4h] [ebp-74h]
  float v187; // [esp+A8h] [ebp-70h]
  float v188; // [esp+ACh] [ebp-6Ch]
  float v189; // [esp+B0h] [ebp-68h]
  float v190; // [esp+B4h] [ebp-64h]
  float v191; // [esp+B8h] [ebp-60h]
  float v192; // [esp+BCh] [ebp-5Ch]
  float v193; // [esp+C0h] [ebp-58h]
  float v194; // [esp+C4h] [ebp-54h]
  float v195; // [esp+C8h] [ebp-50h]
  float v196; // [esp+D0h] [ebp-48h]
  float v197; // [esp+D4h] [ebp-44h]
  float v198; // [esp+D8h] [ebp-40h]
  float v199; // [esp+DCh] [ebp-3Ch]
  float v200; // [esp+E0h] [ebp-38h]
  float v201; // [esp+E4h] [ebp-34h]
  float v202; // [esp+E8h] [ebp-30h]
  float v203; // [esp+ECh] [ebp-2Ch]
  float v204; // [esp+F0h] [ebp-28h]
  float v205; // [esp+F4h] [ebp-24h]
  float v206; // [esp+F8h] [ebp-20h]
  float v207; // [esp+FCh] [ebp-1Ch]
  float v208; // [esp+100h] [ebp-18h]
  float v209; // [esp+104h] [ebp-14h]
  float v210; // [esp+108h] [ebp-10h]
  float v211; // [esp+10Ch] [ebp-Ch]
  double v212; // [esp+110h] [ebp-8h]

  v13 = *(float *)(this + 0x1084) + *(float *)(this + 0x1008);
  v19 = *(float *)(this + 0x1080) + *(float *)(this + 0x100C);
  v25 = *(float *)(this + 0x107C) + *(float *)(this + 0x1010);
  v31 = *(float *)(this + 0x1078) + *(float *)(this + 0x1014);
  v37 = *(float *)(this + 0x1074) + *(float *)(this + 0x1018);
  v43 = *(float *)(this + 0x1070) + *(float *)(this + 0x101C);
  v49 = *(float *)(this + 0x106C) + *(float *)(this + 0x1020);
  v55 = *(float *)(this + 0x1068) + *(float *)(this + 0x1024);
  v61 = *(float *)(this + 0x1064) + *(float *)(this + 0x1028);
  v67 = *(float *)(this + 0x1060) + *(float *)(this + 0x102C);
  v73 = *(float *)(this + 0x105C) + *(float *)(this + 0x1030);
  v79 = *(float *)(this + 0x1058) + *(float *)(this + 0x1034);
  v85 = *(float *)(this + 0x1054) + *(float *)(this + 0x1038);
  v91 = *(float *)(this + 0x1050) + *(float *)(this + 0x103C);
  v97 = *(float *)(this + 0x104C) + *(float *)(this + 0x1040);
  v103 = *(float *)(this + 0x1048) + *(float *)(this + 0x1044);
  v114 = v103 + v13;
  v118 = v97 + v19;
  v122 = v91 + v25;
  v126 = v85 + v31;
  v130 = v79 + v37;
  v134 = v73 + v43;
  v138 = v67 + v49;
  v142 = v61 + v55;
  v146 = (v13 - v103) * flt_B3C1D0;
  v150 = (v19 - v97) * flt_B3C1D4;
  v154 = (v25 - v91) * flt_B3C1D8;
  v158 = (v31 - v85) * flt_B3C1DC;
  v162 = (v37 - v79) * flt_B3C1E0;
  v166 = (v43 - v73) * flt_B3C1E4;
  v170 = (v49 - v67) * flt_B3C1E8;
  v174 = (v55 - v61) * flt_B3C1EC;
  v14 = v142 + v114;
  v20 = v138 + v118;
  v26 = v134 + v122;
  v32 = v130 + v126;
  v1 = flt_B3C1F0;
  v38 = (v114 - v142) * v1;
  v2 = flt_B3C1F4;
  v44 = (v118 - v138) * v2;
  v3 = flt_B3C1F8;
  v50 = (v122 - v134) * v3;
  v56 = (v126 - v130) * flt_B3C1FC;
  v62 = v174 + v146;
  v68 = v170 + v150;
  v74 = v166 + v154;
  v80 = v162 + v158;
  v86 = (v146 - v174) * v1;
  v92 = (v150 - v170) * v2;
  v98 = (v154 - v166) * v3;
  v104 = flt_B3C1FC * (v158 - v162);
  v115 = v32 + v14;
  v119 = v26 + v20;
  v4 = flt_B3C200;
  v123 = (v14 - v32) * v4;
  v5 = flt_B3C204;
  v127 = (v20 - v26) * v5;
  v131 = v56 + v38;
  v135 = v50 + v44;
  v139 = (v38 - v56) * v4;
  v143 = (v44 - v50) * v5;
  v147 = v80 + v62;
  v151 = v74 + v68;
  v155 = (v62 - v80) * v4;
  v159 = (v68 - v74) * v5;
  v163 = v104 + v86;
  v167 = v98 + v92;
  v171 = (v86 - v104) * v4;
  v175 = (v92 - v98) * v5;
  v15 = v119 + v115;
  v6 = flt_B3C208;
  v21 = (v115 - v119) * v6;
  v27 = v127 + v123;
  v33 = (v123 - v127) * v6;
  v39 = v135 + v131;
  v45 = (v131 - v135) * v6;
  v51 = v143 + v139;
  v57 = (v139 - v143) * v6;
  v63 = v151 + v147;
  v69 = (v147 - v151) * v6;
  v75 = v159 + v155;
  v81 = (v155 - v159) * v6;
  v87 = v167 + v163;
  v93 = (v163 - v167) * v6;
  v99 = v175 + v171;
  v105 = (v171 - v175) * v6;
  v193 = v57;
  v185 = v57 + v45;
  v180 = -v185;
  v199 = v180 - v51;
  v207 = -v51 - v57 - v39;
  v195 = v105;
  v191 = v105 + v81;
  v187 = v191 + v93;
  v183 = v105 + v93 + v69;
  v178 = -v183;
  v197 = v178 - v99;
  v212 = -v99 - v105;
  v109 = v212 - v75 - v81;
  v201 = v109 - v93;
  v209 = v212 - v87 - v63;
  v205 = v109 - v87;
  v211 = -v15;
  v181 = v21;
  v189 = v33;
  v203 = -v33 - v27;
  v16 = (*(float *)(this + 0x1008) - *(float *)(this + 0x1084)) * flt_B3C190;
  v22 = (*(float *)(this + 0x100C) - *(float *)(this + 0x1080)) * flt_B3C194;
  v28 = (*(float *)(this + 0x1010) - *(float *)(this + 0x107C)) * flt_B3C198;
  v34 = (*(float *)(this + 0x1014) - *(float *)(this + 0x1078)) * flt_B3C19C;
  v40 = (*(float *)(this + 0x1018) - *(float *)(this + 0x1074)) * flt_B3C1A0;
  v46 = (*(float *)(this + 0x101C) - *(float *)(this + 0x1070)) * flt_B3C1A4;
  v52 = (*(float *)(this + 0x1020) - *(float *)(this + 0x106C)) * flt_B3C1A8;
  v58 = (*(float *)(this + 0x1024) - *(float *)(this + 0x1068)) * flt_B3C1AC;
  v64 = (*(float *)(this + 0x1028) - *(float *)(this + 0x1064)) * flt_B3C1B0;
  v70 = (*(float *)(this + 0x102C) - *(float *)(this + 0x1060)) * flt_B3C1B4;
  v76 = (*(float *)(this + 0x1030) - *(float *)(this + 0x105C)) * flt_B3C1B8;
  v82 = (*(float *)(this + 0x1034) - *(float *)(this + 0x1058)) * flt_B3C1BC;
  v88 = (*(float *)(this + 0x1038) - *(float *)(this + 0x1054)) * flt_B3C1C0;
  v94 = (*(float *)(this + 0x103C) - *(float *)(this + 0x1050)) * flt_B3C1C4;
  v100 = (*(float *)(this + 0x1040) - *(float *)(this + 0x104C)) * flt_B3C1C8;
  v106 = (*(float *)(this + 0x1044) - *(float *)(this + 0x1048)) * flt_B3C1CC;
  v116 = v106 + v16;
  v120 = v100 + v22;
  v124 = v94 + v28;
  v128 = v88 + v34;
  v132 = v82 + v40;
  v136 = v76 + v46;
  v140 = v70 + v52;
  v144 = v64 + v58;
  v148 = (v16 - v106) * flt_B3C1D0;
  v152 = (v22 - v100) * flt_B3C1D4;
  v156 = (v28 - v94) * flt_B3C1D8;
  v160 = (v34 - v88) * flt_B3C1DC;
  v164 = (v40 - v82) * flt_B3C1E0;
  v168 = (v46 - v76) * flt_B3C1E4;
  v172 = (v52 - v70) * flt_B3C1E8;
  v176 = (v58 - v64) * flt_B3C1EC;
  v17 = v144 + v116;
  v23 = v140 + v120;
  v29 = v136 + v124;
  v35 = v132 + v128;
  v41 = (v116 - v144) * v1;
  v47 = (v120 - v140) * v2;
  v53 = (v124 - v136) * v3;
  v59 = (v128 - v132) * flt_B3C1FC;
  v65 = v176 + v148;
  v71 = v172 + v152;
  v77 = v168 + v156;
  v83 = v164 + v160;
  v89 = v1 * (v148 - v176);
  v95 = v2 * (v152 - v172);
  v101 = v3 * (v156 - v168);
  v107 = (v160 - v164) * flt_B3C1FC;
  v117 = v35 + v17;
  v121 = v29 + v23;
  v125 = (v17 - v35) * v4;
  v129 = (v23 - v29) * v5;
  v133 = v59 + v41;
  v137 = v53 + v47;
  v141 = (v41 - v59) * v4;
  v145 = (v47 - v53) * v5;
  v149 = v83 + v65;
  v153 = v77 + v71;
  v157 = (v65 - v83) * v4;
  v161 = (v71 - v77) * v5;
  v165 = v107 + v89;
  v169 = v101 + v95;
  v173 = v4 * (v89 - v107);
  v177 = (v95 - v101) * v5;
  v18 = v121 + v117;
  v24 = (v117 - v121) * v6;
  v30 = v129 + v125;
  v36 = (v125 - v129) * v6;
  v42 = v137 + v133;
  v48 = (v133 - v137) * v6;
  v54 = v145 + v141;
  v60 = (v141 - v145) * v6;
  v66 = v153 + v149;
  v72 = (v149 - v153) * v6;
  v78 = v161 + v157;
  v84 = (v157 - v161) * v6;
  v90 = v169 + v165;
  v96 = (v165 - v169) * v6;
  v102 = v177 + v173;
  v108 = v6 * (v173 - v177);
  v194 = v108 + v60;
  v192 = v194 + v84;
  v186 = v192 + v48 + v96;
  v190 = v108 + v84 + v36;
  v188 = v190 + v96;
  v110 = v108 + v96 + v72;
  v182 = v110 + v24;
  *(float *)&v212 = -v182;
  v196 = *(float *)&v212 - v102;
  v184 = v110 + v48 + v60;
  v179 = -v184;
  v198 = v179 - v54 - v102;
  v111 = -v78 - v84 - v102 - v108;
  v7 = v111 - v96;
  v202 = v7 - v30 - v36;
  v200 = v7 - v48 - v54 - v60;
  v8 = v111 - v90;
  v204 = v8 - v30 - v36;
  v9 = (float *)(*(_DWORD *)(this + 0x1000) + 4 * *(_DWORD *)(this + 0x1004));
  v112 = v60 + v54 + v42;
  v206 = v8 - v112;
  v10 = v112;
  v113 = -v66 - v90 - v102 - v108;
  v210 = v113 - v18;
  v208 = v113 - v10;
  *v9 = v181;
  v9[0x10] = v182;
  v9[0x20] = v183;
  v9[0x30] = v184;
  v9[0x40] = v185;
  v9[0x50] = v186;
  v9[0x60] = v187;
  v9[0x70] = v188;
  v9[0x80] = v189;
  v9[0x90] = v190;
  v9[0xA0] = v191;
  v9[0xB0] = v192;
  v9[0xC0] = v193;
  v9[0xD0] = v194;
  v9[0xE0] = v195;
  v9[0xF0] = v108;
  v9[0x100] = 0.0;
  v9[0x110] = -v108;
  v9[0x120] = -v195;
  v9[0x130] = -v194;
  v9[0x140] = -v193;
  v9[0x150] = -v192;
  v9[0x160] = -v191;
  v9[0x170] = -v190;
  v9[0x180] = -v189;
  v9[0x190] = -v188;
  v9[0x1A0] = -v187;
  v9[0x1B0] = -v186;
  v9[0x1C0] = v180;
  v9[0x1D0] = v179;
  v9[0x1E0] = v178;
  v9[0x1F0] = *(float *)&v212;
  v11 = this + 0x800;
  if ( *(_DWORD *)(this + 0x1000) != this )
    v11 = this;
  result = (float *)(v11 + 4 * *(_DWORD *)(this + 0x1004));
  *result = -v181;
  result[0x10] = v196;
  result[0x20] = v197;
  result[0x30] = v198;
  result[0x40] = v199;
  result[0x50] = v200;
  result[0x60] = v201;
  result[0x70] = v202;
  result[0x80] = v203;
  result[0x90] = v204;
  result[0xA0] = v205;
  result[0xB0] = v206;
  result[0xC0] = v207;
  result[0xD0] = v208;
  result[0xE0] = v209;
  result[0xF0] = v210;
  result[0x100] = v211;
  result[0x110] = v210;
  result[0x120] = v209;
  result[0x130] = v208;
  result[0x140] = v207;
  result[0x150] = v206;
  result[0x160] = v205;
  result[0x170] = v204;
  result[0x180] = v203;
  result[0x190] = v202;
  result[0x1A0] = v201;
  result[0x1B0] = v200;
  result[0x1C0] = v199;
  result[0x1D0] = v198;
  result[0x1E0] = v197;
  result[0x1F0] = v196;
  return result;
}
