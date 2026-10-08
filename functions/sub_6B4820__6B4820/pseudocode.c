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

  v13 = *(float *)(this + 0x1084) + *(float *)(this + 0x1008); /*0x6b4832*/
  v19 = *(float *)(this + 0x1080) + *(float *)(this + 0x100C); /*0x6b4841*/
  v25 = *(float *)(this + 0x107C) + *(float *)(this + 0x1010); /*0x6b4851*/
  v31 = *(float *)(this + 0x1078) + *(float *)(this + 0x1014); /*0x6b4861*/
  v37 = *(float *)(this + 0x1074) + *(float *)(this + 0x1018); /*0x6b4871*/
  v43 = *(float *)(this + 0x1070) + *(float *)(this + 0x101C); /*0x6b4881*/
  v49 = *(float *)(this + 0x106C) + *(float *)(this + 0x1020); /*0x6b4891*/
  v55 = *(float *)(this + 0x1068) + *(float *)(this + 0x1024); /*0x6b48a1*/
  v61 = *(float *)(this + 0x1064) + *(float *)(this + 0x1028); /*0x6b48b1*/
  v67 = *(float *)(this + 0x1060) + *(float *)(this + 0x102C); /*0x6b48c1*/
  v73 = *(float *)(this + 0x105C) + *(float *)(this + 0x1030); /*0x6b48d1*/
  v79 = *(float *)(this + 0x1058) + *(float *)(this + 0x1034); /*0x6b48e1*/
  v85 = *(float *)(this + 0x1054) + *(float *)(this + 0x1038); /*0x6b48f1*/
  v91 = *(float *)(this + 0x1050) + *(float *)(this + 0x103C); /*0x6b4901*/
  v97 = *(float *)(this + 0x104C) + *(float *)(this + 0x1040); /*0x6b4911*/
  v103 = *(float *)(this + 0x1048) + *(float *)(this + 0x1044); /*0x6b4921*/
  v114 = v103 + v13; /*0x6b4934*/
  v118 = v97 + v19; /*0x6b4948*/
  v122 = v91 + v25; /*0x6b495c*/
  v126 = v85 + v31; /*0x6b4968*/
  v130 = v79 + v37; /*0x6b4974*/
  v134 = v73 + v43; /*0x6b4980*/
  v138 = v67 + v49; /*0x6b498c*/
  v142 = v61 + v55; /*0x6b4998*/
  v146 = (v13 - v103) * *(float *)&dword_B3C180[0x14]; /*0x6b49aa*/
  v150 = (v19 - v97) * *(float *)&dword_B3C180[0x15]; /*0x6b49b6*/
  v154 = (v25 - v91) * *(float *)&dword_B3C180[0x16]; /*0x6b49c2*/
  v158 = (v31 - v85) * *(float *)&dword_B3C180[0x17]; /*0x6b49d4*/
  v162 = (v37 - v79) * *(float *)&dword_B3C180[0x18]; /*0x6b49e6*/
  v166 = (v43 - v73) * *(float *)&dword_B3C180[0x19]; /*0x6b49f8*/
  v170 = (v49 - v67) * *(float *)&dword_B3C180[0x1A]; /*0x6b4a0a*/
  v174 = (v55 - v61) * *(float *)&dword_B3C180[0x1B]; /*0x6b4a1c*/
  v14 = v142 + v114; /*0x6b4a33*/
  v20 = v138 + v118; /*0x6b4a46*/
  v26 = v134 + v122; /*0x6b4a5a*/
  v32 = v130 + v126; /*0x6b4a66*/
  v1 = *(float *)&dword_B3C180[0x1C]; /*0x6b4a78*/
  v38 = (v114 - v142) * v1; /*0x6b4a7a*/
  v2 = *(float *)&dword_B3C180[0x1D]; /*0x6b4a8c*/
  v44 = (v118 - v138) * v2; /*0x6b4a8e*/
  v3 = *(float *)&dword_B3C180[0x1E]; /*0x6b4a9e*/
  v50 = (v122 - v134) * v3; /*0x6b4aa0*/
  v56 = (v126 - v130) * *(float *)&dword_B3C180[0x1F]; /*0x6b4ab8*/
  v62 = v174 + v146; /*0x6b4acf*/
  v68 = v170 + v150; /*0x6b4adb*/
  v74 = v166 + v154; /*0x6b4ae7*/
  v80 = v162 + v158; /*0x6b4af3*/
  v86 = (v146 - v174) * v1; /*0x6b4afb*/
  v92 = (v150 - v170) * v2; /*0x6b4b09*/
  v98 = (v154 - v166) * v3; /*0x6b4b17*/
  v104 = *(float *)&dword_B3C180[0x1F] * (v158 - v162); /*0x6b4b25*/
  v115 = v32 + v14; /*0x6b4b38*/
  v119 = v26 + v20; /*0x6b4b46*/
  v4 = *(float *)&dword_B3C180[0x20]; /*0x6b4b58*/
  v123 = (v14 - v32) * v4; /*0x6b4b5a*/
  v5 = *(float *)&dword_B3C180[0x21]; /*0x6b4b6c*/
  v127 = (v20 - v26) * v5; /*0x6b4b6e*/
  v131 = v56 + v38; /*0x6b4b7c*/
  v135 = v50 + v44; /*0x6b4b88*/
  v139 = (v38 - v56) * v4; /*0x6b4b92*/
  v143 = (v44 - v50) * v5; /*0x6b4ba0*/
  v147 = v80 + v62; /*0x6b4bae*/
  v151 = v74 + v68; /*0x6b4bba*/
  v155 = (v62 - v80) * v4; /*0x6b4bc4*/
  v159 = (v68 - v74) * v5; /*0x6b4bd2*/
  v163 = v104 + v86; /*0x6b4be0*/
  v167 = v98 + v92; /*0x6b4bec*/
  v171 = (v86 - v104) * v4; /*0x6b4bf6*/
  v175 = (v92 - v98) * v5; /*0x6b4c04*/
  v15 = v119 + v115; /*0x6b4c15*/
  v6 = *(float *)&dword_B3C180[0x22]; /*0x6b4c26*/
  v21 = (v115 - v119) * v6; /*0x6b4c28*/
  v27 = v127 + v123; /*0x6b4c34*/
  v33 = (v123 - v127) * v6; /*0x6b4c42*/
  v39 = v135 + v131; /*0x6b4c4e*/
  v45 = (v131 - v135) * v6; /*0x6b4c5c*/
  v51 = v143 + v139; /*0x6b4c68*/
  v57 = (v139 - v143) * v6; /*0x6b4c76*/
  v63 = v151 + v147; /*0x6b4c82*/
  v69 = (v147 - v151) * v6; /*0x6b4c90*/
  v75 = v159 + v155; /*0x6b4c9c*/
  v81 = (v155 - v159) * v6; /*0x6b4caa*/
  v87 = v167 + v163; /*0x6b4cb6*/
  v93 = (v163 - v167) * v6; /*0x6b4cc4*/
  v99 = v175 + v171; /*0x6b4cd3*/
  v105 = (v171 - v175) * v6; /*0x6b4ce4*/
  v193 = v57; /*0x6b4cec*/
  v185 = v57 + v45; /*0x6b4cf7*/
  v180 = -v185; /*0x6b4d07*/
  v199 = v180 - v51; /*0x6b4d19*/
  v207 = -v51 - v57 - v39; /*0x6b4d2e*/
  v195 = v105; /*0x6b4d39*/
  v191 = v105 + v81; /*0x6b4d44*/
  v187 = v191 + v93; /*0x6b4d56*/
  v183 = v105 + v93 + v69; /*0x6b4d69*/
  v178 = -v183; /*0x6b4d79*/
  v197 = v178 - v99; /*0x6b4d8b*/
  v212 = -v99 - v105; /*0x6b4d9c*/
  v109 = v212 - v75 - v81; /*0x6b4dab*/
  v201 = v109 - v93; /*0x6b4db7*/
  v209 = v212 - v87 - v63; /*0x6b4dcd*/
  v205 = v109 - v87; /*0x6b4ddc*/
  v211 = -v15; /*0x6b4de8*/
  v181 = v21; /*0x6b4df3*/
  v189 = v33; /*0x6b4dfe*/
  v203 = -v33 - v27; /*0x6b4e0b*/
  v16 = (*(float *)(this + 0x1008) - *(float *)(this + 0x1084)) * *(float *)&dword_B3C180[4]; /*0x6b4e24*/
  v22 = (*(float *)(this + 0x100C) - *(float *)(this + 0x1080)) * *(float *)&dword_B3C180[5]; /*0x6b4e39*/
  v28 = (*(float *)(this + 0x1010) - *(float *)(this + 0x107C)) * *(float *)&dword_B3C180[6]; /*0x6b4e4f*/
  v34 = (*(float *)(this + 0x1014) - *(float *)(this + 0x1078)) * *(float *)&dword_B3C180[7]; /*0x6b4e65*/
  v40 = (*(float *)(this + 0x1018) - *(float *)(this + 0x1074)) * *(float *)&dword_B3C180[8]; /*0x6b4e7b*/
  v46 = (*(float *)(this + 0x101C) - *(float *)(this + 0x1070)) * *(float *)&dword_B3C180[9]; /*0x6b4e91*/
  v52 = (*(float *)(this + 0x1020) - *(float *)(this + 0x106C)) * *(float *)&dword_B3C180[0xA]; /*0x6b4ea7*/
  v58 = (*(float *)(this + 0x1024) - *(float *)(this + 0x1068)) * *(float *)&dword_B3C180[0xB]; /*0x6b4ebd*/
  v64 = (*(float *)(this + 0x1028) - *(float *)(this + 0x1064)) * *(float *)&dword_B3C180[0xC]; /*0x6b4ed3*/
  v70 = (*(float *)(this + 0x102C) - *(float *)(this + 0x1060)) * *(float *)&dword_B3C180[0xD]; /*0x6b4ee9*/
  v76 = (*(float *)(this + 0x1030) - *(float *)(this + 0x105C)) * *(float *)&dword_B3C180[0xE]; /*0x6b4eff*/
  v82 = (*(float *)(this + 0x1034) - *(float *)(this + 0x1058)) * *(float *)&dword_B3C180[0xF]; /*0x6b4f15*/
  v88 = (*(float *)(this + 0x1038) - *(float *)(this + 0x1054)) * *(float *)&dword_B3C180[0x10]; /*0x6b4f2b*/
  v94 = (*(float *)(this + 0x103C) - *(float *)(this + 0x1050)) * *(float *)&dword_B3C180[0x11]; /*0x6b4f41*/
  v100 = (*(float *)(this + 0x1040) - *(float *)(this + 0x104C)) * *(float *)&dword_B3C180[0x12]; /*0x6b4f57*/
  v106 = (*(float *)(this + 0x1044) - *(float *)(this + 0x1048)) * *(float *)&dword_B3C180[0x13]; /*0x6b4f6d*/
  v116 = v106 + v16; /*0x6b4f78*/
  v120 = v100 + v22; /*0x6b4f84*/
  v124 = v94 + v28; /*0x6b4f90*/
  v128 = v88 + v34; /*0x6b4f9c*/
  v132 = v82 + v40; /*0x6b4fa8*/
  v136 = v76 + v46; /*0x6b4fb4*/
  v140 = v70 + v52; /*0x6b4fc0*/
  v144 = v64 + v58; /*0x6b4fcc*/
  v148 = (v16 - v106) * *(float *)&dword_B3C180[0x14]; /*0x6b4fdd*/
  v152 = (v22 - v100) * *(float *)&dword_B3C180[0x15]; /*0x6b4fef*/
  v156 = (v28 - v94) * *(float *)&dword_B3C180[0x16]; /*0x6b5001*/
  v160 = (v34 - v88) * *(float *)&dword_B3C180[0x17]; /*0x6b5013*/
  v164 = (v40 - v82) * *(float *)&dword_B3C180[0x18]; /*0x6b5025*/
  v168 = (v46 - v76) * *(float *)&dword_B3C180[0x19]; /*0x6b5037*/
  v172 = (v52 - v70) * *(float *)&dword_B3C180[0x1A]; /*0x6b5049*/
  v176 = (v58 - v64) * *(float *)&dword_B3C180[0x1B]; /*0x6b505b*/
  v17 = v144 + v116; /*0x6b506a*/
  v23 = v140 + v120; /*0x6b5075*/
  v29 = v136 + v124; /*0x6b5081*/
  v35 = v132 + v128; /*0x6b508d*/
  v41 = (v116 - v144) * v1; /*0x6b509b*/
  v47 = (v120 - v140) * v2; /*0x6b50a9*/
  v53 = (v124 - v136) * v3; /*0x6b50b7*/
  v59 = (v128 - v132) * *(float *)&dword_B3C180[0x1F]; /*0x6b50c9*/
  v65 = v176 + v148; /*0x6b50d8*/
  v71 = v172 + v152; /*0x6b50e4*/
  v77 = v168 + v156; /*0x6b50f0*/
  v83 = v164 + v160; /*0x6b50fc*/
  v89 = v1 * (v148 - v176); /*0x6b510f*/
  v95 = v2 * (v152 - v172); /*0x6b511f*/
  v101 = v3 * (v156 - v168); /*0x6b512f*/
  v107 = (v160 - v164) * *(float *)&dword_B3C180[0x1F]; /*0x6b5141*/
  v117 = v35 + v17; /*0x6b5154*/
  v121 = v29 + v23; /*0x6b5162*/
  v125 = (v17 - v35) * v4; /*0x6b5170*/
  v129 = (v23 - v29) * v5; /*0x6b517a*/
  v133 = v59 + v41; /*0x6b518e*/
  v137 = v53 + v47; /*0x6b519c*/
  v141 = (v41 - v59) * v4; /*0x6b51aa*/
  v145 = (v47 - v53) * v5; /*0x6b51b4*/
  v149 = v83 + v65; /*0x6b51c8*/
  v153 = v77 + v71; /*0x6b51d6*/
  v157 = (v65 - v83) * v4; /*0x6b51e4*/
  v161 = (v71 - v77) * v5; /*0x6b51ee*/
  v165 = v107 + v89; /*0x6b5202*/
  v169 = v101 + v95; /*0x6b5210*/
  v173 = v4 * (v89 - v107); /*0x6b521e*/
  v177 = (v95 - v101) * v5; /*0x6b522a*/
  v18 = v121 + v117; /*0x6b5241*/
  v24 = (v117 - v121) * v6; /*0x6b5248*/
  v30 = v129 + v125; /*0x6b525c*/
  v36 = (v125 - v129) * v6; /*0x6b5264*/
  v42 = v137 + v133; /*0x6b5278*/
  v48 = (v133 - v137) * v6; /*0x6b5280*/
  v54 = v145 + v141; /*0x6b5294*/
  v60 = (v141 - v145) * v6; /*0x6b529c*/
  v66 = v153 + v149; /*0x6b52b0*/
  v72 = (v149 - v153) * v6; /*0x6b52b8*/
  v78 = v161 + v157; /*0x6b52cc*/
  v84 = (v157 - v161) * v6; /*0x6b52d4*/
  v90 = v169 + v165; /*0x6b52e8*/
  v96 = (v165 - v169) * v6; /*0x6b52f0*/
  v102 = v177 + v173; /*0x6b5307*/
  v108 = v6 * (v173 - v177); /*0x6b530f*/
  v194 = v108 + v60; /*0x6b5323*/
  v192 = v194 + v84; /*0x6b533d*/
  v186 = v192 + v48 + v96; /*0x6b5359*/
  v190 = v108 + v84 + v36; /*0x6b5368*/
  v188 = v190 + v96; /*0x6b5378*/
  v110 = v108 + v96 + v72; /*0x6b5387*/
  v182 = v110 + v24; /*0x6b5393*/
  *(float *)&v212 = -v182; /*0x6b53a3*/
  v196 = *(float *)&v212 - v102; /*0x6b53bb*/
  v184 = v110 + v48 + v60; /*0x6b53cc*/
  v179 = -v184; /*0x6b53dc*/
  v198 = v179 - v54 - v102; /*0x6b53f0*/
  v111 = -v78 - v84 - v102 - v108; /*0x6b5409*/
  v7 = v111 - v96; /*0x6b5413*/
  v202 = v7 - v30 - v36; /*0x6b541f*/
  v200 = v7 - v48 - v54 - v60; /*0x6b5438*/
  v8 = v111 - v90; /*0x6b5445*/
  v204 = v8 - v30 - v36; /*0x6b5451*/
  v9 = (float *)(*(_DWORD *)(this + 0x1000) + 4 * *(_DWORD *)(this + 0x1004)); /*0x6b5470*/
  v112 = v60 + v54 + v42; /*0x6b5473*/
  v206 = v8 - v112; /*0x6b5481*/
  v10 = v112; /*0x6b5490*/
  v113 = -v66 - v90 - v102 - v108; /*0x6b5496*/
  v210 = v113 - v18; /*0x6b54a3*/
  v208 = v113 - v10; /*0x6b54ae*/
  *v9 = v181; /*0x6b54bc*/
  v9[0x10] = v182; /*0x6b54c5*/
  v9[0x20] = v183; /*0x6b54cf*/
  v9[0x30] = v184; /*0x6b54dc*/
  v9[0x40] = v185; /*0x6b54e9*/
  v9[0x50] = v186; /*0x6b54f6*/
  v9[0x60] = v187; /*0x6b5503*/
  v9[0x70] = v188; /*0x6b5510*/
  v9[0x80] = v189; /*0x6b551d*/
  v9[0x90] = v190; /*0x6b552a*/
  v9[0xA0] = v191; /*0x6b5537*/
  v9[0xB0] = v192; /*0x6b5544*/
  v9[0xC0] = v193; /*0x6b5551*/
  v9[0xD0] = v194; /*0x6b5559*/
  v9[0xE0] = v195; /*0x6b5566*/
  v9[0xF0] = v108; /*0x6b556e*/
  v9[0x100] = 0.0; /*0x6b5576*/
  v9[0x110] = -v108; /*0x6b557e*/
  v9[0x120] = -v195; /*0x6b558d*/
  v9[0x130] = -v194; /*0x6b5597*/
  v9[0x140] = -v193; /*0x6b55a6*/
  v9[0x150] = -v192; /*0x6b55b5*/
  v9[0x160] = -v191; /*0x6b55bf*/
  v9[0x170] = -v190; /*0x6b55ce*/
  v9[0x180] = -v189; /*0x6b55d8*/
  v9[0x190] = -v188; /*0x6b55e2*/
  v9[0x1A0] = -v187; /*0x6b55ec*/
  v9[0x1B0] = -v186; /*0x6b55f4*/
  v9[0x1C0] = v180; /*0x6b5601*/
  v9[0x1D0] = v179; /*0x6b560e*/
  v9[0x1E0] = v178; /*0x6b561b*/
  v9[0x1F0] = *(float *)&v212; /*0x6b5628*/
  v11 = this + 0x800; /*0x6b5634*/
  if ( *(_DWORD *)(this + 0x1000) != this ) /*0x6b563a*/
    v11 = this; /*0x6b563c*/
  result = (float *)(v11 + 4 * *(_DWORD *)(this + 0x1004)); /*0x6b564d*/
  *result = -v181; /*0x6b5650*/
  result[0x10] = v196; /*0x6b5659*/
  result[0x20] = v197; /*0x6b5663*/
  result[0x30] = v198; /*0x6b5670*/
  result[0x40] = v199; /*0x6b567d*/
  result[0x50] = v200; /*0x6b568a*/
  result[0x60] = v201; /*0x6b5697*/
  result[0x70] = v202; /*0x6b56a4*/
  result[0x80] = v203; /*0x6b56b1*/
  result[0x90] = v204; /*0x6b56be*/
  result[0xA0] = v205; /*0x6b56cb*/
  result[0xB0] = v206; /*0x6b56d8*/
  result[0xC0] = v207; /*0x6b56e5*/
  result[0xD0] = v208; /*0x6b56f2*/
  result[0xE0] = v209; /*0x6b56ff*/
  result[0xF0] = v210; /*0x6b570c*/
  result[0x100] = v211; /*0x6b5719*/
  result[0x110] = v210; /*0x6b5726*/
  result[0x120] = v209; /*0x6b5733*/
  result[0x130] = v208; /*0x6b5740*/
  result[0x140] = v207; /*0x6b574d*/
  result[0x150] = v206; /*0x6b575a*/
  result[0x160] = v205; /*0x6b5767*/
  result[0x170] = v204; /*0x6b5774*/
  result[0x180] = v203; /*0x6b5781*/
  result[0x190] = v202; /*0x6b5787*/
  result[0x1A0] = v201; /*0x6b578d*/
  result[0x1B0] = v200; /*0x6b5793*/
  result[0x1C0] = v199; /*0x6b5799*/
  result[0x1D0] = v198; /*0x6b579f*/
  result[0x1E0] = v197; /*0x6b57a5*/
  result[0x1F0] = v196; /*0x6b57ab*/
  return result; /*0x6b57b1*/
}
